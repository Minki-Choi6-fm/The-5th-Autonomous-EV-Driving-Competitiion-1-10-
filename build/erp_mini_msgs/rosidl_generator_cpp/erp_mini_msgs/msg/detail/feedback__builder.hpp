// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from erp_mini_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
#define ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "erp_mini_msgs/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace erp_mini_msgs
{

namespace msg
{

namespace builder
{

class Init_Feedback_heartbeat
{
public:
  explicit Init_Feedback_heartbeat(::erp_mini_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  ::erp_mini_msgs::msg::Feedback heartbeat(::erp_mini_msgs::msg::Feedback::_heartbeat_type arg)
  {
    msg_.heartbeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::erp_mini_msgs::msg::Feedback msg_;
};

class Init_Feedback_steering
{
public:
  explicit Init_Feedback_steering(::erp_mini_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_heartbeat steering(::erp_mini_msgs::msg::Feedback::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_Feedback_heartbeat(msg_);
  }

private:
  ::erp_mini_msgs::msg::Feedback msg_;
};

class Init_Feedback_speed
{
public:
  explicit Init_Feedback_speed(::erp_mini_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_steering speed(::erp_mini_msgs::msg::Feedback::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Feedback_steering(msg_);
  }

private:
  ::erp_mini_msgs::msg::Feedback msg_;
};

class Init_Feedback_gear
{
public:
  explicit Init_Feedback_gear(::erp_mini_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_speed gear(::erp_mini_msgs::msg::Feedback::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_Feedback_speed(msg_);
  }

private:
  ::erp_mini_msgs::msg::Feedback msg_;
};

class Init_Feedback_emergency_stop
{
public:
  explicit Init_Feedback_emergency_stop(::erp_mini_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_gear emergency_stop(::erp_mini_msgs::msg::Feedback::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_Feedback_gear(msg_);
  }

private:
  ::erp_mini_msgs::msg::Feedback msg_;
};

class Init_Feedback_manual_mode
{
public:
  explicit Init_Feedback_manual_mode(::erp_mini_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_emergency_stop manual_mode(::erp_mini_msgs::msg::Feedback::_manual_mode_type arg)
  {
    msg_.manual_mode = std::move(arg);
    return Init_Feedback_emergency_stop(msg_);
  }

private:
  ::erp_mini_msgs::msg::Feedback msg_;
};

class Init_Feedback_header
{
public:
  Init_Feedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feedback_manual_mode header(::erp_mini_msgs::msg::Feedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Feedback_manual_mode(msg_);
  }

private:
  ::erp_mini_msgs::msg::Feedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::erp_mini_msgs::msg::Feedback>()
{
  return erp_mini_msgs::msg::builder::Init_Feedback_header();
}

}  // namespace erp_mini_msgs

#endif  // ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
