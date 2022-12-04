// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from learning_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__FUNCTIONS_H_
#define LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "learning_interface/msg/rosidl_generator_c__visibility_control.h"

#include "learning_interface/msg/detail/object_position__struct.h"

/// Initialize msg/ObjectPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * learning_interface__msg__ObjectPosition
 * )) before or use
 * learning_interface__msg__ObjectPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
bool
learning_interface__msg__ObjectPosition__init(learning_interface__msg__ObjectPosition * msg);

/// Finalize msg/ObjectPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
void
learning_interface__msg__ObjectPosition__fini(learning_interface__msg__ObjectPosition * msg);

/// Create msg/ObjectPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * learning_interface__msg__ObjectPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
learning_interface__msg__ObjectPosition *
learning_interface__msg__ObjectPosition__create();

/// Destroy msg/ObjectPosition message.
/**
 * It calls
 * learning_interface__msg__ObjectPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
void
learning_interface__msg__ObjectPosition__destroy(learning_interface__msg__ObjectPosition * msg);

/// Check for msg/ObjectPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
bool
learning_interface__msg__ObjectPosition__are_equal(const learning_interface__msg__ObjectPosition * lhs, const learning_interface__msg__ObjectPosition * rhs);

/// Copy a msg/ObjectPosition message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
bool
learning_interface__msg__ObjectPosition__copy(
  const learning_interface__msg__ObjectPosition * input,
  learning_interface__msg__ObjectPosition * output);

/// Initialize array of msg/ObjectPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * learning_interface__msg__ObjectPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
bool
learning_interface__msg__ObjectPosition__Sequence__init(learning_interface__msg__ObjectPosition__Sequence * array, size_t size);

/// Finalize array of msg/ObjectPosition messages.
/**
 * It calls
 * learning_interface__msg__ObjectPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
void
learning_interface__msg__ObjectPosition__Sequence__fini(learning_interface__msg__ObjectPosition__Sequence * array);

/// Create array of msg/ObjectPosition messages.
/**
 * It allocates the memory for the array and calls
 * learning_interface__msg__ObjectPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
learning_interface__msg__ObjectPosition__Sequence *
learning_interface__msg__ObjectPosition__Sequence__create(size_t size);

/// Destroy array of msg/ObjectPosition messages.
/**
 * It calls
 * learning_interface__msg__ObjectPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
void
learning_interface__msg__ObjectPosition__Sequence__destroy(learning_interface__msg__ObjectPosition__Sequence * array);

/// Check for msg/ObjectPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
bool
learning_interface__msg__ObjectPosition__Sequence__are_equal(const learning_interface__msg__ObjectPosition__Sequence * lhs, const learning_interface__msg__ObjectPosition__Sequence * rhs);

/// Copy an array of msg/ObjectPosition messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_interface
bool
learning_interface__msg__ObjectPosition__Sequence__copy(
  const learning_interface__msg__ObjectPosition__Sequence * input,
  learning_interface__msg__ObjectPosition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__FUNCTIONS_H_
