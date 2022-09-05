--TEST--
Bug #66783 (UAF when appending DOMDocument to element)
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
<?php
if (!extension_loaded('dom')) die('skip dom extension not available');
?>
--FILE--
<?php
$doc = new DomDocument;
$doc->loadXML('<root></root>');
$e = $doc->createElement('e');
try {
    $e->appendChild($doc);
} catch (DOMException $ex) {
    echo $ex->getMessage(), PHP_EOL;
}
?>
--EXPECTF--
Hierarchy Request Error
