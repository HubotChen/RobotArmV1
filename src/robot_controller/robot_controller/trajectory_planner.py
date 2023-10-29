#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_messages.msg import TargetPosition
from robot_messages.msg import TrajectoryPlan

class TrajectoryPlanner(Node):

    def __init__(self):
        super().__init__("trajectory_planner")
        self.test_subscriber = self.create_subscription(
            TargetPosition, "target_position", self.recieve_target_position_callback, 10
        )
        self.message_publisher_ = self.create_publisher(
            TrajectoryPlan, 'trajectory_plan', 10
        )


    def recieve_target_position_callback(self, msg):
        self.get_logger().info(str(msg))
        self.send_trajectory_plan_callback(10.10)
    
    def send_trajectory_plan_callback(self, j1):
        trajectoryPlan = TrajectoryPlan()
        trajectoryPlan.j1[0] = j1
        self.message_publisher_.publish(trajectoryPlan)
        self.get_logger().info('Publishing: "%d"' % trajectoryPlan.j1[0])

    

def main(args=None):
    rclpy.init(args=args)
    node = TrajectoryPlanner()
    rclpy.spin(node)
    rclpy.shutdown()