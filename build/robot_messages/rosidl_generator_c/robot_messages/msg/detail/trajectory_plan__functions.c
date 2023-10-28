// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice
#include "robot_messages/msg/detail/trajectory_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `j1`
// Member `j2`
// Member `j3`
// Member `j4`
// Member `j5`
// Member `j6`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robot_messages__msg__TrajectoryPlan__init(robot_messages__msg__TrajectoryPlan * msg)
{
  if (!msg) {
    return false;
  }
  // j1
  if (!rosidl_runtime_c__float__Sequence__init(&msg->j1, 0)) {
    robot_messages__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // j2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->j2, 0)) {
    robot_messages__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // j3
  if (!rosidl_runtime_c__float__Sequence__init(&msg->j3, 0)) {
    robot_messages__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // j4
  if (!rosidl_runtime_c__float__Sequence__init(&msg->j4, 0)) {
    robot_messages__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // j5
  if (!rosidl_runtime_c__float__Sequence__init(&msg->j5, 0)) {
    robot_messages__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // j6
  if (!rosidl_runtime_c__float__Sequence__init(&msg->j6, 0)) {
    robot_messages__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // execution_time
  return true;
}

void
robot_messages__msg__TrajectoryPlan__fini(robot_messages__msg__TrajectoryPlan * msg)
{
  if (!msg) {
    return;
  }
  // j1
  rosidl_runtime_c__float__Sequence__fini(&msg->j1);
  // j2
  rosidl_runtime_c__float__Sequence__fini(&msg->j2);
  // j3
  rosidl_runtime_c__float__Sequence__fini(&msg->j3);
  // j4
  rosidl_runtime_c__float__Sequence__fini(&msg->j4);
  // j5
  rosidl_runtime_c__float__Sequence__fini(&msg->j5);
  // j6
  rosidl_runtime_c__float__Sequence__fini(&msg->j6);
  // execution_time
}

bool
robot_messages__msg__TrajectoryPlan__are_equal(const robot_messages__msg__TrajectoryPlan * lhs, const robot_messages__msg__TrajectoryPlan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // j1
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->j1), &(rhs->j1)))
  {
    return false;
  }
  // j2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->j2), &(rhs->j2)))
  {
    return false;
  }
  // j3
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->j3), &(rhs->j3)))
  {
    return false;
  }
  // j4
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->j4), &(rhs->j4)))
  {
    return false;
  }
  // j5
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->j5), &(rhs->j5)))
  {
    return false;
  }
  // j6
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->j6), &(rhs->j6)))
  {
    return false;
  }
  // execution_time
  if (lhs->execution_time != rhs->execution_time) {
    return false;
  }
  return true;
}

bool
robot_messages__msg__TrajectoryPlan__copy(
  const robot_messages__msg__TrajectoryPlan * input,
  robot_messages__msg__TrajectoryPlan * output)
{
  if (!input || !output) {
    return false;
  }
  // j1
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->j1), &(output->j1)))
  {
    return false;
  }
  // j2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->j2), &(output->j2)))
  {
    return false;
  }
  // j3
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->j3), &(output->j3)))
  {
    return false;
  }
  // j4
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->j4), &(output->j4)))
  {
    return false;
  }
  // j5
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->j5), &(output->j5)))
  {
    return false;
  }
  // j6
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->j6), &(output->j6)))
  {
    return false;
  }
  // execution_time
  output->execution_time = input->execution_time;
  return true;
}

robot_messages__msg__TrajectoryPlan *
robot_messages__msg__TrajectoryPlan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_messages__msg__TrajectoryPlan * msg = (robot_messages__msg__TrajectoryPlan *)allocator.allocate(sizeof(robot_messages__msg__TrajectoryPlan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_messages__msg__TrajectoryPlan));
  bool success = robot_messages__msg__TrajectoryPlan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_messages__msg__TrajectoryPlan__destroy(robot_messages__msg__TrajectoryPlan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_messages__msg__TrajectoryPlan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_messages__msg__TrajectoryPlan__Sequence__init(robot_messages__msg__TrajectoryPlan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_messages__msg__TrajectoryPlan * data = NULL;

  if (size) {
    data = (robot_messages__msg__TrajectoryPlan *)allocator.zero_allocate(size, sizeof(robot_messages__msg__TrajectoryPlan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_messages__msg__TrajectoryPlan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_messages__msg__TrajectoryPlan__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_messages__msg__TrajectoryPlan__Sequence__fini(robot_messages__msg__TrajectoryPlan__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_messages__msg__TrajectoryPlan__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_messages__msg__TrajectoryPlan__Sequence *
robot_messages__msg__TrajectoryPlan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_messages__msg__TrajectoryPlan__Sequence * array = (robot_messages__msg__TrajectoryPlan__Sequence *)allocator.allocate(sizeof(robot_messages__msg__TrajectoryPlan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_messages__msg__TrajectoryPlan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_messages__msg__TrajectoryPlan__Sequence__destroy(robot_messages__msg__TrajectoryPlan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_messages__msg__TrajectoryPlan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_messages__msg__TrajectoryPlan__Sequence__are_equal(const robot_messages__msg__TrajectoryPlan__Sequence * lhs, const robot_messages__msg__TrajectoryPlan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_messages__msg__TrajectoryPlan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_messages__msg__TrajectoryPlan__Sequence__copy(
  const robot_messages__msg__TrajectoryPlan__Sequence * input,
  robot_messages__msg__TrajectoryPlan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_messages__msg__TrajectoryPlan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_messages__msg__TrajectoryPlan * data =
      (robot_messages__msg__TrajectoryPlan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_messages__msg__TrajectoryPlan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_messages__msg__TrajectoryPlan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_messages__msg__TrajectoryPlan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
