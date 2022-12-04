// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from learning_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "learning_interface/msg/detail/object_position__rosidl_typesupport_introspection_c.h"
#include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "learning_interface/msg/detail/object_position__functions.h"
#include "learning_interface/msg/detail/object_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_interface__msg__ObjectPosition__init(message_memory);
}

void learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_fini_function(void * message_memory)
{
  learning_interface__msg__ObjectPosition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__msg__ObjectPosition, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__msg__ObjectPosition, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_members = {
  "learning_interface__msg",  // message namespace
  "ObjectPosition",  // message name
  2,  // number of fields
  sizeof(learning_interface__msg__ObjectPosition),
  learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_member_array,  // message members
  learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_type_support_handle = {
  0,
  &learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, msg, ObjectPosition)() {
  if (!learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_type_support_handle.typesupport_identifier) {
    learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_interface__msg__ObjectPosition__rosidl_typesupport_introspection_c__ObjectPosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
