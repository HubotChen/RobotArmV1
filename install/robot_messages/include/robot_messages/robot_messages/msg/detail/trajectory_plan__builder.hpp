// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__BUILDER_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_messages/msg/detail/trajectory_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_messages
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPlan_j6
{
public:
  explicit Init_TrajectoryPlan_j6(::robot_messages::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  ::robot_messages::msg::TrajectoryPlan j6(::robot_messages::msg::TrajectoryPlan::_j6_type arg)
  {
    msg_.j6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_messages::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_j5
{
public:
  explicit Init_TrajectoryPlan_j5(::robot_messages::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlan_j6 j5(::robot_messages::msg::TrajectoryPlan::_j5_type arg)
  {
    msg_.j5 = std::move(arg);
    return Init_TrajectoryPlan_j6(msg_);
  }

private:
  ::robot_messages::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_j4
{
public:
  explicit Init_TrajectoryPlan_j4(::robot_messages::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlan_j5 j4(::robot_messages::msg::TrajectoryPlan::_j4_type arg)
  {
    msg_.j4 = std::move(arg);
    return Init_TrajectoryPlan_j5(msg_);
  }

private:
  ::robot_messages::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_j3
{
public:
  explicit Init_TrajectoryPlan_j3(::robot_messages::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlan_j4 j3(::robot_messages::msg::TrajectoryPlan::_j3_type arg)
  {
    msg_.j3 = std::move(arg);
    return Init_TrajectoryPlan_j4(msg_);
  }

private:
  ::robot_messages::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_j2
{
public:
  explicit Init_TrajectoryPlan_j2(::robot_messages::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlan_j3 j2(::robot_messages::msg::TrajectoryPlan::_j2_type arg)
  {
    msg_.j2 = std::move(arg);
    return Init_TrajectoryPlan_j3(msg_);
  }

private:
  ::robot_messages::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_j1
{
public:
  Init_TrajectoryPlan_j1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPlan_j2 j1(::robot_messages::msg::TrajectoryPlan::_j1_type arg)
  {
    msg_.j1 = std::move(arg);
    return Init_TrajectoryPlan_j2(msg_);
  }

private:
  ::robot_messages::msg::TrajectoryPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_messages::msg::TrajectoryPlan>()
{
  return robot_messages::msg::builder::Init_TrajectoryPlan_j1();
}

}  // namespace robot_messages

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__BUILDER_HPP_
