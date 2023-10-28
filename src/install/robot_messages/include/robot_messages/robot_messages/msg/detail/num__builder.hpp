// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_messages:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__NUM__BUILDER_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_messages/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_messages
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_messages::msg::Num num(::robot_messages::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_messages::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_messages::msg::Num>()
{
  return robot_messages::msg::builder::Init_Num_num();
}

}  // namespace robot_messages

#endif  // ROBOT_MESSAGES__MSG__DETAIL__NUM__BUILDER_HPP_
