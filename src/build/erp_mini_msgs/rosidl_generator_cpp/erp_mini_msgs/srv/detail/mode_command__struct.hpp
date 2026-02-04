// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from erp_mini_msgs:srv/ModeCommand.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__STRUCT_HPP_
#define ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__erp_mini_msgs__srv__ModeCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__erp_mini_msgs__srv__ModeCommand_Request __declspec(deprecated)
#endif

namespace erp_mini_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModeCommand_Request_
{
  using Type = ModeCommand_Request_<ContainerAllocator>;

  explicit ModeCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual_mode = false;
      this->emergency_stop = false;
      this->gear = 0;
    }
  }

  explicit ModeCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual_mode = false;
      this->emergency_stop = false;
      this->gear = 0;
    }
  }

  // field types and members
  using _manual_mode_type =
    bool;
  _manual_mode_type manual_mode;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _gear_type =
    uint8_t;
  _gear_type gear;

  // setters for named parameter idiom
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

  // constant declarations
  static constexpr uint8_t GEAR_FORWARD =
    0u;
  static constexpr uint8_t GEAR_NEUTRAL =
    1u;
  static constexpr uint8_t GEAR_BACKWARD =
    2u;

  // pointer types
  using RawPtr =
    erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__erp_mini_msgs__srv__ModeCommand_Request
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__erp_mini_msgs__srv__ModeCommand_Request
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModeCommand_Request_ & other) const
  {
    if (this->manual_mode != other.manual_mode) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModeCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModeCommand_Request_

// alias to use template instance with default allocator
using ModeCommand_Request =
  erp_mini_msgs::srv::ModeCommand_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCommand_Request_<ContainerAllocator>::GEAR_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCommand_Request_<ContainerAllocator>::GEAR_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCommand_Request_<ContainerAllocator>::GEAR_BACKWARD;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace erp_mini_msgs


#ifndef _WIN32
# define DEPRECATED__erp_mini_msgs__srv__ModeCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__erp_mini_msgs__srv__ModeCommand_Response __declspec(deprecated)
#endif

namespace erp_mini_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModeCommand_Response_
{
  using Type = ModeCommand_Response_<ContainerAllocator>;

  explicit ModeCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ModeCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__erp_mini_msgs__srv__ModeCommand_Response
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__erp_mini_msgs__srv__ModeCommand_Response
    std::shared_ptr<erp_mini_msgs::srv::ModeCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModeCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModeCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModeCommand_Response_

// alias to use template instance with default allocator
using ModeCommand_Response =
  erp_mini_msgs::srv::ModeCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace erp_mini_msgs

namespace erp_mini_msgs
{

namespace srv
{

struct ModeCommand
{
  using Request = erp_mini_msgs::srv::ModeCommand_Request;
  using Response = erp_mini_msgs::srv::ModeCommand_Response;
};

}  // namespace srv

}  // namespace erp_mini_msgs

#endif  // ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__STRUCT_HPP_
