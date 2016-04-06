<?php
/**
 * @file
 * f_speech_quotes.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function f_speech_quotes_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_speech_reference'
  $field_bases['field_speech_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_speech_reference',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'agency' => 0,
        'article' => 0,
        'event' => 0,
        'featured_content' => 0,
        'filedepot_folder' => 0,
        'focus_area' => 0,
        'gallery' => 0,
        'geography' => 0,
        'page' => 0,
        'person' => 0,
        'podcast' => 0,
        'project' => 0,
        'publication' => 0,
        'speech' => 'speech',
        'speech_quote' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => 'references_1',
        'view_name' => 'speeches',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  return $field_bases;
}
