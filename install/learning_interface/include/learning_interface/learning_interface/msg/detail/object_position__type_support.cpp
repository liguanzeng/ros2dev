// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from learning_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "learning_interface/msg/detail/object_position__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace learning_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) learning_interface::msg::ObjectPosition(_init);
}

void ObjectPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<learning_interface::msg::ObjectPosition *>(message_memory);
  typed_message->~ObjectPosition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectPosition_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface::msg::ObjectPosition, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface::msg::ObjectPosition, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectPosition_message_members = {
  "learning_interface::msg",  // message namespace
  "ObjectPosition",  // message name
  2,  // number of fields
  sizeof(learning_interface::msg::ObjectPosition),
  ObjectPosition_message_member_array,  // message members
  ObjectPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectPosition_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace learning_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<learning_interface::msg::ObjectPosition>()
{
  return &::learning_interface::msg::rosidl_typesupport_introspection_cpp::ObjectPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learning_interface, msg, ObjectPosition)() {
  return &::learning_interface::msg::rosidl_typesupport_introspection_cpp::ObjectPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
