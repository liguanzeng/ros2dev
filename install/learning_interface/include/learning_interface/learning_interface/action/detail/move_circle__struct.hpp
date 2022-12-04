// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from learning_interface:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_HPP_
#define LEARNING_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_Goal __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_Goal __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_Goal_
{
  using Type = MoveCircle_Goal_<ContainerAllocator>;

  explicit MoveCircle_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  explicit MoveCircle_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_Goal
    std::shared_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_Goal
    std::shared_ptr<learning_interface::action::MoveCircle_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_Goal_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_Goal_

// alias to use template instance with default allocator
using MoveCircle_Goal =
  learning_interface::action::MoveCircle_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface


#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_Result __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_Result __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_Result_
{
  using Type = MoveCircle_Result_<ContainerAllocator>;

  explicit MoveCircle_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finish = false;
    }
  }

  explicit MoveCircle_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finish = false;
    }
  }

  // field types and members
  using _finish_type =
    bool;
  _finish_type finish;

  // setters for named parameter idiom
  Type & set__finish(
    const bool & _arg)
  {
    this->finish = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_Result
    std::shared_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_Result
    std::shared_ptr<learning_interface::action::MoveCircle_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_Result_ & other) const
  {
    if (this->finish != other.finish) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_Result_

// alias to use template instance with default allocator
using MoveCircle_Result =
  learning_interface::action::MoveCircle_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface


#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_Feedback __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_Feedback_
{
  using Type = MoveCircle_Feedback_<ContainerAllocator>;

  explicit MoveCircle_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0l;
    }
  }

  explicit MoveCircle_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0l;
    }
  }

  // field types and members
  using _state_type =
    int32_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_Feedback
    std::shared_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_Feedback
    std::shared_ptr<learning_interface::action::MoveCircle_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_Feedback_

// alias to use template instance with default allocator
using MoveCircle_Feedback =
  learning_interface::action::MoveCircle_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "learning_interface/action/detail/move_circle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Request __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_SendGoal_Request_
{
  using Type = MoveCircle_SendGoal_Request_<ContainerAllocator>;

  explicit MoveCircle_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveCircle_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    learning_interface::action::MoveCircle_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const learning_interface::action::MoveCircle_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Request
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Request
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_SendGoal_Request_

// alias to use template instance with default allocator
using MoveCircle_SendGoal_Request =
  learning_interface::action::MoveCircle_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Response __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_SendGoal_Response_
{
  using Type = MoveCircle_SendGoal_Response_<ContainerAllocator>;

  explicit MoveCircle_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveCircle_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Response
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_SendGoal_Response
    std::shared_ptr<learning_interface::action::MoveCircle_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_SendGoal_Response_

// alias to use template instance with default allocator
using MoveCircle_SendGoal_Response =
  learning_interface::action::MoveCircle_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface

namespace learning_interface
{

namespace action
{

struct MoveCircle_SendGoal
{
  using Request = learning_interface::action::MoveCircle_SendGoal_Request;
  using Response = learning_interface::action::MoveCircle_SendGoal_Response;
};

}  // namespace action

}  // namespace learning_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_GetResult_Request __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_GetResult_Request_
{
  using Type = MoveCircle_GetResult_Request_<ContainerAllocator>;

  explicit MoveCircle_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveCircle_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_GetResult_Request
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_GetResult_Request
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_GetResult_Request_

// alias to use template instance with default allocator
using MoveCircle_GetResult_Request =
  learning_interface::action::MoveCircle_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "learning_interface/action/detail/move_circle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_GetResult_Response __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_GetResult_Response_
{
  using Type = MoveCircle_GetResult_Response_<ContainerAllocator>;

  explicit MoveCircle_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveCircle_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    learning_interface::action::MoveCircle_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const learning_interface::action::MoveCircle_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_GetResult_Response
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_GetResult_Response
    std::shared_ptr<learning_interface::action::MoveCircle_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_GetResult_Response_

// alias to use template instance with default allocator
using MoveCircle_GetResult_Response =
  learning_interface::action::MoveCircle_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface

namespace learning_interface
{

namespace action
{

struct MoveCircle_GetResult
{
  using Request = learning_interface::action::MoveCircle_GetResult_Request;
  using Response = learning_interface::action::MoveCircle_GetResult_Response;
};

}  // namespace action

}  // namespace learning_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "learning_interface/action/detail/move_circle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__learning_interface__action__MoveCircle_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__learning_interface__action__MoveCircle_FeedbackMessage __declspec(deprecated)
#endif

namespace learning_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCircle_FeedbackMessage_
{
  using Type = MoveCircle_FeedbackMessage_<ContainerAllocator>;

  explicit MoveCircle_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveCircle_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    learning_interface::action::MoveCircle_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const learning_interface::action::MoveCircle_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_interface__action__MoveCircle_FeedbackMessage
    std::shared_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_interface__action__MoveCircle_FeedbackMessage
    std::shared_ptr<learning_interface::action::MoveCircle_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCircle_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCircle_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCircle_FeedbackMessage_

// alias to use template instance with default allocator
using MoveCircle_FeedbackMessage =
  learning_interface::action::MoveCircle_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace learning_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace learning_interface
{

namespace action
{

struct MoveCircle
{
  /// The goal message defined in the action definition.
  using Goal = learning_interface::action::MoveCircle_Goal;
  /// The result message defined in the action definition.
  using Result = learning_interface::action::MoveCircle_Result;
  /// The feedback message defined in the action definition.
  using Feedback = learning_interface::action::MoveCircle_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = learning_interface::action::MoveCircle_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = learning_interface::action::MoveCircle_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = learning_interface::action::MoveCircle_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveCircle MoveCircle;

}  // namespace action

}  // namespace learning_interface

#endif  // LEARNING_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_HPP_
