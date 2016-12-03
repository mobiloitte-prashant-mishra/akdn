<?php
/**
 * @file
 * ecard_template_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ecard_template_view_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ecard_listing_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'ecard_listing_page' => 'ecard_listing_page',
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
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'content',
          'weight' => '-7',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'content',
          'weight' => '-6',
        ),
        'block-181' => array(
          'module' => 'block',
          'delta' => '181',
          'region' => 'content',
          'weight' => '-5',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ecard_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ecard_page_title';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ecards/*' => 'ecards/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['ecard_page_title'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ecard_thankyou_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ecard/thank-you' => 'ecard/thank-you',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-186' => array(
          'module' => 'block',
          'delta' => '186',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ecard_thankyou_page'] = $context;

  return $export;
}
