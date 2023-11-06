// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_H_
#define ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'j1'
// Member 'j2'
// Member 'j3'
// Member 'j4'
// Member 'j5'
// Member 'j6'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TrajectoryPlan in the package robot_messages.
typedef struct robot_messages__msg__TrajectoryPlan
{
  rosidl_runtime_c__float__Sequence j1;
  rosidl_runtime_c__float__Sequence j2;
  rosidl_runtime_c__float__Sequence j3;
  rosidl_runtime_c__float__Sequence j4;
  rosidl_runtime_c__float__Sequence j5;
  rosidl_runtime_c__float__Sequence j6;
} robot_messages__msg__TrajectoryPlan;

// Struct for a sequence of robot_messages__msg__TrajectoryPlan.
typedef struct robot_messages__msg__TrajectoryPlan__Sequence
{
  robot_messages__msg__TrajectoryPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_messages__msg__TrajectoryPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_H_
