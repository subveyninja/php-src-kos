add_subdirectory(ext)
add_subdirectory(TSRM)
add_subdirectory(main)
add_subdirectory(Zend)

set(PHP_EXT_MODULES
        ext_xmlwriter_t
        ext_xmlreader_t
        ext_xml_t
        ext_tokenizer_t
        ext_spl_t
        ext_simplexml_t
        ext_session_t
        ext_reflection_t
        ext_posix_t
        ext_phar_t
        ext_pdo_sqlite_t
        ext_pdo_t
        ext_json_t
        ext_iconv_t
        ext_hash_t
        ext_filter_t
        ext_fileinfo_t
        ext_dom_t
        ext_ctype_t
        ext_sqlite3_t
        ext_pcre_t
        ext_openssl_t
        ext_libxml_t
        ext_date_t
        ext_standard_t
        main_t
        main_streams_t
        Zend_t
        PARENT_SCOPE
)

set(_THIRD_PARTY_LIBS
        ssl
        crypto
        xml2
        sqlite3
        pthread
        m
)
if (NOT KOS)
    list(APPEND _THIRD_PARTY_LIBS dl)
endif ()

set(PHP_THIRD_PARTY_LIBS ${_THIRD_PARTY_LIBS} PARENT_SCOPE)
