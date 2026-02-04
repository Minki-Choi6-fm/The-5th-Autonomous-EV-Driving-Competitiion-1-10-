// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from erp_mini_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "erp_mini_msgs/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace erp_mini_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_steering
{
public:
  explicit Init_ControlCommand_steering(::erp_mini_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::erp_mini_msgs::msg::ControlCommand steering(::erp_mini_msgs::msg::ControlCommand::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::erp_mini_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_speed
{
public:
  Init_ControlCommand_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_steering speed(::erp_mini_msgs::msg::ControlCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ControlCommand_steering(msg_);
  }

private:
  ::erp_mini_msgs::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::erp_mini_msgs::msg::ControlCommand>()
{
  return erp_mini_msgs::msg::builder::Init_ControlCommand_speed();
}

}  // namespace erp_mini_msgs

#endif  // ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
