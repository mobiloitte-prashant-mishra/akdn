<?php
/**
 * @file
 * f_publication.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_publication_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related_news_in_publication';
  $context->description = '';
  $context->tag = '';
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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c6681bb6daba36377b827ea894f12ae6' => array(
          'module' => 'views',
          'delta' => 'c6681bb6daba36377b827ea894f12ae6',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['related_news_in_publication'] = $context;

  return $export;
}
