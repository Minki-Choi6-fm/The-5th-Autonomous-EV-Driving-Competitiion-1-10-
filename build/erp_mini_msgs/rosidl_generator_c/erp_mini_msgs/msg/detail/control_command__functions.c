// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from erp_mini_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "erp_mini_msgs/msg/detail/control_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
erp_mini_msgs__msg__ControlCommand__init(erp_mini_msgs__msg__ControlCommand * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // steering
  return true;
}

void
erp_mini_msgs__msg__ControlCommand__fini(erp_mini_msgs__msg__ControlCommand * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // steering
}

bool
erp_mini_msgs__msg__ControlCommand__are_equal(const erp_mini_msgs__msg__ControlCommand * lhs, const erp_mini_msgs__msg__ControlCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  return true;
}

bool
erp_mini_msgs__msg__ControlCommand__copy(
  const erp_mini_msgs__msg__ControlCommand * input,
  erp_mini_msgs__msg__ControlCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // steering
  output->steering = input->steering;
  return true;
}

erp_mini_msgs__msg__ControlCommand *
erp_mini_msgs__msg__ControlCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__msg__ControlCommand * msg = (erp_mini_msgs__msg__ControlCommand *)allocator.allocate(sizeof(erp_mini_msgs__msg__ControlCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(erp_mini_msgs__msg__ControlCommand));
  bool success = erp_mini_msgs__msg__ControlCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
erp_mini_msgs__msg__ControlCommand__destroy(erp_mini_msgs__msg__ControlCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    erp_mini_msgs__msg__ControlCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
erp_mini_msgs__msg__ControlCommand__Sequence__init(erp_mini_msgs__msg__ControlCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__msg__ControlCommand * data = NULL;

  if (size) {
    data = (erp_mini_msgs__msg__ControlCommand *)allocator.zero_allocate(size, sizeof(erp_mini_msgs__msg__ControlCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = erp_mini_msgs__msg__ControlCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        erp_mini_msgs__msg__ControlCommand__fini(&data[i - 1]);
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
erp_mini_msgs__msg__ControlCommand__Sequence__fini(erp_mini_msgs__msg__ControlCommand__Sequence * array)
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
      erp_mini_msgs__msg__ControlCommand__fini(&array->data[i]);
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

erp_mini_msgs__msg__ControlCommand__Sequence *
erp_mini_msgs__msg__ControlCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  erp_mini_msgs__msg__ControlCommand__Sequence * array = (erp_mini_msgs__msg__ControlCommand__Sequence *)allocator.allocate(sizeof(erp_mini_msgs__msg__ControlCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = erp_mini_msgs__msg__ControlCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
erp_mini_msgs__msg__ControlCommand__Sequence__destroy(erp_mini_msgs__msg__ControlCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    erp_mini_msgs__msg__ControlCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
erp_mini_msgs__msg__ControlCommand__Sequence__are_equal(const erp_mini_msgs__msg__ControlCommand__Sequence * lhs, const erp_mini_msgs__msg__ControlCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!erp_mini_msgs__msg__ControlCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
erp_mini_msgs__msg__ControlCommand__Sequence__copy(
  const erp_mini_msgs__msg__ControlCommand__Sequence * input,
  erp_mini_msgs__msg__ControlCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(erp_mini_msgs__msg__ControlCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    erp_mini_msgs__msg__ControlCommand * data =
      (erp_mini_msgs__msg__ControlCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!erp_mini_msgs__msg__ControlCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          erp_mini_msgs__msg__ControlCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!erp_mini_msgs__msg__ControlCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
