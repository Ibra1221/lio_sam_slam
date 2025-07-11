// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lio_sam/srv/save_map.h"


#ifndef LIO_SAM__SRV__DETAIL__SAVE_MAP__FUNCTIONS_H_
#define LIO_SAM__SRV__DETAIL__SAVE_MAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "lio_sam/msg/rosidl_generator_c__visibility_control.h"

#include "lio_sam/srv/detail/save_map__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SaveMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lio_sam__srv__SaveMap_Request
 * )) before or use
 * lio_sam__srv__SaveMap_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Request__init(lio_sam__srv__SaveMap_Request * msg);

/// Finalize srv/SaveMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Request__fini(lio_sam__srv__SaveMap_Request * msg);

/// Create srv/SaveMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lio_sam__srv__SaveMap_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
lio_sam__srv__SaveMap_Request *
lio_sam__srv__SaveMap_Request__create(void);

/// Destroy srv/SaveMap message.
/**
 * It calls
 * lio_sam__srv__SaveMap_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Request__destroy(lio_sam__srv__SaveMap_Request * msg);

/// Check for srv/SaveMap message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Request__are_equal(const lio_sam__srv__SaveMap_Request * lhs, const lio_sam__srv__SaveMap_Request * rhs);

/// Copy a srv/SaveMap message.
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
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Request__copy(
  const lio_sam__srv__SaveMap_Request * input,
  lio_sam__srv__SaveMap_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SaveMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * lio_sam__srv__SaveMap_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Request__Sequence__init(lio_sam__srv__SaveMap_Request__Sequence * array, size_t size);

/// Finalize array of srv/SaveMap messages.
/**
 * It calls
 * lio_sam__srv__SaveMap_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Request__Sequence__fini(lio_sam__srv__SaveMap_Request__Sequence * array);

/// Create array of srv/SaveMap messages.
/**
 * It allocates the memory for the array and calls
 * lio_sam__srv__SaveMap_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
lio_sam__srv__SaveMap_Request__Sequence *
lio_sam__srv__SaveMap_Request__Sequence__create(size_t size);

/// Destroy array of srv/SaveMap messages.
/**
 * It calls
 * lio_sam__srv__SaveMap_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Request__Sequence__destroy(lio_sam__srv__SaveMap_Request__Sequence * array);

/// Check for srv/SaveMap message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Request__Sequence__are_equal(const lio_sam__srv__SaveMap_Request__Sequence * lhs, const lio_sam__srv__SaveMap_Request__Sequence * rhs);

/// Copy an array of srv/SaveMap messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Request__Sequence__copy(
  const lio_sam__srv__SaveMap_Request__Sequence * input,
  lio_sam__srv__SaveMap_Request__Sequence * output);

/// Initialize srv/SaveMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lio_sam__srv__SaveMap_Response
 * )) before or use
 * lio_sam__srv__SaveMap_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Response__init(lio_sam__srv__SaveMap_Response * msg);

/// Finalize srv/SaveMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Response__fini(lio_sam__srv__SaveMap_Response * msg);

/// Create srv/SaveMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lio_sam__srv__SaveMap_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
lio_sam__srv__SaveMap_Response *
lio_sam__srv__SaveMap_Response__create(void);

/// Destroy srv/SaveMap message.
/**
 * It calls
 * lio_sam__srv__SaveMap_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Response__destroy(lio_sam__srv__SaveMap_Response * msg);

/// Check for srv/SaveMap message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Response__are_equal(const lio_sam__srv__SaveMap_Response * lhs, const lio_sam__srv__SaveMap_Response * rhs);

/// Copy a srv/SaveMap message.
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
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Response__copy(
  const lio_sam__srv__SaveMap_Response * input,
  lio_sam__srv__SaveMap_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SaveMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * lio_sam__srv__SaveMap_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Response__Sequence__init(lio_sam__srv__SaveMap_Response__Sequence * array, size_t size);

/// Finalize array of srv/SaveMap messages.
/**
 * It calls
 * lio_sam__srv__SaveMap_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Response__Sequence__fini(lio_sam__srv__SaveMap_Response__Sequence * array);

/// Create array of srv/SaveMap messages.
/**
 * It allocates the memory for the array and calls
 * lio_sam__srv__SaveMap_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
lio_sam__srv__SaveMap_Response__Sequence *
lio_sam__srv__SaveMap_Response__Sequence__create(size_t size);

/// Destroy array of srv/SaveMap messages.
/**
 * It calls
 * lio_sam__srv__SaveMap_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Response__Sequence__destroy(lio_sam__srv__SaveMap_Response__Sequence * array);

/// Check for srv/SaveMap message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Response__Sequence__are_equal(const lio_sam__srv__SaveMap_Response__Sequence * lhs, const lio_sam__srv__SaveMap_Response__Sequence * rhs);

/// Copy an array of srv/SaveMap messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Response__Sequence__copy(
  const lio_sam__srv__SaveMap_Response__Sequence * input,
  lio_sam__srv__SaveMap_Response__Sequence * output);

/// Initialize srv/SaveMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lio_sam__srv__SaveMap_Event
 * )) before or use
 * lio_sam__srv__SaveMap_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Event__init(lio_sam__srv__SaveMap_Event * msg);

/// Finalize srv/SaveMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Event__fini(lio_sam__srv__SaveMap_Event * msg);

/// Create srv/SaveMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lio_sam__srv__SaveMap_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
lio_sam__srv__SaveMap_Event *
lio_sam__srv__SaveMap_Event__create(void);

/// Destroy srv/SaveMap message.
/**
 * It calls
 * lio_sam__srv__SaveMap_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Event__destroy(lio_sam__srv__SaveMap_Event * msg);

/// Check for srv/SaveMap message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Event__are_equal(const lio_sam__srv__SaveMap_Event * lhs, const lio_sam__srv__SaveMap_Event * rhs);

/// Copy a srv/SaveMap message.
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
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Event__copy(
  const lio_sam__srv__SaveMap_Event * input,
  lio_sam__srv__SaveMap_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SaveMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * lio_sam__srv__SaveMap_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Event__Sequence__init(lio_sam__srv__SaveMap_Event__Sequence * array, size_t size);

/// Finalize array of srv/SaveMap messages.
/**
 * It calls
 * lio_sam__srv__SaveMap_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Event__Sequence__fini(lio_sam__srv__SaveMap_Event__Sequence * array);

/// Create array of srv/SaveMap messages.
/**
 * It allocates the memory for the array and calls
 * lio_sam__srv__SaveMap_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
lio_sam__srv__SaveMap_Event__Sequence *
lio_sam__srv__SaveMap_Event__Sequence__create(size_t size);

/// Destroy array of srv/SaveMap messages.
/**
 * It calls
 * lio_sam__srv__SaveMap_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
void
lio_sam__srv__SaveMap_Event__Sequence__destroy(lio_sam__srv__SaveMap_Event__Sequence * array);

/// Check for srv/SaveMap message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Event__Sequence__are_equal(const lio_sam__srv__SaveMap_Event__Sequence * lhs, const lio_sam__srv__SaveMap_Event__Sequence * rhs);

/// Copy an array of srv/SaveMap messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lio_sam
bool
lio_sam__srv__SaveMap_Event__Sequence__copy(
  const lio_sam__srv__SaveMap_Event__Sequence * input,
  lio_sam__srv__SaveMap_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // LIO_SAM__SRV__DETAIL__SAVE_MAP__FUNCTIONS_H_
