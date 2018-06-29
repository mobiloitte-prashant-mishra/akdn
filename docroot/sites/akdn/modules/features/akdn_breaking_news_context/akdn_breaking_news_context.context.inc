<?php
/**
 * @file
 * akdn_breaking_news_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function akdn_breaking_news_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breaking_news_title';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'breaking_news' => 'breaking_news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-akdn_node_title-block' => array(
          'module' => 'views',
          'delta' => 'akdn_node_title-block',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['breaking_news_title'] = $context;

  return $export;
}
