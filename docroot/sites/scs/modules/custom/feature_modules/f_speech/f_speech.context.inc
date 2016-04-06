<?php
/**
 * @file
 * f_speech.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_speech_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_type';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'agency' => 'agency',
        'article' => 'article',
        'event' => 'event',
        'featured_content' => 'featured_content',
        'focus_area' => 'focus_area',
        'gallery' => 'gallery',
        'geography' => 'geography',
        'page' => 'page',
        'person' => 'person',
        'podcast' => 'podcast',
        'project' => 'project',
        'publication' => 'publication',
        'simplenews' => 'simplenews',
        'speech' => 'speech',
        'speech_quote' => 'speech_quote',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-content_type_title-block_1' => array(
          'module' => 'views',
          'delta' => 'content_type_title-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['content_type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'folder_dms_listing';
  $context->description = '';
  $context->tag = '';
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
        'views-folders_list-block' => array(
          'module' => 'views',
          'delta' => 'folders_list-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['folder_dms_listing'] = $context;

  return $export;
}
