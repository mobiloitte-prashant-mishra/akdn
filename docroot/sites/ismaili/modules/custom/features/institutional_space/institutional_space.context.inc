<?php
/**
 * @file
 * institutional_space.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function institutional_space_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'institutional_space';
  $context->description = '';
  $context->tag = 'Institutional Space';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'institutional_space' => 'institutional_space',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~search/%' => '~search/%',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
    'disable_context' => array(
      'disabled' => array(
        'archive_articles' => 'archive_articles',
        'clone_of_golden_jubliee' => 'clone_of_golden_jubliee',
        'clone_of_search' => 'clone_of_search',
        'front' => 'front',
        'galllery' => 'galllery',
        'golden_jubliee' => 'golden_jubliee',
        'hub_pages_on_the_fly' => 'hub_pages_on_the_fly',
        'in_the_media' => 'in_the_media',
        'individual_ismaili_centres' => 'individual_ismaili_centres',
        'ismaili_centres' => 'ismaili_centres',
        'ismaili_centres_banner' => 'ismaili_centres_banner',
        'ismaili_centres_menu' => 'ismaili_centres_menu',
        'newsletter' => 'newsletter',
        'nutrition' => 'nutrition',
        'nutrition_centre' => 'nutrition_centre',
        'nutrition_centre_search' => 'nutrition_centre_search',
        'nutrition_composition_table' => 'nutrition_composition_table',
        'nutrition_table' => 'nutrition_table',
        'site_wide' => 'site_wide',
        'theismaili' => 'theismaili',
        'unsubscribe_form_breadcrumb' => 'unsubscribe_form_breadcrumb',
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Institutional Space');
  $export['institutional_space'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'institutional_views_pages';
  $context->description = '';
  $context->tag = 'Institutional Space';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        10316 => 10316,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-institutional_views-block_3' => array(
          'module' => 'views',
          'delta' => 'institutional_views-block_3',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'views-institutional_views-block_4' => array(
          'module' => 'views',
          'delta' => 'institutional_views-block_4',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'block-146' => array(
          'module' => 'block',
          'delta' => '146',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'panels_mini-footer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-institutional_views-block_11' => array(
          'module' => 'views',
          'delta' => 'institutional_views-block_11',
          'region' => 'footer',
          'weight' => '-6',
        ),
      ),
    ),
    'disable_context' => array(
      'disabled' => array(
        'archive_articles' => 'archive_articles',
        'clone_of_golden_jubliee' => 'clone_of_golden_jubliee',
        'clone_of_search' => 'clone_of_search',
        'contact_us' => 'contact_us',
        'front' => 'front',
        'galllery' => 'galllery',
        'golden_jubliee' => 'golden_jubliee',
        'hub_pages_on_the_fly' => 'hub_pages_on_the_fly',
        'in_the_media' => 'in_the_media',
        'individual_ismaili_centres' => 'individual_ismaili_centres',
        'ismaili_centres' => 'ismaili_centres',
        'ismaili_centres_menu' => 'ismaili_centres_menu',
        'newsletter' => 'newsletter',
        'nutrition_centre' => 'nutrition_centre',
        'nutrition_centre_search' => 'nutrition_centre_search',
        'nutrition_composition_table' => 'nutrition_composition_table',
        'nutrition_table' => 'nutrition_table',
        'search' => 'search',
        'site_wide' => 'site_wide',
        'theismaili' => 'theismaili',
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Institutional Space');
  $export['institutional_views_pages'] = $context;

  return $export;
}
