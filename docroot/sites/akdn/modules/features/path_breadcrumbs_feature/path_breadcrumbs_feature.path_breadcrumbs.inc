<?php
/**
 * @file
 * path_breadcrumbs_feature.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function path_breadcrumbs_feature_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'about_us';
  $path_breadcrumb->name = 'About Us';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About Us',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/17291',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -84;
  $export['about_us'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'agency_pages';
  $path_breadcrumb->name = 'Agency pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'agency' => 'agency',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'agencies/aga-khan-award-architecture-0
our-agencies/aga-khan-music-initiative
akmi
architecture',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['agency_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'agency_pages_clone';
  $path_breadcrumb->name = 'AKMI pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'node/2194',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'agency' => 'agency',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'our-agencies/aga-khan-music-initiative
akmi',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['agency_pages_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'agency_pages_clone_clone';
  $path_breadcrumb->name = 'AKMI Inquiry Form';
  $path_breadcrumb->path = 'node/26851';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => 'Aga Khan Music Initiative',
      3 => 'AKMI Enquiry form',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'node/2194',
      2 => 'node/22106',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/26851
node/26851/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['agency_pages_clone_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akaa_page';
  $path_breadcrumb->name = 'AKAA Page';
  $path_breadcrumb->path = 'node/9576';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'architecture',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['akaa_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akmi_artist_detail_pages';
  $path_breadcrumb->name = 'AKMI Artist Detail pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => 'Aga Khan Music Initiative',
      3 => '%node:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'akmi',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'akmi_artists' => 'akmi_artists',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['akmi_artist_detail_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akmi_cd_dvd_page';
  $path_breadcrumb->name = 'AKMI CD DVD Page';
  $path_breadcrumb->path = 'akmi/cd-dvd';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => 'Aga Khan Music Initiative',
      3 => 'AKMI CD-DVDs',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'node/2194',
      2 => 'node/22106',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'akmi/cd-dvd',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['akmi_cd_dvd_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akmi_event_calender_page_breadcrumb';
  $path_breadcrumb->name = 'AkMI Event Calender page Breadcrumb';
  $path_breadcrumb->path = 'akmi/events/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => 'Aga Khan Music Initiative',
      3 => 'Event Calendar',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'akmi',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'term' => array(
        'position' => 2,
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['akmi_event_calender_page_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akmi_instruments_breadcrumb';
  $path_breadcrumb->name = 'AKMI Instruments Breadcrumb';
  $path_breadcrumb->path = 'akmi/instruments';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => 'Aga Khan Music Initiative',
      3 => 'Instruments',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'akmi',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['akmi_instruments_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akmi_performance';
  $path_breadcrumb->name = 'AKMI Performance View listing page breadcrumb';
  $path_breadcrumb->path = 'akmi/performance';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => 'Aga Khan Music Initiative',
      3 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'node/2194',
      2 => 'node/22106',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'akmi/performance',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['akmi_performance'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akmi_performance_page_breadcrumb';
  $path_breadcrumb->name = 'AKMI Performance Detail Page Breadcrumb';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => ' Aga Khan Music Initiative',
      3 => '%node:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'akmi',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'akmi_performance' => 'akmi_performance',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['akmi_performance_page_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'akmi_press_centre';
  $path_breadcrumb->name = 'AKMI Press Centre';
  $path_breadcrumb->path = 'akmi/press-centre';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust for Culture',
      2 => 'Aga Khan Music Initiative',
      3 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'node/2194',
      2 => 'node/22106',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'akmi/press-centre',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['akmi_press_centre'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'architectue_project_breadcrumb';
  $path_breadcrumb->name = 'Architectue Project Breadcrumb';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => 'Aga Khan Award for Architecture',
      3 => '%node:field-cycle-year:field-award-cycle:node-short-title',
      4 => '%node:node-short-title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'architecture',
      3 => '%node:field-cycle-year:field-award-cycle:url',
      4 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'architecture_project' => 'architecture_project',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['architectue_project_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'architecture_master_jury';
  $path_breadcrumb->name = 'architecture master jury';
  $path_breadcrumb->path = 'architecture/master-jury/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => 'Aga Khan Award for Architecture',
      3 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'node/9576',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'architecture/master-jury/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['architecture_master_jury'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'architecture_press_centre';
  $path_breadcrumb->name = 'Architecture Press Centre';
  $path_breadcrumb->path = 'architecture/press-centre';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => 'Aga Khan Award for Architecture',
      3 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'architecture',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'architecture/press-centre',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['architecture_press_centre'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'architecture_projects_';
  $path_breadcrumb->name = 'Architecture Projects ';
  $path_breadcrumb->path = 'architecture/projects';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => 'Aga Khan Award For Architecture',
      3 => 'Projects',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'architecture',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['architecture_projects_'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'architecture_projects_location';
  $path_breadcrumb->name = 'Architecture Projects Location';
  $path_breadcrumb->path = 'architecture/projects/map';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => 'Aga Khan Award for Architecture',
      3 => 'Project Locations',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'node/9576',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'architecture/projects/map',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['architecture_projects_location'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'architecture_steering_committee';
  $path_breadcrumb->name = 'architecture steering committee';
  $path_breadcrumb->path = 'architecture/steering-committee/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => 'Aga Khan Award for Architecture',
      3 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'node/9576',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'architecture/steering-committee/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['architecture_steering_committee'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'award_cycle_pages_breadcrumb';
  $path_breadcrumb->name = 'Award Cycle Pages Breadcrumb';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Agencies',
      1 => 'Aga Khan Trust For Culture',
      2 => 'Aga Khan Award for Architecture',
      3 => '%node:field-short-title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'our-agencies/aga-khan-trust-culture',
      2 => 'architecture',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'award_cycle' => 'award_cycle',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['award_cycle_pages_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'basic_page';
  $path_breadcrumb->name = 'Basic Page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About Us',
      1 => '%node:node-title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:agency:field_tags',
          'settings' => array(
            'field_tags' => array(
              'en' => array(
                0 => array(
                  'tid' => '9006',
                  'vid' => '1',
                  'name' => 'about us',
                  'description' => NULL,
                  'format' => NULL,
                  'weight' => '0',
                  'uuid' => '2c2927dc-3de8-442a-a679-cd3894eeb8f6',
                  'vocabulary_machine_name' => 'tags',
                  'metatags' => array(),
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                  'translations' => (object) array(
                    'original' => 'en',
                    'data' => array(
                      'en' => array(
                        'entity_type' => 'taxonomy_term',
                        'entity_id' => '9006',
                        'language' => 'en',
                        'source' => '',
                        'uid' => '1',
                        'status' => '1',
                        'translate' => '0',
                        'created' => '1449839991',
                        'changed' => '1449839991',
                      ),
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'about us',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -88;
  $export['basic_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'basic_page_inner_pages';
  $path_breadcrumb->name = 'Basic Page Inner pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:menu-link:pb-join:name',
      1 => '%node:field-short-title',
    ),
    'paths' => array(
      0 => '%node:menu-link:pb-join:url',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['basic_page_inner_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contact_us';
  $path_breadcrumb->name = 'Contact Us';
  $path_breadcrumb->path = 'node/4310';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Contact Us',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/4310',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['contact_us'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'galleries_detail_page';
  $path_breadcrumb->name = 'Galleries Detail page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => 'Photographs',
      2 => '%node:field_short_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/galleries',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -90;
  $export['galleries_detail_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'galleries_detail_page_clone';
  $path_breadcrumb->name = 'Awards Receving';
  $path_breadcrumb->path = 'node/17296';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => 'awards-received-agencies-akdn',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -81;
  $export['galleries_detail_page_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'geography_pages';
  $path_breadcrumb->name = 'Award page pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Where we work',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'geography' => 'geography',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -86;
  $export['geography_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'hub_page';
  $path_breadcrumb->name = 'Hub Page ';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Hub page',
      1 => '%node:field-geography-term:name',
      2 => '%node:field-agency-term:name',
      3 => '%node:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'hub_page' => 'hub_page',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -97;
  $export['hub_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_center';
  $path_breadcrumb->name = 'Publication detail page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => 'Publications',
      2 => '%node:field_short_title',
    ),
    'paths' => array(
      0 => 'press-center',
      1 => 'press-centre/publications',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'publication' => 'publication',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -98;
  $export['press_center'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_center_events_detail_pages';
  $path_breadcrumb->name = 'Press center Events Detail pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => 'Events',
      2 => '%node:field_short_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/events',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -99;
  $export['press_center_events_detail_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_center_media_detail_pages';
  $path_breadcrumb->name = 'Press Centre Media Detail Pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => 'In the Media',
      2 => '%node:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/in-the-media',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_article_cat',
          'settings' => array(
            'field_article_cat' => array(
              'und' => array(
                0 => array(
                  'tid' => '2611',
                ),
              ),
            ),
            'field_article_cat_tid' => '2611',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -83;
  $export['press_center_media_detail_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_center_menu_pages';
  $path_breadcrumb->name = 'Press Center Menu pages';
  $path_breadcrumb->path = 'press-centre/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -85;
  $export['press_center_menu_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_center_news_detail_pages';
  $path_breadcrumb->name = 'Press center News Detail pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Center',
      1 => 'News',
      2 => '%node:field-short-title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/news',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_article_cat',
          'settings' => array(
            'field_article_cat' => array(
              'und' => array(
                0 => array(
                  'tid' => '2',
                ),
              ),
            ),
            'field_article_cat_tid' => '2',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -82;
  $export['press_center_news_detail_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_center_speeches_detail_page';
  $path_breadcrumb->name = 'Press Center Speeches Detail Page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => '%node:field-speech-type',
      2 => '%node:field_short_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/speeches',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'speech' => 'speech',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -100;
  $export['press_center_speeches_detail_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_center_videos_detail_pages';
  $path_breadcrumb->name = 'Press center videos Detail pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => 'Videos',
      2 => '%node:field_short_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/videos',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'podcast' => 'podcast',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -96;
  $export['press_center_videos_detail_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_release_detail_page';
  $path_breadcrumb->name = 'Press Release Detail page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => 'Press Releases',
      2 => '%node:field_short_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/press-releases',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_article_cat',
          'settings' => array(
            'field_article_cat' => array(
              'und' => array(
                0 => array(
                  'tid' => '4',
                ),
              ),
            ),
            'field_article_cat_tid' => '4',
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -95;
  $export['press_release_detail_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'projects_detail_pages';
  $path_breadcrumb->name = 'Projects Detail Pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => 'Spotlights',
      2 => '%node:field_short_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'press-centre/projects',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -91;
  $export['projects_detail_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search_result';
  $path_breadcrumb->name = 'Search Result';
  $path_breadcrumb->path = 'search';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '<none>',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => '<front>',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -87;
  $export['search_result'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'speeches';
  $path_breadcrumb->name = 'speeches';
  $path_breadcrumb->path = 'speeches';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'speeches',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -93;
  $export['speeches'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'speeches_clone';
  $path_breadcrumb->name = 'quotes finder';
  $path_breadcrumb->path = 'speech-quotes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press Centre',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -93;
  $export['speeches_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'subscription';
  $path_breadcrumb->name = 'subscription';
  $path_breadcrumb->path = 'subscribe';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Subscribe To Newsletter',
    ),
    'paths' => array(
      0 => '/subscribe',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'subscribe',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['subscription'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'thematic_areas';
  $path_breadcrumb->name = 'What we do Breadcrumbs';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'What we do',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'focus_area' => 'focus_area',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -94;
  $export['thematic_areas'] = $path_breadcrumb;

  return $export;

}
