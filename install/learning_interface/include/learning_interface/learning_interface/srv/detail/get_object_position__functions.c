// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice
#include "learning_interface/srv/detail/get_object_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
learning_interface__srv__GetObjectPosition_Request__init(learning_interface__srv__GetObjectPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // get
  return true;
}

void
learning_interface__srv__GetObjectPosition_Request__fini(learning_interface__srv__GetObjectPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // get
}

bool
learning_interface__srv__GetObjectPosition_Request__are_equal(const learning_interface__srv__GetObjectPosition_Request * lhs, const learning_interface__srv__GetObjectPosition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // get
  if (lhs->get != rhs->get) {
    return false;
  }
  return true;
}

bool
learning_interface__srv__GetObjectPosition_Request__copy(
  const learning_interface__srv__GetObjectPosition_Request * input,
  learning_interface__srv__GetObjectPosition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // get
  output->get = input->get;
  return true;
}

learning_interface__srv__GetObjectPosition_Request *
learning_interface__srv__GetObjectPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__GetObjectPosition_Request * msg = (learning_interface__srv__GetObjectPosition_Request *)allocator.allocate(sizeof(learning_interface__srv__GetObjectPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learning_interface__srv__GetObjectPosition_Request));
  bool success = learning_interface__srv__GetObjectPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learning_interface__srv__GetObjectPosition_Request__destroy(learning_interface__srv__GetObjectPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learning_interface__srv__GetObjectPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learning_interface__srv__GetObjectPosition_Request__Sequence__init(learning_interface__srv__GetObjectPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__GetObjectPosition_Request * data = NULL;

  if (size) {
    data = (learning_interface__srv__GetObjectPosition_Request *)allocator.zero_allocate(size, sizeof(learning_interface__srv__GetObjectPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learning_interface__srv__GetObjectPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learning_interface__srv__GetObjectPosition_Request__fini(&data[i - 1]);
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
learning_interface__srv__GetObjectPosition_Request__Sequence__fini(learning_interface__srv__GetObjectPosition_Request__Sequence * array)
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
      learning_interface__srv__GetObjectPosition_Request__fini(&array->data[i]);
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

learning_interface__srv__GetObjectPosition_Request__Sequence *
learning_interface__srv__GetObjectPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__GetObjectPosition_Request__Sequence * array = (learning_interface__srv__GetObjectPosition_Request__Sequence *)allocator.allocate(sizeof(learning_interface__srv__GetObjectPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learning_interface__srv__GetObjectPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learning_interface__srv__GetObjectPosition_Request__Sequence__destroy(learning_interface__srv__GetObjectPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learning_interface__srv__GetObjectPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learning_interface__srv__GetObjectPosition_Request__Sequence__are_equal(const learning_interface__srv__GetObjectPosition_Request__Sequence * lhs, const learning_interface__srv__GetObjectPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learning_interface__srv__GetObjectPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learning_interface__srv__GetObjectPosition_Request__Sequence__copy(
  const learning_interface__srv__GetObjectPosition_Request__Sequence * input,
  learning_interface__srv__GetObjectPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learning_interface__srv__GetObjectPosition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learning_interface__srv__GetObjectPosition_Request * data =
      (learning_interface__srv__GetObjectPosition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learning_interface__srv__GetObjectPosition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learning_interface__srv__GetObjectPosition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learning_interface__srv__GetObjectPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
learning_interface__srv__GetObjectPosition_Response__init(learning_interface__srv__GetObjectPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
learning_interface__srv__GetObjectPosition_Response__fini(learning_interface__srv__GetObjectPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
learning_interface__srv__GetObjectPosition_Response__are_equal(const learning_interface__srv__GetObjectPosition_Response * lhs, const learning_interface__srv__GetObjectPosition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
learning_interface__srv__GetObjectPosition_Response__copy(
  const learning_interface__srv__GetObjectPosition_Response * input,
  learning_interface__srv__GetObjectPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

learning_interface__srv__GetObjectPosition_Response *
learning_interface__srv__GetObjectPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__GetObjectPosition_Response * msg = (learning_interface__srv__GetObjectPosition_Response *)allocator.allocate(sizeof(learning_interface__srv__GetObjectPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learning_interface__srv__GetObjectPosition_Response));
  bool success = learning_interface__srv__GetObjectPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learning_interface__srv__GetObjectPosition_Response__destroy(learning_interface__srv__GetObjectPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learning_interface__srv__GetObjectPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learning_interface__srv__GetObjectPosition_Response__Sequence__init(learning_interface__srv__GetObjectPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__GetObjectPosition_Response * data = NULL;

  if (size) {
    data = (learning_interface__srv__GetObjectPosition_Response *)allocator.zero_allocate(size, sizeof(learning_interface__srv__GetObjectPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learning_interface__srv__GetObjectPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learning_interface__srv__GetObjectPosition_Response__fini(&data[i - 1]);
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
learning_interface__srv__GetObjectPosition_Response__Sequence__fini(learning_interface__srv__GetObjectPosition_Response__Sequence * array)
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
      learning_interface__srv__GetObjectPosition_Response__fini(&array->data[i]);
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

learning_interface__srv__GetObjectPosition_Response__Sequence *
learning_interface__srv__GetObjectPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__GetObjectPosition_Response__Sequence * array = (learning_interface__srv__GetObjectPosition_Response__Sequence *)allocator.allocate(sizeof(learning_interface__srv__GetObjectPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learning_interface__srv__GetObjectPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learning_interface__srv__GetObjectPosition_Response__Sequence__destroy(learning_interface__srv__GetObjectPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learning_interface__srv__GetObjectPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learning_interface__srv__GetObjectPosition_Response__Sequence__are_equal(const learning_interface__srv__GetObjectPosition_Response__Sequence * lhs, const learning_interface__srv__GetObjectPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learning_interface__srv__GetObjectPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learning_interface__srv__GetObjectPosition_Response__Sequence__copy(
  const learning_interface__srv__GetObjectPosition_Response__Sequence * input,
  learning_interface__srv__GetObjectPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learning_interface__srv__GetObjectPosition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learning_interface__srv__GetObjectPosition_Response * data =
      (learning_interface__srv__GetObjectPosition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learning_interface__srv__GetObjectPosition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learning_interface__srv__GetObjectPosition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learning_interface__srv__GetObjectPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
