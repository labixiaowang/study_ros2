// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_

#include "interfaces/srv/detail/face_detector__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::FaceDetector_Request>()
{
  return "interfaces::srv::FaceDetector_Request";
}

template<>
inline const char * name<interfaces::srv::FaceDetector_Request>()
{
  return "interfaces/srv/FaceDetector_Request";
}

template<>
struct has_fixed_size<interfaces::srv::FaceDetector_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<interfaces::srv::FaceDetector_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<interfaces::srv::FaceDetector_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::FaceDetector_Response>()
{
  return "interfaces::srv::FaceDetector_Response";
}

template<>
inline const char * name<interfaces::srv::FaceDetector_Response>()
{
  return "interfaces/srv/FaceDetector_Response";
}

template<>
struct has_fixed_size<interfaces::srv::FaceDetector_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::FaceDetector_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::FaceDetector_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::FaceDetector>()
{
  return "interfaces::srv::FaceDetector";
}

template<>
inline const char * name<interfaces::srv::FaceDetector>()
{
  return "interfaces/srv/FaceDetector";
}

template<>
struct has_fixed_size<interfaces::srv::FaceDetector>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::FaceDetector_Request>::value &&
    has_fixed_size<interfaces::srv::FaceDetector_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::FaceDetector>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::FaceDetector_Request>::value &&
    has_bounded_size<interfaces::srv::FaceDetector_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::FaceDetector>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::FaceDetector_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::FaceDetector_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_
