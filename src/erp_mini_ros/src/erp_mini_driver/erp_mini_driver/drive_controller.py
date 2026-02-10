import math
import time
import rclpy
from rclpy.node import Node
import numpy as np

# 메시지 타입
from std_msgs.msg import Float32, Bool
from erp_mini_msgs.msg import ControlCommand
# ModeCommand 서비스는 일단 사용 안 함 (필요시 추가)

class DriveController(Node):
    def __init__(self):
        super().__init__('drive_controller')

        # =========================================
        #  파라미터 설정
        # =========================================
        self.declare_parameter('desired_distance', 0.5)
        self.declare_parameter('k_d', 0.3)
        self.declare_parameter('v_nominal', 0.6) # 기본 주행 속도
        self.declare_parameter('v_min', 0.0)
        self.declare_parameter('v_max', 1.0)
        self.declare_parameter('stop_distance', 0.2) # 정지 거리 (m)
        self.declare_parameter('k_y', 0.8)       # 조향 게인
        self.declare_parameter('steer_limit', 0.279) # 최대 조향각 (rad)
        self.declare_parameter('control_period', 0.05)

        # 변수 초기화
        self.d_des = self.get_parameter('desired_distance').value
        self.k_d = self.get_parameter('k_d').value
        self.v_nominal = self.get_parameter('v_nominal').value
        self.v_min = self.get_parameter('v_min').value
        self.v_max = self.get_parameter('v_max').value
        self.stop_distance = self.get_parameter('stop_distance').value
        self.k_y = self.get_parameter('k_y').value
        self.steer_limit = self.get_parameter('steer_limit').value
        self.ctrl_period = self.get_parameter('control_period').value

        # 상태 변수
        self.e_y = 0.0            # 횡방향 오차
        self.d_obstacle = 999.0   # 장애물 거리
        self.obstacle_detected = False

        # =========================================
        #  통신 설정
        # =========================================
        # [구독] 센서 데이터 (가상의 토픽 이름 사용 중)
        self.sub_lane_error = self.create_subscription(
            Float32, '/lane/lateral_error', self.lane_callback, 10)
        self.sub_obs_dist = self.create_subscription(
            Float32, '/obstacle_distance', self.obs_dist_callback, 10)
        self.sub_obs_bool = self.create_subscription(
            Bool, '/obstacle_detected', self.obs_bool_callback, 10)

        # [발행] 제어 명령 (ERP Mini 표준)
        self.pub_cmd = self.create_publisher(
            ControlCommand, '/erp_mini/control_command', 10)

        # 타이머 실행
        self.timer = self.create_timer(self.ctrl_period, self.control_loop)
        self.last_ctrl_log_time = time.time()
        self.get_logger().info('✅ Drive Controller Started (GitHub Standard)')

    # --- 콜백 함수들 ---
    def lane_callback(self, msg):
        self.e_y = msg.data

    def obs_dist_callback(self, msg):
        self.d_obstacle = msg.data

    def obs_bool_callback(self, msg):
        self.obstacle_detected = msg.data

    # --- 메인 제어 루프 ---
    def control_loop(self):
        # 1. 속도 제어 (종방향)
        v_cmd = self.v_nominal

        # 장애물 감지 시 감속/정지 로직
        if self.obstacle_detected and math.isfinite(self.d_obstacle):
            if self.d_obstacle <= self.stop_distance:
                # [버그 수정] 0.7(주행) -> 0.0(정지)
                v_cmd = 0.0 
                self.get_logger().warn("🚨 Emergency Stop! Obstacle too close.")
            else:
                # 장애물과의 거리에 비례해서 속도 조절 (P제어)
                e_d = self.d_obstacle - self.d_des
                v_cmd = self.v_nominal + self.k_d * e_d

        # 속도 범위 제한
        v_cmd = float(np.clip(v_cmd, self.v_min, self.v_max))

        # 2. 조향 제어 (횡방향) - P제어
        delta = -self.k_y * self.e_y
        delta = float(np.clip(delta, -self.steer_limit, self.steer_limit))

        # 3. 명령 전송
        cmd = ControlCommand()
        cmd.speed = v_cmd
        cmd.steering = delta
        
        self.pub_cmd.publish(cmd)

        # 로그 출력 (1초마다)
        now = time.time()
        if now - self.last_ctrl_log_time >= 1.0:
            self.get_logger().info(
                f'Steer: {delta:.3f} rad | Speed: {v_cmd:.2f} m/s | Obs: {self.d_obstacle:.2f}m')
            self.last_ctrl_log_time = now

def main(args=None):
    rclpy.init(args=args)
    node = DriveController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()