// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from erp_mini_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "erp_mini_msgs/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace erp_mini_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: manual_mode
  {
    out << "manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_mode, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: steering
  {
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << ", ";
  }

  // member: heartbeat
  {
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: manual_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_mode, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << "\n";
  }

  // member: heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace erp_mini_msgs

namespace rosidl_generator_traits
{

[[deprecated("use erp_mini_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const erp_mini_msgs::msg::Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  erp_mini_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use erp_mini_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const erp_mini_msgs::msg::Feedback & msg)
{
  return erp_mini_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<erp_mini_msgs::msg::Feedback>()
{
  return "erp_mini_msgs::msg::Feedback";
}

template<>
inline const char * name<erp_mini_msgs::msg::Feedback>()
{
  return "erp_mini_msgs/msg/Feedback";
}

template<>
struct has_fixed_size<erp_mini_msgs::msg::Feedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<erp_mini_msgs::msg::Feedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<erp_mini_msgs::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ERP_MINI_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
