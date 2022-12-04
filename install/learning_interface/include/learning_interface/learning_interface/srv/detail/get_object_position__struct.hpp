// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__STRUCT_HPP_
#define LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__learning_interface__srv__GetObjectPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__srv__GetObjectPosition_Request __declspec(deprecated)
#endif

namespace learning_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectPosition_Request_
{
  using Type = GetObjectPosition_Request_<ContainerAllocator>;

  explicit GetObjectPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get = false;
    }
  }

  explicit GetObjectPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get = false;
    }
  }

  // field types and members
  using _get_type =
    bool;
  _get_type get;

  // setters for named parameter idiom
  Type & set__get(
    const bool & _arg)
  {
    this->get = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__srv__GetObjectPosition_Request
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__srv__GetObjectPosition_Request
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectPosition_Request_ & other) const
  {
    if (this->get != other.get) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectPosition_Request_

// alias to use template instance with default allocator
using GetObjectPosition_Request =
  learning_interface::srv::GetObjectPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace learning_interface


#ifndef _WIN32
# define DEPRECATED__learning_interface__srv__GetObjectPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__srv__GetObjectPosition_Response __declspec(deprecated)
#endif

namespace learning_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectPosition_Response_
{
  using Type = GetObjectPosition_Response_<ContainerAllocator>;

  explicit GetObjectPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
    }
  }

  explicit GetObjectPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__srv__GetObjectPosition_Response
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__srv__GetObjectPosition_Response
    std::shared_ptr<learning_interface::srv::GetObjectPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectPosition_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectPosition_Response_

// alias to use template instance with default allocator
using GetObjectPosition_Response =
  learning_interface::srv::GetObjectPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace learning_interface

namespace learning_interface
{

namespace srv
{

struct GetObjectPosition
{
  using Request = learning_interface::srv::GetObjectPosition_Request;
  using Response = learning_interface::srv::GetObjectPosition_Response;
};

}  // namespace srv

}  // namespace learning_interface

#endif  // LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__STRUCT_HPP_
