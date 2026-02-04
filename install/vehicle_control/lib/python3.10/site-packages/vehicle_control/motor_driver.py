# ~/Jeju_Island/src/vehicle_control/vehicle_control/motor_driver.py
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import serial

class MotorDriver(Node):
    def __init__(self):
        super().__init__('motor_driver')
        # 포트 설정 (라떼판다 환경에 맞게 수정: /dev/ttyACM0 등)
        try:
            self.ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
            self.get_logger().info('Arduino Connected via Serial')
        except:
            self.get_logger().error('Serial Connection Failed!')
            self.ser = None

        # 상위 제어기(Path Follower)에서 주는 cmd_vel을 받음
        self.subscription = self.create_subscription(
            Twist, 'cmd_vel', self.cmd_vel_callback, 10)

    def cmd_vel_callback(self, msg):
        if not self.ser: return
        
        # 여기서 ROS 속도를 아두이노 PWM 프로토콜로 변환 (예: "s90t90")
        # 실제 튜닝된 맵핑 로직이 들어갈 자리
        steer_cmd = 90 - int(msg.angular.z * 30)
        throttle_cmd = 90 + int(msg.linear.x * 20)
        
        packet = f"s{steer_cmd}t{throttle_cmd}\n"
        self.ser.write(packet.encode())

def main(args=None):
    rclpy.init(args=args)
    node = MotorDriver()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()