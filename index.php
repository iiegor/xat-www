<?php
// Get the latest modification date
$timestamps = array(@getlastmod());

$timestamp = max($timestamps);

// Print modification date
echo "<!-- REV-{$timestamp} -->";

// Useful variables
$port = '';

if($_SERVER["SERVER_PORT"] != '80' && $_SERVER["SERVER_PORT"] != 443) {
  $port = ':' . (int)$_SERVER["SERVER_PORT"];
}

$SITE = 'http://' . $_SERVER["SERVER_NAME"] . $port . '/';

include_once 'include/header.inc';
include_once 'include/footer.inc';
