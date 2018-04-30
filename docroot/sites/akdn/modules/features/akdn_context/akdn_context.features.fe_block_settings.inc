<?php
/**
 * @file
 * akdn_context.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function akdn_context_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-content_type_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'content_type_header',
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
  
  $export['facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS'] = array(
    'cache' => -1,
    'css_class' => 'akdn-filter-wrapper filter-theme-block',
    'custom' => 0,
    'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 2,
      ),
      'akdn_mailshot' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'akdn_mailshot',
        'weight' => 2,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'What We Do',
    'visibility' => 1,
  );

  $export['facetapi-WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ'] = array(
    'cache' => -1,
    'css_class' => 'akdn-filter-wrapper filter-content-block',
    'custom' => 0,
    'delta' => 'WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
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
    'title' => 'Content Type',
    'visibility' => 0,
  );

  $export['facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo'] = array(
    'cache' => -1,
    'css_class' => 'akdn-filter-wrapper filter-geography-block',
    'custom' => 0,
    'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'speech-quotes
search',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 1,
      ),
      'akdn_mailshot' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'akdn_mailshot',
        'weight' => 1,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Where We Work',
    'visibility' => 1,
  );

  $export['facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww'] = array(
    'cache' => -1,
    'css_class' => 'akdn-filter-wrapper filter-agency-block',
    'custom' => 0,
    'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'speech-quotes
search',
    'roles' => array(),
    'themes' => array(
      'akdn' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn',
        'weight' => 3,
      ),
      'akdn_mailshot' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'akdn_mailshot',
        'weight' => 3,
      ),
      'akdn_museum' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'akdn_museum',
        'weight' => 0,
      ),
    ),
    'title' => 'Agencies',
    'visibility' => 1,
  );

  return $export;
}
