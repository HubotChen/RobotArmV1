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

class Init_TargetPosition_linear_move
{
public:
  explicit Init_TargetPosition_linear_move(::robot_messages::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  ::robot_messages::msg::TargetPosition linear_move(::robot_messages::msg::TargetPosition::_linear_move_type arg)
  {
    msg_.linear_move = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_messages::msg::TargetPosition msg_;
};

class Init_TargetPosition_z_rot
{
public:
  explicit Init_TargetPosition_z_rot(::robot_messages::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  Init_TargetPosition_linear_move z_rot(::robot_messages::msg::TargetPosition::_z_rot_type arg)
  {
    msg_.z_rot = std::move(arg);
    return Init_TargetPosition_linear_move(msg_);
  }

private:
  ::robot_messages::msg::TargetPosition msg_;
};

class Init_TargetPosition_y_rot
{
public:
  explicit Init_TargetPosition_y_rot(::robot_messages::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  Init_TargetPosition_z_rot y_rot(::robot_messages::msg::TargetPosition::_y_rot_type arg)
  {
    msg_.y_rot = std::move(arg);
    return Init_TargetPosition_z_rot(msg_);
  }

private:
  ::robot_messages::msg::TargetPosition msg_;
};

class Init_TargetPosition_x_rot
{
public:
  explicit Init_TargetPosition_x_rot(::robot_messages::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  Init_TargetPosition_y_rot x_rot(::robot_messages::msg::TargetPosition::_x_rot_type arg)
  {
    msg_.x_rot = std::move(arg);
    return Init_TargetPosition_y_rot(msg_);
  }

private:
  ::robot_messages::msg::TargetPosition msg_;
};

class Init_TargetPosition_z_pos
{
public:
  explicit Init_TargetPosition_z_pos(::robot_messages::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  Init_TargetPosition_x_rot z_pos(::robot_messages::msg::TargetPosition::_z_pos_type arg)
  {
    msg_.z_pos = std::move(arg);
    return Init_TargetPosition_x_rot(msg_);
  }

private:
  ::robot_messages::msg::TargetPosition msg_;
};

class Init_TargetPosition_y_pos
{
public:
  explicit Init_TargetPosition_y_pos(::robot_messages::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  Init_TargetPosition_z_pos y_pos(::robot_messages::msg::TargetPosition::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_TargetPosition_z_pos(msg_);
  }

private:
  ::robot_messages::msg::TargetPosition msg_;
};

class Init_TargetPosition_x_pos
{
public:
  Init_TargetPosition_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPosition_y_pos x_pos(::robot_messages::msg::TargetPosition::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_TargetPosition_y_pos(msg_);
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
