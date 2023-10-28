// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_messages:msg/Targetposition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__BUILDER_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_messages/msg/detail/targetposition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_messages
{

namespace msg
{

namespace builder
{

class Init_Targetposition_num
{
public:
  Init_Targetposition_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_messages::msg::Targetposition num(::robot_messages::msg::Targetposition::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_messages::msg::Targetposition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_messages::msg::Targetposition>()
{
  return robot_messages::msg::builder::Init_Targetposition_num();
}

}  // namespace robot_messages

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__BUILDER_HPP_
