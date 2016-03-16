<?php
/**
 * @file
 * akdn_mailshot.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function akdn_mailshot_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_newsletter'
  $field_bases['field_newsletter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_newsletter',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  return $field_bases;
}
