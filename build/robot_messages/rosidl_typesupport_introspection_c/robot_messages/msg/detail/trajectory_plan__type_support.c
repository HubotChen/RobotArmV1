// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_messages/msg/detail/trajectory_plan__rosidl_typesupport_introspection_c.h"
#include "robot_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_messages/msg/detail/trajectory_plan__functions.h"
#include "robot_messages/msg/detail/trajectory_plan__struct.h"


// Include directives for member types
// Member `j1`
// Member `j2`
// Member `j3`
// Member `j4`
// Member `j5`
// Member `j6`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_messages__msg__TrajectoryPlan__init(message_memory);
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_fini_function(void * message_memory)
{
  robot_messages__msg__TrajectoryPlan__fini(message_memory);
}

size_t robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j1(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j2(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j3(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j3(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j3(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j3(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j3(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j3(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j4(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j4(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j4(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j4(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j4(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j4(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j4(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j4(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j5(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j5(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j5(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j5(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j5(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j5(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j5(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j5(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j6(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j6(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j6(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j6(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j6(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j6(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j6(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j6(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_member_array[7] = {
  {
    "j1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TrajectoryPlan, j1),  // bytes offset in struct
    NULL,  // default value
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j1,  // size() function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j1,  // get_const(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j1,  // get(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j1,  // fetch(index, &value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j1,  // assign(index, value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j1  // resize(index) function pointer
  },
  {
    "j2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TrajectoryPlan, j2),  // bytes offset in struct
    NULL,  // default value
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j2,  // size() function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j2,  // get_const(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j2,  // get(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j2,  // fetch(index, &value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j2,  // assign(index, value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j2  // resize(index) function pointer
  },
  {
    "j3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TrajectoryPlan, j3),  // bytes offset in struct
    NULL,  // default value
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j3,  // size() function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j3,  // get_const(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j3,  // get(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j3,  // fetch(index, &value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j3,  // assign(index, value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j3  // resize(index) function pointer
  },
  {
    "j4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TrajectoryPlan, j4),  // bytes offset in struct
    NULL,  // default value
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j4,  // size() function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j4,  // get_const(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j4,  // get(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j4,  // fetch(index, &value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j4,  // assign(index, value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j4  // resize(index) function pointer
  },
  {
    "j5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TrajectoryPlan, j5),  // bytes offset in struct
    NULL,  // default value
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j5,  // size() function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j5,  // get_const(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j5,  // get(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j5,  // fetch(index, &value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j5,  // assign(index, value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j5  // resize(index) function pointer
  },
  {
    "j6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TrajectoryPlan, j6),  // bytes offset in struct
    NULL,  // default value
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlan__j6,  // size() function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlan__j6,  // get_const(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlan__j6,  // get(index) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlan__j6,  // fetch(index, &value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlan__j6,  // assign(index, value) function pointer
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlan__j6  // resize(index) function pointer
  },
  {
    "execution_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_messages__msg__TrajectoryPlan, execution_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_members = {
  "robot_messages__msg",  // message namespace
  "TrajectoryPlan",  // message name
  7,  // number of fields
  sizeof(robot_messages__msg__TrajectoryPlan),
  robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_member_array,  // message members
  robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle = {
  0,
  &robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_messages, msg, TrajectoryPlan)() {
  if (!robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle.typesupport_identifier) {
    robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_messages__msg__TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
