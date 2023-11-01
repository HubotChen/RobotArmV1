#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_messages.msg import TargetPosition

class UserInterface(Node):

    def __init__(self):
        super().__init__("user_interface")
        self.target_position_publisher = self.create_publisher(
            TargetPosition, 'target_position', 10
        )
    
    def send_trajectory_plan_callback(self, x_pos, y_pos, z_pos, x_rot, y_rot, z_rot, speed):
        targetPosition = TargetPosition()
        targetPosition.x_pos = x_pos
        targetPosition.y_pos = y_pos
        targetPosition.z_pos = z_pos
        targetPosition.x_rot = x_rot
        targetPosition.y_rot = y_rot
        targetPosition.z_rot = z_rot
        targetPosition.speed = speed

        self.target_position_publisher.publish(targetPosition)
        self.get_logger().info('Publishing target position')


def main(args=None):
    rclpy.init(args=args)
    node = UserInterface()
    rclpy.spin(node)
    rclpy.shutdown()