// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_messages:msg/TargetPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_messages/msg/detail/target_position__rosidl_typesupport_introspection_c.h"
#include "robot_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_messages/msg/detail/target_position__functions.h"
#include "robot_messages/msg/detail/target_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_messages__msg__TargetPosition__init(message_memory);
}

void robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_fini_function(void * message_memory)
{
  robot_messages__msg__TargetPosition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_member_array[7] = {
  {
    "x_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TargetPosition, x_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TargetPosition, y_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TargetPosition, z_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_rot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TargetPosition, x_rot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_rot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TargetPosition, y_rot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_rot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TargetPosition, z_rot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_move",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TargetPosition, linear_move),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_members = {
  "robot_messages__msg",  // message namespace
  "TargetPosition",  // message name
  7,  // number of fields
  sizeof(robot_messages__msg__TargetPosition),
  robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_member_array,  // message members
  robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_type_support_handle = {
  0,
  &robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_messages, msg, TargetPosition)() {
  if (!robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_type_support_handle.typesupport_identifier) {
    robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_messages__msg__TargetPosition__rosidl_typesupport_introspection_c__TargetPosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif