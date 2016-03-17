<?php
/**
 * @file
 * nutrition_centre_changes.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function nutrition_centre_changes_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Hub pages',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'hub_page' => 'hub_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'ismaili-internal-pages',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
          2 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'listing',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Filter',
        'width' => '29.16675634615117',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'search-filters',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'hub_page_summary',
          1 => 'carousel_text',
        ),
        'parent' => 'main',
        'class' => 'Carousel',
      ),
      'listing' => array(
        'type' => 'region',
        'title' => 'Listing',
        'width' => '70.83324365384883',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'carousel_text' => array(
        'type' => 'region',
        'title' => 'Carousel',
        'width' => '29.210614577078097',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'hub_page_summary' => array(
        'type' => 'region',
        'title' => 'Hub page summary',
        'width' => '70.78938542292191',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumb',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'breadcrumb' => array(
        'type' => 'region',
        'title' => 'BreadCrumb',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'listing' => NULL,
      'carousel' => NULL,
      'carousel_text' => NULL,
      'hub_page_summary' => NULL,
      'breadcrumb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b353e927-9ff8-4a03-8e0e-29184d9f7700';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2cc3bdcf-8261-4215-b1b8-2069febc10a7';
    $pane->panel = 'breadcrumb';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2cc3bdcf-8261-4215-b1b8-2069febc10a7';
    $display->content['new-2cc3bdcf-8261-4215-b1b8-2069febc10a7'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-2cc3bdcf-8261-4215-b1b8-2069febc10a7';
    $pane = new stdClass();
    $pane->pid = 'new-626cd535-1152-4d72-96b1-0b52649a232e';
    $pane->panel = 'carousel_text';
    $pane->type = 'block';
    $pane->subtype = 'views-banner-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '626cd535-1152-4d72-96b1-0b52649a232e';
    $display->content['new-626cd535-1152-4d72-96b1-0b52649a232e'] = $pane;
    $display->panels['carousel_text'][0] = 'new-626cd535-1152-4d72-96b1-0b52649a232e';
    $pane = new stdClass();
    $pane->pid = 'new-ad6e83ce-7b2c-4632-a44f-32ccd8c5af69';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-hub_pages-block';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:hub_page:field_microsite',
          'settings' => array(
            'field_microsite' => array(
              'und' => array(
                0 => array(
                  'tid' => '1',
                ),
              ),
            ),
            'field_microsite_tid' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ad6e83ce-7b2c-4632-a44f-32ccd8c5af69';
    $display->content['new-ad6e83ce-7b2c-4632-a44f-32ccd8c5af69'] = $pane;
    $display->panels['center'][0] = 'new-ad6e83ce-7b2c-4632-a44f-32ccd8c5af69';
    $pane = new stdClass();
    $pane->pid = 'new-ce2c86be-7ef5-4f60-8560-eac9f91984a1';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1WvZ9ScYdeKc6L02ErTUv3oKZFiGaZxJ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Content Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce2c86be-7ef5-4f60-8560-eac9f91984a1';
    $display->content['new-ce2c86be-7ef5-4f60-8560-eac9f91984a1'] = $pane;
    $display->panels['center'][1] = 'new-ce2c86be-7ef5-4f60-8560-eac9f91984a1';
    $pane = new stdClass();
    $pane->pid = 'new-1f0158ce-d35a-4e4f-8168-026e375e9060';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-hub_pages-block_1';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:hub_page:field_microsite',
          'settings' => array(
            'field_microsite' => array(
              'und' => array(
                0 => array(
                  'tid' => '11',
                ),
              ),
            ),
            'field_microsite_tid' => '11',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1f0158ce-d35a-4e4f-8168-026e375e9060';
    $display->content['new-1f0158ce-d35a-4e4f-8168-026e375e9060'] = $pane;
    $display->panels['center'][2] = 'new-1f0158ce-d35a-4e4f-8168-026e375e9060';
    $pane = new stdClass();
    $pane->pid = 'new-c1ca5609-90bf-4379-bbaa-5707c69d0372';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DfwOPpXInQYmzCpJ8KaSbaEBPyCDnNd0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c1ca5609-90bf-4379-bbaa-5707c69d0372';
    $display->content['new-c1ca5609-90bf-4379-bbaa-5707c69d0372'] = $pane;
    $display->panels['center'][3] = 'new-c1ca5609-90bf-4379-bbaa-5707c69d0372';
    $pane = new stdClass();
    $pane->pid = 'new-ca58d411-4b69-4191-a3ef-c5351e410d2c';
    $pane->panel = 'hub_page_summary';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_short_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca58d411-4b69-4191-a3ef-c5351e410d2c';
    $display->content['new-ca58d411-4b69-4191-a3ef-c5351e410d2c'] = $pane;
    $display->panels['hub_page_summary'][0] = 'new-ca58d411-4b69-4191-a3ef-c5351e410d2c';
    $pane = new stdClass();
    $pane->pid = 'new-a0625d08-85a1-4848-92ed-593fa36eb60c';
    $pane->panel = 'hub_page_summary';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a0625d08-85a1-4848-92ed-593fa36eb60c';
    $display->content['new-a0625d08-85a1-4848-92ed-593fa36eb60c'] = $pane;
    $display->panels['hub_page_summary'][1] = 'new-a0625d08-85a1-4848-92ed-593fa36eb60c';
    $pane = new stdClass();
    $pane->pid = 'new-ef602388-fb6e-48d5-9ae1-340a802303ec';
    $pane->panel = 'listing';
    $pane->type = 'block';
    $pane->subtype = 'views-hub_pages-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:hub_page:field_microsite',
          'settings' => array(
            'field_microsite' => array(
              'und' => array(
                0 => array(
                  'tid' => '1',
                ),
              ),
            ),
            'field_microsite_tid' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef602388-fb6e-48d5-9ae1-340a802303ec';
    $display->content['new-ef602388-fb6e-48d5-9ae1-340a802303ec'] = $pane;
    $display->panels['listing'][0] = 'new-ef602388-fb6e-48d5-9ae1-340a802303ec';
    $pane = new stdClass();
    $pane->pid = 'new-76f8a65e-7073-437d-a66f-aa6e5dd14b65';
    $pane->panel = 'listing';
    $pane->type = 'block';
    $pane->subtype = 'views-hub_pages-block_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:hub_page:field_microsite',
          'settings' => array(
            'field_microsite' => array(
              'und' => array(
                0 => array(
                  'tid' => '11',
                ),
              ),
            ),
            'field_microsite_tid' => '11',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '76f8a65e-7073-437d-a66f-aa6e5dd14b65';
    $display->content['new-76f8a65e-7073-437d-a66f-aa6e5dd14b65'] = $pane;
    $display->panels['listing'][1] = 'new-76f8a65e-7073-437d-a66f-aa6e5dd14b65';
    $pane = new stdClass();
    $pane->pid = 'new-e134fb3a-b41c-4e0d-8fb3-d47eff300bb8';
    $pane->panel = 'listing';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-nutrition_centre-page_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:hub_page:field_microsite',
          'settings' => array(
            'field_microsite' => array(
              'und' => array(
                0 => array(
                  'tid' => '6',
                ),
              ),
            ),
            'field_microsite_tid' => '6',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e134fb3a-b41c-4e0d-8fb3-d47eff300bb8';
    $display->content['new-e134fb3a-b41c-4e0d-8fb3-d47eff300bb8'] = $pane;
    $display->panels['listing'][2] = 'new-e134fb3a-b41c-4e0d-8fb3-d47eff300bb8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Recipe Content Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'recipe' => 'recipe',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'ismaili-internal-pages',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_content',
          1 => 'center',
        ),
        'parent' => 'main',
        'class' => 'nutrition-centre-inner',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Right Sidebar',
        'width' => '29.248712377357787',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ismaili-articles-right',
      ),
      'main_content' => array(
        'type' => 'region',
        'title' => 'Main Content',
        'width' => '70.75128762264221',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ismaili-articles',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumb',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'breadcrumb' => array(
        'type' => 'region',
        'title' => 'Breadcrumb',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'main_content' => NULL,
      'breadcrumb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0e89b115-a181-42d7-bafc-3bb80e88e55b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6c1ed76-2558-49c8-b85a-818cd5b13869';
    $pane->panel = 'breadcrumb';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6c1ed76-2558-49c8-b85a-818cd5b13869';
    $display->content['new-f6c1ed76-2558-49c8-b85a-818cd5b13869'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-f6c1ed76-2558-49c8-b85a-818cd5b13869';
    $pane = new stdClass();
    $pane->pid = 'new-7c90d9f4-5e53-4406-8a15-ea149d633c78';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'widgets-s_socialmedia_share-default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sharing Options',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c90d9f4-5e53-4406-8a15-ea149d633c78';
    $display->content['new-7c90d9f4-5e53-4406-8a15-ea149d633c78'] = $pane;
    $display->panels['center'][0] = 'new-7c90d9f4-5e53-4406-8a15-ea149d633c78';
    $pane = new stdClass();
    $pane->pid = 'new-0d82fa96-6c6b-4452-b038-ad74caace67d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-nutrition_centre-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Food Facts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'food-facts-section margin-zero',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0d82fa96-6c6b-4452-b038-ad74caace67d';
    $display->content['new-0d82fa96-6c6b-4452-b038-ad74caace67d'] = $pane;
    $display->panels['center'][1] = 'new-0d82fa96-6c6b-4452-b038-ad74caace67d';
    $pane = new stdClass();
    $pane->pid = 'new-e12368cf-0d5b-4513-bbbb-a7cc65378041';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-nutrition_centre-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'food-facts-section',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e12368cf-0d5b-4513-bbbb-a7cc65378041';
    $display->content['new-e12368cf-0d5b-4513-bbbb-a7cc65378041'] = $pane;
    $display->panels['center'][2] = 'new-e12368cf-0d5b-4513-bbbb-a7cc65378041';
    $pane = new stdClass();
    $pane->pid = 'new-7f560ab4-4279-4b2b-8195-0d47392ddced';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-today_s_hot_tip-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related Recipes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'related-recipe-pane',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7f560ab4-4279-4b2b-8195-0d47392ddced';
    $display->content['new-7f560ab4-4279-4b2b-8195-0d47392ddced'] = $pane;
    $display->panels['center'][3] = 'new-7f560ab4-4279-4b2b-8195-0d47392ddced';
    $pane = new stdClass();
    $pane->pid = 'new-f5c5e56a-fcc8-4ffa-94ee-f72729c7185c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f5c5e56a-fcc8-4ffa-94ee-f72729c7185c';
    $display->content['new-f5c5e56a-fcc8-4ffa-94ee-f72729c7185c'] = $pane;
    $display->panels['center'][4] = 'new-f5c5e56a-fcc8-4ffa-94ee-f72729c7185c';
    $pane = new stdClass();
    $pane->pid = 'new-fb3d4895-7ceb-463c-8196-47c97d1a8e2a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-video-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'fb3d4895-7ceb-463c-8196-47c97d1a8e2a';
    $display->content['new-fb3d4895-7ceb-463c-8196-47c97d1a8e2a'] = $pane;
    $display->panels['center'][5] = 'new-fb3d4895-7ceb-463c-8196-47c97d1a8e2a';
    $pane = new stdClass();
    $pane->pid = 'new-f538f3da-8555-48a6-ae70-fee719b389c8';
    $pane->panel = 'center';
    $pane->type = 'token';
    $pane->subtype = 'node:field_caption';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'v-caption',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f538f3da-8555-48a6-ae70-fee719b389c8';
    $display->content['new-f538f3da-8555-48a6-ae70-fee719b389c8'] = $pane;
    $display->panels['center'][6] = 'new-f538f3da-8555-48a6-ae70-fee719b389c8';
    $pane = new stdClass();
    $pane->pid = 'new-9823cfd9-c749-4bf3-b5d4-0227f3e9e697';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'views-main_image_recipe-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'view-articles-slideshow',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9823cfd9-c749-4bf3-b5d4-0227f3e9e697';
    $display->content['new-9823cfd9-c749-4bf3-b5d4-0227f3e9e697'] = $pane;
    $display->panels['main_content'][0] = 'new-9823cfd9-c749-4bf3-b5d4-0227f3e9e697';
    $pane = new stdClass();
    $pane->pid = 'new-ba4121fb-1d8e-4af6-b5d5-8e3106ec70eb';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_image';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:recipe:field_select_display',
          'settings' => array(
            'field_select_display' => array(
              'und' => array(
                0 => array(
                  'value' => 'Image Carousal',
                ),
              ),
            ),
            'field_select_display_value' => 'Image Carousal',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'recipe_main_image',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'nutrition-centre-image',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ba4121fb-1d8e-4af6-b5d5-8e3106ec70eb';
    $display->content['new-ba4121fb-1d8e-4af6-b5d5-8e3106ec70eb'] = $pane;
    $display->panels['main_content'][1] = 'new-ba4121fb-1d8e-4af6-b5d5-8e3106ec70eb';
    $pane = new stdClass();
    $pane->pid = 'new-e10c815b-4946-4a02-b595-9e78ba670008';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:recipe:field_select_display',
          'settings' => array(
            'field_select_display' => array(
              'und' => array(
                0 => array(
                  'value' => 'Image Carousal',
                ),
              ),
            ),
            'field_select_display_value' => 'Image Carousal',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e10c815b-4946-4a02-b595-9e78ba670008';
    $display->content['new-e10c815b-4946-4a02-b595-9e78ba670008'] = $pane;
    $display->panels['main_content'][2] = 'new-e10c815b-4946-4a02-b595-9e78ba670008';
    $pane = new stdClass();
    $pane->pid = 'new-5078d0c3-a980-42d9-98fd-dd34317edabb';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'views-banner-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5078d0c3-a980-42d9-98fd-dd34317edabb';
    $display->content['new-5078d0c3-a980-42d9-98fd-dd34317edabb'] = $pane;
    $display->panels['main_content'][3] = 'new-5078d0c3-a980-42d9-98fd-dd34317edabb';
    $pane = new stdClass();
    $pane->pid = 'new-24d8975c-1a2e-4dca-a46d-07c6dffbb23a';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'views-nutrition_centre-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bottom-body',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '24d8975c-1a2e-4dca-a46d-07c6dffbb23a';
    $display->content['new-24d8975c-1a2e-4dca-a46d-07c6dffbb23a'] = $pane;
    $display->panels['main_content'][4] = 'new-24d8975c-1a2e-4dca-a46d-07c6dffbb23a';
    $pane = new stdClass();
    $pane->pid = 'new-d1a90c66-6c66-4e28-834c-22ccc9a7badc';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cooking_time';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'smart_trim_format',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '300',
        'trim_type' => 'chars',
        'trim_suffix' => '...',
        'more_link' => '0',
        'more_text' => 'Read more',
        'trim_options' => array(
          'text' => 0,
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd1a90c66-6c66-4e28-834c-22ccc9a7badc';
    $display->content['new-d1a90c66-6c66-4e28-834c-22ccc9a7badc'] = $pane;
    $display->panels['main_content'][5] = 'new-d1a90c66-6c66-4e28-834c-22ccc9a7badc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function nutrition_centre_changes_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nutrition_centre';
  $page->task = 'page';
  $page->admin_title = 'Nutrition Centre';
  $page->admin_description = 'Page for nutrition centre hub page.';
  $page->path = 'nutrition';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nutrition_centre_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'nutrition_centre';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'nutrition-centre',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 4,
          1 => 3,
          2 => 2,
          3 => 1,
          4 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'recipe_box',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Second Sidebar',
        'width' => '29.83713099992169',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'about_nutrition_centre',
        ),
        'parent' => 'main',
        'class' => 'nutrition-breadcrumb',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'about_nutrition_center',
        ),
        'parent' => 'main',
        'class' => 'about-us-section',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'carousel',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'carousel' => array(
        'type' => 'region',
        'title' => 'Carousel',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'banner-slideshow-region',
      ),
      'about_nutrition_centre' => array(
        'type' => 'region',
        'title' => 'Breadcrumb',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'recipe_box' => array(
        'type' => 'region',
        'title' => 'Recipe Box',
        'width' => '70.16286900007832',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
      ),
      'about_nutrition_center' => array(
        'type' => 'region',
        'title' => 'About Nutrition Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'banner' => NULL,
      'carousel' => NULL,
      'about_nutrition_centre' => NULL,
      'recipe_box' => NULL,
      'breadcrumb' => NULL,
      'about_nutrition_center' => NULL,
      'subscribe' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nutrition Centre';
  $display->uuid = 'b54e461f-f3f1-4986-9a46-d3a0992609d6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f765259b-3c1d-477f-968f-7202d013084f';
    $pane->panel = 'about_nutrition_center';
    $pane->type = 'block';
    $pane->subtype = 'bean-nutrition-centre-about-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f765259b-3c1d-477f-968f-7202d013084f';
    $display->content['new-f765259b-3c1d-477f-968f-7202d013084f'] = $pane;
    $display->panels['about_nutrition_center'][0] = 'new-f765259b-3c1d-477f-968f-7202d013084f';
    $pane = new stdClass();
    $pane->pid = 'new-5e9a846b-1ad3-4d02-ac11-9283777cef3f';
    $pane->panel = 'about_nutrition_center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'LEARN MORE',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-menu-menu-about-us-menu',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5e9a846b-1ad3-4d02-ac11-9283777cef3f';
    $display->content['new-5e9a846b-1ad3-4d02-ac11-9283777cef3f'] = $pane;
    $display->panels['about_nutrition_center'][1] = 'new-5e9a846b-1ad3-4d02-ac11-9283777cef3f';
    $pane = new stdClass();
    $pane->pid = 'new-4809c06d-5950-420d-8672-10e50e99fe15';
    $pane->panel = 'about_nutrition_center';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4809c06d-5950-420d-8672-10e50e99fe15';
    $display->content['new-4809c06d-5950-420d-8672-10e50e99fe15'] = $pane;
    $display->panels['about_nutrition_center'][2] = 'new-4809c06d-5950-420d-8672-10e50e99fe15';
    $pane = new stdClass();
    $pane->pid = 'new-26f7eabe-ea59-4c53-a982-05a19302214a';
    $pane->panel = 'about_nutrition_centre';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26f7eabe-ea59-4c53-a982-05a19302214a';
    $display->content['new-26f7eabe-ea59-4c53-a982-05a19302214a'] = $pane;
    $display->panels['about_nutrition_centre'][0] = 'new-26f7eabe-ea59-4c53-a982-05a19302214a';
    $pane = new stdClass();
    $pane->pid = 'new-5dd6c5bf-627b-4104-8d5a-54f71e2dd82e';
    $pane->panel = 'carousel';
    $pane->type = 'block';
    $pane->subtype = 'views-banner-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner-slideshow',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5dd6c5bf-627b-4104-8d5a-54f71e2dd82e';
    $display->content['new-5dd6c5bf-627b-4104-8d5a-54f71e2dd82e'] = $pane;
    $display->panels['carousel'][0] = 'new-5dd6c5bf-627b-4104-8d5a-54f71e2dd82e';
    $pane = new stdClass();
    $pane->pid = 'new-e3d634aa-99a6-4c0d-9e7d-95673d8a1d9c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-today_s_hot_tip-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3d634aa-99a6-4c0d-9e7d-95673d8a1d9c';
    $display->content['new-e3d634aa-99a6-4c0d-9e7d-95673d8a1d9c'] = $pane;
    $display->panels['center'][0] = 'new-e3d634aa-99a6-4c0d-9e7d-95673d8a1d9c';
    $pane = new stdClass();
    $pane->pid = 'new-d46b231b-b4aa-4175-9b43-0a7ec12731c2';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-five_ways_to-block';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Five ways to',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'five-ways-to-carousel',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd46b231b-b4aa-4175-9b43-0a7ec12731c2';
    $display->content['new-d46b231b-b4aa-4175-9b43-0a7ec12731c2'] = $pane;
    $display->panels['center'][1] = 'new-d46b231b-b4aa-4175-9b43-0a7ec12731c2';
    $pane = new stdClass();
    $pane->pid = 'new-6047d1f3-972e-4f66-b3fb-2f84ff6b8807';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-today_s_hot_tip-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Today\'s Hot Tip',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6047d1f3-972e-4f66-b3fb-2f84ff6b8807';
    $display->content['new-6047d1f3-972e-4f66-b3fb-2f84ff6b8807'] = $pane;
    $display->panels['center'][2] = 'new-6047d1f3-972e-4f66-b3fb-2f84ff6b8807';
    $pane = new stdClass();
    $pane->pid = 'new-5ed5a5ee-3adc-4f56-859b-88766265dbf3';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-today_s_hot_tip-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Video Tour',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5ed5a5ee-3adc-4f56-859b-88766265dbf3';
    $display->content['new-5ed5a5ee-3adc-4f56-859b-88766265dbf3'] = $pane;
    $display->panels['center'][3] = 'new-5ed5a5ee-3adc-4f56-859b-88766265dbf3';
    $pane = new stdClass();
    $pane->pid = 'new-3852e4c2-dec4-4d7f-823b-30c09adfcbbb';
    $pane->panel = 'recipe_box';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-nutrition_centre-page_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Search Recipes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3852e4c2-dec4-4d7f-823b-30c09adfcbbb';
    $display->content['new-3852e4c2-dec4-4d7f-823b-30c09adfcbbb'] = $pane;
    $display->panels['recipe_box'][0] = 'new-3852e4c2-dec4-4d7f-823b-30c09adfcbbb';
    $pane = new stdClass();
    $pane->pid = 'new-6811e2b7-52f3-4899-88dc-f652711a744a';
    $pane->panel = 'recipe_box';
    $pane->type = 'block';
    $pane->subtype = 'views-nutrition_centre-block';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6811e2b7-52f3-4899-88dc-f652711a744a';
    $display->content['new-6811e2b7-52f3-4899-88dc-f652711a744a'] = $pane;
    $display->panels['recipe_box'][1] = 'new-6811e2b7-52f3-4899-88dc-f652711a744a';
    $pane = new stdClass();
    $pane->pid = 'new-682ded5d-26bd-48c5-9f71-5cd16eb82659';
    $pane->panel = 'recipe_box';
    $pane->type = 'block';
    $pane->subtype = 'views-video-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-views-nutrition-centre-block',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '682ded5d-26bd-48c5-9f71-5cd16eb82659';
    $display->content['new-682ded5d-26bd-48c5-9f71-5cd16eb82659'] = $pane;
    $display->panels['recipe_box'][2] = 'new-682ded5d-26bd-48c5-9f71-5cd16eb82659';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nutrition_centre'] = $page;

  return $pages;

}
