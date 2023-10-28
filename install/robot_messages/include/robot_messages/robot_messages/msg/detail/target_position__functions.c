// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_messages:msg/TargetPosition.idl
// generated code does not contain a copyright notice
#include "robot_messages/msg/detail/target_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot_messages__msg__TargetPosition__init(robot_messages__msg__TargetPosition * msg)
{
  if (!msg) {
    return false;
  }
  // x_pos
  // y_pos
  // z_pos
  // x_rot
  // y_rot
  // z_rot
  // linear_move
  return true;
}

void
robot_messages__msg__TargetPosition__fini(robot_messages__msg__TargetPosition * msg)
{
  if (!msg) {
    return;
  }
  // x_pos
  // y_pos
  // z_pos
  // x_rot
  // y_rot
  // z_rot
  // linear_move
}

bool
robot_messages__msg__TargetPosition__are_equal(const robot_messages__msg__TargetPosition * lhs, const robot_messages__msg__TargetPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_pos
  if (lhs->x_pos != rhs->x_pos) {
    return false;
  }
  // y_pos
  if (lhs->y_pos != rhs->y_pos) {
    return false;
  }
  // z_pos
  if (lhs->z_pos != rhs->z_pos) {
    return false;
  }
  // x_rot
  if (lhs->x_rot != rhs->x_rot) {
    return false;
  }
  // y_rot
  if (lhs->y_rot != rhs->y_rot) {
    return false;
  }
  // z_rot
  if (lhs->z_rot != rhs->z_rot) {
    return false;
  }
  // linear_move
  if (lhs->linear_move != rhs->linear_move) {
    return false;
  }
  return true;
}

bool
robot_messages__msg__TargetPosition__copy(
  const robot_messages__msg__TargetPosition * input,
  robot_messages__msg__TargetPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // x_pos
  output->x_pos = input->x_pos;
  // y_pos
  output->y_pos = input->y_pos;
  // z_pos
  output->z_pos = input->z_pos;
  // x_rot
  output->x_rot = input->x_rot;
  // y_rot
  output->y_rot = input->y_rot;
  // z_rot
  output->z_rot = input->z_rot;
  // linear_move
  output->linear_move = input->linear_move;
  return true;
}

robot_messages__msg__TargetPosition *
robot_messages__msg__TargetPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_messages__msg__TargetPosition * msg = (robot_messages__msg__TargetPosition *)allocator.allocate(sizeof(robot_messages__msg__TargetPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_messages__msg__TargetPosition));
  bool success = robot_messages__msg__TargetPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_messages__msg__TargetPosition__destroy(robot_messages__msg__TargetPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_messages__msg__TargetPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_messages__msg__TargetPosition__Sequence__init(robot_messages__msg__TargetPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_messages__msg__TargetPosition * data = NULL;

  if (size) {
    data = (robot_messages__msg__TargetPosition *)allocator.zero_allocate(size, sizeof(robot_messages__msg__TargetPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_messages__msg__TargetPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_messages__msg__TargetPosition__fini(&data[i - 1]);
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
robot_messages__msg__TargetPosition__Sequence__fini(robot_messages__msg__TargetPosition__Sequence * array)
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
      robot_messages__msg__TargetPosition__fini(&array->data[i]);
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

robot_messages__msg__TargetPosition__Sequence *
robot_messages__msg__TargetPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_messages__msg__TargetPosition__Sequence * array = (robot_messages__msg__TargetPosition__Sequence *)allocator.allocate(sizeof(robot_messages__msg__TargetPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_messages__msg__TargetPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_messages__msg__TargetPosition__Sequence__destroy(robot_messages__msg__TargetPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_messages__msg__TargetPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_messages__msg__TargetPosition__Sequence__are_equal(const robot_messages__msg__TargetPosition__Sequence * lhs, const robot_messages__msg__TargetPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_messages__msg__TargetPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_messages__msg__TargetPosition__Sequence__copy(
  const robot_messages__msg__TargetPosition__Sequence * input,
  robot_messages__msg__TargetPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_messages__msg__TargetPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_messages__msg__TargetPosition * data =
      (robot_messages__msg__TargetPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_messages__msg__TargetPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_messages__msg__TargetPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_messages__msg__TargetPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
