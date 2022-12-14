// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef REAL_PARSON_H
#define REAL_PARSON_H

#define json_value_init_object              real_json_value_init_object
#define json_parse_string                   real_json_parse_string
#define json_serialize_to_string            real_json_serialize_to_string
#define json_serialize_to_string_pretty     real_json_serialize_to_string_pretty
#define json_free_serialized_string         real_json_free_serialized_string
#define json_object_get_string              real_json_object_get_string
#define json_object_get_number              real_json_object_get_number
#define json_object_dotget_string           real_json_object_dotget_string
#define json_object_set_string              real_json_object_set_string
#define json_object_dotset_value            real_json_object_dotset_value
#define json_object_dotset_string           real_json_object_dotset_string
#define json_object_clear                   real_json_object_clear
#define json_array_get_object               real_json_array_get_object
#define json_array_get_array                real_json_array_get_array
#define json_array_get_count                real_json_array_get_count
#define json_array_clear                    real_json_array_clear
#define json_value_free                     real_json_value_free
#define json_value_get_object               real_json_value_get_object
#define json_value_get_array                real_json_value_get_array
#define json_value_get_string               real_json_value_get_string
#define json_object                         real_json_object
#define json_object_set_value               real_json_object_set_value
#define json_object_dotget_object           real_json_object_dotget_object
#define json_object_get_count               real_json_object_get_count
#define json_object_get_value_at            real_json_object_get_value_at
#define json_object_set_null                real_json_object_set_null
#define json_value_init_array               real_json_value_init_array
#define json_array_append_string            real_json_array_append_string
#define json_object_get_object              real_json_object_get_object
#define json_object_dotget_number           real_json_object_dotget_number
#define json_object_get_value               real_json_object_get_value
#define json_object_get_name                real_json_object_get_name
#define json_object_dotget_value            real_json_object_dotget_value
#define json_object_remove                  real_json_object_remove
#include "parson.h"

#ifndef COMPILING_REAL_PARSON_C
#undef json_value_init_object
#undef json_parse_string
#undef json_serialize_to_string
#undef json_serialize_to_string_pretty
#undef json_free_serialized_string
#undef json_object_get_string
#undef json_object_get_number
#undef json_object_dotget_string
#undef json_object_set_string
#undef json_object_dotset_value
#undef json_object_dotset_string
#undef json_object_clear
#undef json_array_get_object
#undef json_array_get_array
#undef json_array_get_count
#undef json_array_clear
#undef json_value_free
#undef json_value_get_object
#undef json_value_get_array
#undef json_value_get_string
#undef json_object
#undef json_object_set_value
#undef json_object_dotget_object
#undef json_object_get_count
#undef json_object_get_value_at
#undef json_object_set_null
#undef json_value_init_array
#undef json_array_append_string
#undef json_object_get_object
#undef json_object_dotget_number
#undef json_object_get_value
#undef json_object_get_name
#undef json_object_dotget_value
#undef json_object_remove
#endif

#endif