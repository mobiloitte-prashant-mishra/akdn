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
  $context->name = 'search_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_site_search' => 'solr_site_search',
        'solr_site_search:page' => 'solr_site_search:page',
        'solr_site_search:page_1' => 'solr_site_search:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ' => array(
          'module' => 'facetapi',
          'delta' => 'WnmJtCgdRqbDpG7QK7xYCqp5yvH0BHGJ',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-6',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['search_page'] = $context;

  return $export;
}
