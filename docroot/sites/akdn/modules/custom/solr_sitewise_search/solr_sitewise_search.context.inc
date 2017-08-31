<?php
/**
 * @file
 * solr_sitewise_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function solr_sitewise_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_pages_context';
  $context->description = 'Search pages( with Google search) Context';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/google-search' => 'search/google-search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_search_urls_block' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_search_urls_block',
          'region' => 'content',
          'weight' => '-15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  t('Search pages( with Google search) Context');
  $export['search_pages_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_search_short_criteria';
  $context->description = '';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-solr_site_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-solr_site_search-page',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  $export['site_search_short_criteria'] = $context;

  return $export;
}
