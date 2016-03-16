<?php
/**
 * @file
 * institutional_space_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function institutional_space_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  // Exported role: JI Administrator.
  $roles['JI Administrator'] = array(
    'name' => 'JI Administrator',
    'weight' => 10,
  );

  // Exported role: JI Contributor.
  $roles['JI Contributor'] = array(
    'name' => 'JI Contributor',
    'weight' => 7,
  );

  // Exported role: JI Editor.
  $roles['JI Editor'] = array(
    'name' => 'JI Editor',
    'weight' => 8,
  );

  // Exported role: JI Publisher.
  $roles['JI Publisher'] = array(
    'name' => 'JI Publisher',
    'weight' => 9,
  );

  // Exported role: Publisher.
  $roles['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => 5,
  );

  // Exported role: Reviewer.
  $roles['Reviewer'] = array(
    'name' => 'Reviewer',
    'weight' => 6,
  );

  // Exported role: Superuser.
  $roles['Superuser'] = array(
    'name' => 'Superuser',
    'weight' => 2,
  );

  return $roles;
}
