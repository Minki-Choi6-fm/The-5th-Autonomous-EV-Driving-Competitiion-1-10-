// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from erp_mini_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "erp_mini_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "erp_mini_msgs/msg/detail/control_command__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace erp_mini_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_erp_mini_msgs
cdr_serialize(
  const erp_mini_msgs::msg::ControlCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_erp_mini_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  erp_mini_msgs::msg::ControlCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_erp_mini_msgs
get_serialized_size(
  const erp_mini_msgs::msg::ControlCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_erp_mini_msgs
max_serialized_size_ControlCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace erp_mini_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_erp_mini_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, erp_mini_msgs, msg, ControlCommand)();

#ifdef __cplusplus
}
#endif

#endif  // ERP_MINI_MSGS__MSG__DETAIL__CONTROL_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
