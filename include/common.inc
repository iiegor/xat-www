<?php
// Useful variables
$port = '';

if($_SERVER['SERVER_PORT'] != '80' && $_SERVER['SERVER_PORT'] != 443) {
  $port = ':' . (int)$_SERVER['SERVER_PORT'];
}

$SITE = '//' . $_SERVER['SERVER_NAME'] . $port . '/';

// Load site config
include_once $_SERVER['DOCUMENT_ROOT'] . '/include/config.inc';

// Define some other vars
$SITECSS = $CONF['environment'] === 'production' ? $SITE . 'a' : $SITE . 'static/css';
$SITEJS = $CONF['environment'] === 'production' ? $SITE . 'b' : $SITE . 'static/js';

// Database connection
/*
try {
  $db = new PDO("mysql:host={$CONF['db_host']};dbname={$CONF['db_name']}", $CONF['db_username'], $CONF['db_password']);
} catch (PDOException $e) {
  if ($CONF['environment'] === 'development') {
    print 'Error: ' . $e->getMessage() . '<br/>';
  } else {
    print "If you are seeing this message, please, contact to an administrator at <a href=\"mailto:{$CONF['site_email']}\">{$CONF['site_email']}</a>.";
  }

  die();
}*/
