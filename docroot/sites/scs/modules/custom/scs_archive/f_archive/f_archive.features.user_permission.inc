<?php
/**
 * @file
 * f_archive.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_archive_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'archive content'.
  $permissions['archive content'] = array(
    'name' => 'archive content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'scs_archive',
  );

  return $permissions;
}
