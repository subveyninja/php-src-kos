cmake_minimum_required (VERSION 3.10)

project(php LANGUAGES C CXX)
set (CMAKE_C_STANDARD 11)

# KOS_TESTING enables fork() and proc_exec()
add_definitions(-DKOS_TESTING=1)

if (KOS)
	include (platform)

	initialize_platform ()
	include (platform/image)
	include (platform/nk)
	# Needed to find Qt libs from SDK
	set (CMAKE_PREFIX_PATH ${CMAKE_SYSTEM_PREFIX_PATH})

	find_package (vfs REQUIRED)
	include_directories (${vfs_INCLUDE})

	find_package (rump REQUIRED COMPONENTS DHCPCD_ENTITY)
	include_directories (${rump_INCLUDE})

	# Attach a package with VFS entities implementation
	find_package (precompiled_vfs REQUIRED)
	include_directories (${precompiled_vfs_INCLUDE})
endif ()

set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-strict-aliasing")

set(PHP_SRC_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../../)

include_directories(
		${PHP_SRC_ROOT}
		${PHP_SRC_ROOT}/main
		${PHP_SRC_ROOT}/TSRM
		${PHP_SRC_ROOT}/Zend
)

if (KOS)
	foreach(ITEM ${CMAKE_SYSTEM_PREFIX_PATH})
		include_directories(${ITEM}/include/libxml2)
	endforeach()
else ()
	include_directories(/usr/include/libxml2)
endif ()

# @todo: add dependencies for test dirs
get_directory_property(KOS_TESTING COMPILE_DEFINITIONS)
if(KOS_TESTING MATCHES "KOS_TESTING")
	set(TEST_DIRS
			Zend
			ext/ctype
			ext/date
			ext/dom
			ext/fileinfo
			# @todo: vfs segfault
			# ext/filter
			ext/hash
			ext/iconv
			ext/json
			ext/libxml
			# @todo: check it
			# ext/opcache
			ext/openssl
			ext/pcre
			ext/phar
			ext/posix
			ext/reflection
			ext/session
			ext/simplexml
			# @todo: check it
			# ext/sockets
			ext/spl
			ext/sqlite3
			ext/standard/tests/array
			ext/standard/tests/assert
			ext/standard/tests/class_object
			ext/standard/tests/crypt
			ext/standard/tests/dir
			ext/standard/tests/directory
			ext/standard/tests/file
			ext/standard/tests/filters
			ext/standard/tests/hrtime
			ext/standard/tests/image
			ext/standard/tests/math
			ext/standard/tests/network
			ext/standard/tests/password
			ext/standard/tests/random
			ext/standard/tests/serialize
			ext/standard/tests/streams
			ext/standard/tests/strings
			ext/standard/tests/time
			ext/standard/tests/url
			ext/standard/tests/versioning
			ext/tokenizer
			ext/xml
			ext/xmlreader
			ext/xmlwriter
			tests
			)

	foreach(ITEM ${TEST_DIRS})
		execute_process(COMMAND rm -rf ${CMAKE_CURRENT_SOURCE_DIR}/resources/hdd/${ITEM})
		execute_process(COMMAND sync)
		execute_process(COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/copy_tests.py
				-i ${PHP_SRC_ROOT}/${ITEM}
				-o ${CMAKE_CURRENT_SOURCE_DIR}/resources/hdd/${ITEM})
		execute_process(COMMAND sync)
	endforeach()

	execute_process(COMMAND sync)
endif()

option(KOS_HW "Build for KOS HW (default is FALSE)" OFF)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
if (KOS)
	list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/kos)
else()
	list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/linux)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(PRODUCT_RESOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/resources)
set(RESOURCES_PATH ${CMAKE_CURRENT_SOURCE_DIR}/resources)
set(PRODUCT_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(libraries)
add_subdirectory(client)

get_directory_property(KOS_TESTING COMPILE_DEFINITIONS)

if(KOS_TESTING MATCHES "KOS_TESTING")
	message(STATUS "KOS_TESTING enables fork() and proc_exec()")
	add_subdirectory(server)
endif()

if (KOS)
	add_subdirectory(einit)
endif()