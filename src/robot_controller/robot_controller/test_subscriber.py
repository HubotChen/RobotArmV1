#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_messages.msg import TrajectoryPlan

class PoseSubscriberNode(Node):

    def __init__(self):
        super().__init__("testing_subscriber")
        self.test_subscriber = self.create_subscription(
            TrajectoryPlan, "trajectory_plan", self.pose_callback, 10
        )

    def pose_callback(self, msg):
        self.get_logger().info(str(msg))

def main(args=None):
    rclpy.init(args=args)
    node = PoseSubscriberNode()
    rclpy.spin(node)
    rclpy.shutdown()