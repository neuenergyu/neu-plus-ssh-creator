#Copyright (c) Microsoft. All rights reserved.
#Licensed under the MIT license. See LICENSE file in the project root for full license information.

cmake_minimum_required (VERSION 3.5)

#these are the include folders
#the following "set" statetement exports across the project a global variable called SAL_INC_FOLDER that expands to whatever needs to included when using sal header
if(WIN32)
	#nothing use the default
	set(SAL_INC_FOLDER "" CACHE INTERNAL "this is what needs to be included if using sal header" FORCE)
elseif(UNIX)
	set(SAL_INC_FOLDER ${CMAKE_CURRENT_LIST_DIR}/inc CACHE INTERNAL "this is what needs to be included if using sal header" FORCE)
endif()

if(NOT WIN32)
	add_files_to_install("./testtools/sal/inc/sal.h;./testtools/sal/inc/no_sal2.h")
endif()
