// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lio_sam/srv/detail/save_map__functions.h"
#include "lio_sam/srv/detail/save_map__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lio_sam
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveMap_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveMap_Request_type_support_ids_t;

static const _SaveMap_Request_type_support_ids_t _SaveMap_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveMap_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveMap_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveMap_Request_type_support_symbol_names_t _SaveMap_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lio_sam, srv, SaveMap_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lio_sam, srv, SaveMap_Request)),
  }
};

typedef struct _SaveMap_Request_type_support_data_t
{
  void * data[2];
} _SaveMap_Request_type_support_data_t;

static _SaveMap_Request_type_support_data_t _SaveMap_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveMap_Request_message_typesupport_map = {
  2,
  "lio_sam",
  &_SaveMap_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SaveMap_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SaveMap_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveMap_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveMap_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &lio_sam__srv__SaveMap_Request__get_type_hash,
  &lio_sam__srv__SaveMap_Request__get_type_description,
  &lio_sam__srv__SaveMap_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lio_sam

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lio_sam::srv::SaveMap_Request>()
{
  return &::lio_sam::srv::rosidl_typesupport_cpp::SaveMap_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lio_sam, srv, SaveMap_Request)() {
  return get_message_type_support_handle<lio_sam::srv::SaveMap_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lio_sam/srv/detail/save_map__functions.h"
// already included above
// #include "lio_sam/srv/detail/save_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lio_sam
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveMap_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveMap_Response_type_support_ids_t;

static const _SaveMap_Response_type_support_ids_t _SaveMap_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveMap_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveMap_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveMap_Response_type_support_symbol_names_t _SaveMap_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lio_sam, srv, SaveMap_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lio_sam, srv, SaveMap_Response)),
  }
};

typedef struct _SaveMap_Response_type_support_data_t
{
  void * data[2];
} _SaveMap_Response_type_support_data_t;

static _SaveMap_Response_type_support_data_t _SaveMap_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveMap_Response_message_typesupport_map = {
  2,
  "lio_sam",
  &_SaveMap_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SaveMap_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SaveMap_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveMap_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveMap_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &lio_sam__srv__SaveMap_Response__get_type_hash,
  &lio_sam__srv__SaveMap_Response__get_type_description,
  &lio_sam__srv__SaveMap_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lio_sam

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lio_sam::srv::SaveMap_Response>()
{
  return &::lio_sam::srv::rosidl_typesupport_cpp::SaveMap_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lio_sam, srv, SaveMap_Response)() {
  return get_message_type_support_handle<lio_sam::srv::SaveMap_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lio_sam/srv/detail/save_map__functions.h"
// already included above
// #include "lio_sam/srv/detail/save_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lio_sam
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveMap_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveMap_Event_type_support_ids_t;

static const _SaveMap_Event_type_support_ids_t _SaveMap_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveMap_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveMap_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveMap_Event_type_support_symbol_names_t _SaveMap_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lio_sam, srv, SaveMap_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lio_sam, srv, SaveMap_Event)),
  }
};

typedef struct _SaveMap_Event_type_support_data_t
{
  void * data[2];
} _SaveMap_Event_type_support_data_t;

static _SaveMap_Event_type_support_data_t _SaveMap_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveMap_Event_message_typesupport_map = {
  2,
  "lio_sam",
  &_SaveMap_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SaveMap_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SaveMap_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveMap_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveMap_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &lio_sam__srv__SaveMap_Event__get_type_hash,
  &lio_sam__srv__SaveMap_Event__get_type_description,
  &lio_sam__srv__SaveMap_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lio_sam

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lio_sam::srv::SaveMap_Event>()
{
  return &::lio_sam::srv::rosidl_typesupport_cpp::SaveMap_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lio_sam, srv, SaveMap_Event)() {
  return get_message_type_support_handle<lio_sam::srv::SaveMap_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "lio_sam/srv/detail/save_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lio_sam
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveMap_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveMap_type_support_ids_t;

static const _SaveMap_type_support_ids_t _SaveMap_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveMap_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveMap_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveMap_type_support_symbol_names_t _SaveMap_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lio_sam, srv, SaveMap)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lio_sam, srv, SaveMap)),
  }
};

typedef struct _SaveMap_type_support_data_t
{
  void * data[2];
} _SaveMap_type_support_data_t;

static _SaveMap_type_support_data_t _SaveMap_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveMap_service_typesupport_map = {
  2,
  "lio_sam",
  &_SaveMap_service_typesupport_ids.typesupport_identifier[0],
  &_SaveMap_service_typesupport_symbol_names.symbol_name[0],
  &_SaveMap_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SaveMap_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveMap_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<lio_sam::srv::SaveMap_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<lio_sam::srv::SaveMap_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<lio_sam::srv::SaveMap_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<lio_sam::srv::SaveMap>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<lio_sam::srv::SaveMap>,
  &lio_sam__srv__SaveMap__get_type_hash,
  &lio_sam__srv__SaveMap__get_type_description,
  &lio_sam__srv__SaveMap__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lio_sam

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<lio_sam::srv::SaveMap>()
{
  return &::lio_sam::srv::rosidl_typesupport_cpp::SaveMap_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, lio_sam, srv, SaveMap)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<lio_sam::srv::SaveMap>();
}

#ifdef __cplusplus
}
#endif
