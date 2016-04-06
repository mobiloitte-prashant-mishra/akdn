<?php
/**
 * @file
 * f_role_permission.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function f_role_permission_user_default_roles() {
  $roles = array();

  // Exported role: Basic admin.
  $roles['Basic admin'] = array(
    'name' => 'Basic admin',
    'weight' => 3,
  );

  // Exported role: Basic user.
  $roles['Basic user'] = array(
    'name' => 'Basic user',
    'weight' => 2,
  );

  // Exported role: Main admin.
  $roles['Main admin'] = array(
    'name' => 'Main admin',
    'weight' => 4,
  );

  // Exported role: Super admin.
  $roles['Super admin'] = array(
    'name' => 'Super admin',
    'weight' => 5,
  );

  return $roles;
}
