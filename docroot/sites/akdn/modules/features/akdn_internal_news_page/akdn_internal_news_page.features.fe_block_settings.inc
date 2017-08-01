<?php
/**
 * @file
 * akdn_internal_news_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function akdn_internal_news_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['akdn_custom-akdn_internal_news_config_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akdn_internal_news_config_block',
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

  $export['akdn_custom-akdn_internal_news_page_footer'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akdn_internal_news_page_footer',
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

  $export['akdn_custom-akdn_internal_news_page_header'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akdn_internal_news_page_header',
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

  $export['akdn_custom-akdn_search_internal_news_page'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'akdn_search_internal_news_page',
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

  return $export;
}
