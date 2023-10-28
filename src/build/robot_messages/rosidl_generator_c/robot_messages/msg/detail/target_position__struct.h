// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_messages:msg/TargetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__STRUCT_H_
#define ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TargetPosition in the package robot_messages.
typedef struct robot_messages__msg__TargetPosition
{
  double x_pos;
} robot_messages__msg__TargetPosition;

// Struct for a sequence of robot_messages__msg__TargetPosition.
typedef struct robot_messages__msg__TargetPosition__Sequence
{
  robot_messages__msg__TargetPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_messages__msg__TargetPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__STRUCT_H_
