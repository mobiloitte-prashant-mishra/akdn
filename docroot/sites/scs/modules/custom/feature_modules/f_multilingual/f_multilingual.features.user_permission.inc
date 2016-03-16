<?php
/**
 * @file
 * f_multilingual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_multilingual_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'locale',
  );

  return $permissions;
}
