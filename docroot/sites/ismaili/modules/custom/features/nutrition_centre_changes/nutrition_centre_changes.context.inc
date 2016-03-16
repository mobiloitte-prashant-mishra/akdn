<?php
/**
 * @file
 * nutrition_centre_changes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nutrition_centre_changes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nutrition_centre';
  $context->description = 'Context for nutrition centre';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'recipe' => 'recipe',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'nutrition' => 'nutrition',
        'nutrition/*' => 'nutrition/*',
        'nutrition-centres-contact-us-form' => 'nutrition-centres-contact-us-form',
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
        'widgets-s_socialmedia_profile-default' => array(
          'module' => 'widgets',
          'delta' => 's_socialmedia_profile-default',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-46' => array(
          'module' => 'block',
          'delta' => '46',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'menu-menu-nutrition-centre-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-nutrition-centre-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'panels_mini-footer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for nutrition centre');
  t('layout');
  $export['nutrition_centre'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nutrition_centre_search';
  $context->description = '';
  $context->tag = 'Nutrition Centre';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'nutrition_centre:page_1' => 'nutrition_centre:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-116' => array(
          'module' => 'block',
          'delta' => '116',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views--exp-nutrition_centre-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-nutrition_centre-page_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'facetapi-pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf' => array(
          'module' => 'facetapi',
          'delta' => 'pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0' => array(
          'module' => 'facetapi',
          'delta' => 'DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-I3JGgyKIpltyn1YDCQcyMObBLh2UUCdm' => array(
          'module' => 'facetapi',
          'delta' => 'I3JGgyKIpltyn1YDCQcyMObBLh2UUCdm',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-BaYN5a0iw810AzxtjwxNhbnGxnCzabqx' => array(
          'module' => 'facetapi',
          'delta' => 'BaYN5a0iw810AzxtjwxNhbnGxnCzabqx',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-pkwgDMCF1raYir4QVF7TJdTBqW6pHey7' => array(
          'module' => 'facetapi',
          'delta' => 'pkwgDMCF1raYir4QVF7TJdTBqW6pHey7',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-Qnxl0a3YzhJ6I0K8hzSnhv0nExhJrxiL' => array(
          'module' => 'facetapi',
          'delta' => 'Qnxl0a3YzhJ6I0K8hzSnhv0nExhJrxiL',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'facetapi-6UEC0gSb6zUYIHpzWpnDFI1CTjNJoYNT' => array(
          'module' => 'facetapi',
          'delta' => '6UEC0gSb6zUYIHpzWpnDFI1CTjNJoYNT',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Nutrition Centre');
  $export['nutrition_centre_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nutrition_composition_table';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'nutrition_centre:page_2' => 'nutrition_centre:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-nutrition_centre-block_1' => array(
          'module' => 'views',
          'delta' => 'nutrition_centre-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-today_s_hot_tip-block' => array(
          'module' => 'views',
          'delta' => 'today_s_hot_tip-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-today_s_hot_tip-block_1' => array(
          'module' => 'views',
          'delta' => 'today_s_hot_tip-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['nutrition_composition_table'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nutrition_table';
  $context->description = '';
  $context->tag = 'Nutrition composition table';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'nutrition_centre:page_2' => 'nutrition_centre:page_2',
        'nutrition_centre:page_3' => 'nutrition_centre:page_3',
        'nutrition_centre:page_4' => 'nutrition_centre:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-121' => array(
          'module' => 'block',
          'delta' => '121',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Nutrition composition table');
  $export['nutrition_table'] = $context;

  return $export;
}
