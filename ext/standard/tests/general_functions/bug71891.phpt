--TEST--
Bug #71891 (header_register_callback() and register_shutdown_function())
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
--FILE--
<?php

header_register_callback(function () {
    echo 'header';
    register_shutdown_function(function () {
        echo 'shutdown';
    });
});
?>
--EXPECT--
header
