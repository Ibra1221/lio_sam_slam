// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice

#include "lio_sam/srv/detail/save_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x94, 0x4b, 0x37, 0x42, 0x39, 0x9e, 0x30,
      0x98, 0xcd, 0xbb, 0xbb, 0x1c, 0x05, 0xf2, 0x08,
      0x4b, 0xbd, 0xf1, 0xb9, 0x36, 0x2e, 0x07, 0xa4,
      0x0c, 0x1a, 0x7d, 0xcd, 0xd9, 0xa1, 0x45, 0x42,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x35, 0x07, 0x2e, 0x16, 0xdb, 0xd2, 0x48,
      0xf3, 0x0e, 0x39, 0x26, 0x55, 0xf7, 0xf1, 0xf7,
      0xa2, 0x51, 0xa8, 0x70, 0x32, 0x48, 0x9b, 0x9d,
      0x65, 0xbb, 0xe0, 0x37, 0xb4, 0x0d, 0x3e, 0xb7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x3f, 0x18, 0x91, 0x39, 0x48, 0x43, 0x0e,
      0xd7, 0xc6, 0xa8, 0x41, 0x96, 0x68, 0xce, 0x2c,
      0x2c, 0xe6, 0x8f, 0x7c, 0xa8, 0xd6, 0x64, 0x3d,
      0x85, 0x08, 0xbd, 0x86, 0x1c, 0xc4, 0xec, 0xb7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__srv__SaveMap_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0x22, 0x5a, 0xc8, 0xe8, 0x52, 0xa9, 0xa7,
      0xb6, 0x06, 0xd3, 0x18, 0xf2, 0x48, 0x3c, 0x5a,
      0xeb, 0x4d, 0x53, 0x6f, 0x6b, 0xe3, 0xb8, 0x27,
      0xbd, 0xd7, 0x5e, 0x4f, 0x4f, 0xe1, 0x19, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char lio_sam__srv__SaveMap__TYPE_NAME[] = "lio_sam/srv/SaveMap";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char lio_sam__srv__SaveMap_Event__TYPE_NAME[] = "lio_sam/srv/SaveMap_Event";
static char lio_sam__srv__SaveMap_Request__TYPE_NAME[] = "lio_sam/srv/SaveMap_Request";
static char lio_sam__srv__SaveMap_Response__TYPE_NAME[] = "lio_sam/srv/SaveMap_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char lio_sam__srv__SaveMap__FIELD_NAME__request_message[] = "request_message";
static char lio_sam__srv__SaveMap__FIELD_NAME__response_message[] = "response_message";
static char lio_sam__srv__SaveMap__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field lio_sam__srv__SaveMap__FIELDS[] = {
  {
    {lio_sam__srv__SaveMap__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lio_sam__srv__SaveMap_Request__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lio_sam__srv__SaveMap_Response__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lio_sam__srv__SaveMap_Event__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription lio_sam__srv__SaveMap__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Event__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Request__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Response__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lio_sam__srv__SaveMap__TYPE_NAME, 19, 19},
      {lio_sam__srv__SaveMap__FIELDS, 3, 3},
    },
    {lio_sam__srv__SaveMap__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = lio_sam__srv__SaveMap_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = lio_sam__srv__SaveMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = lio_sam__srv__SaveMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char lio_sam__srv__SaveMap_Request__FIELD_NAME__resolution[] = "resolution";
static char lio_sam__srv__SaveMap_Request__FIELD_NAME__destination[] = "destination";

static rosidl_runtime_c__type_description__Field lio_sam__srv__SaveMap_Request__FIELDS[] = {
  {
    {lio_sam__srv__SaveMap_Request__FIELD_NAME__resolution, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Request__FIELD_NAME__destination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lio_sam__srv__SaveMap_Request__TYPE_NAME, 27, 27},
      {lio_sam__srv__SaveMap_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char lio_sam__srv__SaveMap_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field lio_sam__srv__SaveMap_Response__FIELDS[] = {
  {
    {lio_sam__srv__SaveMap_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lio_sam__srv__SaveMap_Response__TYPE_NAME, 28, 28},
      {lio_sam__srv__SaveMap_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char lio_sam__srv__SaveMap_Event__FIELD_NAME__info[] = "info";
static char lio_sam__srv__SaveMap_Event__FIELD_NAME__request[] = "request";
static char lio_sam__srv__SaveMap_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field lio_sam__srv__SaveMap_Event__FIELDS[] = {
  {
    {lio_sam__srv__SaveMap_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {lio_sam__srv__SaveMap_Request__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {lio_sam__srv__SaveMap_Response__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription lio_sam__srv__SaveMap_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Request__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {lio_sam__srv__SaveMap_Response__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__srv__SaveMap_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lio_sam__srv__SaveMap_Event__TYPE_NAME, 25, 25},
      {lio_sam__srv__SaveMap_Event__FIELDS, 3, 3},
    },
    {lio_sam__srv__SaveMap_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = lio_sam__srv__SaveMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = lio_sam__srv__SaveMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 resolution\n"
  "string destination\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lio_sam__srv__SaveMap__TYPE_NAME, 19, 19},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lio_sam__srv__SaveMap_Request__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lio_sam__srv__SaveMap_Response__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
lio_sam__srv__SaveMap_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lio_sam__srv__SaveMap_Event__TYPE_NAME, 25, 25},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lio_sam__srv__SaveMap__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *lio_sam__srv__SaveMap_Event__get_individual_type_description_source(NULL);
    sources[3] = *lio_sam__srv__SaveMap_Request__get_individual_type_description_source(NULL);
    sources[4] = *lio_sam__srv__SaveMap_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lio_sam__srv__SaveMap_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lio_sam__srv__SaveMap_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__srv__SaveMap_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lio_sam__srv__SaveMap_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *lio_sam__srv__SaveMap_Request__get_individual_type_description_source(NULL);
    sources[3] = *lio_sam__srv__SaveMap_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
