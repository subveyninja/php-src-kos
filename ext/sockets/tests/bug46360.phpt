--TEST--
Bug 46360 - TCP_NODELAY constant (sock_get_option, sock_set_option)
--EXTENSIONS--
sockets
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
--CREDITS--
Florian Anderiasch
fa@php.net
--FILE--
<?php
    var_dump(TCP_NODELAY);
?>
--EXPECTF--
int(%d)
