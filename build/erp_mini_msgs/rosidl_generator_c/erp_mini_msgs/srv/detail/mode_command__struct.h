// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from erp_mini_msgs:srv/ModeCommand.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__STRUCT_H_
#define ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GEAR_FORWARD'.
/**
  * Gear (Forward / Neutral / Backward)
 */
enum
{
  erp_mini_msgs__srv__ModeCommand_Request__GEAR_FORWARD = 0
};

/// Constant 'GEAR_NEUTRAL'.
enum
{
  erp_mini_msgs__srv__ModeCommand_Request__GEAR_NEUTRAL = 1
};

/// Constant 'GEAR_BACKWARD'.
enum
{
  erp_mini_msgs__srv__ModeCommand_Request__GEAR_BACKWARD = 2
};

/// Struct defined in srv/ModeCommand in the package erp_mini_msgs.
typedef struct erp_mini_msgs__srv__ModeCommand_Request
{
  /// Control mode (Manual / Auto)
  bool manual_mode;
  /// Emergency stop (ON / OFF)
  bool emergency_stop;
  uint8_t gear;
} erp_mini_msgs__srv__ModeCommand_Request;

// Struct for a sequence of erp_mini_msgs__srv__ModeCommand_Request.
typedef struct erp_mini_msgs__srv__ModeCommand_Request__Sequence
{
  erp_mini_msgs__srv__ModeCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} erp_mini_msgs__srv__ModeCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ModeCommand in the package erp_mini_msgs.
typedef struct erp_mini_msgs__srv__ModeCommand_Response
{
  bool success;
} erp_mini_msgs__srv__ModeCommand_Response;

// Struct for a sequence of erp_mini_msgs__srv__ModeCommand_Response.
typedef struct erp_mini_msgs__srv__ModeCommand_Response__Sequence
{
  erp_mini_msgs__srv__ModeCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} erp_mini_msgs__srv__ModeCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__STRUCT_H_
