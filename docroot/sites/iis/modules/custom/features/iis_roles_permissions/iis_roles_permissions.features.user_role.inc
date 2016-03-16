<?php
/**
 * @file
 * iis_roles_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function iis_roles_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  // Exported role: Publisher.
  $roles['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => 6,
  );

  // Exported role: Reviewer.
  $roles['Reviewer'] = array(
    'name' => 'Reviewer',
    'weight' => 5,
  );

  return $roles;
}
