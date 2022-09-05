--TEST--
Bug #71273 A wrong ext directory setup in php.ini leads to crash
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS.SHELL_EXEC test requiring shell_exec function"); ?>
--FILE--
<?php
    /* NOTE this file is required to be encoded in iso-8859-1 */

    $cmd = getenv('TEST_PHP_EXECUTABLE') . " -n -d html_errors=on -d extension_dir=a/�/w -d extension=php_kartoffelbrei.dll -v 2>&1";
    $out = shell_exec($cmd);

    var_dump(preg_match(",.+a[\\/].+[\\/]w.php_kartoffelbrei.dll.+,s", $out));
?>
--EXPECT--
int(1)
