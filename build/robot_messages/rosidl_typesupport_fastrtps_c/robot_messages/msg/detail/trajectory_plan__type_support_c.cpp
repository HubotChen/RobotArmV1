// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice
#include "robot_messages/msg/detail/trajectory_plan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_messages/msg/detail/trajectory_plan__struct.h"
#include "robot_messages/msg/detail/trajectory_plan__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // j1, j2, j3, j4, j5, j6
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // j1, j2, j3, j4, j5, j6

// forward declare type support functions


using _TrajectoryPlan__ros_msg_type = robot_messages__msg__TrajectoryPlan;

static bool _TrajectoryPlan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryPlan__ros_msg_type * ros_message = static_cast<const _TrajectoryPlan__ros_msg_type *>(untyped_ros_message);
  // Field name: j1
  {
    size_t size = ros_message->j1.size;
    auto array_ptr = ros_message->j1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: j2
  {
    size_t size = ros_message->j2.size;
    auto array_ptr = ros_message->j2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: j3
  {
    size_t size = ros_message->j3.size;
    auto array_ptr = ros_message->j3.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: j4
  {
    size_t size = ros_message->j4.size;
    auto array_ptr = ros_message->j4.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: j5
  {
    size_t size = ros_message->j5.size;
    auto array_ptr = ros_message->j5.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: j6
  {
    size_t size = ros_message->j6.size;
    auto array_ptr = ros_message->j6.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: execution_time
  {
    cdr << ros_message->execution_time;
  }

  return true;
}

static bool _TrajectoryPlan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryPlan__ros_msg_type * ros_message = static_cast<_TrajectoryPlan__ros_msg_type *>(untyped_ros_message);
  // Field name: j1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j1.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->j1);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->j1, size)) {
      fprintf(stderr, "failed to create array for field 'j1'");
      return false;
    }
    auto array_ptr = ros_message->j1.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: j2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j2.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->j2);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->j2, size)) {
      fprintf(stderr, "failed to create array for field 'j2'");
      return false;
    }
    auto array_ptr = ros_message->j2.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: j3
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j3.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->j3);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->j3, size)) {
      fprintf(stderr, "failed to create array for field 'j3'");
      return false;
    }
    auto array_ptr = ros_message->j3.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: j4
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j4.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->j4);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->j4, size)) {
      fprintf(stderr, "failed to create array for field 'j4'");
      return false;
    }
    auto array_ptr = ros_message->j4.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: j5
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j5.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->j5);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->j5, size)) {
      fprintf(stderr, "failed to create array for field 'j5'");
      return false;
    }
    auto array_ptr = ros_message->j5.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: j6
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j6.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->j6);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->j6, size)) {
      fprintf(stderr, "failed to create array for field 'j6'");
      return false;
    }
    auto array_ptr = ros_message->j6.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: execution_time
  {
    cdr >> ros_message->execution_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_messages
size_t get_serialized_size_robot_messages__msg__TrajectoryPlan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryPlan__ros_msg_type * ros_message = static_cast<const _TrajectoryPlan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name j1
  {
    size_t array_size = ros_message->j1.size;
    auto array_ptr = ros_message->j1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2
  {
    size_t array_size = ros_message->j2.size;
    auto array_ptr = ros_message->j2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3
  {
    size_t array_size = ros_message->j3.size;
    auto array_ptr = ros_message->j3.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4
  {
    size_t array_size = ros_message->j4.size;
    auto array_ptr = ros_message->j4.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5
  {
    size_t array_size = ros_message->j5.size;
    auto array_ptr = ros_message->j5.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6
  {
    size_t array_size = ros_message->j6.size;
    auto array_ptr = ros_message->j6.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name execution_time
  {
    size_t item_size = sizeof(ros_message->execution_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryPlan__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_messages__msg__TrajectoryPlan(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_messages
size_t max_serialized_size_robot_messages__msg__TrajectoryPlan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: j1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: j2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: j3
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: j4
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: j5
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: j6
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: execution_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryPlan__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robot_messages__msg__TrajectoryPlan(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrajectoryPlan = {
  "robot_messages::msg",
  "TrajectoryPlan",
  _TrajectoryPlan__cdr_serialize,
  _TrajectoryPlan__cdr_deserialize,
  _TrajectoryPlan__get_serialized_size,
  _TrajectoryPlan__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryPlan__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryPlan,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_messages, msg, TrajectoryPlan)() {
  return &_TrajectoryPlan__type_support;
}

#if defined(__cplusplus)
}
#endif
