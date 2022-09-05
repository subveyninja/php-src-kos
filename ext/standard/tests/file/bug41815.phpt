--TEST--
Bug #41815 (Concurrent read/write fails when EOF is reached)
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
--FILE--
<?php

$filename = __DIR__."/concur_rw.txt";

@unlink($filename);
$writer = fopen($filename, "wt");
$reader = fopen($filename, "r");
fread($reader, 1);
fwrite($writer, "foo");

if (strlen(fread($reader, 10)) > 0) {
    echo "OK\n";
}

fclose($writer);
fclose($reader);

@unlink($filename);

echo "Done\n";
?>
--EXPECT--
OK
Done
