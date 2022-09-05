--TEST--
SplFileObject::fputcsv() with empty $escape
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
--FILE--
<?php
$data = array(
    ['\\'],
    ['\\"']
);
$file = new SplTempFileObject;
foreach ($data as $record) {
    $file->fputcsv($record, ',', '"', '');
}
$file->rewind();
foreach ($file as $line) {
    echo $line;
}
?>
--EXPECT--
\
"\"""
