// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from erp_mini_msgs:srv/ModeCommand.idl
// generated code does not contain a copyright notice

#ifndef ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__FUNCTIONS_H_
#define ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "erp_mini_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "erp_mini_msgs/srv/detail/mode_command__struct.h"

/// Initialize srv/ModeCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * erp_mini_msgs__srv__ModeCommand_Request
 * )) before or use
 * erp_mini_msgs__srv__ModeCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Request__init(erp_mini_msgs__srv__ModeCommand_Request * msg);

/// Finalize srv/ModeCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Request__fini(erp_mini_msgs__srv__ModeCommand_Request * msg);

/// Create srv/ModeCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * erp_mini_msgs__srv__ModeCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
erp_mini_msgs__srv__ModeCommand_Request *
erp_mini_msgs__srv__ModeCommand_Request__create();

/// Destroy srv/ModeCommand message.
/**
 * It calls
 * erp_mini_msgs__srv__ModeCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Request__destroy(erp_mini_msgs__srv__ModeCommand_Request * msg);

/// Check for srv/ModeCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Request__are_equal(const erp_mini_msgs__srv__ModeCommand_Request * lhs, const erp_mini_msgs__srv__ModeCommand_Request * rhs);

/// Copy a srv/ModeCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Request__copy(
  const erp_mini_msgs__srv__ModeCommand_Request * input,
  erp_mini_msgs__srv__ModeCommand_Request * output);

/// Initialize array of srv/ModeCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * erp_mini_msgs__srv__ModeCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Request__Sequence__init(erp_mini_msgs__srv__ModeCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/ModeCommand messages.
/**
 * It calls
 * erp_mini_msgs__srv__ModeCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Request__Sequence__fini(erp_mini_msgs__srv__ModeCommand_Request__Sequence * array);

/// Create array of srv/ModeCommand messages.
/**
 * It allocates the memory for the array and calls
 * erp_mini_msgs__srv__ModeCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
erp_mini_msgs__srv__ModeCommand_Request__Sequence *
erp_mini_msgs__srv__ModeCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/ModeCommand messages.
/**
 * It calls
 * erp_mini_msgs__srv__ModeCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Request__Sequence__destroy(erp_mini_msgs__srv__ModeCommand_Request__Sequence * array);

/// Check for srv/ModeCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Request__Sequence__are_equal(const erp_mini_msgs__srv__ModeCommand_Request__Sequence * lhs, const erp_mini_msgs__srv__ModeCommand_Request__Sequence * rhs);

/// Copy an array of srv/ModeCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Request__Sequence__copy(
  const erp_mini_msgs__srv__ModeCommand_Request__Sequence * input,
  erp_mini_msgs__srv__ModeCommand_Request__Sequence * output);

/// Initialize srv/ModeCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * erp_mini_msgs__srv__ModeCommand_Response
 * )) before or use
 * erp_mini_msgs__srv__ModeCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Response__init(erp_mini_msgs__srv__ModeCommand_Response * msg);

/// Finalize srv/ModeCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Response__fini(erp_mini_msgs__srv__ModeCommand_Response * msg);

/// Create srv/ModeCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * erp_mini_msgs__srv__ModeCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
erp_mini_msgs__srv__ModeCommand_Response *
erp_mini_msgs__srv__ModeCommand_Response__create();

/// Destroy srv/ModeCommand message.
/**
 * It calls
 * erp_mini_msgs__srv__ModeCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Response__destroy(erp_mini_msgs__srv__ModeCommand_Response * msg);

/// Check for srv/ModeCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Response__are_equal(const erp_mini_msgs__srv__ModeCommand_Response * lhs, const erp_mini_msgs__srv__ModeCommand_Response * rhs);

/// Copy a srv/ModeCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Response__copy(
  const erp_mini_msgs__srv__ModeCommand_Response * input,
  erp_mini_msgs__srv__ModeCommand_Response * output);

/// Initialize array of srv/ModeCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * erp_mini_msgs__srv__ModeCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Response__Sequence__init(erp_mini_msgs__srv__ModeCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/ModeCommand messages.
/**
 * It calls
 * erp_mini_msgs__srv__ModeCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Response__Sequence__fini(erp_mini_msgs__srv__ModeCommand_Response__Sequence * array);

/// Create array of srv/ModeCommand messages.
/**
 * It allocates the memory for the array and calls
 * erp_mini_msgs__srv__ModeCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
erp_mini_msgs__srv__ModeCommand_Response__Sequence *
erp_mini_msgs__srv__ModeCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/ModeCommand messages.
/**
 * It calls
 * erp_mini_msgs__srv__ModeCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
void
erp_mini_msgs__srv__ModeCommand_Response__Sequence__destroy(erp_mini_msgs__srv__ModeCommand_Response__Sequence * array);

/// Check for srv/ModeCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Response__Sequence__are_equal(const erp_mini_msgs__srv__ModeCommand_Response__Sequence * lhs, const erp_mini_msgs__srv__ModeCommand_Response__Sequence * rhs);

/// Copy an array of srv/ModeCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_erp_mini_msgs
bool
erp_mini_msgs__srv__ModeCommand_Response__Sequence__copy(
  const erp_mini_msgs__srv__ModeCommand_Response__Sequence * input,
  erp_mini_msgs__srv__ModeCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ERP_MINI_MSGS__SRV__DETAIL__MODE_COMMAND__FUNCTIONS_H_
