<?php
/**
 * @file
 * akdn_custom_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function akdn_custom_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['akaa_custom-_akaa_custom_social_sharing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '_akaa_custom_social_sharing',
    'module' => 'akaa_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akaa_custom-akaa_custom_award_cycle_related'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_custom_award_cycle_related',
    'module' => 'akaa_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akaa_custom-akaa_news_resources_tiles'] = array(
    'cache' => -1,
    'css_class' => 'what-we-do-main-wrapper',
    'custom' => 0,
    'delta' => 'akaa_news_resources_tiles',
    'module' => 'akaa_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akaa_custom-akaa_see_also_block'] = array(
    'cache' => -1,
    'css_class' => 'akaa-cyle-award-see-also',
    'custom' => 0,
    'delta' => 'akaa_see_also_block',
    'module' => 'akaa_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'SEE ALSO',
    'visibility' => 0,
  );

  $export['akdn_custom-ac_lang_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ac_lang_switch',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['akdn_custom-ac_node_translations'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ac_node_translations',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-akaa_project_details'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_project_details',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-akaa_resources'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_resources',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-akdn_breadcrumb_trail'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akdn_breadcrumb_trail',
    'module' => 'akdn_custom',
    'node_types' => array(
      0 => 'focus_area',
      1 => 'gallery',
      2 => 'geography',
      3 => 'hub_page',
      4 => 'podcast',
      5 => 'project',
      6 => 'publication',
      7 => 'speech',
    ),
    'pages' => 'search
search/*',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-akdn_date_filter'] = array(
    'cache' => -1,
    'css_class' => 'akdn-filter-wrapper filter-date-block',
    'custom' => 0,
    'delta' => 'akdn_date_filter',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Date',
    'visibility' => 0,
  );

  $export['akdn_custom-akdn_filter'] = array(
    'cache' => -1,
    'css_class' => 'akdn-filter-show-hide',
    'custom' => 0,
    'delta' => 'akdn_filter',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['akdn_custom-akdn_related_content'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akdn_related_content',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['akdn_custom-akdn_search'] = array(
    'cache' => -1,
    'css_class' => 'top-navbar',
    'custom' => 0,
    'delta' => 'akdn_search',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['akdn_custom-akdn_speech_quotes_heading'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akdn_speech_quotes_heading',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['akdn_custom-akdn_speech_tools'] = array(
    'cache' => -1,
    'css_class' => 'akdn-filter-wrapper filter-conent-block',
    'custom' => 0,
    'delta' => 'akdn_speech_tools',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['akdn_custom-all_areas_of_activity'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'all_areas_of_activity',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '/akdn-social',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-basic_page_accordian_style_block'] = array(
    'cache' => -1,
    'css_class' => 'basic-page-quick-links hub-page-quick-links-wrapper',
    'custom' => 0,
    'delta' => 'basic_page_accordian_style_block',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-basic_page_link_to_style_block'] = array(
    'cache' => -1,
    'css_class' => 'basic-page-more-links-wrapper',
    'custom' => 0,
    'delta' => 'basic_page_link_to_style_block',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-custom_content_breadcrumb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_content_breadcrumb',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-fact_block_show_hide'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'fact_block_show_hide',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-fact_sheet_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'fact_sheet_block',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-geography_agency_logo_title'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'geography_agency_logo_title',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-news_and_resources_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_and_resources_links',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-right_panel_press_center_block'] = array(
    'cache' => -1,
    'css_class' => 'hub-page-press-center-right',
    'custom' => 0,
    'delta' => 'right_panel_press_center_block',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akdn_custom-what_we_do_news_and_resources'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'what_we_do_news_and_resources',
    'module' => 'akdn_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akmi_custom-akmi_homepage_aboutus'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_homepage_aboutus',
    'module' => 'akmi_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akmi_custom-akmi_news_resources_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_news_resources_block',
    'module' => 'akmi_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['akmi_custom-akmi_social_sharing_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_social_sharing_block',
    'module' => 'akmi_custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-akaa_social_share_footer'] = array(
    'cache' => -1,
    'css_class' => 'social-share-footer',
    'custom' => 0,
    'machine_name' => 'akaa_social_share_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-akdn_galance'] = array(
    'cache' => -1,
    'css_class' => 'akdn-glance sub-navbar',
    'custom' => 0,
    'machine_name' => 'akdn_galance',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-akmi_contact_us_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'akmi_contact_us_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'CONTACT US',
    'visibility' => 0,
  );

  $export['block-akmi_logo'] = array(
    'cache' => -1,
    'css_class' => 'akmi-logo',
    'custom' => 0,
    'machine_name' => 'akmi_logo',
    'module' => 'block',
    'node_types' => array(
      0 => 'akmi_activity',
      1 => 'akmi_pages',
      2 => 'page',
    ),
    'pages' => 'akmi/*
aga-khan-music-initiative
akmi/music-education-and-mentoring',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => 'top_branding',
        'status' => 1,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-akmi_performance_finder_link'] = array(
    'cache' => -1,
    'css_class' => 'project-finder-btn',
    'custom' => 0,
    'machine_name' => 'akmi_performance_finder_link',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-akmi_social_icons_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'akmi_social_icons_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-akmi_social_sharing_footer_icon'] = array(
    'cache' => -1,
    'css_class' => 'social-share-footer',
    'custom' => 0,
    'machine_name' => 'akmi_social_sharing_footer_icon',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-breadcrumd_new_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'breadcrumd_new_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-home_page_whats_new_block'] = array(
    'cache' => -1,
    'css_class' => 'akdn-glance sub-navbar',
    'custom' => 0,
    'machine_name' => 'home_page_whats_new_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-panes_custom_wrapper_end_div'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'panes_custom_wrapper_end_div',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-panes_custom_wrapper_start_div'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'panes_custom_wrapper_start_div',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-project_finder_links'] = array(
    'cache' => -1,
    'css_class' => 'project-finder-btn',
    'custom' => 0,
    'machine_name' => 'project_finder_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-project_finder_title'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'project_finder_title',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-publications_page_title'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'publications_page_title',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-site_logo'] = array(
    'cache' => -1,
    'css_class' => 'logo-container',
    'custom' => 0,
    'machine_name' => 'site_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-social_share_footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'social_share_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['delta_blocks-logo'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'logo',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => -4,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => -4,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-page-title'] = array(
    'cache' => 4,
    'css_class' => 'title-border',
    'custom' => 0,
    'delta' => 'page-title',
    'module' => 'delta_blocks',
    'node_types' => array(
      0 => 'speech_quote',
      1 => 'speech_theme',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 6,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 6,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-akaa_projects-page'] = array(
    'cache' => -1,
    'css_class' => 'akaa-projectfinder-wrapper',
    'custom' => 0,
    'delta' => '-exp-akaa_projects-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Project Finder',
    'visibility' => 0,
  );

  $export['views--exp-akaa_projects-page_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-akaa_projects-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Project Finder',
    'visibility' => 0,
  );

  $export['views--exp-akaa_projects-page_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-akaa_projects-page_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Project Finder',
    'visibility' => 0,
  );

  $export['views--exp-akaa_projects-page_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-akaa_projects-page_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Project Finder',
    'visibility' => 0,
  );

  $export['views--exp-akaa_projects-page_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-akaa_projects-page_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Project Finder',
    'visibility' => 0,
  );

  $export['views--exp-akmi_performance-page'] = array(
    'cache' => -1,
    'css_class' => 'akaa-projectfinder-wrapper akaa-performancefinder-wrapper',
    'custom' => 0,
    'delta' => '-exp-akmi_performance-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Performance Finder',
    'visibility' => 0,
  );

  $export['views--exp-award_cycle_news-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-award_cycle_news-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0256c5ae9c6b7d5feb2c0da1995df25c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '0256c5ae9c6b7d5feb2c0da1995df25c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-09f4708b34305badafc340b297f2a095'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => '09f4708b34305badafc340b297f2a095',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0b9026fc9d0351715d889459917ff9df'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '0b9026fc9d0351715d889459917ff9df',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0cfbe31d99a8f227915c41fe14d778de'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '0cfbe31d99a8f227915c41fe14d778de',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-150ffa23b6e9e6efaff013e141bb5548'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => '150ffa23b6e9e6efaff013e141bb5548',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-1b558a60463eb05c1ca04baab49cd7fc'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => '1b558a60463eb05c1ca04baab49cd7fc',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-1feb86d3ebc7b468c66d4d6afe8a0572'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1feb86d3ebc7b468c66d4d6afe8a0572',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-2763b9b38e04f32ad643188677989dfb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2763b9b38e04f32ad643188677989dfb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-2fb9fe008e684053387afd8025fee4b3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2fb9fe008e684053387afd8025fee4b3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-32609b6a9b5f3dcf4dcd6fca87896427'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '32609b6a9b5f3dcf4dcd6fca87896427',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-39f3e27317e4b59698215c3a30bfa486'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '39f3e27317e4b59698215c3a30bfa486',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-417d5fe637f0dfbab45c0b51e7fef076'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '417d5fe637f0dfbab45c0b51e7fef076',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-44a720ddabef8a28c12afa4130c9bb41'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '44a720ddabef8a28c12afa4130c9bb41',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-44b403034b2199833c9f96bcc49653eb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '44b403034b2199833c9f96bcc49653eb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-456e0e2eca330d0de7aca2b7934beb93'] = array(
    'cache' => -1,
    'css_class' => 'akaa-award-cycle-related-info',
    'custom' => 0,
    'delta' => '456e0e2eca330d0de7aca2b7934beb93',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-50eb1d051c7f8dcf961557f66e22a3f0'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => '50eb1d051c7f8dcf961557f66e22a3f0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-5bf695b7526b0a2bd974a28c2144d08c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '5bf695b7526b0a2bd974a28c2144d08c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-639ee3217415bda53d02b981c9810669'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '639ee3217415bda53d02b981c9810669',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-659a7742423b0b4adc617dc43de1a221'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => '659a7742423b0b4adc617dc43de1a221',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-65c1a924fb1837679af953ef0ad3d5c4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '65c1a924fb1837679af953ef0ad3d5c4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-6d89e2155a86b6013617808bc7ba421b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '6d89e2155a86b6013617808bc7ba421b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-6e017e0e649d1be621c9e4dd1c0eb682'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '6e017e0e649d1be621c9e4dd1c0eb682',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-70846f3b1c52d517bcfaf5d3d027298d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '70846f3b1c52d517bcfaf5d3d027298d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-7295a442123815001582466e2ace797f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7295a442123815001582466e2ace797f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-737e8e8529e65ed2ad904f3e5686cabd'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '737e8e8529e65ed2ad904f3e5686cabd',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-77db50a02ffee1ab2eaa87d8ea642934'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '77db50a02ffee1ab2eaa87d8ea642934',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-805ec0f0933f31d48537fd7a0bbbdaa3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '805ec0f0933f31d48537fd7a0bbbdaa3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-9060b04cf2c5b4aebc957bca900aee12'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9060b04cf2c5b4aebc957bca900aee12',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-942d37f53f205fdfb0cea0e2e0d018e2'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => '942d37f53f205fdfb0cea0e2e0d018e2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-948e2207d46164f6e352896a4ed011f8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '948e2207d46164f6e352896a4ed011f8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-972001afc2c897e3dfc8ae71b79f08aa'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '972001afc2c897e3dfc8ae71b79f08aa',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-9937b397121e8f342fa8342f2436618a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9937b397121e8f342fa8342f2436618a',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-9ebe5d259dbd90b0214f79addd6ca683'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9ebe5d259dbd90b0214f79addd6ca683',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-a045a05c0464bd66ea25a8ce6d04947c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a045a05c0464bd66ea25a8ce6d04947c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-a72ba65cff5207851dc3d9bdb81485f9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a72ba65cff5207851dc3d9bdb81485f9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-a7c7297d3ef8e379ce2bcb8d05d0ea94'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a7c7297d3ef8e379ce2bcb8d05d0ea94',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-abc17ada4726f479236904311fda086c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'abc17ada4726f479236904311fda086c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-about_us-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'about_us-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-about_us-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'about_us-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-adda9320f356c3131c6a434a593ca05c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'adda9320f356c3131c6a434a593ca05c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-agencies-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'agencies-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-agencies-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'agencies-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-agencies-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'agencies-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'More on this Agency',
    'visibility' => 0,
  );

  $export['views-agencies-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'agencies-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'More on this Geography',
    'visibility' => 0,
  );

  $export['views-akaa_home_page-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_home_page-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_home_page-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_home_page-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_home_page-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_home_page-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_home_page-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_home_page-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_home_page-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_home_page-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_home_page-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_home_page-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_projects-all_award_cycles'] = array(
    'cache' => -1,
    'css_class' => 'akaa-all-award-cycle-btn',
    'custom' => 0,
    'delta' => 'akaa_projects-all_award_cycles',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_projects-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_projects-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_projects-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_projects-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_projects-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_projects-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_projects-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_projects-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_projects-block_5'] = array(
    'cache' => -1,
    'css_class' => 'akaa-award-cycle-related-info',
    'custom' => 0,
    'delta' => 'akaa_projects-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'RELATED INFORMATION',
    'visibility' => 0,
  );

  $export['views-akaa_projects-block_6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_projects-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akaa_projects-block_7'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akaa_projects-block_7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_artists_views-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_artists_views-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_artists_views-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_artists_views-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_artists_views-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_artists_views-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_artists_views-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_artists_views-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_cd_dvd_series-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_cd_dvd_series-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_events_views-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_events_views-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_home_page-akmi_home_video'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_home_page-akmi_home_video',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_home_page-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_home_page-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_home_page-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_home_page-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_home_page-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_home_page-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_home_page-info_akmi_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_home_page-info_akmi_header',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_performance-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_performance-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_performance-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_performance-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_performance-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_performance-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-akmi_performance-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akmi_performance-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-areas_of_activity-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'areas_of_activity-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-award_cycle-akaa_short_video'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'award_cycle-akaa_short_video',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-award_cycle-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'award_cycle-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-award_cycle-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'award_cycle-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-award_cycle-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'award_cycle-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-award_cycle-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'award_cycle-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-award_cycle-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'award_cycle-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-award_cycle-block_6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'award_cycle-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-b04331c2ee856ed2151c7e7a6c616c72'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b04331c2ee856ed2151c7e7a6c616c72',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-b847ab27c897e23da52912a955c4854b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b847ab27c897e23da52912a955c4854b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-b8aed6699ae111a7d59e001b4e7785a2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b8aed6699ae111a7d59e001b4e7785a2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ba70e9e87dd18b91b91638241d47cd93'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ba70e9e87dd18b91b91638241d47cd93',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-breaking_news-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'breaking_news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-c9f71050a19518e022991ee960bedecf'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'c9f71050a19518e022991ee960bedecf',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-cb5391352fdf0874e3440c3380155a96'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cb5391352fdf0874e3440c3380155a96',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-custom_header_block-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_header_block-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-custom_header_block-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_header_block-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-custom_header_block-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_header_block-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-custom_header_block-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_header_block-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-custom_header_block-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_header_block-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-custom_header_block-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_header_block-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-d0bc12770888a4053ac4cf9fcb4dc9b2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd0bc12770888a4053ac4cf9fcb4dc9b2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-d394c2d4ba03afb642f091e6689a0893'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd394c2d4ba03afb642f091e6689a0893',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-d463bed85c77f30040d5ab9eff32ca37'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => 'd463bed85c77f30040d5ab9eff32ca37',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-d904c430572b598dec3d2afbc313b01b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd904c430572b598dec3d2afbc313b01b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-de1834bd8186ca16a179b613d68b1538'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'de1834bd8186ca16a179b613d68b1538',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-e334c3adfd2ddc65ceb1e3393338c65c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e334c3adfd2ddc65ceb1e3393338c65c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-e5eb80817825abee14c316c9d8c74adb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e5eb80817825abee14c316c9d8c74adb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-e996ddeda006dbed9baefc3965a03b0a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e996ddeda006dbed9baefc3965a03b0a',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-f10720a9ffee8d63d2bedf62c5ae82ce'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f10720a9ffee8d63d2bedf62c5ae82ce',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-f89442ef11e66c3270a60f1e9e7249fe'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f89442ef11e66c3270a60f1e9e7249fe',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facebook_feeds-akmi_facebook'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facebook_feeds-akmi_facebook',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facebook_feeds-akmi_twitter'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facebook_feeds-akmi_twitter',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facebook_feeds-akmi_youtube'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facebook_feeds-akmi_youtube',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facebook_feeds-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facebook_feeds-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facebook_feeds-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facebook_feeds-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facebook_feeds-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facebook_feeds-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facts_blocks-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facts_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facts_blocks-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facts_blocks-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facts_blocks-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facts_blocks-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facts_blocks-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facts_blocks-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facts_blocks-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facts_blocks-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facts_blocks-facts_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facts_blocks-facts_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facts_blocks-manual_fact_blocks'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facts_blocks-manual_fact_blocks',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-fd3cd9e82e550ac52dfaacd56c8de55d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'fd3cd9e82e550ac52dfaacd56c8de55d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 21,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 21,
      ),
      'akdn_museum' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-featured_slideshow-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_10'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_10',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_11'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_11',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_12'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_12',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_13'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_13',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_14'] = array(
    'cache' => -1,
    'css_class' => 'carousel-left',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_14',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_15'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_15',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_7'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_slideshow-block_9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_slideshow-block_9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ffacff025ec452850acbed8334fc259e'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ffacff025ec452850acbed8334fc259e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-focus_areas-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'focus_areas-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-focus_areas-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'focus_areas-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-all_areas_activities'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-all_areas_activities',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-country_hub_pages'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-country_hub_pages',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-country_hub_subpages'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-country_hub_subpages',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-custom_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-custom_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hub_pages-other_activities'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hub_pages-other_activities',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-manual_about_page-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'manual_about_page-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_96-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'nodequeue_96-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 22,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 22,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_10'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_10',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_11'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_11',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_12'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_12',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_13'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_13',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_14'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_14',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_15'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_15',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_16'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_16',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_17'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_17',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_18'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_18',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_7'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-press_center-block_9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'press_center-block_9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-project_pages-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'project_pages-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_10'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_10',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_11'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_11',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_12'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_12',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_7'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-projects-block_9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects-block_9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-publications-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'publications-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-publications-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'publications-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-publications-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'publications-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-publications-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'publications-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-publications-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'publications-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_projects-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_projects-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-show_media_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'show_media_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-show_media_info-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'show_media_info-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-solr_search_page-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'solr_search_page-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-solr_search_page-block_2'] = array(
    'cache' => -1,
    'css_class' => 'whatsnew-right',
    'custom' => 0,
    'delta' => 'solr_search_page-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-solr_search_pages_1-block_1'] = array(
    'cache' => -1,
    'css_class' => 'whatsnew-right',
    'custom' => 0,
    'delta' => 'solr_search_pages_1-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-solr_search_pages_1-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'solr_search_pages_1-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-solr_search_pages_1-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'solr_search_pages_1-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-solr_search_pages_1-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'solr_search_pages_1-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-solr_search_pages_1-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'solr_search_pages_1-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-speeches-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'speeches-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-speeches-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'speeches-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-speeches-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'speeches-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 0,
      ),
      'akdn_mailshot' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_mailshot',
        'weight' => 0,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
