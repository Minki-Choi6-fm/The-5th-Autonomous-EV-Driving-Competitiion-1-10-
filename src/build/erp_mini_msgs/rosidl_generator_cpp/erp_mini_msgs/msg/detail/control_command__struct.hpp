// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from erp_mini_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
#define ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__erp_mini_msgs__msg__ControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__erp_mini_msgs__msg__ControlCommand __declspec(deprecated)
#endif

namespace erp_mini_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlCommand_
{
  using Type = ControlCommand_<ContainerAllocator>;

  explicit ControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
      this->steering = 0.0;
    }
  }

  explicit ControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
      this->steering = 0.0;
    }
  }

  // field types and members
  using _speed_type =
    double;
  _speed_type speed;
  using _steering_type =
    double;
  _steering_type steering;

  // setters for named parameter idiom
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__steering(
    const double & _arg)
  {
    this->steering = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    erp_mini_msgs::msg::ControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const erp_mini_msgs::msg::ControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::msg::ControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::msg::ControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__erp_mini_msgs__msg__ControlCommand
    std::shared_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__erp_mini_msgs__msg__ControlCommand
    std::shared_ptr<erp_mini_msgs::msg::ControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlCommand_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlCommand_

// alias to use template instance with default allocator
using ControlCommand =
  erp_mini_msgs::msg::ControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace erp_mini_msgs

#endif  // ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
