// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_messages:msg/Targetposition.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__STRUCT_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_messages__msg__Targetposition __attribute__((deprecated))
#else
# define DEPRECATED__robot_messages__msg__Targetposition __declspec(deprecated)
#endif

namespace robot_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Targetposition_
{
  using Type = Targetposition_<ContainerAllocator>;

  explicit Targetposition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
      this->z_pos = 0.0f;
      this->x_rot = 0.0f;
      this->y_rot = 0.0f;
      this->z_rot = 0.0f;
      this->linear_move = false;
    }
  }

  explicit Targetposition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
      this->z_pos = 0.0f;
      this->x_rot = 0.0f;
      this->y_rot = 0.0f;
      this->z_rot = 0.0f;
      this->linear_move = false;
    }
  }

  // field types and members
  using _x_pos_type =
    float;
  _x_pos_type x_pos;
  using _y_pos_type =
    float;
  _y_pos_type y_pos;
  using _z_pos_type =
    float;
  _z_pos_type z_pos;
  using _x_rot_type =
    float;
  _x_rot_type x_rot;
  using _y_rot_type =
    float;
  _y_rot_type y_rot;
  using _z_rot_type =
    float;
  _z_rot_type z_rot;
  using _linear_move_type =
    bool;
  _linear_move_type linear_move;

  // setters for named parameter idiom
  Type & set__x_pos(
    const float & _arg)
  {
    this->x_pos = _arg;
    return *this;
  }
  Type & set__y_pos(
    const float & _arg)
  {
    this->y_pos = _arg;
    return *this;
  }
  Type & set__z_pos(
    const float & _arg)
  {
    this->z_pos = _arg;
    return *this;
  }
  Type & set__x_rot(
    const float & _arg)
  {
    this->x_rot = _arg;
    return *this;
  }
  Type & set__y_rot(
    const float & _arg)
  {
    this->y_rot = _arg;
    return *this;
  }
  Type & set__z_rot(
    const float & _arg)
  {
    this->z_rot = _arg;
    return *this;
  }
  Type & set__linear_move(
    const bool & _arg)
  {
    this->linear_move = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_messages::msg::Targetposition_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_messages::msg::Targetposition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_messages::msg::Targetposition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_messages::msg::Targetposition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_messages::msg::Targetposition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_messages::msg::Targetposition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_messages::msg::Targetposition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_messages::msg::Targetposition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_messages::msg::Targetposition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_messages::msg::Targetposition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_messages__msg__Targetposition
    std::shared_ptr<robot_messages::msg::Targetposition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_messages__msg__Targetposition
    std::shared_ptr<robot_messages::msg::Targetposition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Targetposition_ & other) const
  {
    if (this->x_pos != other.x_pos) {
      return false;
    }
    if (this->y_pos != other.y_pos) {
      return false;
    }
    if (this->z_pos != other.z_pos) {
      return false;
    }
    if (this->x_rot != other.x_rot) {
      return false;
    }
    if (this->y_rot != other.y_rot) {
      return false;
    }
    if (this->z_rot != other.z_rot) {
      return false;
    }
    if (this->linear_move != other.linear_move) {
      return false;
    }
    return true;
  }
  bool operator!=(const Targetposition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Targetposition_

// alias to use template instance with default allocator
using Targetposition =
  robot_messages::msg::Targetposition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_messages

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TARGETPOSITION__STRUCT_HPP_
