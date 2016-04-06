<?php
/**
 * @file
 * f_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-solr_search-page_2' => array(
          'module' => 'views',
          'delta' => '-exp-solr_search-page_2',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['contact_search'] = $context;

  return $export;
}
