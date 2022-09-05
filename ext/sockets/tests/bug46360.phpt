--TEST--
Bug 46360 - TCP_NODELAY constant (sock_get_option, sock_set_option)
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
<?php if (!extension_loaded('sockets')) die('skip sockets extension not loaded'); ?>
--CREDITS--
Florian Anderiasch
fa@php.net
--FILE--
<?php
    var_dump(TCP_NODELAY);
?>
--EXPECTF--
int(%d)
