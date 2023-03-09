project(php)

set(TARGET_NAME Client)

set(TARGET_EDL php_client)

set(TARGET_SRC
        ${PHP_SRC_ROOT}/main/internal_functions_cli.c
        ${PHP_SRC_ROOT}/sapi/cli/php_http_parser.c
        ${PHP_SRC_ROOT}/sapi/cli/php_cli_server.c
        ${PHP_SRC_ROOT}/sapi/cli/ps_title.c
        ${PHP_SRC_ROOT}/sapi/cli/php_cli_process_title.c
        ./php_cli.c
)

set(TARGET_LIBS
        ${PHP_EXT_MODULES}
        ${PHP_THIRD_PARTY_LIBS}
        )

if (KOS)
	# Setting compilation flags.
	project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

	nk_build_edl_files (${TARGET_EDL}
	        NK_MODULE ${PROJECT_NAME}
	        EDL ${TARGET_NAME}.edl)

	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexceptions")

	add_executable(${TARGET_NAME} ${TARGET_SRC} ${EDL_FILES})

	add_dependencies(${TARGET_NAME} ${TARGET_EDL})

	target_link_libraries(${TARGET_NAME} ${TARGET_LIBS} ${vfs_CLIENT_LIB})

	# We do not need default VFS entity here, which comes from ${vfs_CLIENT_LIB}
	set_target_properties (${TARGET_NAME} PROPERTIES ${vfs_ENTITY}_REPLACEMENT "")
else ()
	add_executable(${TARGET_NAME} ${TARGET_SRC})

	if (TARGET_LIBS)
	    target_link_libraries(${TARGET_NAME} ${TARGET_LIBS})
	endif ()
endif ()

target_include_directories(
        ${TARGET_NAME}
        PRIVATE
        ${PHP_SRC_ROOT}/sapi/cli
        ${PHP_SRC_ROOT}/ext/standard
)

target_compile_definitions(
        ${TARGET_NAME}
        PRIVATE
        ZEND_ENABLE_STATIC_TSRMLS_CACHE=1
        ZEND_SIGNALS
)

set(TEST_RESOURCES "${PHP_SRC_ROOT}/kos/tests/resources/hdd/")

if (KOS)
    set(TESTS_ROOT "/")
else ()
    set(TESTS_ROOT ${TEST_RESOURCES})
endif ()

target_compile_definitions(${TARGET_NAME} PRIVATE
    TESTS_RUN_SCRIPT="${TESTS_ROOT}/run-tests.php"
    TESTS_PATH="${TESTS_ROOT}/tests/"
)


add_custom_target(copy_tests
		COMMAND
				python3 ${CMAKE_CURRENT_SOURCE_DIR}/copy_tests.py
						-s ${PHP_SRC_ROOT}
						-d ${TEST_RESOURCES}/tests/
						-m ${CMAKE_CURRENT_SOURCE_DIR}/test_modules.txt
)

add_dependencies(${TARGET_NAME} copy_tests)

install(TARGETS ${TARGET_NAME})
