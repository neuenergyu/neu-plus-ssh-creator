#Copyright (c) Microsoft. All rights reserved.
#Licensed under the MIT license. See LICENSE file in the project root for full license information.

#this is CMakeLists.txt for version
cmake_minimum_required (VERSION 3.5)

compileAsC99()
set(theseTestsName iothubtransport_mqtt_common_int_ut)

generate_cppunittest_wrapper(${theseTestsName})

set(${theseTestsName}_c_files
../../src/iothubtransport_mqtt_common.c
../../src/iothub_message.c
real_doublylinkedlist.c
)

set(${theseTestsName}_h_files
)

build_c_test_artifacts(${theseTestsName} OFF "tests/azure_iothub_client_tests" ADDITIONAL_LIBS aziotsharedutil)
