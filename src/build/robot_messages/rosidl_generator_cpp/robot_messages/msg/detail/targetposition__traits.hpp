// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_messages:msg/Targetposition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__TRAITS_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_messages/msg/detail/targetposition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Targetposition & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Targetposition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Targetposition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_messages

namespace rosidl_generator_traits
{

[[deprecated("use robot_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_messages::msg::Targetposition & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_messages::msg::Targetposition & msg)
{
  return robot_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_messages::msg::Targetposition>()
{
  return "robot_messages::msg::Targetposition";
}

template<>
inline const char * name<robot_messages::msg::Targetposition>()
{
  return "robot_messages/msg/Targetposition";
}

template<>
struct has_fixed_size<robot_messages::msg::Targetposition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_messages::msg::Targetposition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_messages::msg::Targetposition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__TRAITS_HPP_
