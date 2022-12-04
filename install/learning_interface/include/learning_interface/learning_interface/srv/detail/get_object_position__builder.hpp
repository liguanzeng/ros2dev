// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__BUILDER_HPP_
#define LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learning_interface/srv/detail/get_object_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learning_interface
{

namespace srv
{

namespace builder
{

class Init_GetObjectPosition_Request_get
{
public:
  Init_GetObjectPosition_Request_get()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::learning_interface::srv::GetObjectPosition_Request get(::learning_interface::srv::GetObjectPosition_Request::_get_type arg)
  {
    msg_.get = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_interface::srv::GetObjectPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_interface::srv::GetObjectPosition_Request>()
{
  return learning_interface::srv::builder::Init_GetObjectPosition_Request_get();
}

}  // namespace learning_interface


namespace learning_interface
{

namespace srv
{

namespace builder
{

class Init_GetObjectPosition_Response_y
{
public:
  explicit Init_GetObjectPosition_Response_y(::learning_interface::srv::GetObjectPosition_Response & msg)
  : msg_(msg)
  {}
  ::learning_interface::srv::GetObjectPosition_Response y(::learning_interface::srv::GetObjectPosition_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_interface::srv::GetObjectPosition_Response msg_;
};

class Init_GetObjectPosition_Response_x
{
public:
  Init_GetObjectPosition_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetObjectPosition_Response_y x(::learning_interface::srv::GetObjectPosition_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetObjectPosition_Response_y(msg_);
  }

private:
  ::learning_interface::srv::GetObjectPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_interface::srv::GetObjectPosition_Response>()
{
  return learning_interface::srv::builder::Init_GetObjectPosition_Response_x();
}

}  // namespace learning_interface

#endif  // LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__BUILDER_HPP_
