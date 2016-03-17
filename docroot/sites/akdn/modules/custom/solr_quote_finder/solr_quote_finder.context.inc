<?php
/**
 * @file
 * solr_quote_finder.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function solr_quote_finder_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_quote_listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_quotes' => 'solr_quotes',
        'solr_search_pages_1:page_5' => 'solr_search_pages_1:page_5',
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
        'facetapi-bHs4rjt4A0D9TAqsc37tP6wMLfWCfNjD' => array(
          'module' => 'facetapi',
          'delta' => 'bHs4rjt4A0D9TAqsc37tP6wMLfWCfNjD',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-V6KVURjtbjXgdEayfdw4KLoyd04VUjKr' => array(
          'module' => 'facetapi',
          'delta' => 'V6KVURjtbjXgdEayfdw4KLoyd04VUjKr',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-GNFDhvBy2QiFLAOTGWSDuR5rbOY6eHWQ' => array(
          'module' => 'facetapi',
          'delta' => 'GNFDhvBy2QiFLAOTGWSDuR5rbOY6eHWQ',
          'region' => 'content',
          'weight' => '-6',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-659a7742423b0b4adc617dc43de1a221' => array(
          'module' => 'views',
          'delta' => '659a7742423b0b4adc617dc43de1a221',
          'region' => 'preface_first',
          'weight' => '-10',
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
  $export['speech_quote_listing_pages'] = $context;

  return $export;
}
