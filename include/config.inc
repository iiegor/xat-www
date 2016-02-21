<?php

/*
 * MODIFY THIS FILE ACCORDING TO YOUR PREFERENCES
*/

$CONF = array(
  'environment' => 'production',
  'site_name' => 'xat',
  'site_email' => 'info@xat.com',
  'db_host' => 'localhost',
  'db_username' => 'root',
  'db_name' => 'xat',
  'db_password' => 'test',
);

if ($CONF['environment'] === 'production') {
  $REV = parse_ini_file($_SERVER['DOCUMENT_ROOT'] . '/static/revision.ini');
}
