<?php
/**
 * @file
 * akdn_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akdn_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function akdn_context_node_info() {
  $items = array(
    'akmi_artists' => array(
      'name' => t('AKMI Artists'),
      'base' => 'node_content',
      'description' => t('This content type is used to create AKMI artists'),
      'has_title' => '1',
      'title_label' => t('Artist Name'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
