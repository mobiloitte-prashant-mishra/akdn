<?php
/**
 * @file
 * institutional_space_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function institutional_space_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'General setting'.
  $permissions['General setting'] = array(
    'name' => 'General setting',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'ismaili_traffic_lights',
  );

  // Exported permission: 'General setting Custom'.
  $permissions['General setting Custom'] = array(
    'name' => 'General setting Custom',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'ismaili_custom',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access jcaption settings'.
  $permissions['access jcaption settings'] = array(
    'name' => 'access jcaption settings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'jcaption',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'access workbench access by role'.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer NAT configuration'.
  $permissions['administer NAT configuration'] = array(
    'name' => 'administer NAT configuration',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'nat',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer addthis'.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer any social profiles'.
  $permissions['administer any social profiles'] = array(
    'name' => 'administer any social profiles',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer brightcove playlists'.
  $permissions['administer brightcove playlists'] = array(
    'name' => 'administer brightcove playlists',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'administer brightcove settings'.
  $permissions['administer brightcove settings'] = array(
    'name' => 'administer brightcove settings',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Editor' => 'Editor',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer event_registration registration'.
  $permissions['administer event_registration registration'] = array(
    'name' => 'administer event_registration registration',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field conditional states'.
  $permissions['administer field conditional states'] = array(
    'name' => 'administer field conditional states',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_conditional_state',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer field weight settings'.
  $permissions['administer field weight settings'] = array(
    'name' => 'administer field weight settings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_weight',
  );

  // Exported permission: 'administer field weights'.
  $permissions['administer field weights'] = array(
    'name' => 'administer field weights',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_weight',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer lightbox2'.
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer own event_registration registration'.
  $permissions['administer own event_registration registration'] = array(
    'name' => 'administer own event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own social profiles'.
  $permissions['administer own social profiles'] = array(
    'name' => 'administer own social profiles',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node calendar_event defaults'.
  $permissions['administer panelizer node calendar_event defaults'] = array(
    'name' => 'administer panelizer node calendar_event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node calendar_pages defaults'.
  $permissions['administer panelizer node calendar_pages defaults'] = array(
    'name' => 'administer panelizer node calendar_pages defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node institutional_space defaults'.
  $permissions['administer panelizer node institutional_space defaults'] = array(
    'name' => 'administer panelizer node institutional_space defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term institutional_space defaults'.
  $permissions['administer panelizer taxonomy_term institutional_space defaults'] = array(
    'name' => 'administer panelizer taxonomy_term institutional_space defaults',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer path breadcrumbs'.
  $permissions['administer path breadcrumbs'] = array(
    'name' => 'administer path breadcrumbs',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'path_breadcrumbs_ui',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Superuser' => 'Superuser',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Superuser' => 'Superuser',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Superuser' => 'Superuser',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scs'.
  $permissions['administer scs'] = array(
    'name' => 'administer scs',
    'roles' => array(
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'scs',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer site verify'.
  $permissions['administer site verify'] = array(
    'name' => 'administer site verify',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'site_verify',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer social media'.
  $permissions['administer social media'] = array(
    'name' => 'administer social media',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'administer widgets sets'.
  $permissions['administer widgets sets'] = array(
    'name' => 'administer widgets sets',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'widgets',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench access'.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'assign Contributor role'.
  $permissions['assign Contributor role'] = array(
    'name' => 'assign Contributor role',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Editor role'.
  $permissions['assign Editor role'] = array(
    'name' => 'assign Editor role',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign JI Administrator role'.
  $permissions['assign JI Administrator role'] = array(
    'name' => 'assign JI Administrator role',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign JI Contributor role'.
  $permissions['assign JI Contributor role'] = array(
    'name' => 'assign JI Contributor role',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign JI Editor role'.
  $permissions['assign JI Editor role'] = array(
    'name' => 'assign JI Editor role',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign JI Publisher role'.
  $permissions['assign JI Publisher role'] = array(
    'name' => 'assign JI Publisher role',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Publisher role'.
  $permissions['assign Publisher role'] = array(
    'name' => 'assign Publisher role',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Reviewer role'.
  $permissions['assign Reviewer role'] = array(
    'name' => 'assign Reviewer role',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign institutional space'.
  $permissions['assign institutional space'] = array(
    'name' => 'assign institutional space',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'ismaili_custom',
  );

  // Exported permission: 'assign workbench access'.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'batch update workbench access'.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'browse playlists'.
  $permissions['browse playlists'] = array(
    'name' => 'browse playlists',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'browse videos'.
  $permissions['browse videos'] = array(
    'name' => 'browse videos',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel users with no custom roles'.
  $permissions['cancel users with no custom roles'] = array(
    'name' => 'cancel users with no custom roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Contributor'.
  $permissions['cancel users with role Contributor'] = array(
    'name' => 'cancel users with role Contributor',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Contributor and other roles'.
  $permissions['cancel users with role Contributor and other roles'] = array(
    'name' => 'cancel users with role Contributor and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Editor'.
  $permissions['cancel users with role Editor'] = array(
    'name' => 'cancel users with role Editor',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Editor and other roles'.
  $permissions['cancel users with role Editor and other roles'] = array(
    'name' => 'cancel users with role Editor and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIAdministrator'.
  $permissions['cancel users with role JIAdministrator'] = array(
    'name' => 'cancel users with role JIAdministrator',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIAdministrator and other roles'.
  $permissions['cancel users with role JIAdministrator and other roles'] = array(
    'name' => 'cancel users with role JIAdministrator and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIContributor'.
  $permissions['cancel users with role JIContributor'] = array(
    'name' => 'cancel users with role JIContributor',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIContributor and other roles'.
  $permissions['cancel users with role JIContributor and other roles'] = array(
    'name' => 'cancel users with role JIContributor and other roles',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIEditor'.
  $permissions['cancel users with role JIEditor'] = array(
    'name' => 'cancel users with role JIEditor',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIEditor and other roles'.
  $permissions['cancel users with role JIEditor and other roles'] = array(
    'name' => 'cancel users with role JIEditor and other roles',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIPublisher'.
  $permissions['cancel users with role JIPublisher'] = array(
    'name' => 'cancel users with role JIPublisher',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role JIPublisher and other roles'.
  $permissions['cancel users with role JIPublisher and other roles'] = array(
    'name' => 'cancel users with role JIPublisher and other roles',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Publisher'.
  $permissions['cancel users with role Publisher'] = array(
    'name' => 'cancel users with role Publisher',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Publisher and other roles'.
  $permissions['cancel users with role Publisher and other roles'] = array(
    'name' => 'cancel users with role Publisher and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Reviewer'.
  $permissions['cancel users with role Reviewer'] = array(
    'name' => 'cancel users with role Reviewer',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Reviewer and other roles'.
  $permissions['cancel users with role Reviewer and other roles'] = array(
    'name' => 'cancel users with role Reviewer and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Superuser'.
  $permissions['cancel users with role Superuser'] = array(
    'name' => 'cancel users with role Superuser',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Superuser and other roles'.
  $permissions['cancel users with role Superuser and other roles'] = array(
    'name' => 'cancel users with role Superuser and other roles',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role anonymoususer'.
  $permissions['cancel users with role anonymoususer'] = array(
    'name' => 'cancel users with role anonymoususer',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role anonymoususer and other roles'.
  $permissions['cancel users with role anonymoususer and other roles'] = array(
    'name' => 'cancel users with role anonymoususer and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role authenticateduser'.
  $permissions['cancel users with role authenticateduser'] = array(
    'name' => 'cancel users with role authenticateduser',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role authenticateduser and other roles'.
  $permissions['cancel users with role authenticateduser and other roles'] = array(
    'name' => 'cancel users with role authenticateduser and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear akdn_rss feeds'.
  $permissions['clear akdn_rss feeds'] = array(
    'name' => 'clear akdn_rss feeds',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear iis_rss feeds'.
  $permissions['clear iis_rss feeds'] = array(
    'name' => 'clear iis_rss feeds',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear speech_importer feeds'.
  $permissions['clear speech_importer feeds'] = array(
    'name' => 'clear speech_importer feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear speech_quotes feeds'.
  $permissions['clear speech_quotes feeds'] = array(
    'name' => 'clear speech_quotes feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create any basic_blocks bean'.
  $permissions['create any basic_blocks bean'] = array(
    'name' => 'create any basic_blocks bean',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any highlight_left_box bean'.
  $permissions['create any highlight_left_box bean'] = array(
    'name' => 'create any highlight_left_box bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any highlight_right_box bean'.
  $permissions['create any highlight_right_box bean'] = array(
    'name' => 'create any highlight_right_box bean',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create calendar_event content'.
  $permissions['create calendar_event content'] = array(
    'name' => 'create calendar_event content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create calendar_pages content'.
  $permissions['create calendar_pages content'] = array(
    'name' => 'create calendar_pages content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create child_compound_articles content'.
  $permissions['create child_compound_articles content'] = array(
    'name' => 'create child_compound_articles content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event_registration registration'.
  $permissions['create event_registration registration'] = array(
    'name' => 'create event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event_registration registration other anonymous'.
  $permissions['create event_registration registration other anonymous'] = array(
    'name' => 'create event_registration registration other anonymous',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event_registration registration other users'.
  $permissions['create event_registration registration other users'] = array(
    'name' => 'create event_registration registration other users',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create events content'.
  $permissions['create events content'] = array(
    'name' => 'create events content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_article_type'.
  $permissions['create field_article_type'] = array(
    'name' => 'create field_article_type',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_copyright_notice'.
  $permissions['create field_copyright_notice'] = array(
    'name' => 'create field_copyright_notice',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_geographies'.
  $permissions['create field_geographies'] = array(
    'name' => 'create field_geographies',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_microsite'.
  $permissions['create field_microsite'] = array(
    'name' => 'create field_microsite',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_primary_category'.
  $permissions['create field_primary_category'] = array(
    'name' => 'create field_primary_category',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tags'.
  $permissions['create field_tags'] = array(
    'name' => 'create field_tags',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create footer_menu content'.
  $permissions['create footer_menu content'] = array(
    'name' => 'create footer_menu content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hub_page content'.
  $permissions['create hub_page content'] = array(
    'name' => 'create hub_page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create image_carousel content'.
  $permissions['create image_carousel content'] = array(
    'name' => 'create image_carousel content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create institutional_space content'.
  $permissions['create institutional_space content'] = array(
    'name' => 'create institutional_space content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ip_hub_page content'.
  $permissions['create ip_hub_page content'] = array(
    'name' => 'create ip_hub_page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ismaili_centres content'.
  $permissions['create ismaili_centres content'] = array(
    'name' => 'create ismaili_centres content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news_headline_items content'.
  $permissions['create news_headline_items content'] = array(
    'name' => 'create news_headline_items content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nutrient content'.
  $permissions['create nutrient content'] = array(
    'name' => 'create nutrient content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create parent_compound_articles content'.
  $permissions['create parent_compound_articles content'] = array(
    'name' => 'create parent_compound_articles content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create people content'.
  $permissions['create people content'] = array(
    'name' => 'create people content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create photo_gallery content'.
  $permissions['create photo_gallery content'] = array(
    'name' => 'create photo_gallery content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create recipe content'.
  $permissions['create recipe content'] = array(
    'name' => 'create recipe content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create speech content'.
  $permissions['create speech content'] = array(
    'name' => 'create speech content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create speech_quote content'.
  $permissions['create speech_quote content'] = array(
    'name' => 'create speech_quote content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tips content'.
  $permissions['create tips content'] = array(
    'name' => 'create tips content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create users'.
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any basic_blocks bean'.
  $permissions['delete any basic_blocks bean'] = array(
    'name' => 'delete any basic_blocks bean',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any calendar_event content'.
  $permissions['delete any calendar_event content'] = array(
    'name' => 'delete any calendar_event content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any calendar_pages content'.
  $permissions['delete any calendar_pages content'] = array(
    'name' => 'delete any calendar_pages content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any child_compound_articles content'.
  $permissions['delete any child_compound_articles content'] = array(
    'name' => 'delete any child_compound_articles content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any event_registration registration'.
  $permissions['delete any event_registration registration'] = array(
    'name' => 'delete any event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any events content'.
  $permissions['delete any events content'] = array(
    'name' => 'delete any events content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any footer_menu content'.
  $permissions['delete any footer_menu content'] = array(
    'name' => 'delete any footer_menu content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any highlight_left_box bean'.
  $permissions['delete any highlight_left_box bean'] = array(
    'name' => 'delete any highlight_left_box bean',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any highlight_right_box bean'.
  $permissions['delete any highlight_right_box bean'] = array(
    'name' => 'delete any highlight_right_box bean',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any hub_page content'.
  $permissions['delete any hub_page content'] = array(
    'name' => 'delete any hub_page content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image_carousel content'.
  $permissions['delete any image_carousel content'] = array(
    'name' => 'delete any image_carousel content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any institutional_space content'.
  $permissions['delete any institutional_space content'] = array(
    'name' => 'delete any institutional_space content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ip_hub_page content'.
  $permissions['delete any ip_hub_page content'] = array(
    'name' => 'delete any ip_hub_page content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ismaili_centres content'.
  $permissions['delete any ismaili_centres content'] = array(
    'name' => 'delete any ismaili_centres content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_headline_items content'.
  $permissions['delete any news_headline_items content'] = array(
    'name' => 'delete any news_headline_items content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nutrient content'.
  $permissions['delete any nutrient content'] = array(
    'name' => 'delete any nutrient content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any parent_compound_articles content'.
  $permissions['delete any parent_compound_articles content'] = array(
    'name' => 'delete any parent_compound_articles content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any people content'.
  $permissions['delete any people content'] = array(
    'name' => 'delete any people content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any photo_gallery content'.
  $permissions['delete any photo_gallery content'] = array(
    'name' => 'delete any photo_gallery content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any recipe content'.
  $permissions['delete any recipe content'] = array(
    'name' => 'delete any recipe content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any speech content'.
  $permissions['delete any speech content'] = array(
    'name' => 'delete any speech content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any speech_quote content'.
  $permissions['delete any speech_quote content'] = array(
    'name' => 'delete any speech_quote content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tips content'.
  $permissions['delete any tips content'] = array(
    'name' => 'delete any tips content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own calendar_event content'.
  $permissions['delete own calendar_event content'] = array(
    'name' => 'delete own calendar_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own calendar_pages content'.
  $permissions['delete own calendar_pages content'] = array(
    'name' => 'delete own calendar_pages content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own child_compound_articles content'.
  $permissions['delete own child_compound_articles content'] = array(
    'name' => 'delete own child_compound_articles content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own event_registration registration'.
  $permissions['delete own event_registration registration'] = array(
    'name' => 'delete own event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own events content'.
  $permissions['delete own events content'] = array(
    'name' => 'delete own events content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own footer_menu content'.
  $permissions['delete own footer_menu content'] = array(
    'name' => 'delete own footer_menu content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hub_page content'.
  $permissions['delete own hub_page content'] = array(
    'name' => 'delete own hub_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image_carousel content'.
  $permissions['delete own image_carousel content'] = array(
    'name' => 'delete own image_carousel content',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own institutional_space content'.
  $permissions['delete own institutional_space content'] = array(
    'name' => 'delete own institutional_space content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ip_hub_page content'.
  $permissions['delete own ip_hub_page content'] = array(
    'name' => 'delete own ip_hub_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ismaili_centres content'.
  $permissions['delete own ismaili_centres content'] = array(
    'name' => 'delete own ismaili_centres content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_headline_items content'.
  $permissions['delete own news_headline_items content'] = array(
    'name' => 'delete own news_headline_items content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nutrient content'.
  $permissions['delete own nutrient content'] = array(
    'name' => 'delete own nutrient content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own parent_compound_articles content'.
  $permissions['delete own parent_compound_articles content'] = array(
    'name' => 'delete own parent_compound_articles content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own people content'.
  $permissions['delete own people content'] = array(
    'name' => 'delete own people content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own photo_gallery content'.
  $permissions['delete own photo_gallery content'] = array(
    'name' => 'delete own photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own recipe content'.
  $permissions['delete own recipe content'] = array(
    'name' => 'delete own recipe content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own speech content'.
  $permissions['delete own speech content'] = array(
    'name' => 'delete own speech content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own speech_quote content'.
  $permissions['delete own speech_quote content'] = array(
    'name' => 'delete own speech_quote content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tips content'.
  $permissions['delete own tips content'] = array(
    'name' => 'delete own tips content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in administration_tags'.
  $permissions['delete terms in administration_tags'] = array(
    'name' => 'delete terms in administration_tags',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in article_types'.
  $permissions['delete terms in article_types'] = array(
    'name' => 'delete terms in article_types',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in authors'.
  $permissions['delete terms in authors'] = array(
    'name' => 'delete terms in authors',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cuisines'.
  $permissions['delete terms in cuisines'] = array(
    'name' => 'delete terms in cuisines',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in geographies_'.
  $permissions['delete terms in geographies_'] = array(
    'name' => 'delete terms in geographies_',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in hub_page'.
  $permissions['delete terms in hub_page'] = array(
    'name' => 'delete terms in hub_page',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in institutional_space'.
  $permissions['delete terms in institutional_space'] = array(
    'name' => 'delete terms in institutional_space',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ismaili_centres'.
  $permissions['delete terms in ismaili_centres'] = array(
    'name' => 'delete terms in ismaili_centres',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in microsite'.
  $permissions['delete terms in microsite'] = array(
    'name' => 'delete terms in microsite',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in microsite_space'.
  $permissions['delete terms in microsite_space'] = array(
    'name' => 'delete terms in microsite_space',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in primary_category'.
  $permissions['delete terms in primary_category'] = array(
    'name' => 'delete terms in primary_category',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in recipe_attribution'.
  $permissions['delete terms in recipe_attribution'] = array(
    'name' => 'delete terms in recipe_attribution',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in recipe_type'.
  $permissions['delete terms in recipe_type'] = array(
    'name' => 'delete terms in recipe_type',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in speech_themes'.
  $permissions['delete terms in speech_themes'] = array(
    'name' => 'delete terms in speech_themes',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_of_people'.
  $permissions['delete terms in type_of_people'] = array(
    'name' => 'delete terms in type_of_people',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download all audio files'.
  $permissions['download all audio files'] = array(
    'name' => 'download all audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'audiofield',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download original image'.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'ds_switch article'.
  $permissions['ds_switch article'] = array(
    'name' => 'ds_switch article',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch calendar_event'.
  $permissions['ds_switch calendar_event'] = array(
    'name' => 'ds_switch calendar_event',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch calendar_pages'.
  $permissions['ds_switch calendar_pages'] = array(
    'name' => 'ds_switch calendar_pages',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch child_compound_articles'.
  $permissions['ds_switch child_compound_articles'] = array(
    'name' => 'ds_switch child_compound_articles',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch events'.
  $permissions['ds_switch events'] = array(
    'name' => 'ds_switch events',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch footer_menu'.
  $permissions['ds_switch footer_menu'] = array(
    'name' => 'ds_switch footer_menu',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch hub_page'.
  $permissions['ds_switch hub_page'] = array(
    'name' => 'ds_switch hub_page',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch image_carousel'.
  $permissions['ds_switch image_carousel'] = array(
    'name' => 'ds_switch image_carousel',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch institutional_space'.
  $permissions['ds_switch institutional_space'] = array(
    'name' => 'ds_switch institutional_space',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch ip_hub_page'.
  $permissions['ds_switch ip_hub_page'] = array(
    'name' => 'ds_switch ip_hub_page',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch ismaili_centres'.
  $permissions['ds_switch ismaili_centres'] = array(
    'name' => 'ds_switch ismaili_centres',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch news_headline_items'.
  $permissions['ds_switch news_headline_items'] = array(
    'name' => 'ds_switch news_headline_items',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch nutrient'.
  $permissions['ds_switch nutrient'] = array(
    'name' => 'ds_switch nutrient',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch page'.
  $permissions['ds_switch page'] = array(
    'name' => 'ds_switch page',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch parent_compound_articles'.
  $permissions['ds_switch parent_compound_articles'] = array(
    'name' => 'ds_switch parent_compound_articles',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch people'.
  $permissions['ds_switch people'] = array(
    'name' => 'ds_switch people',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch photo_gallery'.
  $permissions['ds_switch photo_gallery'] = array(
    'name' => 'ds_switch photo_gallery',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch recipe'.
  $permissions['ds_switch recipe'] = array(
    'name' => 'ds_switch recipe',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch simplenews'.
  $permissions['ds_switch simplenews'] = array(
    'name' => 'ds_switch simplenews',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch speech'.
  $permissions['ds_switch speech'] = array(
    'name' => 'ds_switch speech',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch speech_quote'.
  $permissions['ds_switch speech_quote'] = array(
    'name' => 'ds_switch speech_quote',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch tips'.
  $permissions['ds_switch tips'] = array(
    'name' => 'ds_switch tips',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch video'.
  $permissions['ds_switch video'] = array(
    'name' => 'ds_switch video',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch webform'.
  $permissions['ds_switch webform'] = array(
    'name' => 'ds_switch webform',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any basic_blocks bean'.
  $permissions['edit any basic_blocks bean'] = array(
    'name' => 'edit any basic_blocks bean',
    'roles' => array(
      'Publisher' => 'Publisher',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any calendar_event content'.
  $permissions['edit any calendar_event content'] = array(
    'name' => 'edit any calendar_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any calendar_pages content'.
  $permissions['edit any calendar_pages content'] = array(
    'name' => 'edit any calendar_pages content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any child_compound_articles content'.
  $permissions['edit any child_compound_articles content'] = array(
    'name' => 'edit any child_compound_articles content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any events content'.
  $permissions['edit any events content'] = array(
    'name' => 'edit any events content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any footer_menu content'.
  $permissions['edit any footer_menu content'] = array(
    'name' => 'edit any footer_menu content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any highlight_left_box bean'.
  $permissions['edit any highlight_left_box bean'] = array(
    'name' => 'edit any highlight_left_box bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any highlight_right_box bean'.
  $permissions['edit any highlight_right_box bean'] = array(
    'name' => 'edit any highlight_right_box bean',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any hub_page content'.
  $permissions['edit any hub_page content'] = array(
    'name' => 'edit any hub_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image_carousel content'.
  $permissions['edit any image_carousel content'] = array(
    'name' => 'edit any image_carousel content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any institutional_space content'.
  $permissions['edit any institutional_space content'] = array(
    'name' => 'edit any institutional_space content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ip_hub_page content'.
  $permissions['edit any ip_hub_page content'] = array(
    'name' => 'edit any ip_hub_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ismaili_centres content'.
  $permissions['edit any ismaili_centres content'] = array(
    'name' => 'edit any ismaili_centres content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_headline_items content'.
  $permissions['edit any news_headline_items content'] = array(
    'name' => 'edit any news_headline_items content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nutrient content'.
  $permissions['edit any nutrient content'] = array(
    'name' => 'edit any nutrient content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any parent_compound_articles content'.
  $permissions['edit any parent_compound_articles content'] = array(
    'name' => 'edit any parent_compound_articles content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any people content'.
  $permissions['edit any people content'] = array(
    'name' => 'edit any people content',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any photo_gallery content'.
  $permissions['edit any photo_gallery content'] = array(
    'name' => 'edit any photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any recipe content'.
  $permissions['edit any recipe content'] = array(
    'name' => 'edit any recipe content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any speech content'.
  $permissions['edit any speech content'] = array(
    'name' => 'edit any speech content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any speech_quote content'.
  $permissions['edit any speech_quote content'] = array(
    'name' => 'edit any speech_quote content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tips content'.
  $permissions['edit any tips content'] = array(
    'name' => 'edit any tips content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit event_registration registration state'.
  $permissions['edit event_registration registration state'] = array(
    'name' => 'edit event_registration registration state',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit field_article_type'.
  $permissions['edit field_article_type'] = array(
    'name' => 'edit field_article_type',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_copyright_notice'.
  $permissions['edit field_copyright_notice'] = array(
    'name' => 'edit field_copyright_notice',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_geographies'.
  $permissions['edit field_geographies'] = array(
    'name' => 'edit field_geographies',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_microsite'.
  $permissions['edit field_microsite'] = array(
    'name' => 'edit field_microsite',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_primary_category'.
  $permissions['edit field_primary_category'] = array(
    'name' => 'edit field_primary_category',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tags'.
  $permissions['edit field_tags'] = array(
    'name' => 'edit field_tags',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Superuser' => 'Superuser',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own calendar_event content'.
  $permissions['edit own calendar_event content'] = array(
    'name' => 'edit own calendar_event content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own calendar_pages content'.
  $permissions['edit own calendar_pages content'] = array(
    'name' => 'edit own calendar_pages content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own child_compound_articles content'.
  $permissions['edit own child_compound_articles content'] = array(
    'name' => 'edit own child_compound_articles content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own events content'.
  $permissions['edit own events content'] = array(
    'name' => 'edit own events content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_article_type'.
  $permissions['edit own field_article_type'] = array(
    'name' => 'edit own field_article_type',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_copyright_notice'.
  $permissions['edit own field_copyright_notice'] = array(
    'name' => 'edit own field_copyright_notice',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_geographies'.
  $permissions['edit own field_geographies'] = array(
    'name' => 'edit own field_geographies',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_microsite'.
  $permissions['edit own field_microsite'] = array(
    'name' => 'edit own field_microsite',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_primary_category'.
  $permissions['edit own field_primary_category'] = array(
    'name' => 'edit own field_primary_category',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tags'.
  $permissions['edit own field_tags'] = array(
    'name' => 'edit own field_tags',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own footer_menu content'.
  $permissions['edit own footer_menu content'] = array(
    'name' => 'edit own footer_menu content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hub_page content'.
  $permissions['edit own hub_page content'] = array(
    'name' => 'edit own hub_page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image_carousel content'.
  $permissions['edit own image_carousel content'] = array(
    'name' => 'edit own image_carousel content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own institutional_space content'.
  $permissions['edit own institutional_space content'] = array(
    'name' => 'edit own institutional_space content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ip_hub_page content'.
  $permissions['edit own ip_hub_page content'] = array(
    'name' => 'edit own ip_hub_page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ismaili_centres content'.
  $permissions['edit own ismaili_centres content'] = array(
    'name' => 'edit own ismaili_centres content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_headline_items content'.
  $permissions['edit own news_headline_items content'] = array(
    'name' => 'edit own news_headline_items content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nutrient content'.
  $permissions['edit own nutrient content'] = array(
    'name' => 'edit own nutrient content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own parent_compound_articles content'.
  $permissions['edit own parent_compound_articles content'] = array(
    'name' => 'edit own parent_compound_articles content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own people content'.
  $permissions['edit own people content'] = array(
    'name' => 'edit own people content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own photo_gallery content'.
  $permissions['edit own photo_gallery content'] = array(
    'name' => 'edit own photo_gallery content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own recipe content'.
  $permissions['edit own recipe content'] = array(
    'name' => 'edit own recipe content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own speech content'.
  $permissions['edit own speech content'] = array(
    'name' => 'edit own speech content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own speech_quote content'.
  $permissions['edit own speech_quote content'] = array(
    'name' => 'edit own speech_quote content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tips content'.
  $permissions['edit own tips content'] = array(
    'name' => 'edit own tips content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in administration_tags'.
  $permissions['edit terms in administration_tags'] = array(
    'name' => 'edit terms in administration_tags',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in article_types'.
  $permissions['edit terms in article_types'] = array(
    'name' => 'edit terms in article_types',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in authors'.
  $permissions['edit terms in authors'] = array(
    'name' => 'edit terms in authors',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cuisines'.
  $permissions['edit terms in cuisines'] = array(
    'name' => 'edit terms in cuisines',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in geographies_'.
  $permissions['edit terms in geographies_'] = array(
    'name' => 'edit terms in geographies_',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in hub_page'.
  $permissions['edit terms in hub_page'] = array(
    'name' => 'edit terms in hub_page',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in institutional_space'.
  $permissions['edit terms in institutional_space'] = array(
    'name' => 'edit terms in institutional_space',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ismaili_centres'.
  $permissions['edit terms in ismaili_centres'] = array(
    'name' => 'edit terms in ismaili_centres',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in microsite'.
  $permissions['edit terms in microsite'] = array(
    'name' => 'edit terms in microsite',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in microsite_space'.
  $permissions['edit terms in microsite_space'] = array(
    'name' => 'edit terms in microsite_space',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in primary_category'.
  $permissions['edit terms in primary_category'] = array(
    'name' => 'edit terms in primary_category',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in recipe_attribution'.
  $permissions['edit terms in recipe_attribution'] = array(
    'name' => 'edit terms in recipe_attribution',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in recipe_type'.
  $permissions['edit terms in recipe_type'] = array(
    'name' => 'edit terms in recipe_type',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in speech_themes'.
  $permissions['edit terms in speech_themes'] = array(
    'name' => 'edit terms in speech_themes',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_of_people'.
  $permissions['edit terms in type_of_people'] = array(
    'name' => 'edit terms in type_of_people',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit users with no custom roles'.
  $permissions['edit users with no custom roles'] = array(
    'name' => 'edit users with no custom roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Contributor'.
  $permissions['edit users with role Contributor'] = array(
    'name' => 'edit users with role Contributor',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Contributor and other roles'.
  $permissions['edit users with role Contributor and other roles'] = array(
    'name' => 'edit users with role Contributor and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Editor'.
  $permissions['edit users with role Editor'] = array(
    'name' => 'edit users with role Editor',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Editor and other roles'.
  $permissions['edit users with role Editor and other roles'] = array(
    'name' => 'edit users with role Editor and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIAdministrator'.
  $permissions['edit users with role JIAdministrator'] = array(
    'name' => 'edit users with role JIAdministrator',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIAdministrator and other roles'.
  $permissions['edit users with role JIAdministrator and other roles'] = array(
    'name' => 'edit users with role JIAdministrator and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIContributor'.
  $permissions['edit users with role JIContributor'] = array(
    'name' => 'edit users with role JIContributor',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIContributor and other roles'.
  $permissions['edit users with role JIContributor and other roles'] = array(
    'name' => 'edit users with role JIContributor and other roles',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIEditor'.
  $permissions['edit users with role JIEditor'] = array(
    'name' => 'edit users with role JIEditor',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIEditor and other roles'.
  $permissions['edit users with role JIEditor and other roles'] = array(
    'name' => 'edit users with role JIEditor and other roles',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIPublisher'.
  $permissions['edit users with role JIPublisher'] = array(
    'name' => 'edit users with role JIPublisher',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role JIPublisher and other roles'.
  $permissions['edit users with role JIPublisher and other roles'] = array(
    'name' => 'edit users with role JIPublisher and other roles',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Publisher'.
  $permissions['edit users with role Publisher'] = array(
    'name' => 'edit users with role Publisher',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Publisher and other roles'.
  $permissions['edit users with role Publisher and other roles'] = array(
    'name' => 'edit users with role Publisher and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Reviewer'.
  $permissions['edit users with role Reviewer'] = array(
    'name' => 'edit users with role Reviewer',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Reviewer and other roles'.
  $permissions['edit users with role Reviewer and other roles'] = array(
    'name' => 'edit users with role Reviewer and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Superuser'.
  $permissions['edit users with role Superuser'] = array(
    'name' => 'edit users with role Superuser',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Superuser and other roles'.
  $permissions['edit users with role Superuser and other roles'] = array(
    'name' => 'edit users with role Superuser and other roles',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role anonymoususer'.
  $permissions['edit users with role anonymoususer'] = array(
    'name' => 'edit users with role anonymoususer',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role anonymoususer and other roles'.
  $permissions['edit users with role anonymoususer and other roles'] = array(
    'name' => 'edit users with role anonymoususer and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role authenticateduser'.
  $permissions['edit users with role authenticateduser'] = array(
    'name' => 'edit users with role authenticateduser',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role authenticateduser and other roles'.
  $permissions['edit users with role authenticateduser and other roles'] = array(
    'name' => 'edit users with role authenticateduser and other roles',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'Editor' => 'Editor',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'Editor' => 'Editor',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'feed import'.
  $permissions['feed import'] = array(
    'name' => 'feed import',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feed_import',
  );

  // Exported permission: 'feed import process'.
  $permissions['feed import process'] = array(
    'name' => 'feed import process',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feed_import',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import akdn_rss feeds'.
  $permissions['import akdn_rss feeds'] = array(
    'name' => 'import akdn_rss feeds',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import iis_rss feeds'.
  $permissions['import iis_rss feeds'] = array(
    'name' => 'import iis_rss feeds',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import speech_importer feeds'.
  $permissions['import speech_importer feeds'] = array(
    'name' => 'import speech_importer feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import speech_quotes feeds'.
  $permissions['import speech_quotes feeds'] = array(
    'name' => 'import speech_quotes feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'migrate_ui',
  );

  // Exported permission: 'moderate content from draft to archived'.
  $permissions['moderate content from draft to archived'] = array(
    'name' => 'moderate content from draft to archived',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to reviewed'.
  $permissions['moderate content from needs_review to reviewed'] = array(
    'name' => 'moderate content from needs_review to reviewed',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to draft'.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from reviewed to published'.
  $permissions['moderate content from reviewed to published'] = array(
    'name' => 'moderate content from reviewed to published',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'print_ui',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'override auto queue'.
  $permissions['override auto queue'] = array(
    'name' => 'override auto queue',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'auto_nodequeue',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'location',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper akdn_rss'.
  $permissions['tamper akdn_rss'] = array(
    'name' => 'tamper akdn_rss',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper iis_rss'.
  $permissions['tamper iis_rss'] = array(
    'name' => 'tamper iis_rss',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper speech_importer'.
  $permissions['tamper speech_importer'] = array(
    'name' => 'tamper speech_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper speech_quotes'.
  $permissions['tamper speech_quotes'] = array(
    'name' => 'tamper speech_quotes',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Editor' => 'Editor',
      'Superuser' => 'Superuser',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock akdn_rss feeds'.
  $permissions['unlock akdn_rss feeds'] = array(
    'name' => 'unlock akdn_rss feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock iis_rss feeds'.
  $permissions['unlock iis_rss feeds'] = array(
    'name' => 'unlock iis_rss feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock speech_importer feeds'.
  $permissions['unlock speech_importer feeds'] = array(
    'name' => 'unlock speech_importer feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock speech_quotes feeds'.
  $permissions['unlock speech_quotes feeds'] = array(
    'name' => 'unlock speech_quotes feeds',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'update any event_registration registration'.
  $permissions['update any event_registration registration'] = array(
    'name' => 'update any event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own event_registration registration'.
  $permissions['update own event_registration registration'] = array(
    'name' => 'update own event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'upload videos'.
  $permissions['upload videos'] = array(
    'name' => 'upload videos',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format mailshot_format'.
  $permissions['use text format mailshot_format'] = array(
    'name' => 'use text format mailshot_format',
    'roles' => array(
      'Editor' => 'Editor',
      'Superuser' => 'Superuser',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format newsletter'.
  $permissions['use text format newsletter'] = array(
    'name' => 'use text format newsletter',
    'roles' => array(
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'Editor' => 'Editor',
      'Superuser' => 'Superuser',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view addthis'.
  $permissions['view addthis'] = array(
    'name' => 'view addthis',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any basic_blocks bean'.
  $permissions['view any basic_blocks bean'] = array(
    'name' => 'view any basic_blocks bean',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any highlight_left_box bean'.
  $permissions['view any highlight_left_box bean'] = array(
    'name' => 'view any highlight_left_box bean',
    'roles' => array(
      'Superuser' => 'Superuser',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any highlight_right_box bean'.
  $permissions['view any highlight_right_box bean'] = array(
    'name' => 'view any highlight_right_box bean',
    'roles' => array(
      'Superuser' => 'Superuser',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any unpublished article content'.
  $permissions['view any unpublished article content'] = array(
    'name' => 'view any unpublished article content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished calendar_event content'.
  $permissions['view any unpublished calendar_event content'] = array(
    'name' => 'view any unpublished calendar_event content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished calendar_pages content'.
  $permissions['view any unpublished calendar_pages content'] = array(
    'name' => 'view any unpublished calendar_pages content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished child_compound_articles content'.
  $permissions['view any unpublished child_compound_articles content'] = array(
    'name' => 'view any unpublished child_compound_articles content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished events content'.
  $permissions['view any unpublished events content'] = array(
    'name' => 'view any unpublished events content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished footer_menu content'.
  $permissions['view any unpublished footer_menu content'] = array(
    'name' => 'view any unpublished footer_menu content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished hub_page content'.
  $permissions['view any unpublished hub_page content'] = array(
    'name' => 'view any unpublished hub_page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished image_carousel content'.
  $permissions['view any unpublished image_carousel content'] = array(
    'name' => 'view any unpublished image_carousel content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished institutional_space content'.
  $permissions['view any unpublished institutional_space content'] = array(
    'name' => 'view any unpublished institutional_space content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished ip_hub_page content'.
  $permissions['view any unpublished ip_hub_page content'] = array(
    'name' => 'view any unpublished ip_hub_page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished ismaili_centres content'.
  $permissions['view any unpublished ismaili_centres content'] = array(
    'name' => 'view any unpublished ismaili_centres content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished news_headline_items content'.
  $permissions['view any unpublished news_headline_items content'] = array(
    'name' => 'view any unpublished news_headline_items content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished nutrient content'.
  $permissions['view any unpublished nutrient content'] = array(
    'name' => 'view any unpublished nutrient content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished page content'.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished parent_compound_articles content'.
  $permissions['view any unpublished parent_compound_articles content'] = array(
    'name' => 'view any unpublished parent_compound_articles content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished people content'.
  $permissions['view any unpublished people content'] = array(
    'name' => 'view any unpublished people content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished photo_gallery content'.
  $permissions['view any unpublished photo_gallery content'] = array(
    'name' => 'view any unpublished photo_gallery content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished recipe content'.
  $permissions['view any unpublished recipe content'] = array(
    'name' => 'view any unpublished recipe content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished simplenews content'.
  $permissions['view any unpublished simplenews content'] = array(
    'name' => 'view any unpublished simplenews content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished speech content'.
  $permissions['view any unpublished speech content'] = array(
    'name' => 'view any unpublished speech content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished speech_quote content'.
  $permissions['view any unpublished speech_quote content'] = array(
    'name' => 'view any unpublished speech_quote content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished tips content'.
  $permissions['view any unpublished tips content'] = array(
    'name' => 'view any unpublished tips content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished video content'.
  $permissions['view any unpublished video content'] = array(
    'name' => 'view any unpublished video content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished webform content'.
  $permissions['view any unpublished webform content'] = array(
    'name' => 'view any unpublished webform content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view event_registration registration'.
  $permissions['view event_registration registration'] = array(
    'name' => 'view event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view field_article_type'.
  $permissions['view field_article_type'] = array(
    'name' => 'view field_article_type',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_copyright_notice'.
  $permissions['view field_copyright_notice'] = array(
    'name' => 'view field_copyright_notice',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_geographies'.
  $permissions['view field_geographies'] = array(
    'name' => 'view field_geographies',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_microsite'.
  $permissions['view field_microsite'] = array(
    'name' => 'view field_microsite',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_primary_category'.
  $permissions['view field_primary_category'] = array(
    'name' => 'view field_primary_category',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tags'.
  $permissions['view field_tags'] = array(
    'name' => 'view field_tags',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node map'.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view own event_registration registration'.
  $permissions['view own event_registration registration'] = array(
    'name' => 'view own event_registration registration',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own field_article_type'.
  $permissions['view own field_article_type'] = array(
    'name' => 'view own field_article_type',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_copyright_notice'.
  $permissions['view own field_copyright_notice'] = array(
    'name' => 'view own field_copyright_notice',
    'roles' => array(
      'JI Administrator' => 'JI Administrator',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_geographies'.
  $permissions['view own field_geographies'] = array(
    'name' => 'view own field_geographies',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_microsite'.
  $permissions['view own field_microsite'] = array(
    'name' => 'view own field_microsite',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_primary_category'.
  $permissions['view own field_primary_category'] = array(
    'name' => 'view own field_primary_category',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tags'.
  $permissions['view own field_tags'] = array(
    'name' => 'view own field_tags',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Editor' => 'JI Editor',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'JI Administrator' => 'JI Administrator',
      'JI Contributor' => 'JI Contributor',
      'JI Editor' => 'JI Editor',
      'JI Publisher' => 'JI Publisher',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Superuser' => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user location details'.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view user map'.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view workbench access information'.
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'view workbench taxonomy pages'.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      'Publisher' => 'Publisher',
      'Superuser' => 'Superuser',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'webform_anonymous_edit_config'.
  $permissions['webform_anonymous_edit_config'] = array(
    'name' => 'webform_anonymous_edit_config',
    'roles' => array(
      'Superuser' => 'Superuser',
    ),
    'module' => 'webform_anonymous_edits',
  );

  return $permissions;
}
