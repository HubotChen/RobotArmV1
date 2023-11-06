// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_messages/msg/detail/trajectory_plan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryPlan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_messages::msg::TrajectoryPlan(_init);
}

void TrajectoryPlan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_messages::msg::TrajectoryPlan *>(message_memory);
  typed_message->~TrajectoryPlan();
}

size_t size_function__TrajectoryPlan__j1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlan__j1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlan__j1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlan__j1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectoryPlan__j1(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlan__j1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectoryPlan__j1(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlan__j1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlan__j2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlan__j2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlan__j2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlan__j2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectoryPlan__j2(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlan__j2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectoryPlan__j2(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlan__j2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlan__j3(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlan__j3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlan__j3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlan__j3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectoryPlan__j3(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlan__j3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectoryPlan__j3(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlan__j3(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlan__j4(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlan__j4(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlan__j4(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlan__j4(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectoryPlan__j4(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlan__j4(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectoryPlan__j4(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlan__j4(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlan__j5(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlan__j5(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlan__j5(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlan__j5(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectoryPlan__j5(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlan__j5(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectoryPlan__j5(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlan__j5(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlan__j6(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlan__j6(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlan__j6(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlan__j6(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectoryPlan__j6(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlan__j6(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectoryPlan__j6(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlan__j6(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryPlan_message_member_array[6] = {
  {
    "j1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages::msg::TrajectoryPlan, j1),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlan__j1,  // size() function pointer
    get_const_function__TrajectoryPlan__j1,  // get_const(index) function pointer
    get_function__TrajectoryPlan__j1,  // get(index) function pointer
    fetch_function__TrajectoryPlan__j1,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlan__j1,  // assign(index, value) function pointer
    resize_function__TrajectoryPlan__j1  // resize(index) function pointer
  },
  {
    "j2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages::msg::TrajectoryPlan, j2),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlan__j2,  // size() function pointer
    get_const_function__TrajectoryPlan__j2,  // get_const(index) function pointer
    get_function__TrajectoryPlan__j2,  // get(index) function pointer
    fetch_function__TrajectoryPlan__j2,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlan__j2,  // assign(index, value) function pointer
    resize_function__TrajectoryPlan__j2  // resize(index) function pointer
  },
  {
    "j3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages::msg::TrajectoryPlan, j3),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlan__j3,  // size() function pointer
    get_const_function__TrajectoryPlan__j3,  // get_const(index) function pointer
    get_function__TrajectoryPlan__j3,  // get(index) function pointer
    fetch_function__TrajectoryPlan__j3,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlan__j3,  // assign(index, value) function pointer
    resize_function__TrajectoryPlan__j3  // resize(index) function pointer
  },
  {
    "j4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages::msg::TrajectoryPlan, j4),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlan__j4,  // size() function pointer
    get_const_function__TrajectoryPlan__j4,  // get_const(index) function pointer
    get_function__TrajectoryPlan__j4,  // get(index) function pointer
    fetch_function__TrajectoryPlan__j4,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlan__j4,  // assign(index, value) function pointer
    resize_function__TrajectoryPlan__j4  // resize(index) function pointer
  },
  {
    "j5",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages::msg::TrajectoryPlan, j5),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlan__j5,  // size() function pointer
    get_const_function__TrajectoryPlan__j5,  // get_const(index) function pointer
    get_function__TrajectoryPlan__j5,  // get(index) function pointer
    fetch_function__TrajectoryPlan__j5,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlan__j5,  // assign(index, value) function pointer
    resize_function__TrajectoryPlan__j5  // resize(index) function pointer
  },
  {
    "j6",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages::msg::TrajectoryPlan, j6),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlan__j6,  // size() function pointer
    get_const_function__TrajectoryPlan__j6,  // get_const(index) function pointer
    get_function__TrajectoryPlan__j6,  // get(index) function pointer
    fetch_function__TrajectoryPlan__j6,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlan__j6,  // assign(index, value) function pointer
    resize_function__TrajectoryPlan__j6  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryPlan_message_members = {
  "robot_messages::msg",  // message namespace
  "TrajectoryPlan",  // message name
  6,  // number of fields
  sizeof(robot_messages::msg::TrajectoryPlan),
  TrajectoryPlan_message_member_array,  // message members
  TrajectoryPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryPlan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryPlan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryPlan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_messages::msg::TrajectoryPlan>()
{
  return &::robot_messages::msg::rosidl_typesupport_introspection_cpp::TrajectoryPlan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_messages, msg, TrajectoryPlan)() {
  return &::robot_messages::msg::rosidl_typesupport_introspection_cpp::TrajectoryPlan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
