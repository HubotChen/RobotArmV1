// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_messages:msg/TargetPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__FUNCTIONS_H_
#define ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_messages/msg/rosidl_generator_c__visibility_control.h"

#include "robot_messages/msg/detail/target_position__struct.h"

/// Initialize msg/TargetPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_messages__msg__TargetPosition
 * )) before or use
 * robot_messages__msg__TargetPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__TargetPosition__init(robot_messages__msg__TargetPosition * msg);

/// Finalize msg/TargetPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__TargetPosition__fini(robot_messages__msg__TargetPosition * msg);

/// Create msg/TargetPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_messages__msg__TargetPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
robot_messages__msg__TargetPosition *
robot_messages__msg__TargetPosition__create();

/// Destroy msg/TargetPosition message.
/**
 * It calls
 * robot_messages__msg__TargetPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__TargetPosition__destroy(robot_messages__msg__TargetPosition * msg);

/// Check for msg/TargetPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__TargetPosition__are_equal(const robot_messages__msg__TargetPosition * lhs, const robot_messages__msg__TargetPosition * rhs);

/// Copy a msg/TargetPosition message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__TargetPosition__copy(
  const robot_messages__msg__TargetPosition * input,
  robot_messages__msg__TargetPosition * output);

/// Initialize array of msg/TargetPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_messages__msg__TargetPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__TargetPosition__Sequence__init(robot_messages__msg__TargetPosition__Sequence * array, size_t size);

/// Finalize array of msg/TargetPosition messages.
/**
 * It calls
 * robot_messages__msg__TargetPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__TargetPosition__Sequence__fini(robot_messages__msg__TargetPosition__Sequence * array);

/// Create array of msg/TargetPosition messages.
/**
 * It allocates the memory for the array and calls
 * robot_messages__msg__TargetPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
robot_messages__msg__TargetPosition__Sequence *
robot_messages__msg__TargetPosition__Sequence__create(size_t size);

/// Destroy array of msg/TargetPosition messages.
/**
 * It calls
 * robot_messages__msg__TargetPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__TargetPosition__Sequence__destroy(robot_messages__msg__TargetPosition__Sequence * array);

/// Check for msg/TargetPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__TargetPosition__Sequence__are_equal(const robot_messages__msg__TargetPosition__Sequence * lhs, const robot_messages__msg__TargetPosition__Sequence * rhs);

/// Copy an array of msg/TargetPosition messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__TargetPosition__Sequence__copy(
  const robot_messages__msg__TargetPosition__Sequence * input,
  robot_messages__msg__TargetPosition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TARGET_POSITION__FUNCTIONS_H_
