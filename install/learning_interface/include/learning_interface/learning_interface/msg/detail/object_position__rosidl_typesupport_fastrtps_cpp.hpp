// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from learning_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "learning_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "learning_interface/msg/detail/object_position__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace learning_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_interface
cdr_serialize(
  const learning_interface::msg::ObjectPosition & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  learning_interface::msg::ObjectPosition & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_interface
get_serialized_size(
  const learning_interface::msg::ObjectPosition & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_interface
max_serialized_size_ObjectPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace learning_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, learning_interface, msg, ObjectPosition)();

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
