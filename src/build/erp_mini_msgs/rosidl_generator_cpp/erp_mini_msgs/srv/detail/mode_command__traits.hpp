// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from erp_mini_msgs:srv/ModeCommand.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__TRAITS_HPP_
#define ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "erp_mini_msgs/srv/detail/mode_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace erp_mini_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ModeCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModeCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModeCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace erp_mini_msgs

namespace rosidl_generator_traits
{

[[deprecated("use erp_mini_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const erp_mini_msgs::srv::ModeCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  erp_mini_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use erp_mini_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const erp_mini_msgs::srv::ModeCommand_Request & msg)
{
  return erp_mini_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<erp_mini_msgs::srv::ModeCommand_Request>()
{
  return "erp_mini_msgs::srv::ModeCommand_Request";
}

template<>
inline const char * name<erp_mini_msgs::srv::ModeCommand_Request>()
{
  return "erp_mini_msgs/srv/ModeCommand_Request";
}

template<>
struct has_fixed_size<erp_mini_msgs::srv::ModeCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<erp_mini_msgs::srv::ModeCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<erp_mini_msgs::srv::ModeCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace erp_mini_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ModeCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModeCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModeCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace erp_mini_msgs

namespace rosidl_generator_traits
{

[[deprecated("use erp_mini_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const erp_mini_msgs::srv::ModeCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  erp_mini_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use erp_mini_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const erp_mini_msgs::srv::ModeCommand_Response & msg)
{
  return erp_mini_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<erp_mini_msgs::srv::ModeCommand_Response>()
{
  return "erp_mini_msgs::srv::ModeCommand_Response";
}

template<>
inline const char * name<erp_mini_msgs::srv::ModeCommand_Response>()
{
  return "erp_mini_msgs/srv/ModeCommand_Response";
}

template<>
struct has_fixed_size<erp_mini_msgs::srv::ModeCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<erp_mini_msgs::srv::ModeCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<erp_mini_msgs::srv::ModeCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<erp_mini_msgs::srv::ModeCommand>()
{
  return "erp_mini_msgs::srv::ModeCommand";
}

template<>
inline const char * name<erp_mini_msgs::srv::ModeCommand>()
{
  return "erp_mini_msgs/srv/ModeCommand";
}

template<>
struct has_fixed_size<erp_mini_msgs::srv::ModeCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<erp_mini_msgs::srv::ModeCommand_Request>::value &&
    has_fixed_size<erp_mini_msgs::srv::ModeCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<erp_mini_msgs::srv::ModeCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<erp_mini_msgs::srv::ModeCommand_Request>::value &&
    has_bounded_size<erp_mini_msgs::srv::ModeCommand_Response>::value
  >
{
};

template<>
struct is_service<erp_mini_msgs::srv::ModeCommand>
  : std::true_type
{
};

template<>
struct is_service_request<erp_mini_msgs::srv::ModeCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<erp_mini_msgs::srv::ModeCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__TRAITS_HPP_
