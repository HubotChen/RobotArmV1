// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_messages:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_HPP_
#define ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_messages__msg__TrajectoryPlan __attribute__((deprecated))
#else
# define DEPRECATED__robot_messages__msg__TrajectoryPlan __declspec(deprecated)
#endif

namespace robot_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPlan_
{
  using Type = TrajectoryPlan_<ContainerAllocator>;

  explicit TrajectoryPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execution_time = 0.0f;
    }
  }

  explicit TrajectoryPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execution_time = 0.0f;
    }
  }

  // field types and members
  using _j1_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _j1_type j1;
  using _j2_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _j2_type j2;
  using _j3_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _j3_type j3;
  using _j4_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _j4_type j4;
  using _j5_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _j5_type j5;
  using _j6_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _j6_type j6;
  using _execution_time_type =
    float;
  _execution_time_type execution_time;

  // setters for named parameter idiom
  Type & set__j1(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->j1 = _arg;
    return *this;
  }
  Type & set__j2(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->j2 = _arg;
    return *this;
  }
  Type & set__j3(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->j3 = _arg;
    return *this;
  }
  Type & set__j4(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->j4 = _arg;
    return *this;
  }
  Type & set__j5(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->j5 = _arg;
    return *this;
  }
  Type & set__j6(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->j6 = _arg;
    return *this;
  }
  Type & set__execution_time(
    const float & _arg)
  {
    this->execution_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_messages::msg::TrajectoryPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_messages::msg::TrajectoryPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_messages::msg::TrajectoryPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_messages::msg::TrajectoryPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_messages__msg__TrajectoryPlan
    std::shared_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_messages__msg__TrajectoryPlan
    std::shared_ptr<robot_messages::msg::TrajectoryPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPlan_ & other) const
  {
    if (this->j1 != other.j1) {
      return false;
    }
    if (this->j2 != other.j2) {
      return false;
    }
    if (this->j3 != other.j3) {
      return false;
    }
    if (this->j4 != other.j4) {
      return false;
    }
    if (this->j5 != other.j5) {
      return false;
    }
    if (this->j6 != other.j6) {
      return false;
    }
    if (this->execution_time != other.execution_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPlan_

// alias to use template instance with default allocator
using TrajectoryPlan =
  robot_messages::msg::TrajectoryPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_messages

#endif  // ROBOT_MESSAGES__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_HPP_
