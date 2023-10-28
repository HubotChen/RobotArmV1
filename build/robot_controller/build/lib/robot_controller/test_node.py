#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_messages.msg import TargetPosition

class TestPublisher(Node):
    def __init__(self):
        super().__init__("testing_publisher")
        self.message_publisher_ = self.create_publisher(TargetPosition, 'topic', 10)

        self.create_timer(1.0, self.timer_callback)
    
    def timer_callback(self):
        target = TargetPosition()
        target.x_pos = 1.0
        self.message_publisher_.publish(target)
        self.get_logger().info('Publishing: "%d"' % target.x_pos)

def main(args=None):
    rclpy.init(args=args)
    node = TestPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
