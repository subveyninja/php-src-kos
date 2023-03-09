--TEST--
Test posix_times()
--DESCRIPTION--
Gets information about the current CPU usage.
Source code: ext/posix/posix.c
--CREDITS--
Falko Menge, mail at falko-menge dot de
PHP Testfest Berlin 2009-05-10
--EXTENSIONS--
posix
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS times() not implemented"); ?>
--FILE--
<?php
    var_dump(posix_times());
?>
--EXPECTF--
array(5) {
  ["ticks"]=>
  int(%i)
  ["utime"]=>
  int(%d)
  ["stime"]=>
  int(%d)
  ["cutime"]=>
  int(%d)
  ["cstime"]=>
  int(%d)
}
