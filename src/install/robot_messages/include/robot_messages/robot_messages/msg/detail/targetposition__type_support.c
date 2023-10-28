// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_messages:msg/Targetposition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_messages/msg/detail/targetposition__rosidl_typesupport_introspection_c.h"
#include "robot_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_messages/msg/detail/targetposition__functions.h"
#include "robot_messages/msg/detail/targetposition__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_messages__msg__Targetposition__init(message_memory);
}

void robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_fini_function(void * message_memory)
{
  robot_messages__msg__Targetposition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_member_array[1] = {
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__Targetposition, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_members = {
  "robot_messages__msg",  // message namespace
  "Targetposition",  // message name
  1,  // number of fields
  sizeof(robot_messages__msg__Targetposition),
  robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_member_array,  // message members
  robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_type_support_handle = {
  0,
  &robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_messages, msg, Targetposition)() {
  if (!robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_type_support_handle.typesupport_identifier) {
    robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_messages__msg__Targetposition__rosidl_typesupport_introspection_c__Targetposition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
