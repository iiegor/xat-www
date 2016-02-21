<?php
// Useful variables
$port = '';

if($_SERVER['SERVER_PORT'] != '80' && $_SERVER['SERVER_PORT'] != 443) {
  $port = ':' . (int)$_SERVER['SERVER_PORT'];
}

$SITE = 'http://' . $_SERVER['SERVER_NAME'] . $port . '/';

// Load site config
include_once $_SERVER['DOCUMENT_ROOT'] . '/include/config.inc';
