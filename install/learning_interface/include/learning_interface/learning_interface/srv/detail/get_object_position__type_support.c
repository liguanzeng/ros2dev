// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"
#include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "learning_interface/srv/detail/get_object_position__functions.h"
#include "learning_interface/srv/detail/get_object_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_interface__srv__GetObjectPosition_Request__init(message_memory);
}

void learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_fini_function(void * message_memory)
{
  learning_interface__srv__GetObjectPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_member_array[1] = {
  {
    "get",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Request, get),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_members = {
  "learning_interface__srv",  // message namespace
  "GetObjectPosition_Request",  // message name
  1,  // number of fields
  sizeof(learning_interface__srv__GetObjectPosition_Request),
  learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_member_array,  // message members
  learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle = {
  0,
  &learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Request)() {
  if (!learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle.typesupport_identifier) {
    learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__functions.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_interface__srv__GetObjectPosition_Response__init(message_memory);
}

void learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_fini_function(void * message_memory)
{
  learning_interface__srv__GetObjectPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Response, x),  // bytes offset in struct
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
    offsetof(learning_interface__srv__GetObjectPosition_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_members = {
  "learning_interface__srv",  // message namespace
  "GetObjectPosition_Response",  // message name
  2,  // number of fields
  sizeof(learning_interface__srv__GetObjectPosition_Response),
  learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_member_array,  // message members
  learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle = {
  0,
  &learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Response)() {
  if (!learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle.typesupport_identifier) {
    learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_members = {
  "learning_interface__srv",  // service namespace
  "GetObjectPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle,
  NULL  // response message
  // learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle = {
  0,
  &learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition)() {
  if (!learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle.typesupport_identifier) {
    learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Response)()->data;
  }

  return &learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle;
}
