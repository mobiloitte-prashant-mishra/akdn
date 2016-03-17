<?php
/**
 * @file
 * f_role_permission.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_role_permission_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Basic user' => 'Basic user',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Basic user' => 'Basic user',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Super admin' => 'Super admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create agency content'.
  $permissions['create agency content'] = array(
    'name' => 'create agency content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create featured_content content'.
  $permissions['create featured_content content'] = array(
    'name' => 'create featured_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create filedepot_folder content'.
  $permissions['create filedepot_folder content'] = array(
    'name' => 'create filedepot_folder content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create focus_area content'.
  $permissions['create focus_area content'] = array(
    'name' => 'create focus_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create gallery content'.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create geography content'.
  $permissions['create geography content'] = array(
    'name' => 'create geography content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create podcast content'.
  $permissions['create podcast content'] = array(
    'name' => 'create podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create speech content'.
  $permissions['create speech content'] = array(
    'name' => 'create speech content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create speech_quote content'.
  $permissions['create speech_quote content'] = array(
    'name' => 'create speech_quote content',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any agency content'.
  $permissions['delete any agency content'] = array(
    'name' => 'delete any agency content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured_content content'.
  $permissions['delete any featured_content content'] = array(
    'name' => 'delete any featured_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any filedepot_folder content'.
  $permissions['delete any filedepot_folder content'] = array(
    'name' => 'delete any filedepot_folder content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any focus_area content'.
  $permissions['delete any focus_area content'] = array(
    'name' => 'delete any focus_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery content'.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any geography content'.
  $permissions['delete any geography content'] = array(
    'name' => 'delete any geography content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any podcast content'.
  $permissions['delete any podcast content'] = array(
    'name' => 'delete any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any speech content'.
  $permissions['delete any speech content'] = array(
    'name' => 'delete any speech content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any speech_quote content'.
  $permissions['delete any speech_quote content'] = array(
    'name' => 'delete any speech_quote content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own agency content'.
  $permissions['delete own agency content'] = array(
    'name' => 'delete own agency content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own featured_content content'.
  $permissions['delete own featured_content content'] = array(
    'name' => 'delete own featured_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own filedepot_folder content'.
  $permissions['delete own filedepot_folder content'] = array(
    'name' => 'delete own filedepot_folder content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own focus_area content'.
  $permissions['delete own focus_area content'] = array(
    'name' => 'delete own focus_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery content'.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own geography content'.
  $permissions['delete own geography content'] = array(
    'name' => 'delete own geography content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own podcast content'.
  $permissions['delete own podcast content'] = array(
    'name' => 'delete own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own speech content'.
  $permissions['delete own speech content'] = array(
    'name' => 'delete own speech content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own speech_quote content'.
  $permissions['delete own speech_quote content'] = array(
    'name' => 'delete own speech_quote content',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any agency content'.
  $permissions['edit any agency content'] = array(
    'name' => 'edit any agency content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured_content content'.
  $permissions['edit any featured_content content'] = array(
    'name' => 'edit any featured_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any filedepot_folder content'.
  $permissions['edit any filedepot_folder content'] = array(
    'name' => 'edit any filedepot_folder content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any focus_area content'.
  $permissions['edit any focus_area content'] = array(
    'name' => 'edit any focus_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery content'.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any geography content'.
  $permissions['edit any geography content'] = array(
    'name' => 'edit any geography content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any podcast content'.
  $permissions['edit any podcast content'] = array(
    'name' => 'edit any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any speech content'.
  $permissions['edit any speech content'] = array(
    'name' => 'edit any speech content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any speech_quote content'.
  $permissions['edit any speech_quote content'] = array(
    'name' => 'edit any speech_quote content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own agency content'.
  $permissions['edit own agency content'] = array(
    'name' => 'edit own agency content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own featured_content content'.
  $permissions['edit own featured_content content'] = array(
    'name' => 'edit own featured_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own filedepot_folder content'.
  $permissions['edit own filedepot_folder content'] = array(
    'name' => 'edit own filedepot_folder content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own focus_area content'.
  $permissions['edit own focus_area content'] = array(
    'name' => 'edit own focus_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery content'.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own geography content'.
  $permissions['edit own geography content'] = array(
    'name' => 'edit own geography content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own podcast content'.
  $permissions['edit own podcast content'] = array(
    'name' => 'edit own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own speech content'.
  $permissions['edit own speech content'] = array(
    'name' => 'edit own speech content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own speech_quote content'.
  $permissions['edit own speech_quote content'] = array(
    'name' => 'edit own speech_quote content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Basic admin' => 'Basic admin',
      'Basic user' => 'Basic user',
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Super admin' => 'Super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Main admin' => 'Main admin',
      'Super admin' => 'Super admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
