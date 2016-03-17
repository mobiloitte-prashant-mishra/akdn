<?php
/**
 * @file
 * f_multilingual.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_multilingual_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_search';
  $context->description = '';
  $context->tag = 'Search';
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
        'views--exp-solr_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-solr_search-page',
          'region' => 'header',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  $export['sitewide_search'] = $context;

  return $export;
}
