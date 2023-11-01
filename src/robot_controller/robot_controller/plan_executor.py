#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from robot_messages.msg import TrajectoryPlan
from robot_messages.msg import JointGoal

class PlanExecutor(Node):

    def __init__(self):
        super().__init__("plan_executor")
        self.trajectory_plan_subscriber = self.create_subscription(
            TrajectoryPlan, "trajectory_plan", self.recieve_plan_callback, 10
        )
        self.joint_goal_publisher = self.create_publisher(
            JointGoal, "joint_goal", 10
        )

        self.j1 = []
        self.j2 = []
        self.j3 = []
        self.j4 = []
        self.j5 = []
        self.j6 = []


    def recieve_plan_callback(self, msg):
        self.get_logger().info(str(msg))

    def add_plan_to_queue(self, msg):
        self.j1.append(msg.j1)
        self.j2.append(msg.j2)
        self.j3.append(msg.j3)
        self.j4.append(msg.j4)
        self.j5.append(msg.j5)
        self.j6.append(msg.j6)

    def send_joint_goal(self):
        jointGoal = JointGoal()
        jointGoal.j1 = self.j1.pop(0)
        jointGoal.j2 = self.j2.pop(0)
        jointGoal.j3 = self.j3.pop(0)
        jointGoal.j4 = self.j4.pop(0)
        jointGoal.j5 = self.j5.pop(0)
        jointGoal.j6 = self.j6.pop(0)
        self.joint_goal_publisher.publish(jointGoal)


def main(args=None):
    rclpy.init(args=args)
    node = PlanExecutor()
    rclpy.spin(node)
    rclpy.shutdown()