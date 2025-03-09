// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/face_detector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
interfaces__srv__FaceDetector_Request__init(interfaces__srv__FaceDetector_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    interfaces__srv__FaceDetector_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__FaceDetector_Request__fini(interfaces__srv__FaceDetector_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
interfaces__srv__FaceDetector_Request__are_equal(const interfaces__srv__FaceDetector_Request * lhs, const interfaces__srv__FaceDetector_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
interfaces__srv__FaceDetector_Request__copy(
  const interfaces__srv__FaceDetector_Request * input,
  interfaces__srv__FaceDetector_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

interfaces__srv__FaceDetector_Request *
interfaces__srv__FaceDetector_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__FaceDetector_Request * msg = (interfaces__srv__FaceDetector_Request *)allocator.allocate(sizeof(interfaces__srv__FaceDetector_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__FaceDetector_Request));
  bool success = interfaces__srv__FaceDetector_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__FaceDetector_Request__destroy(interfaces__srv__FaceDetector_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__FaceDetector_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__FaceDetector_Request__Sequence__init(interfaces__srv__FaceDetector_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__FaceDetector_Request * data = NULL;

  if (size) {
    data = (interfaces__srv__FaceDetector_Request *)allocator.zero_allocate(size, sizeof(interfaces__srv__FaceDetector_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__FaceDetector_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__FaceDetector_Request__fini(&data[i - 1]);
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
interfaces__srv__FaceDetector_Request__Sequence__fini(interfaces__srv__FaceDetector_Request__Sequence * array)
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
      interfaces__srv__FaceDetector_Request__fini(&array->data[i]);
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

interfaces__srv__FaceDetector_Request__Sequence *
interfaces__srv__FaceDetector_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__FaceDetector_Request__Sequence * array = (interfaces__srv__FaceDetector_Request__Sequence *)allocator.allocate(sizeof(interfaces__srv__FaceDetector_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__FaceDetector_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__FaceDetector_Request__Sequence__destroy(interfaces__srv__FaceDetector_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__FaceDetector_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__FaceDetector_Request__Sequence__are_equal(const interfaces__srv__FaceDetector_Request__Sequence * lhs, const interfaces__srv__FaceDetector_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__FaceDetector_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__FaceDetector_Request__Sequence__copy(
  const interfaces__srv__FaceDetector_Request__Sequence * input,
  interfaces__srv__FaceDetector_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__FaceDetector_Request);
    interfaces__srv__FaceDetector_Request * data =
      (interfaces__srv__FaceDetector_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__FaceDetector_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__srv__FaceDetector_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__FaceDetector_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `top`
// Member `right`
// Member `bottem`
// Member `left`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__srv__FaceDetector_Response__init(interfaces__srv__FaceDetector_Response * msg)
{
  if (!msg) {
    return false;
  }
  // number
  // use_time
  // top
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->top, 0)) {
    interfaces__srv__FaceDetector_Response__fini(msg);
    return false;
  }
  // right
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->right, 0)) {
    interfaces__srv__FaceDetector_Response__fini(msg);
    return false;
  }
  // bottem
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->bottem, 0)) {
    interfaces__srv__FaceDetector_Response__fini(msg);
    return false;
  }
  // left
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->left, 0)) {
    interfaces__srv__FaceDetector_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__FaceDetector_Response__fini(interfaces__srv__FaceDetector_Response * msg)
{
  if (!msg) {
    return;
  }
  // number
  // use_time
  // top
  rosidl_runtime_c__int32__Sequence__fini(&msg->top);
  // right
  rosidl_runtime_c__int32__Sequence__fini(&msg->right);
  // bottem
  rosidl_runtime_c__int32__Sequence__fini(&msg->bottem);
  // left
  rosidl_runtime_c__int32__Sequence__fini(&msg->left);
}

bool
interfaces__srv__FaceDetector_Response__are_equal(const interfaces__srv__FaceDetector_Response * lhs, const interfaces__srv__FaceDetector_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // use_time
  if (lhs->use_time != rhs->use_time) {
    return false;
  }
  // top
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->top), &(rhs->top)))
  {
    return false;
  }
  // right
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  // bottem
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->bottem), &(rhs->bottem)))
  {
    return false;
  }
  // left
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  return true;
}

bool
interfaces__srv__FaceDetector_Response__copy(
  const interfaces__srv__FaceDetector_Response * input,
  interfaces__srv__FaceDetector_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  output->number = input->number;
  // use_time
  output->use_time = input->use_time;
  // top
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->top), &(output->top)))
  {
    return false;
  }
  // right
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  // bottem
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->bottem), &(output->bottem)))
  {
    return false;
  }
  // left
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  return true;
}

interfaces__srv__FaceDetector_Response *
interfaces__srv__FaceDetector_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__FaceDetector_Response * msg = (interfaces__srv__FaceDetector_Response *)allocator.allocate(sizeof(interfaces__srv__FaceDetector_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__FaceDetector_Response));
  bool success = interfaces__srv__FaceDetector_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__FaceDetector_Response__destroy(interfaces__srv__FaceDetector_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__FaceDetector_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__FaceDetector_Response__Sequence__init(interfaces__srv__FaceDetector_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__FaceDetector_Response * data = NULL;

  if (size) {
    data = (interfaces__srv__FaceDetector_Response *)allocator.zero_allocate(size, sizeof(interfaces__srv__FaceDetector_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__FaceDetector_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__FaceDetector_Response__fini(&data[i - 1]);
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
interfaces__srv__FaceDetector_Response__Sequence__fini(interfaces__srv__FaceDetector_Response__Sequence * array)
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
      interfaces__srv__FaceDetector_Response__fini(&array->data[i]);
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

interfaces__srv__FaceDetector_Response__Sequence *
interfaces__srv__FaceDetector_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__FaceDetector_Response__Sequence * array = (interfaces__srv__FaceDetector_Response__Sequence *)allocator.allocate(sizeof(interfaces__srv__FaceDetector_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__FaceDetector_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__FaceDetector_Response__Sequence__destroy(interfaces__srv__FaceDetector_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__FaceDetector_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__FaceDetector_Response__Sequence__are_equal(const interfaces__srv__FaceDetector_Response__Sequence * lhs, const interfaces__srv__FaceDetector_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__FaceDetector_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__FaceDetector_Response__Sequence__copy(
  const interfaces__srv__FaceDetector_Response__Sequence * input,
  interfaces__srv__FaceDetector_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__FaceDetector_Response);
    interfaces__srv__FaceDetector_Response * data =
      (interfaces__srv__FaceDetector_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__FaceDetector_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__srv__FaceDetector_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__FaceDetector_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
