<?php
/**
 * @file
 * aka_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function aka_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bishkek';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        13 => 13,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => 10,
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['bishkek'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dar';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        82 => 82,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-31' => array(
          'module' => 'block',
          'delta' => '31',
          'region' => 'header',
          'weight' => '-10',
        ),
        'superfish-5' => array(
          'module' => 'superfish',
          'delta' => '5',
          'region' => 'header',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['dar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general_logo';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        5 => 5,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['general_logo'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hyderabad';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        3 => 3,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-17' => array(
          'module' => 'block',
          'delta' => 17,
          'region' => 'header',
          'weight' => '-10',
        ),
        'superfish-3' => array(
          'module' => 'superfish',
          'delta' => 3,
          'region' => 'header',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['hyderabad'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hyderabad_ib_logo';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'in_the_press' => 'in_the_press',
        'media_gallery' => 'media_gallery',
        'newsletter' => 'newsletter',
        'newsletter_posts' => 'newsletter_posts',
        'page' => 'page',
        'publication' => 'publication',
        'speech' => 'speech',
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        3 => 3,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-30' => array(
          'module' => 'block',
          'delta' => '30',
          'region' => 'sidebar_second',
          'weight' => '20',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['hyderabad_ib_logo'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hyderabad_spotlights';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'spotligth' => 'spotligth',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        3 => 3,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-28' => array(
          'module' => 'block',
          'delta' => 28,
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['hyderabad_spotlights'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'link_to_specific_video';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['link_to_specific_video'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'maputo';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        4 => 4,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-15' => array(
          'module' => 'block',
          'delta' => 15,
          'region' => 'header',
          'weight' => '-36',
        ),
        'superfish-4' => array(
          'module' => 'superfish',
          'delta' => 4,
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['maputo'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'maputo_spotlights';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'spotligth' => 'spotligth',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        4 => 4,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-28' => array(
          'module' => 'block',
          'delta' => 28,
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['maputo_spotlights'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mombasa';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => 10,
          'region' => 'header',
          'weight' => '-36',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => 2,
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['mombasa'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mombasa_ib_logo';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'alert' => 'alert',
        'article' => 'article',
        'media_gallery' => 'media_gallery',
        'page' => 'page',
        'publication' => 'publication',
        'slideshow_home' => 'slideshow_home',
        'video' => 'video',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-18' => array(
          'module' => 'block',
          'delta' => 18,
          'region' => 'sidebar_second',
          'weight' => '47',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['mombasa_ib_logo'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mombasa_spotlight';
  $context->description = '';
  $context->tag = 'academies_rules';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'spotligth' => 'spotligth',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-28' => array(
          'module' => 'block',
          'delta' => 28,
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('academies_rules');
  $export['mombasa_spotlight'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mombasa_spotlights';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'spotligth' => 'spotligth',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'node/127',
  );
  $context->condition_mode = 0;
  $export['mombasa_spotlights'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_general';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'in_the_press' => 'in_the_press',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'node/644',
    'menu' => 'node/644',
  );
  $context->condition_mode = 0;
  $export['news_general'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our_academies_hyderabad';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        3 => 3,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'node/121',
  );
  $context->condition_mode = 0;
  $export['our_academies_hyderabad'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our_academies_maputo';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        4 => 4,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'node/119',
  );
  $context->condition_mode = 0;
  $export['our_academies_maputo'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our_academies_mombasa';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'node/120',
  );
  $context->condition_mode = 0;
  $export['our_academies_mombasa'] = $context;

  return $export;
}
