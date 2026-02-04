import rclpy as rp
from rclpy.node import Node
from erp_mini_msgs.msg import ControlCommand #

class ERPControl(Node):
    def __init__(self):
        super().__init__('erp_control_node')
        # 하드웨어가 구독하는 토픽명으로 발행 (보통 /cmd_msg)
        self.publisher = self.create_publisher(ControlCommand, '/cmd_msg', 10)
        self.timer = self.create_timer(0.1, self.timer_callback) # 10Hz 주행

    def timer_callback(self):
        msg = ControlCommand()
        msg.speed = 0.5      # 속도 (m/s)
        msg.steering = 0.0   # 조향 (rad, 0은 직진)
        self.publisher.publish(msg)
        self.get_logger().info(f'발행 중: 속도={msg.speed}, 조향={msg.steering}')

def main(args=None):
    rp.init(args=args)
    node = ERPControl()
    rp.spin(node)
    node.destroy_node()
    rp.shutdown()
