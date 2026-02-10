import rclpy
from rclpy.node import Node
from erp_mini_msgs.msg import ControlCommand
import serial
import time

class PicoDriver(Node):
    def __init__(self):
        super().__init__('pico_driver')
        
        # 1. 시리얼 연결 (Pico)
        # 포트 이름이 다르면 수정하세요 (/dev/ttyACM0 등)
        try:
            self.ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
            self.get_logger().info('✅ Connected to Pico (Traxxas Mode)')
        except Exception as e:
            self.get_logger().error(f'❌ Serial Connection Failed: {e}')
            self.ser = None

        # 2. 구독 (ERP Mini 표준 토픽)
        self.subscription = self.create_subscription(
            ControlCommand,
            '/erp_mini/control_command',
            self.listener_callback,
            10)

    def listener_callback(self, msg):
        if self.ser is None:
            return

        # ==========================================
        # [변환 로직] ROS 표준 단위 -> PWM (0~180)
        # ==========================================
        
        # 1. 속도 (m/s) -> PWM
        # Traxxas: 90(정지), 100~(전진)
        # 설정: 0.0 m/s -> 90,  1.0 m/s -> 140 (가중치 50)
        target_speed = msg.speed
        if target_speed < 0: target_speed = 0 # 후진 방지
        
        pwm_speed = 90 + int(target_speed * 80)
        
        # 2. 조향 (Radian) -> PWM
        # 중앙 0.0 rad -> 90도
        # 왼쪽(+) -> 각도 증가 / 오른쪽(-) -> 각도 감소
        rad_to_deg = 57.296
        steer_deg = msg.steering * rad_to_deg
        pwm_steer = 90 + int(steer_deg)

        # 3. 안전 범위 제한 (Safety Clip)
        # 모터 과속 방지 (최대 150)
        pwm_speed = max(90, min(150, pwm_speed))
        # 서보 기구물 보호 (60~120도)
        pwm_steer = max(60, min(120, pwm_steer))

        # 4. Pico로 전송 ("속도,조향\n")
        cmd = f"{pwm_speed},{pwm_steer}\n"
        self.ser.write(cmd.encode())
        
        # 디버깅용 (필요하면 주석 해제)
        # self.get_logger().info(f'Speed: {msg.speed:.2f} -> PWM: {pwm_speed} | Steer: {msg.steering:.2f} -> PWM: {pwm_steer}')

def main(args=None):
    rclpy.init(args=args)
    node = PicoDriver()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
