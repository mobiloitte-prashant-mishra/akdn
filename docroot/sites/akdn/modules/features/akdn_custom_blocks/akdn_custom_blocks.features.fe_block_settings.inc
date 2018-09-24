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

  $export['block-site_logo'] = array(
    'cache' => -1,
    'css_class' => 'logo-container',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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

  return $export;
}
