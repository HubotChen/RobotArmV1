#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class TestPublisher(Node):
    def __init__(self):
        super().__init__("testing_publisher")
        self.message_publisher_ = self.create_publisher()

        self.create_timer(1.0, self.timer_callback)
    
    def timer_callback(self):
        self.get_logger().info("HIIIIII")

def main(args=None):
    rclpy.init(args=args)
    node = TestPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
