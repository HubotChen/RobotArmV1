// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_messages:msg/Targetposition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__FUNCTIONS_H_
#define ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_messages/msg/rosidl_generator_c__visibility_control.h"

#include "robot_messages/msg/detail/targetposition__struct.h"

/// Initialize msg/Targetposition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_messages__msg__Targetposition
 * )) before or use
 * robot_messages__msg__Targetposition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__Targetposition__init(robot_messages__msg__Targetposition * msg);

/// Finalize msg/Targetposition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__Targetposition__fini(robot_messages__msg__Targetposition * msg);

/// Create msg/Targetposition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_messages__msg__Targetposition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
robot_messages__msg__Targetposition *
robot_messages__msg__Targetposition__create();

/// Destroy msg/Targetposition message.
/**
 * It calls
 * robot_messages__msg__Targetposition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__Targetposition__destroy(robot_messages__msg__Targetposition * msg);

/// Check for msg/Targetposition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__Targetposition__are_equal(const robot_messages__msg__Targetposition * lhs, const robot_messages__msg__Targetposition * rhs);

/// Copy a msg/Targetposition message.
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
robot_messages__msg__Targetposition__copy(
  const robot_messages__msg__Targetposition * input,
  robot_messages__msg__Targetposition * output);

/// Initialize array of msg/Targetposition messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_messages__msg__Targetposition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__Targetposition__Sequence__init(robot_messages__msg__Targetposition__Sequence * array, size_t size);

/// Finalize array of msg/Targetposition messages.
/**
 * It calls
 * robot_messages__msg__Targetposition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__Targetposition__Sequence__fini(robot_messages__msg__Targetposition__Sequence * array);

/// Create array of msg/Targetposition messages.
/**
 * It allocates the memory for the array and calls
 * robot_messages__msg__Targetposition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
robot_messages__msg__Targetposition__Sequence *
robot_messages__msg__Targetposition__Sequence__create(size_t size);

/// Destroy array of msg/Targetposition messages.
/**
 * It calls
 * robot_messages__msg__Targetposition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
void
robot_messages__msg__Targetposition__Sequence__destroy(robot_messages__msg__Targetposition__Sequence * array);

/// Check for msg/Targetposition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_messages
bool
robot_messages__msg__Targetposition__Sequence__are_equal(const robot_messages__msg__Targetposition__Sequence * lhs, const robot_messages__msg__Targetposition__Sequence * rhs);

/// Copy an array of msg/Targetposition messages.
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
robot_messages__msg__Targetposition__Sequence__copy(
  const robot_messages__msg__Targetposition__Sequence * input,
  robot_messages__msg__Targetposition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__FUNCTIONS_H_
