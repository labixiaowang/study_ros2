// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__FACE_DETECTOR__STRUCT_H_
#define INTERFACES__SRV__DETAIL__FACE_DETECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/FaceDetector in the package interfaces.
typedef struct interfaces__srv__FaceDetector_Request
{
  sensor_msgs__msg__Image image;
} interfaces__srv__FaceDetector_Request;

// Struct for a sequence of interfaces__srv__FaceDetector_Request.
typedef struct interfaces__srv__FaceDetector_Request__Sequence
{
  interfaces__srv__FaceDetector_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__FaceDetector_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'top'
// Member 'right'
// Member 'bottem'
// Member 'left'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/FaceDetector in the package interfaces.
typedef struct interfaces__srv__FaceDetector_Response
{
  int16_t number;
  float use_time;
  rosidl_runtime_c__int32__Sequence top;
  rosidl_runtime_c__int32__Sequence right;
  rosidl_runtime_c__int32__Sequence bottem;
  rosidl_runtime_c__int32__Sequence left;
} interfaces__srv__FaceDetector_Response;

// Struct for a sequence of interfaces__srv__FaceDetector_Response.
typedef struct interfaces__srv__FaceDetector_Response__Sequence
{
  interfaces__srv__FaceDetector_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__FaceDetector_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__FACE_DETECTOR__STRUCT_H_
