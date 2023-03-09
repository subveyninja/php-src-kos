cmake_minimum_required (VERSION 3.10)

project(php LANGUAGES C CXX)
set (CMAKE_C_STANDARD 11)

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
add_subdirectory(server)
if (KOS)
	add_subdirectory(einit)
endif()
