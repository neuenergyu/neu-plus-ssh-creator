#Copyright (c) Microsoft. All rights reserved.
#Licensed under the MIT license. See LICENSE file in the project root for full license information.

cmake_minimum_required (VERSION 3.5)

compileAsC99()

set(theseTestsName provisioning_sc_query_ut)

generate_cppunittest_wrapper(${theseTestsName})

set(${theseTestsName}_c_files
    ../../src/provisioning_sc_query.c
)

set(${theseTestsName}_h_files
)

build_c_test_artifacts(${theseTestsName} ON "tests/azure_prov_service_tests")
