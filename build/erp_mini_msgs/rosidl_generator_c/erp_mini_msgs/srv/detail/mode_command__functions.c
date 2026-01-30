// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from erp_mini_msgs:srv/ModeCommand.idl
// generated code does not contain a copyright notice
#include "erp_mini_msgs/srv/detail/mode_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
erp_mini_msgs__srv__ModeCommand_Request__init(erp_mini_msgs__srv__ModeCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // manual_mode
  // emergency_stop
  // gear
  return true;
}

void
erp_mini_msgs__srv__ModeCommand_Request__fini(erp_mini_msgs__srv__ModeCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // manual_mode
  // emergency_stop
  // gear
}

bool
erp_mini_msgs__srv__ModeCommand_Request__are_equal(const erp_mini_msgs__srv__ModeCommand_Request * lhs, const erp_mini_msgs__srv__ModeCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // manual_mode
  if (lhs->manual_mode != rhs->manual_mode) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  return true;
}

bool
erp_mini_msgs__srv__ModeCommand_Request__copy(
  const erp_mini_msgs__srv__ModeCommand_Request * input,
  erp_mini_msgs__srv__ModeCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // manual_mode
  output->manual_mode = input->manual_mode;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // gear
  output->gear = input->gear;
  return true;
}

erp_mini_msgs__srv__ModeCommand_Request *
erp_mini_msgs__srv__ModeCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__srv__ModeCommand_Request * msg = (erp_mini_msgs__srv__ModeCommand_Request *)allocator.allocate(sizeof(erp_mini_msgs__srv__ModeCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erp_mini_msgs__srv__ModeCommand_Request));
  bool success = erp_mini_msgs__srv__ModeCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erp_mini_msgs__srv__ModeCommand_Request__destroy(erp_mini_msgs__srv__ModeCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erp_mini_msgs__srv__ModeCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erp_mini_msgs__srv__ModeCommand_Request__Sequence__init(erp_mini_msgs__srv__ModeCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__srv__ModeCommand_Request * data = NULL;

  if (size) {
    data = (erp_mini_msgs__srv__ModeCommand_Request *)allocator.zero_allocate(size, sizeof(erp_mini_msgs__srv__ModeCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erp_mini_msgs__srv__ModeCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erp_mini_msgs__srv__ModeCommand_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
erp_mini_msgs__srv__ModeCommand_Request__Sequence__fini(erp_mini_msgs__srv__ModeCommand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      erp_mini_msgs__srv__ModeCommand_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

erp_mini_msgs__srv__ModeCommand_Request__Sequence *
erp_mini_msgs__srv__ModeCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__srv__ModeCommand_Request__Sequence * array = (erp_mini_msgs__srv__ModeCommand_Request__Sequence *)allocator.allocate(sizeof(erp_mini_msgs__srv__ModeCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erp_mini_msgs__srv__ModeCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erp_mini_msgs__srv__ModeCommand_Request__Sequence__destroy(erp_mini_msgs__srv__ModeCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erp_mini_msgs__srv__ModeCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erp_mini_msgs__srv__ModeCommand_Request__Sequence__are_equal(const erp_mini_msgs__srv__ModeCommand_Request__Sequence * lhs, const erp_mini_msgs__srv__ModeCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erp_mini_msgs__srv__ModeCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erp_mini_msgs__srv__ModeCommand_Request__Sequence__copy(
  const erp_mini_msgs__srv__ModeCommand_Request__Sequence * input,
  erp_mini_msgs__srv__ModeCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erp_mini_msgs__srv__ModeCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erp_mini_msgs__srv__ModeCommand_Request * data =
      (erp_mini_msgs__srv__ModeCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erp_mini_msgs__srv__ModeCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erp_mini_msgs__srv__ModeCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erp_mini_msgs__srv__ModeCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
erp_mini_msgs__srv__ModeCommand_Response__init(erp_mini_msgs__srv__ModeCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
erp_mini_msgs__srv__ModeCommand_Response__fini(erp_mini_msgs__srv__ModeCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
erp_mini_msgs__srv__ModeCommand_Response__are_equal(const erp_mini_msgs__srv__ModeCommand_Response * lhs, const erp_mini_msgs__srv__ModeCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
erp_mini_msgs__srv__ModeCommand_Response__copy(
  const erp_mini_msgs__srv__ModeCommand_Response * input,
  erp_mini_msgs__srv__ModeCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

erp_mini_msgs__srv__ModeCommand_Response *
erp_mini_msgs__srv__ModeCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__srv__ModeCommand_Response * msg = (erp_mini_msgs__srv__ModeCommand_Response *)allocator.allocate(sizeof(erp_mini_msgs__srv__ModeCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erp_mini_msgs__srv__ModeCommand_Response));
  bool success = erp_mini_msgs__srv__ModeCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erp_mini_msgs__srv__ModeCommand_Response__destroy(erp_mini_msgs__srv__ModeCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erp_mini_msgs__srv__ModeCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erp_mini_msgs__srv__ModeCommand_Response__Sequence__init(erp_mini_msgs__srv__ModeCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__srv__ModeCommand_Response * data = NULL;

  if (size) {
    data = (erp_mini_msgs__srv__ModeCommand_Response *)allocator.zero_allocate(size, sizeof(erp_mini_msgs__srv__ModeCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erp_mini_msgs__srv__ModeCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erp_mini_msgs__srv__ModeCommand_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
erp_mini_msgs__srv__ModeCommand_Response__Sequence__fini(erp_mini_msgs__srv__ModeCommand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      erp_mini_msgs__srv__ModeCommand_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

erp_mini_msgs__srv__ModeCommand_Response__Sequence *
erp_mini_msgs__srv__ModeCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__srv__ModeCommand_Response__Sequence * array = (erp_mini_msgs__srv__ModeCommand_Response__Sequence *)allocator.allocate(sizeof(erp_mini_msgs__srv__ModeCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erp_mini_msgs__srv__ModeCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erp_mini_msgs__srv__ModeCommand_Response__Sequence__destroy(erp_mini_msgs__srv__ModeCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erp_mini_msgs__srv__ModeCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erp_mini_msgs__srv__ModeCommand_Response__Sequence__are_equal(const erp_mini_msgs__srv__ModeCommand_Response__Sequence * lhs, const erp_mini_msgs__srv__ModeCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erp_mini_msgs__srv__ModeCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erp_mini_msgs__srv__ModeCommand_Response__Sequence__copy(
  const erp_mini_msgs__srv__ModeCommand_Response__Sequence * input,
  erp_mini_msgs__srv__ModeCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erp_mini_msgs__srv__ModeCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erp_mini_msgs__srv__ModeCommand_Response * data =
      (erp_mini_msgs__srv__ModeCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erp_mini_msgs__srv__ModeCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erp_mini_msgs__srv__ModeCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erp_mini_msgs__srv__ModeCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
