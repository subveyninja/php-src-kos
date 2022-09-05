--TEST--
posix_getrlimit(): Basic tests
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS getrlimit() not implemented"); ?>
<?php
if (!extension_loaded('posix')) die('skip - POSIX extension not loaded');
if (!function_exists('posix_getrlimit')) die('skip posix_getrlimit() not found');
?>
--FILE--
<?php
echo "Basic test of POSIX posix_getrlimit function\n";
var_dump(posix_getrlimit());

?>
===DONE====
--EXPECTF--
Basic test of POSIX posix_getrlimit function
array(%d) {
%a
}
===DONE====
