<?php
/**
 * @file
 * contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'archive_articles';
  $context->description = 'Context settings for search page';
  $context->tag = 'Archive Articles';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'search:page_1' => 'search:page_1',
        'search:page_2' => 'search:page_2',
        'search:page_3' => 'search:page_3',
        'search:page_4' => 'search:page_4',
        'search:page_5' => 'search:page_5',
        'search:page_6' => 'search:page_6',
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
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'block-151' => array(
          'module' => 'block',
          'delta' => '151',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'facetapi-1WvZ9ScYdeKc6L02ErTUv3oKZFiGaZxJ' => array(
          'module' => 'facetapi',
          'delta' => '1WvZ9ScYdeKc6L02ErTUv3oKZFiGaZxJ',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-gOk5FT5aar22qakjJTy2OJTWvoLpoeMb' => array(
          'module' => 'facetapi',
          'delta' => 'gOk5FT5aar22qakjJTy2OJTWvoLpoeMb',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0' => array(
          'module' => 'facetapi',
          'delta' => 'DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-km4gpxKYnqeZ8XDxGtMrUUvd6y1V1p6f' => array(
          'module' => 'facetapi',
          'delta' => 'km4gpxKYnqeZ8XDxGtMrUUvd6y1V1p6f',
          'region' => 'sidebar_second',
          'weight' => '-5',
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
  t('Archive Articles');
  t('Context settings for search page');
  $export['archive_articles'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clone_of_golden_jubliee';
  $context->description = '';
  $context->tag = 'Golden Jubliee';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'golden-jubilee' => 'golden-jubilee',
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
        'block-81' => array(
          'module' => 'block',
          'delta' => '81',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-9',
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
  t('Golden Jubliee');
  $export['clone_of_golden_jubliee'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clone_of_search';
  $context->description = 'Context settings for search page';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'search:page' => 'search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-86' => array(
          'module' => 'block',
          'delta' => '86',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context settings for search page');
  t('layout');
  $export['clone_of_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_us';
  $context->description = '';
  $context->tag = 'Contact US';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/7616' => 'node/7616',
        'node/8186' => 'node/8186',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-96' => array(
          'module' => 'block',
          'delta' => '96',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact US');
  $export['contact_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Context settings for the home page.';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'in-the-media' => 'in-the-media',
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
        'block-71' => array(
          'module' => 'block',
          'delta' => '71',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
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
  t('Context settings for the home page.');
  t('layout');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'galllery';
  $context->description = '';
  $context->tag = 'Gallery';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'photo_gallery' => 'photo_gallery',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-gallery1-block' => array(
          'module' => 'views',
          'delta' => 'gallery1-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery');
  $export['galllery'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'golden_jubliee';
  $context->description = '';
  $context->tag = 'Golden Jubliee';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'golden-jubilee/*' => 'golden-jubilee/*',
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
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'block-66' => array(
          'module' => 'block',
          'delta' => '66',
          'region' => 'branding_right',
          'weight' => '-7',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-9',
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
  t('Golden Jubliee');
  $export['golden_jubliee'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hub_pages_on_the_fly';
  $context->description = 'Context settings for on the fly hub pages';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hub_pages:page_1' => 'hub_pages:page_1',
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
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'block-106' => array(
          'module' => 'block',
          'delta' => '106',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'facetapi-DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0' => array(
          'module' => 'facetapi',
          'delta' => 'DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0',
          'region' => 'sidebar_second',
          'weight' => '-93',
        ),
        'facetapi-rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF' => array(
          'module' => 'facetapi',
          'delta' => 'rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF',
          'region' => 'sidebar_second',
          'weight' => '-92',
        ),
        'facetapi-pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf' => array(
          'module' => 'facetapi',
          'delta' => 'pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf',
          'region' => 'sidebar_second',
          'weight' => '-89',
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
  t('Context settings for on the fly hub pages');
  t('layout');
  $export['hub_pages_on_the_fly'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'in_the_media';
  $context->description = '';
  $context->tag = 'In the Media';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'in_the_media:page_1' => 'in_the_media:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-91' => array(
          'module' => 'block',
          'delta' => '91',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('In the Media');
  $export['in_the_media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'individual_ismaili_centres';
  $context->description = '';
  $context->tag = 'Ismaili Centre';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ismaili_centres' => 'ismaili_centres',
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
        'widgets-s_socialmedia_profile-default' => array(
          'module' => 'widgets',
          'delta' => 's_socialmedia_profile-default',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'menu-menu-ismaili-centre-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-ismaili-centre-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'crumbs-breadcrumb' => array(
          'module' => 'crumbs',
          'delta' => 'breadcrumb',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ismaili Centre');
  $export['individual_ismaili_centres'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ismaili_center_hub_pages';
  $context->description = 'Context settings for hub pages';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hub_pages:page_2' => 'hub_pages:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-161' => array(
          'module' => 'block',
          'delta' => '161',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-banner-block_6' => array(
          'module' => 'views',
          'delta' => 'banner-block_6',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-hub_pages-block_5' => array(
          'module' => 'views',
          'delta' => 'hub_pages-block_5',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0' => array(
          'module' => 'facetapi',
          'delta' => 'DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF' => array(
          'module' => 'facetapi',
          'delta' => 'rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf' => array(
          'module' => 'facetapi',
          'delta' => 'pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context settings for hub pages');
  t('layout');
  $export['ismaili_center_hub_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ismaili_centers_event_register_breadcrumb';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ismailicentres/*/*/register' => 'ismailicentres/*/*/register',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['ismaili_centers_event_register_breadcrumb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ismaili_centres';
  $context->description = '';
  $context->tag = 'Ismaili Centre';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ismailicentres/*' => 'ismailicentres/*',
        'contact-the-ismaili-centres' => 'contact-the-ismaili-centres',
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
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'block-116' => array(
          'module' => 'block',
          'delta' => '116',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'menu-menu-ismaili-centre-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-ismaili-centre-menu',
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
  t('Ismaili Centre');
  $export['ismaili_centres'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ismaili_centres_banner';
  $context->description = '';
  $context->tag = 'Ismaili Centre';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ismailicentres/*' => 'ismailicentres/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-116' => array(
          'module' => 'block',
          'delta' => '116',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ismaili Centre');
  $export['ismaili_centres_banner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ismaili_centres_menu';
  $context->description = '';
  $context->tag = 'Ismaili Centres';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ismailicentres' => 'ismailicentres',
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
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-8',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'menu-menu-ismaili-centre-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-ismaili-centre-menu',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ismaili Centres');
  $export['ismaili_centres_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'multimedia';
  $context->description = '';
  $context->tag = 'Multimedia';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'search:page_7' => 'search:page_7',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-91' => array(
          'module' => 'block',
          'delta' => '91',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'facetapi-rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF' => array(
          'module' => 'facetapi',
          'delta' => 'rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-XmwdfX92HRYG5aUeaXwrVL0qesCMZUcg' => array(
          'module' => 'facetapi',
          'delta' => 'XmwdfX92HRYG5aUeaXwrVL0qesCMZUcg',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');
  $export['multimedia'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newsletter';
  $context->description = '';
  $context->tag = 'Newsletter';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/10736' => 'node/10736',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-101' => array(
          'module' => 'block',
          'delta' => '101',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Newsletter');
  $export['newsletter'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nutrition';
  $context->description = 'Context for nutrition centre';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nutrition' => 'nutrition',
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
        'block-141' => array(
          'module' => 'block',
          'delta' => '141',
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
  $export['nutrition'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nutrition_contact';
  $context->description = '';
  $context->tag = 'Nutrition';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/8131' => 'node/8131',
        'node/8131/*' => 'node/8131/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-156' => array(
          'module' => 'block',
          'delta' => '156',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Nutrition');
  $export['nutrition_contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = 'Context settings for search page';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'search:page' => 'search:page',
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
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'views-institutional_views-block_12' => array(
          'module' => 'views',
          'delta' => 'institutional_views-block_12',
          'region' => 'branding_left',
          'weight' => '-10',
        ),
        'views-institutional_views-block_14' => array(
          'module' => 'views',
          'delta' => 'institutional_views-block_14',
          'region' => 'menu_left',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'views-institutional_views-block_13' => array(
          'module' => 'views',
          'delta' => 'institutional_views-block_13',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0' => array(
          'module' => 'facetapi',
          'delta' => 'DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF' => array(
          'module' => 'facetapi',
          'delta' => 'rI570X0O1tmrbcvFGjxLxyfWVSuMGlyF',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf' => array(
          'module' => 'facetapi',
          'delta' => 'pRVWtCFci0o3aOBIVUiIjMGcUmy1yfXf',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-km4gpxKYnqeZ8XDxGtMrUUvd6y1V1p6f' => array(
          'module' => 'facetapi',
          'delta' => 'km4gpxKYnqeZ8XDxGtMrUUvd6y1V1p6f',
          'region' => 'sidebar_second',
          'weight' => '-6',
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
  t('Context settings for search page');
  t('layout');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = 'Context settings for entire site';
  $context->tag = 'layout';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        '~nutrition_centre' => '~nutrition_centre',
      ),
    ),
    'node' => array(
      'values' => array(
        'hub_page' => 'hub_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~ismaili-centres' => '~ismaili-centres',
        '~ismaili-centres/*' => '~ismaili-centres/*',
        '~<front>' => '~<front>',
        '~tag/*' => '~tag/*',
        '~nutrition-centre' => '~nutrition-centre',
        '~nutrition-centre/*' => '~nutrition-centre/*',
        '~golden-jubilee' => '~golden-jubilee',
        '~golden-jubilee/*' => '~golden-jubilee/*',
        '~in-the-media' => '~in-the-media',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
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
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-9',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context settings for entire site');
  t('layout');
  $export['site_wide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'theismaili';
  $context->description = '';
  $context->tag = 'The Ismaili';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        'contact-us' => 'contact-us',
        '~ismailicentres' => '~ismailicentres',
        '~ismaili-centres' => '~ismaili-centres',
        '~ismailicentres/*' => '~ismailicentres/*',
        '~nutrition' => '~nutrition',
        '~ismaili-centres/*' => '~ismaili-centres/*',
        '~nutrition/*' => '~nutrition/*',
        '~golden-jubilee' => '~golden-jubilee',
        '~golden-jubilee/*' => '~golden-jubilee/*',
        '~<front>' => '~<front>',
        '~in-the-media' => '~in-the-media',
        '~nutrition-centres-contact-us-form' => '~nutrition-centres-contact-us-form',
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
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'branding_right',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding_right',
          'weight' => '-9',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
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
  t('The Ismaili');
  $export['theismaili'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'unsubscribe_form_breadcrumb';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'newsletter/confirm/remove/*' => 'newsletter/confirm/remove/*',
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
  $export['unsubscribe_form_breadcrumb'] = $context;

  return $export;
}
