// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__FACE_DETECTOR__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__FACE_DETECTOR__BUILDER_HPP_

#include "interfaces/srv/detail/face_detector__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDetector_Request_image
{
public:
  Init_FaceDetector_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::FaceDetector_Request image(::interfaces::srv::FaceDetector_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::FaceDetector_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::FaceDetector_Request>()
{
  return interfaces::srv::builder::Init_FaceDetector_Request_image();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDetector_Response_left
{
public:
  explicit Init_FaceDetector_Response_left(::interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::FaceDetector_Response left(::interfaces::srv::FaceDetector_Response::_left_type arg)
  {
    msg_.left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_bottem
{
public:
  explicit Init_FaceDetector_Response_bottem(::interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_left bottem(::interfaces::srv::FaceDetector_Response::_bottem_type arg)
  {
    msg_.bottem = std::move(arg);
    return Init_FaceDetector_Response_left(msg_);
  }

private:
  ::interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_right
{
public:
  explicit Init_FaceDetector_Response_right(::interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_bottem right(::interfaces::srv::FaceDetector_Response::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_FaceDetector_Response_bottem(msg_);
  }

private:
  ::interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_top
{
public:
  explicit Init_FaceDetector_Response_top(::interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_right top(::interfaces::srv::FaceDetector_Response::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_FaceDetector_Response_right(msg_);
  }

private:
  ::interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_use_time
{
public:
  explicit Init_FaceDetector_Response_use_time(::interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_top use_time(::interfaces::srv::FaceDetector_Response::_use_time_type arg)
  {
    msg_.use_time = std::move(arg);
    return Init_FaceDetector_Response_top(msg_);
  }

private:
  ::interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_number
{
public:
  Init_FaceDetector_Response_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceDetector_Response_use_time number(::interfaces::srv::FaceDetector_Response::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_FaceDetector_Response_use_time(msg_);
  }

private:
  ::interfaces::srv::FaceDetector_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::FaceDetector_Response>()
{
  return interfaces::srv::builder::Init_FaceDetector_Response_number();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__FACE_DETECTOR__BUILDER_HPP_
