<?php
/**
 * @file
 * f_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related_item_in_event';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-related_item_in_event-block' => array(
          'module' => 'views',
          'delta' => 'related_item_in_event-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['related_item_in_event'] = $context;

  return $export;
}
