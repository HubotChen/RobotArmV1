// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_messages:msg/TargetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_messages/msg/detail/target_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_messages
{

namespace msg
{

namespace builder
{

class Init_TargetPosition_x_pos
{
public:
  Init_TargetPosition_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_messages::msg::TargetPosition x_pos(::robot_messages::msg::TargetPosition::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_messages::msg::TargetPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_messages::msg::TargetPosition>()
{
  return robot_messages::msg::builder::Init_TargetPosition_x_pos();
}

}  // namespace robot_messages

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_
