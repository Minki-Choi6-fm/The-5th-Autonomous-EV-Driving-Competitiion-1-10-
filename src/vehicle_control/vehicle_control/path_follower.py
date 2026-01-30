# ~/Jeju_Island/src/vehicle_control/vehicle_control/path_follower.py
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
# 추후 라이다/카메라 메시지 import 필요

class PathFollower(Node):
    def __init__(self):
        super().__init__('path_follower')
        
        # 하체(Motor Driver)에게 명령을 보낼 Publisher
        self.cmd_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        
        # 제어 주기 (20Hz = 0.05초)
        self.timer = self.create_timer(0.05, self.control_loop)

    def control_loop(self):
        msg = Twist()
        
        # --- [알고리즘 영역] ---
        # 1. 현재 내 위치 파악 (Localization)
        # 2. 목표 경로 계산 (Path Planning)
        # 3. Pure Pursuit + Stanley 믹싱 계산
        # 4. 결과값 msg.linear.x, msg.angular.z에 대입
        
        # (테스트용) 일단 직진 명령
        msg.linear.x = 0.5 
        msg.angular.z = 0.0
        
        self.cmd_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = PathFollower()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()