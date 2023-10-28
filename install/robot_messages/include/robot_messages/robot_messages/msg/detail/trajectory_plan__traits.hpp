// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__TRAITS_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_messages/msg/detail/trajectory_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryPlan & msg,
  std::ostream & out)
{
  out << "{";
  // member: j1
  {
    if (msg.j1.size() == 0) {
      out << "j1: []";
    } else {
      out << "j1: [";
      size_t pending_items = msg.j1.size();
      for (auto item : msg.j1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j2
  {
    if (msg.j2.size() == 0) {
      out << "j2: []";
    } else {
      out << "j2: [";
      size_t pending_items = msg.j2.size();
      for (auto item : msg.j2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j3
  {
    if (msg.j3.size() == 0) {
      out << "j3: []";
    } else {
      out << "j3: [";
      size_t pending_items = msg.j3.size();
      for (auto item : msg.j3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j4
  {
    if (msg.j4.size() == 0) {
      out << "j4: []";
    } else {
      out << "j4: [";
      size_t pending_items = msg.j4.size();
      for (auto item : msg.j4) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j5
  {
    if (msg.j5.size() == 0) {
      out << "j5: []";
    } else {
      out << "j5: [";
      size_t pending_items = msg.j5.size();
      for (auto item : msg.j5) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j6
  {
    if (msg.j6.size() == 0) {
      out << "j6: []";
    } else {
      out << "j6: [";
      size_t pending_items = msg.j6.size();
      for (auto item : msg.j6) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: execution_time
  {
    out << "execution_time: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryPlan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: j1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j1.size() == 0) {
      out << "j1: []\n";
    } else {
      out << "j1:\n";
      for (auto item : msg.j1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j2.size() == 0) {
      out << "j2: []\n";
    } else {
      out << "j2:\n";
      for (auto item : msg.j2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j3.size() == 0) {
      out << "j3: []\n";
    } else {
      out << "j3:\n";
      for (auto item : msg.j3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j4.size() == 0) {
      out << "j4: []\n";
    } else {
      out << "j4:\n";
      for (auto item : msg.j4) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j5.size() == 0) {
      out << "j5: []\n";
    } else {
      out << "j5:\n";
      for (auto item : msg.j5) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6.size() == 0) {
      out << "j6: []\n";
    } else {
      out << "j6:\n";
      for (auto item : msg.j6) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: execution_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_time: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryPlan & msg, bool use_flow_style = false)
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
  const robot_messages::msg::TrajectoryPlan & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_messages::msg::TrajectoryPlan & msg)
{
  return robot_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_messages::msg::TrajectoryPlan>()
{
  return "robot_messages::msg::TrajectoryPlan";
}

template<>
inline const char * name<robot_messages::msg::TrajectoryPlan>()
{
  return "robot_messages/msg/TrajectoryPlan";
}

template<>
struct has_fixed_size<robot_messages::msg::TrajectoryPlan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_messages::msg::TrajectoryPlan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_messages::msg::TrajectoryPlan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__TRAITS_HPP_
