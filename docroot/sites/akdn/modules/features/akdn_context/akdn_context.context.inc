<?php
/**
 * @file
 * akdn_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function akdn_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = 'Context settings for about us page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-projects-block_12' => array(
          'module' => 'views',
          'delta' => 'projects-block_12',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context settings for about us page');
  t('page');
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us_inner_page';
  $context->description = 'Context settings for about us page';
  $context->tag = 'page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context settings for about us page');
  t('page');
  $export['about_us_inner_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agency';
  $context->description = 'Context settings for geography and agency';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context settings for geography and agency');
  t('layout');
  $export['agency'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_architecture_project';
  $context->description = 'AKAA Architecture Projects ';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'architecture/projects' => 'architecture/projects',
      ),
    ),
    'views' => array(
      'values' => array(
        'akaa_projects:page' => 'akaa_projects:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '0',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Architecture Projects ');
  t('AKAA Specific');
  $export['akaa_architecture_project'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_general';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'architecture/projects' => 'architecture/projects',
        'architecture/master-jury/*' => 'architecture/master-jury/*',
        'architecture/steering-committee/*' => 'architecture/steering-committee/*',
        'architecture/projects/map' => 'architecture/projects/map',
      ),
    ),
    'views' => array(
      'values' => array(
        'akaa_projects:page' => 'akaa_projects:page',
        'people_listing:page' => 'people_listing:page',
        'people_listing:page_1' => 'people_listing:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-akaa_projects-page' => array(
          'module' => 'views',
          'delta' => '-exp-akaa_projects-page',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_general'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_header';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'architecture_project' => 'architecture_project',
        'award_cycle' => 'award_cycle',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'architecture/projects' => 'architecture/projects',
        'architecture/master-jury/*' => 'architecture/master-jury/*',
        'architecture/steering-committee/*' => 'architecture/steering-committee/*',
        'about-aga-khan-award-architecture' => 'about-aga-khan-award-architecture',
        'architecture/*' => 'architecture/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-56' => array(
          'module' => 'block',
          'delta' => '56',
          'region' => 'branding',
          'weight' => '-12',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_header_2';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        3881 => 3881,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-56' => array(
          'module' => 'block',
          'delta' => '56',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'panels_mini-akaa_sidebar' => array(
          'module' => 'panels_mini',
          'delta' => 'akaa_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_header_2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_people_listing';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'people_listing:page' => 'people_listing:page',
        'people_listing:page_1' => 'people_listing:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-456e0e2eca330d0de7aca2b7934beb93' => array(
          'module' => 'views',
          'delta' => '456e0e2eca330d0de7aca2b7934beb93',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-akaa_projects-all_award_cycles' => array(
          'module' => 'views',
          'delta' => 'akaa_projects-all_award_cycles',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'akaa_custom-akaa_see_also_block' => array(
          'module' => 'akaa_custom',
          'delta' => 'akaa_see_also_block',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_people_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_press_centre_page';
  $context->description = 'Use on news, press Centre page on AKAA';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'award_cycle_news:page' => 'award_cycle_news:page',
        'award_cycle_news:page_1' => 'award_cycle_news:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'branding',
          'weight' => '0',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'branding',
          'weight' => '1',
        ),
        'facetapi-WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ' => array(
          'module' => 'facetapi',
          'delta' => 'WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ',
          'region' => 'branding',
          'weight' => '2',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'branding',
          'weight' => '3',
        ),
        'facetapi-1Db0uOt2YNIARnjgjtD3QOCEHO3NUo2l' => array(
          'module' => 'facetapi',
          'delta' => '1Db0uOt2YNIARnjgjtD3QOCEHO3NUo2l',
          'region' => 'branding',
          'weight' => '4',
        ),
        'block-156' => array(
          'module' => 'block',
          'delta' => '156',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'akaa_custom-akaa_custom_press_centre_rhs' => array(
          'module' => 'akaa_custom',
          'delta' => 'akaa_custom_press_centre_rhs',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  t('Use on news, press Centre page on AKAA');
  $export['akaa_press_centre_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_project_locations';
  $context->description = 'AKAA Project Locations';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'architecture/projects/map' => 'architecture/projects/map',
      ),
    ),
    'views' => array(
      'values' => array(
        'custom_header_block' => 'custom_header_block',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-custom_header_block-block_3' => array(
          'module' => 'views',
          'delta' => 'custom_header_block-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-custom_header_block-block' => array(
          'module' => 'views',
          'delta' => 'custom_header_block-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Project Locations');
  t('AKAA Specific');
  $export['akaa_project_locations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akmi_cd_dvd_series';
  $context->description = 'AKMI CD DVD Page ';
  $context->tag = 'AKMI Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'akmi_cd_dvd_series:page' => 'akmi_cd_dvd_series:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-akmi_cd_dvd_series-block_1' => array(
          'module' => 'views',
          'delta' => 'akmi_cd_dvd_series-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-161' => array(
          'module' => 'block',
          'delta' => '161',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'views-eb33bf32e585fe570819d020538cef8f' => array(
          'module' => 'views',
          'delta' => 'eb33bf32e585fe570819d020538cef8f',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-custom_header_block-block_2' => array(
          'module' => 'views',
          'delta' => 'custom_header_block-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKMI CD DVD Page ');
  t('AKMI Specific');
  $export['akmi_cd_dvd_series'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akmi_event_calender_listing';
  $context->description = 'AKMI event Calender';
  $context->tag = 'AKMI Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'akmi_events_views:page' => 'akmi_events_views:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-161' => array(
          'module' => 'block',
          'delta' => '161',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'views-eb33bf32e585fe570819d020538cef8f' => array(
          'module' => 'views',
          'delta' => 'eb33bf32e585fe570819d020538cef8f',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-custom_header_block-block_5' => array(
          'module' => 'views',
          'delta' => 'custom_header_block-block_5',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKMI Specific');
  t('AKMI event Calender');
  $export['akmi_event_calender_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akmi_header_block';
  $context->description = 'AKMI Header Block';
  $context->tag = 'AKMI Specific';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'akmi_artists' => 'akmi_artists',
        'akmi_event' => 'akmi_event',
        'akmi_instrument' => 'akmi_instrument',
        'akmi_performance' => 'akmi_performance',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'akmi/instruments' => 'akmi/instruments',
        'akmi/artists/*' => 'akmi/artists/*',
        'akmi/cd-dvd-series' => 'akmi/cd-dvd-series',
        'akmi/performance/*' => 'akmi/performance/*',
        'akmi/events/*' => 'akmi/events/*',
        'akmi/enquiry-form' => 'akmi/enquiry-form',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-161' => array(
          'module' => 'block',
          'delta' => '161',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKMI Header Block');
  t('AKMI Specific');
  $export['akmi_header_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akmi_instruments_listing';
  $context->description = 'AKMI Instrument Listing';
  $context->tag = 'AKMI Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'akmi_instrument_views:page' => 'akmi_instrument_views:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-161' => array(
          'module' => 'block',
          'delta' => '161',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'views--exp-akmi_performance-page' => array(
          'module' => 'views',
          'delta' => '-exp-akmi_performance-page',
          'region' => 'branding',
          'weight' => '-8',
        ),
        'views-custom_header_block-block_4' => array(
          'module' => 'views',
          'delta' => 'custom_header_block-block_4',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-akmi_performance-block_1' => array(
          'module' => 'views',
          'delta' => 'akmi_performance-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKMI Instrument Listing');
  t('AKMI Specific');
  $export['akmi_instruments_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akmi_performance';
  $context->description = 'AKMI Performance';
  $context->tag = 'AKMI Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'akmi_performance' => 'akmi_performance',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-akmi_performance-page' => array(
          'module' => 'views',
          'delta' => '-exp-akmi_performance-page',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-161' => array(
          'module' => 'block',
          'delta' => '161',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKMI Performance');
  t('AKMI Specific');
  $export['akmi_performance'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akmi_press_centre';
  $context->description = 'AKMI Press Centre';
  $context->tag = 'AKMI Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'award_cycle_news:page_2' => 'award_cycle_news:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-161' => array(
          'module' => 'block',
          'delta' => '161',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'branding',
          'weight' => '-8',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'branding',
          'weight' => '-7',
        ),
        'facetapi-WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ' => array(
          'module' => 'facetapi',
          'delta' => 'WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ',
          'region' => 'branding',
          'weight' => '-6',
        ),
        'block-171' => array(
          'module' => 'block',
          'delta' => '171',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-eb33bf32e585fe570819d020538cef8f' => array(
          'module' => 'views',
          'delta' => 'eb33bf32e585fe570819d020538cef8f',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-44a720ddabef8a28c12afa4130c9bb41' => array(
          'module' => 'views',
          'delta' => '44a720ddabef8a28c12afa4130c9bb41',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKMI Press Centre');
  t('AKMI Specific');
  $export['akmi_press_centre'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'article-meta';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['article-meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'article-mobile-meta';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-meta' => array(
          'module' => 'ds_extras',
          'delta' => 'meta',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['article-mobile-meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'article_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['article_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-1',
        ),
        'akdn_custom-geography_agency_logo_title' => array(
          'module' => 'akdn_custom',
          'delta' => 'geography_agency_logo_title',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['basic_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'event' => 'event',
        'gallery' => 'gallery',
        'page' => 'page',
        'person' => 'person',
        'podcast' => 'podcast',
        'project' => 'project',
        'publication' => 'publication',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['content_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'custom_content_header';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'custom_content' => 'custom_content',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-62fe5c5de13a4e77370771295bbfebd5' => array(
          'module' => 'views',
          'delta' => '62fe5c5de13a4e77370771295bbfebd5',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-8',
        ),
        'akdn_custom-custom_content_breadcrumb' => array(
          'module' => 'akdn_custom',
          'delta' => 'custom_content_breadcrumb',
          'region' => 'branding',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['custom_content_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event-mobile-meta';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['event-mobile-meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_meta';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['event_meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~*/edit' => '~*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_2' => array(
          'module' => 'views',
          'delta' => 'events-block_2',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['event_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_page:page_1' => 'solr_search_page:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-6',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-09f4708b34305badafc340b297f2a095' => array(
          'module' => 'views',
          'delta' => '09f4708b34305badafc340b297f2a095',
          'region' => 'preface_first',
          'weight' => '-11',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['events_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'galleries_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_page:page_2' => 'solr_search_page:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-6',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-d463bed85c77f30040d5ab9eff32ca37' => array(
          'module' => 'views',
          'delta' => 'd463bed85c77f30040d5ab9eff32ca37',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['galleries_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery-mobile-meta';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['gallery-mobile-meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery-page';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['gallery-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery_meta';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['gallery_meta'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'geography';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-agencies-block_4' => array(
          'module' => 'views',
          'delta' => 'agencies-block_4',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['geography'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page_panels';
  $context->description = 'Hides the main content area on the home page';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'clone_of_front_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hides the main content area on the home page');
  t('layout');
  $export['home_page_panels'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hub_page';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'agency' => 'agency',
        'focus_area' => 'focus_area',
        'geography' => 'geography',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
        '<front>' => '<front>',
        'geographies' => 'geographies',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'clone_of_front_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['hub_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hub_page_subpage';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~about-aga-khan-award-architecture' => '~about-aga-khan-award-architecture',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['hub_page_subpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'in_the_media_listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_pages_1:page_3' => 'solr_search_pages_1:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-6',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-5',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-50eb1d051c7f8dcf961557f66e22a3f0' => array(
          'module' => 'views',
          'delta' => '50eb1d051c7f8dcf961557f66e22a3f0',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['in_the_media_listing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'inner_hub_page';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'hub_page' => 'hub_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'hub_page/*' => 'hub_page/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-geography_agency_logo_title' => array(
          'module' => 'akdn_custom',
          'delta' => 'geography_agency_logo_title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['inner_hub_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_pages_1:page_1' => 'solr_search_pages_1:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-6',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-1b558a60463eb05c1ca04baab49cd7fc' => array(
          'module' => 'views',
          'delta' => '1b558a60463eb05c1ca04baab49cd7fc',
          'region' => 'preface_first',
          'weight' => '-11',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['news_listing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'no_admin';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~users' => '~users',
        '~users/*' => '~users/*',
        '~user' => '~user',
        '~user/*' => '~user/*',
        '~admin' => '~admin',
        '~imagecrop' => '~imagecrop',
        '~imagecrop/*' => '~imagecrop/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['no_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not_front';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['not_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'person';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'person' => 'person',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-person_meta' => array(
          'module' => 'ds_extras',
          'delta' => 'person_meta',
          'region' => 'sidebar_second',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['person'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'podcast-mobile-meta';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'podcast' => 'podcast',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['podcast-mobile-meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'podcast_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_page:page_3' => 'solr_search_page:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-6',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-150ffa23b6e9e6efaff013e141bb5548' => array(
          'module' => 'views',
          'delta' => '150ffa23b6e9e6efaff013e141bb5548',
          'region' => 'preface_first',
          'weight' => '-11',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['podcast_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'podcast_media';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'podcast' => 'podcast',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['podcast_media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'podcast_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'podcast' => 'podcast',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['podcast_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press-centre';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'press-centre' => 'press-centre',
        'press-centre/*' => 'press-centre/*',
        'speeches-centre' => 'speeches-centre',
        'speeches-centre/*' => 'speeches-centre/*',
        '~press-centre/publications' => '~press-centre/publications',
        '~press-centre/speeches' => '~press-centre/speeches',
        '~press-centre/in-the-media' => '~press-centre/in-the-media',
        '~press-centre/press-releases' => '~press-centre/press-releases',
        '~press-centre/events' => '~press-centre/events',
        '~press-centre/news' => '~press-centre/news',
        '~press-centre/galleries' => '~press-centre/galleries',
        '~press-centre/videos' => '~press-centre/videos',
        '~press-centre/projects' => '~press-centre/projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-projects-block_10' => array(
          'module' => 'views',
          'delta' => 'projects-block_10',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'press_centre',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['press-centre'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_release';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_page:page' => 'solr_search_page:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-6',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-942d37f53f205fdfb0cea0e2e0d018e2' => array(
          'module' => 'views',
          'delta' => '942d37f53f205fdfb0cea0e2e0d018e2',
          'region' => 'preface_first',
          'weight' => '-94',
        ),
        'akdn_custom-ac_lang_switch' => array(
          'module' => 'akdn_custom',
          'delta' => 'ac_lang_switch',
          'region' => 'preface_first',
          'weight' => '-93',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['press_release'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_details_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-page_lang_switcher' => array(
          'module' => 'akdn_custom',
          'delta' => 'page_lang_switcher',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'akdn_custom-akdn_breadcrumb_trail' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_breadcrumb_trail',
          'region' => 'branding',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['project_details_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects_listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_pages_1:page_2' => 'solr_search_pages_1:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-6',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-5',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-026cdd0c9bc6449b2afdb051cc2f98fd' => array(
          'module' => 'views',
          'delta' => '026cdd0c9bc6449b2afdb051cc2f98fd',
          'region' => 'preface_first',
          'weight' => '-11',
        ),
        'akdn_custom-ac_lang_switch' => array(
          'module' => 'akdn_custom',
          'delta' => 'ac_lang_switch',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['projects_listing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publication-mobile-meta';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'publication' => 'publication',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-publication_meta' => array(
          'module' => 'ds_extras',
          'delta' => 'publication_meta',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['publication-mobile-meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publication_meta';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'publication' => 'publication',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search-mlt-001' => array(
          'module' => 'apachesolr_search',
          'delta' => 'mlt-001',
          'region' => 'sidebar_second',
          'weight' => '4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['publication_meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_pages_1:page_4' => 'solr_search_pages_1:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-tg7YduxnWVjmw3SFxM0e1fEwyqqvyhZD' => array(
          'module' => 'facetapi',
          'delta' => 'tg7YduxnWVjmw3SFxM0e1fEwyqqvyhZD',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-6',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-5',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['publications_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_page';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'publication' => 'publication',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['publications_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'remove_footer';
  $context->description = 'Remove the Footer from social media page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'akdn-social' => 'akdn-social',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'akdn' => array(
        'disable' => array(
          'footer_first' => 'footer_first',
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'top_upper_branding' => 0,
          'top_branding' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_second' => 0,
        ),
      ),
      'akdn_mailshot' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'content' => 0,
          'header' => 0,
          'footer' => 0,
          'highlighted' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
        ),
      ),
      'akdn_museum' => array(
        'disable' => array(
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Remove the Footer from social media page');
  $export['remove_footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/site' => 'search/site',
        'search/site/*' => 'search/site/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'search_results',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_site_search' => 'solr_site_search',
        'solr_site_search:page' => 'solr_site_search:page',
        'solr_site_search:page_1' => 'solr_site_search:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ' => array(
          'module' => 'facetapi',
          'delta' => 'WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-6',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['site_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_breadcrumb_trail' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_breadcrumb_trail',
          'region' => 'branding',
          'weight' => '1',
        ),
        'block-126' => array(
          'module' => 'block',
          'delta' => '126',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_search' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_search',
          'region' => 'menu',
          'weight' => '-9',
        ),
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'menu',
          'weight' => '-8',
        ),
        'panels_mini-footer_menus' => array(
          'module' => 'panels_mini',
          'delta' => 'footer_menus',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech-mobile-meta';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speech' => 'speech',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-right_sidebar' => array(
          'module' => 'ds_extras',
          'delta' => 'right_sidebar',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['speech-mobile-meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_themes';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speech_theme' => 'speech_theme',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speech_themes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_themes_listing';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'speech_themes:page_2' => 'speech_themes:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-36' => array(
          'module' => 'block',
          'delta' => '36',
          'region' => 'content',
          'weight' => '-50',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speech_themes_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speeches';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speech' => 'speech',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speeches'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speeches_listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_pages_1:page' => 'solr_search_pages_1:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-zupzn7kXAsRK2RcxwqV1dU1fgN1gVYhc' => array(
          'module' => 'facetapi',
          'delta' => 'zupzn7kXAsRK2RcxwqV1dU1fgN1gVYhc',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-Qu8Sfa4df8HQ1QFtjBkkTsNtQ09oSeNQ' => array(
          'module' => 'facetapi',
          'delta' => 'Qu8Sfa4df8HQ1QFtjBkkTsNtQ09oSeNQ',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-6',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-5',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-659a7742423b0b4adc617dc43de1a221' => array(
          'module' => 'views',
          'delta' => '659a7742423b0b4adc617dc43de1a221',
          'region' => 'preface_first',
          'weight' => '-11',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speeches_listing_pages'] = $context;

  return $export;
}
