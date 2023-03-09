--TEST--
Test function posix_setegid() by calling it with its expected arguments
--EXTENSIONS--
posix
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS setegid() not implemented"); ?>
--FILE--
<?php
var_dump(posix_setegid(posix_getegid()));
?>
--EXPECT--
bool(true)
