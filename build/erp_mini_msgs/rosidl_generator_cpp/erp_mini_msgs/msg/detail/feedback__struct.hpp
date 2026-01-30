// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from erp_mini_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
#define ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__erp_mini_msgs__msg__Feedback __attribute__((deprecated))
#else
# define DEPRECATED__erp_mini_msgs__msg__Feedback __declspec(deprecated)
#endif

namespace erp_mini_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Feedback_
{
  using Type = Feedback_<ContainerAllocator>;

  explicit Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual_mode = false;
      this->emergency_stop = false;
      this->gear = 0;
      this->speed = 0.0;
      this->steering = 0.0;
      this->heartbeat = 0;
    }
  }

  explicit Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual_mode = false;
      this->emergency_stop = false;
      this->gear = 0;
      this->speed = 0.0;
      this->steering = 0.0;
      this->heartbeat = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _manual_mode_type =
    bool;
  _manual_mode_type manual_mode;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _gear_type =
    uint8_t;
  _gear_type gear;
  using _speed_type =
    double;
  _speed_type speed;
  using _steering_type =
    double;
  _steering_type steering;
  using _heartbeat_type =
    uint8_t;
  _heartbeat_type heartbeat;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__manual_mode(
    const bool & _arg)
  {
    this->manual_mode = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__gear(
    const uint8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
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
  Type & set__heartbeat(
    const uint8_t & _arg)
  {
    this->heartbeat = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GEAR_FORWARD =
    0u;
  static constexpr uint8_t GEAR_NEUTRAL =
    1u;
  static constexpr uint8_t GEAR_BACKWARD =
    2u;

  // pointer types
  using RawPtr =
    erp_mini_msgs::msg::Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const erp_mini_msgs::msg::Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::msg::Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::msg::Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__erp_mini_msgs__msg__Feedback
    std::shared_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__erp_mini_msgs__msg__Feedback
    std::shared_ptr<erp_mini_msgs::msg::Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Feedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->manual_mode != other.manual_mode) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->heartbeat != other.heartbeat) {
      return false;
    }
    return true;
  }
  bool operator!=(const Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Feedback_

// alias to use template instance with default allocator
using Feedback =
  erp_mini_msgs::msg::Feedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Feedback_<ContainerAllocator>::GEAR_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Feedback_<ContainerAllocator>::GEAR_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Feedback_<ContainerAllocator>::GEAR_BACKWARD;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace erp_mini_msgs

#endif  // ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
