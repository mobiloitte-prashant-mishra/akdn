<?php
/**
 * @file
 * panels_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Ismaili Centres pages',
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
              'ismaili_centres' => 'ismaili_centres',
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
        'class' => 'ic-internal-pages',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0',
        'region_separation' => '0',
        'row_separation' => '0',
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
          0 => 'center',
          1 => 'right_column',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '70.79766842836698',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ic-internal-pages-left',
      ),
      'right_column' => array(
        'type' => 'region',
        'title' => 'Right Column',
        'width' => '29.20233157163302',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ic-internal-pages-right',
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
      'right_column' => NULL,
      'breadcrumb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f638f00f-f29e-46b4-83f5-ded401d1b3bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3bdb4503-e81c-47e2-a823-8bc64d969053';
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
    $pane->uuid = '3bdb4503-e81c-47e2-a823-8bc64d969053';
    $display->content['new-3bdb4503-e81c-47e2-a823-8bc64d969053'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-3bdb4503-e81c-47e2-a823-8bc64d969053';
    $pane = new stdClass();
    $pane->pid = 'new-bb05028b-a346-4df9-b05f-4a584d9a1d49';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
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
    $pane->uuid = 'bb05028b-a346-4df9-b05f-4a584d9a1d49';
    $display->content['new-bb05028b-a346-4df9-b05f-4a584d9a1d49'] = $pane;
    $display->panels['center'][0] = 'new-bb05028b-a346-4df9-b05f-4a584d9a1d49';
    $pane = new stdClass();
    $pane->pid = 'new-04c8b49a-9dbe-4a8f-9032-429fc8973a04';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-f8539c04674ace205dba6066ead9e57f';
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
      'css_class' => 'video-gallery-slider',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '04c8b49a-9dbe-4a8f-9032-429fc8973a04';
    $display->content['new-04c8b49a-9dbe-4a8f-9032-429fc8973a04'] = $pane;
    $display->panels['center'][1] = 'new-04c8b49a-9dbe-4a8f-9032-429fc8973a04';
    $pane = new stdClass();
    $pane->pid = 'new-6a4f46ac-88e2-4990-bc35-81c2c41ade76';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6a4f46ac-88e2-4990-bc35-81c2c41ade76';
    $display->content['new-6a4f46ac-88e2-4990-bc35-81c2c41ade76'] = $pane;
    $display->panels['center'][2] = 'new-6a4f46ac-88e2-4990-bc35-81c2c41ade76';
    $pane = new stdClass();
    $pane->pid = 'new-0195e087-8a11-4187-9ee4-4a8ac8347df6';
    $pane->panel = 'center';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:ismaili_centre_motif_grid_entity_view_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
      'css_class' => 'video-gallery-slider',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0195e087-8a11-4187-9ee4-4a8ac8347df6';
    $display->content['new-0195e087-8a11-4187-9ee4-4a8ac8347df6'] = $pane;
    $display->panels['center'][3] = 'new-0195e087-8a11-4187-9ee4-4a8ac8347df6';
    $pane = new stdClass();
    $pane->pid = 'new-37c9bf19-1115-44cb-ad74-2bba1e17e39a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-search-block_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:ismaili_centres:field_display_blocks',
          'settings' => array(
            'field_display_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Upcoming Events',
                ),
              ),
            ),
            'field_display_blocks_value' => array(
              0 => 'Upcoming Events',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Upcoming Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'inner-upcoming-events',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '37c9bf19-1115-44cb-ad74-2bba1e17e39a';
    $display->content['new-37c9bf19-1115-44cb-ad74-2bba1e17e39a'] = $pane;
    $display->panels['center'][4] = 'new-37c9bf19-1115-44cb-ad74-2bba1e17e39a';
    $pane = new stdClass();
    $pane->pid = 'new-839328f1-f297-4d32-842c-8ca43442b06c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-latest_news-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Recent News',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '839328f1-f297-4d32-842c-8ca43442b06c';
    $display->content['new-839328f1-f297-4d32-842c-8ca43442b06c'] = $pane;
    $display->panels['center'][5] = 'new-839328f1-f297-4d32-842c-8ca43442b06c';
    $pane = new stdClass();
    $pane->pid = 'new-4890af9a-9b14-4378-8e3a-f6a5c3a74a3e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-search-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Recent News',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'inner-upcoming-events ',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4890af9a-9b14-4378-8e3a-f6a5c3a74a3e';
    $display->content['new-4890af9a-9b14-4378-8e3a-f6a5c3a74a3e'] = $pane;
    $display->panels['center'][6] = 'new-4890af9a-9b14-4378-8e3a-f6a5c3a74a3e';
    $pane = new stdClass();
    $pane->pid = 'new-db64998c-8198-4814-b0b8-350a017d1a7f';
    $pane->panel = 'right_column';
    $pane->type = 'token';
    $pane->subtype = 'node:field_short_image';
    $pane->shown = TRUE;
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db64998c-8198-4814-b0b8-350a017d1a7f';
    $display->content['new-db64998c-8198-4814-b0b8-350a017d1a7f'] = $pane;
    $display->panels['right_column'][0] = 'new-db64998c-8198-4814-b0b8-350a017d1a7f';
    $pane = new stdClass();
    $pane->pid = 'new-209200e5-4579-49b1-8b1f-46853a7f4392';
    $pane->panel = 'right_column';
    $pane->type = 'block';
    $pane->subtype = 'views-b1fb8b8fee06b958d3ff99e9ef164a5a';
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
      'css_class' => 'pane-node-field-internal-page',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '209200e5-4579-49b1-8b1f-46853a7f4392';
    $display->content['new-209200e5-4579-49b1-8b1f-46853a7f4392'] = $pane;
    $display->panels['right_column'][1] = 'new-209200e5-4579-49b1-8b1f-46853a7f4392';
    $pane = new stdClass();
    $pane->pid = 'new-51212952-8ef7-4761-a383-8b14654cef72';
    $pane->panel = 'right_column';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_internal_page';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:ismaili_centres:field_display_blocks',
          'settings' => array(
            'field_display_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motiff Menu',
                ),
              ),
            ),
            'field_display_blocks_value' => array(
              0 => 'Motiff Menu',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'node_reference_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '51212952-8ef7-4761-a383-8b14654cef72';
    $display->content['new-51212952-8ef7-4761-a383-8b14654cef72'] = $pane;
    $display->panels['right_column'][2] = 'new-51212952-8ef7-4761-a383-8b14654cef72';
    $pane = new stdClass();
    $pane->pid = 'new-2a9481f2-7d37-44ba-be32-c062c6e8fd99';
    $pane->panel = 'right_column';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:ismaili_centre_motif_grid_entity_view_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:ismaili_centres:field_display_blocks',
          'settings' => array(
            'field_display_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motiff Strip',
                ),
              ),
            ),
            'field_display_blocks_value' => array(
              0 => 'Motiff Strip',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2a9481f2-7d37-44ba-be32-c062c6e8fd99';
    $display->content['new-2a9481f2-7d37-44ba-be32-c062c6e8fd99'] = $pane;
    $display->panels['right_column'][3] = 'new-2a9481f2-7d37-44ba-be32-c062c6e8fd99';
    $pane = new stdClass();
    $pane->pid = 'new-d89d378d-38e0-4e62-9079-b50782a1fb58';
    $pane->panel = 'right_column';
    $pane->type = 'block';
    $pane->subtype = 'widgets-s_socialmedia_share-default';
    $pane->shown = FALSE;
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd89d378d-38e0-4e62-9079-b50782a1fb58';
    $display->content['new-d89d378d-38e0-4e62-9079-b50782a1fb58'] = $pane;
    $display->panels['right_column'][4] = 'new-d89d378d-38e0-4e62-9079-b50782a1fb58';
    $pane = new stdClass();
    $pane->pid = 'new-8de2723b-7945-4b32-9d48-2e75d6b6dc7a';
    $pane->panel = 'right_column';
    $pane->type = 'block';
    $pane->subtype = 'block-171';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sharing options',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8de2723b-7945-4b32-9d48-2e75d6b6dc7a';
    $display->content['new-8de2723b-7945-4b32-9d48-2e75d6b6dc7a'] = $pane;
    $display->panels['right_column'][5] = 'new-8de2723b-7945-4b32-9d48-2e75d6b6dc7a';
    $pane = new stdClass();
    $pane->pid = 'new-8d55c759-6555-4cc1-bb78-db3fc7fb8286';
    $pane->panel = 'right_column';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:ismaili_centre_motif_grid_entity_view_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Galleries',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'video-gallery-slider',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '8d55c759-6555-4cc1-bb78-db3fc7fb8286';
    $display->content['new-8d55c759-6555-4cc1-bb78-db3fc7fb8286'] = $pane;
    $display->panels['right_column'][6] = 'new-8d55c759-6555-4cc1-bb78-db3fc7fb8286';
    $pane = new stdClass();
    $pane->pid = 'new-2c69337c-177e-4fc3-ba71-a6e55a487660';
    $pane->panel = 'right_column';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:ismaili_centre_motif_grid_entity_view_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Videos',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'video-gallery-slider',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '2c69337c-177e-4fc3-ba71-a6e55a487660';
    $display->content['new-2c69337c-177e-4fc3-ba71-a6e55a487660'] = $pane;
    $display->panels['right_column'][7] = 'new-2c69337c-177e-4fc3-ba71-a6e55a487660';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article pages',
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
              'calendar_event' => 'calendar_event',
              'article' => 'article',
              'child_compound_articles' => 'child_compound_articles',
              'events' => 'events',
              'page' => 'page',
              'parent_compound_articles' => 'parent_compound_articles',
              'speech_quote' => 'speech_quote',
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => '$n = menu_get_object();
$type = $n->type;
if ($type == \'child_compound_articles\')
{
$node=$n->nid;
$nid = $n->field_parent_article[und][0][nid];
drupal_goto(\'/node/\'.$nid,array(\'fragment\' => \'node-\'.$node, \'external\' => TRUE));
}
else {
return TRUE;
}',
          ),
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
        'class' => '',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'article_details',
          1 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '29.199084480845286',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ismaili-articles-right',
      ),
      'article_details' => array(
        'type' => 'region',
        'title' => 'Article details',
        'width' => '70.80091551915471',
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
      'article_details' => NULL,
      'breadcrumb' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = 'c4574f1c-2d23-4425-b765-bff321ab48f9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-28f9bbda-8155-420a-8287-a23ead8d5034';
    $pane->panel = 'article_details';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
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
    $pane->uuid = '28f9bbda-8155-420a-8287-a23ead8d5034';
    $display->content['new-28f9bbda-8155-420a-8287-a23ead8d5034'] = $pane;
    $display->panels['article_details'][0] = 'new-28f9bbda-8155-420a-8287-a23ead8d5034';
    $pane = new stdClass();
    $pane->pid = 'new-75f13a80-4d14-4d5c-bce5-33ce149f35d2';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publish_date';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'month_date_year',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
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
    $pane->uuid = '75f13a80-4d14-4d5c-bce5-33ce149f35d2';
    $display->content['new-75f13a80-4d14-4d5c-bce5-33ce149f35d2'] = $pane;
    $display->panels['article_details'][1] = 'new-75f13a80-4d14-4d5c-bce5-33ce149f35d2';
    $pane = new stdClass();
    $pane->pid = 'new-0456b6f3-de3d-4ed0-8a2b-e9e5e7698ade';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-video_display-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_type',
          'settings' => array(
            'field_article_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '9076',
                ),
              ),
            ),
            'field_article_type_tid' => '9076',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => '$n = menu_get_object();

$brightcove_video = $n->field_brightcove;
$youtube_video = $n->field_youtube_vimeo;

if($brightcove_video || $youtube_video) {
return TRUE;
}

else {
return FALSE;
}
',
          ),
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
    $pane->uuid = '0456b6f3-de3d-4ed0-8a2b-e9e5e7698ade';
    $display->content['new-0456b6f3-de3d-4ed0-8a2b-e9e5e7698ade'] = $pane;
    $display->panels['article_details'][2] = 'new-0456b6f3-de3d-4ed0-8a2b-e9e5e7698ade';
    $pane = new stdClass();
    $pane->pid = 'new-845662e8-cfdb-4fbb-b82a-1f1428b509c6';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_brightcove';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_type',
          'settings' => array(
            'field_article_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '9076',
                ),
              ),
            ),
            'field_article_type_tid' => '9076',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'width' => '500',
        'height' => '350',
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
      'css_class' => 'v-player',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '845662e8-cfdb-4fbb-b82a-1f1428b509c6';
    $display->content['new-845662e8-cfdb-4fbb-b82a-1f1428b509c6'] = $pane;
    $display->panels['article_details'][3] = 'new-845662e8-cfdb-4fbb-b82a-1f1428b509c6';
    $pane = new stdClass();
    $pane->pid = 'new-7b69f45a-30fc-45bd-aa14-eaf3dc3511bd';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_youtube_vimeo';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_type',
          'settings' => array(
            'field_article_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '9076',
                ),
              ),
            ),
            'field_article_type_tid' => '9076',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'controls' => 1,
        'autoplay' => 1,
        'loop' => 0,
        'multiple_file_behavior' => 'tags',
        'width' => '',
        'height' => '',
      ),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7b69f45a-30fc-45bd-aa14-eaf3dc3511bd';
    $display->content['new-7b69f45a-30fc-45bd-aa14-eaf3dc3511bd'] = $pane;
    $display->panels['article_details'][4] = 'new-7b69f45a-30fc-45bd-aa14-eaf3dc3511bd';
    $pane = new stdClass();
    $pane->pid = 'new-d8aeb5b5-c43a-450f-9a3e-f77e2216db1d';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_brightcove_caption';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_type',
          'settings' => array(
            'field_article_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '9076',
                ),
              ),
            ),
            'field_article_type_tid' => '9076',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd8aeb5b5-c43a-450f-9a3e-f77e2216db1d';
    $display->content['new-d8aeb5b5-c43a-450f-9a3e-f77e2216db1d'] = $pane;
    $display->panels['article_details'][5] = 'new-d8aeb5b5-c43a-450f-9a3e-f77e2216db1d';
    $pane = new stdClass();
    $pane->pid = 'new-6cc3c127-1efb-4c70-84ee-336ff7aefa7d';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_credits';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_type',
          'settings' => array(
            'field_article_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '9076',
                ),
              ),
            ),
            'field_article_type_tid' => '9076',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'v-credits',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '6cc3c127-1efb-4c70-84ee-336ff7aefa7d';
    $display->content['new-6cc3c127-1efb-4c70-84ee-336ff7aefa7d'] = $pane;
    $display->panels['article_details'][6] = 'new-6cc3c127-1efb-4c70-84ee-336ff7aefa7d';
    $pane = new stdClass();
    $pane->pid = 'new-a6387296-6af1-4e26-8355-6a1260a1d106';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_type',
          'settings' => array(
            'field_article_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '9076',
                ),
              ),
            ),
            'field_article_type_tid' => '9076',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'a6387296-6af1-4e26-8355-6a1260a1d106';
    $display->content['new-a6387296-6af1-4e26-8355-6a1260a1d106'] = $pane;
    $display->panels['article_details'][7] = 'new-a6387296-6af1-4e26-8355-6a1260a1d106';
    $pane = new stdClass();
    $pane->pid = 'new-976a0fae-da81-43f3-9014-faabc66d58f3';
    $pane->panel = 'article_details';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '976a0fae-da81-43f3-9014-faabc66d58f3';
    $display->content['new-976a0fae-da81-43f3-9014-faabc66d58f3'] = $pane;
    $display->panels['article_details'][8] = 'new-976a0fae-da81-43f3-9014-faabc66d58f3';
    $pane = new stdClass();
    $pane->pid = 'new-69e735c5-46dd-4284-ad4a-0c445d84d0f7';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_author';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'nat_link',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '69e735c5-46dd-4284-ad4a-0c445d84d0f7';
    $display->content['new-69e735c5-46dd-4284-ad4a-0c445d84d0f7'] = $pane;
    $display->panels['article_details'][9] = 'new-69e735c5-46dd-4284-ad4a-0c445d84d0f7';
    $pane = new stdClass();
    $pane->pid = 'new-7dbf0534-bcfc-49cb-bad9-1a251e93ce41';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publish_date';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'custom_date_for_ismaili',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '7dbf0534-bcfc-49cb-bad9-1a251e93ce41';
    $display->content['new-7dbf0534-bcfc-49cb-bad9-1a251e93ce41'] = $pane;
    $display->panels['article_details'][10] = 'new-7dbf0534-bcfc-49cb-bad9-1a251e93ce41';
    $pane = new stdClass();
    $pane->pid = 'new-1b83a744-2178-4e3b-a14b-be648b212c4a';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-e34b4c17f9b7f52ebd5def7a4204901a';
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
      'css_class' => 'compound-articles last-updated',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '1b83a744-2178-4e3b-a14b-be648b212c4a';
    $display->content['new-1b83a744-2178-4e3b-a14b-be648b212c4a'] = $pane;
    $display->panels['article_details'][11] = 'new-1b83a744-2178-4e3b-a14b-be648b212c4a';
    $pane = new stdClass();
    $pane->pid = 'new-4d8d3df7-d8b2-4933-9961-12391c536895';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_16';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '4d8d3df7-d8b2-4933-9961-12391c536895';
    $display->content['new-4d8d3df7-d8b2-4933-9961-12391c536895'] = $pane;
    $display->panels['article_details'][12] = 'new-4d8d3df7-d8b2-4933-9961-12391c536895';
    $pane = new stdClass();
    $pane->pid = 'new-51c6ae51-c954-4d6a-852e-20efd86c47a0';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_19';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '51c6ae51-c954-4d6a-852e-20efd86c47a0';
    $display->content['new-51c6ae51-c954-4d6a-852e-20efd86c47a0'] = $pane;
    $display->panels['article_details'][13] = 'new-51c6ae51-c954-4d6a-852e-20efd86c47a0';
    $pane = new stdClass();
    $pane->pid = 'new-74524cb9-1588-4bea-89c2-b04df5aee154';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_introduction';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:events:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:page:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:parent_compound_articles:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 0,
                ),
              ),
            ),
            'field_omit_introduction_value' => NULL,
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '74524cb9-1588-4bea-89c2-b04df5aee154';
    $display->content['new-74524cb9-1588-4bea-89c2-b04df5aee154'] = $pane;
    $display->panels['article_details'][14] = 'new-74524cb9-1588-4bea-89c2-b04df5aee154';
    $pane = new stdClass();
    $pane->pid = 'new-4876a1d7-c622-4648-bb56-862267ec4142';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/revisions/*
node/*/draft',
          ),
          'context' => 'empty',
          'not' => TRUE,
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '4876a1d7-c622-4648-bb56-862267ec4142';
    $display->content['new-4876a1d7-c622-4648-bb56-862267ec4142'] = $pane;
    $display->panels['article_details'][15] = 'new-4876a1d7-c622-4648-bb56-862267ec4142';
    $pane = new stdClass();
    $pane->pid = 'new-e31ff3ad-a982-4490-9744-02c69b10445e';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_summary';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:events:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:page:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:parent_compound_articles:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        4 => array(
          'name' => 'entity_field_value:node:video:field_omit_introduction',
          'settings' => array(
            'field_omit_introduction' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_omit_introduction_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'e31ff3ad-a982-4490-9744-02c69b10445e';
    $display->content['new-e31ff3ad-a982-4490-9744-02c69b10445e'] = $pane;
    $display->panels['article_details'][16] = 'new-e31ff3ad-a982-4490-9744-02c69b10445e';
    $pane = new stdClass();
    $pane->pid = 'new-947d6856-f7ad-4571-b81a-abc5e479da43';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-draft_content_view-block_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/draft',
          ),
          'context' => 'empty',
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '947d6856-f7ad-4571-b81a-abc5e479da43';
    $display->content['new-947d6856-f7ad-4571-b81a-abc5e479da43'] = $pane;
    $display->panels['article_details'][17] = 'new-947d6856-f7ad-4571-b81a-abc5e479da43';
    $pane = new stdClass();
    $pane->pid = 'new-11464e48-ea64-4705-9d96-2e55bc4ea1fe';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-draft_content_view-block_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/revisions/*',
          ),
          'context' => 'empty',
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
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = '11464e48-ea64-4705-9d96-2e55bc4ea1fe';
    $display->content['new-11464e48-ea64-4705-9d96-2e55bc4ea1fe'] = $pane;
    $display->panels['article_details'][18] = 'new-11464e48-ea64-4705-9d96-2e55bc4ea1fe';
    $pane = new stdClass();
    $pane->pid = 'new-f9d55145-35a6-4e24-8253-75142d889545';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_17';
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
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = 'f9d55145-35a6-4e24-8253-75142d889545';
    $display->content['new-f9d55145-35a6-4e24-8253-75142d889545'] = $pane;
    $display->panels['article_details'][19] = 'new-f9d55145-35a6-4e24-8253-75142d889545';
    $pane = new stdClass();
    $pane->pid = 'new-3a45a8b9-eedf-4d77-8e6d-73ef6a942c5a';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_6';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/draft
node/*/revisions/*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
              1 => 2,
              2 => 11,
              3 => 16,
              4 => 21,
              5 => 26,
              6 => 31,
              7 => 41,
              8 => 46,
              9 => 51,
              10 => 36,
            ),
          ),
          'context' => 'logged-in-user',
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
    $pane->position = 20;
    $pane->locks = array();
    $pane->uuid = '3a45a8b9-eedf-4d77-8e6d-73ef6a942c5a';
    $display->content['new-3a45a8b9-eedf-4d77-8e6d-73ef6a942c5a'] = $pane;
    $display->panels['article_details'][20] = 'new-3a45a8b9-eedf-4d77-8e6d-73ef6a942c5a';
    $pane = new stdClass();
    $pane->pid = 'new-9fdfea95-6816-4e9e-8a4d-64543a7af397';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-draft_content_view-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/draft',
          ),
          'context' => 'empty',
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
    $pane->position = 21;
    $pane->locks = array();
    $pane->uuid = '9fdfea95-6816-4e9e-8a4d-64543a7af397';
    $display->content['new-9fdfea95-6816-4e9e-8a4d-64543a7af397'] = $pane;
    $display->panels['article_details'][21] = 'new-9fdfea95-6816-4e9e-8a4d-64543a7af397';
    $pane = new stdClass();
    $pane->pid = 'new-ad5775a9-d6df-4616-b391-18d29179a283';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-draft_content_view-block_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/revisions/*',
          ),
          'context' => 'empty',
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
    $pane->position = 22;
    $pane->locks = array();
    $pane->uuid = 'ad5775a9-d6df-4616-b391-18d29179a283';
    $display->content['new-ad5775a9-d6df-4616-b391-18d29179a283'] = $pane;
    $display->panels['article_details'][22] = 'new-ad5775a9-d6df-4616-b391-18d29179a283';
    $pane = new stdClass();
    $pane->pid = 'new-5ede5a02-ef67-49c2-8446-28ed3e131920';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-asking-block_1';
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
    $pane->position = 23;
    $pane->locks = array();
    $pane->uuid = '5ede5a02-ef67-49c2-8446-28ed3e131920';
    $display->content['new-5ede5a02-ef67-49c2-8446-28ed3e131920'] = $pane;
    $display->panels['article_details'][23] = 'new-5ede5a02-ef67-49c2-8446-28ed3e131920';
    $pane = new stdClass();
    $pane->pid = 'new-7f0670f6-d9dd-44ac-97a5-45c6e43c0406';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-040d42832fb3571aeef2293043c10f54';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:parent_compound_articles:field_reverse_child_articles_ord',
          'settings' => array(
            'field_reverse_child_articles_ord' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_reverse_child_articles_ord_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'compound-articles',
    );
    $pane->extras = array();
    $pane->position = 24;
    $pane->locks = array();
    $pane->uuid = '7f0670f6-d9dd-44ac-97a5-45c6e43c0406';
    $display->content['new-7f0670f6-d9dd-44ac-97a5-45c6e43c0406'] = $pane;
    $display->panels['article_details'][24] = 'new-7f0670f6-d9dd-44ac-97a5-45c6e43c0406';
    $pane = new stdClass();
    $pane->pid = 'new-46e2e031-b68f-40eb-ba2c-8156e019b968';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-979b9a62b5a3a24bf790df01cfe8a049';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'parent_compound_articles' => 'parent_compound_articles',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:parent_compound_articles:field_reverse_child_articles_ord',
          'settings' => array(
            'field_reverse_child_articles_ord' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_reverse_child_articles_ord_value' => '1',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'compound-articles',
    );
    $pane->extras = array();
    $pane->position = 25;
    $pane->locks = array();
    $pane->uuid = '46e2e031-b68f-40eb-ba2c-8156e019b968';
    $display->content['new-46e2e031-b68f-40eb-ba2c-8156e019b968'] = $pane;
    $display->panels['article_details'][25] = 'new-46e2e031-b68f-40eb-ba2c-8156e019b968';
    $pane = new stdClass();
    $pane->pid = 'new-5846ca01-0b4c-4edb-ac09-5df8bffd69b0';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'calendar_event' => 'calendar_event',
              'speech_quote' => 'speech_quote',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 26;
    $pane->locks = array();
    $pane->uuid = '5846ca01-0b4c-4edb-ac09-5df8bffd69b0';
    $display->content['new-5846ca01-0b4c-4edb-ac09-5df8bffd69b0'] = $pane;
    $display->panels['article_details'][26] = 'new-5846ca01-0b4c-4edb-ac09-5df8bffd69b0';
    $pane = new stdClass();
    $pane->pid = 'new-78caa5f9-290c-4e70-af97-c2a19bf290b0';
    $pane->panel = 'article_details';
    $pane->type = 'block';
    $pane->subtype = 'views-speech-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'speech_quote' => 'speech_quote',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Referenced Speech',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 27;
    $pane->locks = array();
    $pane->uuid = '78caa5f9-290c-4e70-af97-c2a19bf290b0';
    $display->content['new-78caa5f9-290c-4e70-af97-c2a19bf290b0'] = $pane;
    $display->panels['article_details'][27] = 'new-78caa5f9-290c-4e70-af97-c2a19bf290b0';
    $pane = new stdClass();
    $pane->pid = 'new-7cf0c40c-f2f4-4a11-ac7f-fab6e02e66ac';
    $pane->panel = 'article_details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_registration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'registration_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'label' => 'Register',
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
    $pane->position = 28;
    $pane->locks = array();
    $pane->uuid = '7cf0c40c-f2f4-4a11-ac7f-fab6e02e66ac';
    $display->content['new-7cf0c40c-f2f4-4a11-ac7f-fab6e02e66ac'] = $pane;
    $display->panels['article_details'][28] = 'new-7cf0c40c-f2f4-4a11-ac7f-fab6e02e66ac';
    $pane = new stdClass();
    $pane->pid = 'new-bec6d700-4d6a-4661-bf43-b1ef45406b9d';
    $pane->panel = 'article_details';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 11,
              1 => 16,
              2 => 21,
              3 => 26,
              4 => 31,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'anon_links' => 0,
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
    $pane->position = 29;
    $pane->locks = array();
    $pane->uuid = 'bec6d700-4d6a-4661-bf43-b1ef45406b9d';
    $display->content['new-bec6d700-4d6a-4661-bf43-b1ef45406b9d'] = $pane;
    $display->panels['article_details'][29] = 'new-bec6d700-4d6a-4661-bf43-b1ef45406b9d';
    $pane = new stdClass();
    $pane->pid = 'new-66b38811-17b2-430b-a53f-bd554f164cc8';
    $pane->panel = 'article_details';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 11,
              1 => 16,
              2 => 21,
              3 => 26,
              4 => 31,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->position = 30;
    $pane->locks = array();
    $pane->uuid = '66b38811-17b2-430b-a53f-bd554f164cc8';
    $display->content['new-66b38811-17b2-430b-a53f-bd554f164cc8'] = $pane;
    $display->panels['article_details'][30] = 'new-66b38811-17b2-430b-a53f-bd554f164cc8';
    $pane = new stdClass();
    $pane->pid = 'new-3bb2bbd8-ccd8-4be5-a84d-406246857df9';
    $pane->panel = 'breadcrumb';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_microsite_institutional_sp',
          'settings' => array(
            'field_microsite_institutional_sp' => array(
              'und' => array(
                0 => array(
                  'tid' => '10316',
                ),
              ),
            ),
            'field_microsite_institutional_sp_tid' => '10316',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:page:field_microsite_institutional_sp',
          'settings' => array(
            'field_microsite_institutional_sp' => array(
              'und' => array(
                0 => array(
                  'tid' => '10316',
                ),
              ),
            ),
            'field_microsite_institutional_sp_tid' => '10316',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:parent_compound_articles:field_microsite_institutional_sp',
          'settings' => array(
            'field_microsite_institutional_sp' => array(
              'und' => array(
                0 => array(
                  'tid' => '10316',
                ),
              ),
            ),
            'field_microsite_institutional_sp_tid' => '10316',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3bb2bbd8-ccd8-4be5-a84d-406246857df9';
    $display->content['new-3bb2bbd8-ccd8-4be5-a84d-406246857df9'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-3bb2bbd8-ccd8-4be5-a84d-406246857df9';
    $pane = new stdClass();
    $pane->pid = 'new-70d8a5db-a789-410a-b8de-a89b4f798fe5';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_2';
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
    $pane->uuid = '70d8a5db-a789-410a-b8de-a89b4f798fe5';
    $display->content['new-70d8a5db-a789-410a-b8de-a89b4f798fe5'] = $pane;
    $display->panels['center'][0] = 'new-70d8a5db-a789-410a-b8de-a89b4f798fe5';
    $pane = new stdClass();
    $pane->pid = 'new-69047ea1-c0e1-4402-bb39-a59e4c54cbbf';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-0dbfc1afcf854a765a9e4072ba65e919';
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
      'css_class' => 'motif-strip-menu',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69047ea1-c0e1-4402-bb39-a59e4c54cbbf';
    $display->content['new-69047ea1-c0e1-4402-bb39-a59e4c54cbbf'] = $pane;
    $display->panels['center'][1] = 'new-69047ea1-c0e1-4402-bb39-a59e4c54cbbf';
    $pane = new stdClass();
    $pane->pid = 'new-eb04846e-ca36-43f0-af1e-f382c259e954';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-5a48f262b597574aa7df950da6fb86cb';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eb04846e-ca36-43f0-af1e-f382c259e954';
    $display->content['new-eb04846e-ca36-43f0-af1e-f382c259e954'] = $pane;
    $display->panels['center'][2] = 'new-eb04846e-ca36-43f0-af1e-f382c259e954';
    $pane = new stdClass();
    $pane->pid = 'new-953b2ebd-7bbc-487f-bfbb-7a8f1a2993d4';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-1792ca0db1a671b321cce397590862df';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(),
    );
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
      'css_class' => 'motif-strip-menu',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '953b2ebd-7bbc-487f-bfbb-7a8f1a2993d4';
    $display->content['new-953b2ebd-7bbc-487f-bfbb-7a8f1a2993d4'] = $pane;
    $display->panels['center'][3] = 'new-953b2ebd-7bbc-487f-bfbb-7a8f1a2993d4';
    $pane = new stdClass();
    $pane->pid = 'new-42cda3d8-80cb-4182-824f-dee404bfe9bd';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-572c71bce741c6139945c0aea818f49c';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motif Menu',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Motif Menu',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:events:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motif Menu',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Motif Menu',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:page:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motif Menu',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Motif Menu',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'motif-strip-menu',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '42cda3d8-80cb-4182-824f-dee404bfe9bd';
    $display->content['new-42cda3d8-80cb-4182-824f-dee404bfe9bd'] = $pane;
    $display->panels['center'][4] = 'new-42cda3d8-80cb-4182-824f-dee404bfe9bd';
    $pane = new stdClass();
    $pane->pid = 'new-b6f81c79-9755-4fc1-8114-818c426d988e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-de53c683824a48f20b0fc8db8a930cff';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_microsite',
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
        1 => array(
          'name' => 'entity_field_value:node:page:field_microsite',
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
        2 => array(
          'name' => 'entity_field_value:node:parent_compound_articles:field_microsite',
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
        3 => array(
          'name' => 'entity_field_value:node:events:field_microsite',
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
        4 => array(
          'name' => 'entity_field_value:node:article:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motif Grid',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Motif Grid',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        5 => array(
          'name' => 'entity_field_value:node:page:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motif Grid',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Motif Grid',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        6 => array(
          'name' => 'entity_field_value:node:events:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Motif Grid',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Motif Grid',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'motif-strip-right',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b6f81c79-9755-4fc1-8114-818c426d988e';
    $display->content['new-b6f81c79-9755-4fc1-8114-818c426d988e'] = $pane;
    $display->panels['center'][5] = 'new-b6f81c79-9755-4fc1-8114-818c426d988e';
    $pane = new stdClass();
    $pane->pid = 'new-9026fb98-3751-427e-b0ae-f21009ab32f5';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-de53c683824a48f20b0fc8db8a930cff';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:page:field_select_ismaili_centre',
          'settings' => array(
            'field_select_ismaili_centre' => array(
              'und' => array(
                0 => array(
                  'tid' => NULL,
                ),
              ),
            ),
            'field_select_ismaili_centre_tid' => '_none',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9026fb98-3751-427e-b0ae-f21009ab32f5';
    $display->content['new-9026fb98-3751-427e-b0ae-f21009ab32f5'] = $pane;
    $display->panels['center'][6] = 'new-9026fb98-3751-427e-b0ae-f21009ab32f5';
    $pane = new stdClass();
    $pane->pid = 'new-1d9bada9-72d7-4762-9700-305d7c5c2ce1';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'widgets-s_socialmedia_share-default';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_disable_sharing_block',
          'settings' => array(
            'field_disable_sharing_block' => array(
              'und' => array(
                0 => array(
                  'value' => '1',
                ),
              ),
            ),
            'field_disable_sharing_block_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:page:field_disable_sharing_block',
          'settings' => array(
            'field_disable_sharing_block' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_disable_sharing_block_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:events:field_disable_sharing_block',
          'settings' => array(
            'field_disable_sharing_block' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_disable_sharing_block_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:video:field_disable_sharing_block',
          'settings' => array(
            'field_disable_sharing_block' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_disable_sharing_block_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        4 => array(
          'name' => 'entity_field_value:node:events:field_disable_sharing_block',
          'settings' => array(
            'field_disable_sharing_block' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_disable_sharing_block_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        5 => array(
          'name' => 'entity_field_value:node:article:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Share Block',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Share Block',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '1d9bada9-72d7-4762-9700-305d7c5c2ce1';
    $display->content['new-1d9bada9-72d7-4762-9700-305d7c5c2ce1'] = $pane;
    $display->panels['center'][7] = 'new-1d9bada9-72d7-4762-9700-305d7c5c2ce1';
    $pane = new stdClass();
    $pane->pid = 'new-fe738758-9081-442d-87b7-2afdd9ab5c23';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-171';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sharing options',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'fe738758-9081-442d-87b7-2afdd9ab5c23';
    $display->content['new-fe738758-9081-442d-87b7-2afdd9ab5c23'] = $pane;
    $display->panels['center'][8] = 'new-fe738758-9081-442d-87b7-2afdd9ab5c23';
    $pane = new stdClass();
    $pane->pid = 'new-fd1d0309-cf4e-4c22-b6c8-671dbbb7e250';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-111';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Share Block',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Share Block',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'fd1d0309-cf4e-4c22-b6c8-671dbbb7e250';
    $display->content['new-fd1d0309-cf4e-4c22-b6c8-671dbbb7e250'] = $pane;
    $display->panels['center'][9] = 'new-fd1d0309-cf4e-4c22-b6c8-671dbbb7e250';
    $pane = new stdClass();
    $pane->pid = 'new-a2c7b6e8-98f8-4c17-a961-ae9e6d602d9c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-nutrition_centre-page_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_microsite',
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
        1 => array(
          'name' => 'entity_field_value:node:events:field_microsite',
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
        2 => array(
          'name' => 'entity_field_value:node:page:field_microsite',
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
        3 => array(
          'name' => 'entity_field_value:node:parent_compound_articles:field_microsite',
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
      'override_title_text' => 'SEARCH RECIPES',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'recipe-search-pane',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'a2c7b6e8-98f8-4c17-a961-ae9e6d602d9c';
    $display->content['new-a2c7b6e8-98f8-4c17-a961-ae9e6d602d9c'] = $pane;
    $display->panels['center'][10] = 'new-a2c7b6e8-98f8-4c17-a961-ae9e6d602d9c';
    $pane = new stdClass();
    $pane->pid = 'new-bd0f7901-eb86-4cd7-bde4-31d63a3d8826';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_related_articles',
          'settings' => array(
            'field_related_articles' => array(
              'und' => array(
                0 => array(
                  'field_related_link' => array(
                    'und' => array(
                      0 => array(
                        'title' => '',
                        'url' => '',
                      ),
                    ),
                  ),
                  'field_link_image' => array(
                    'und' => array(
                      0 => array(
                        'fid' => '0',
                      ),
                    ),
                  ),
                  '_weight' => '0',
                  'entity' => FieldCollectionItemEntity::__set_state(array(
   'fieldInfo' => NULL,
   'hostEntity' => NULL,
   'hostEntityId' => NULL,
   'hostEntityRevisionId' => NULL,
   'hostEntityType' => NULL,
   'langcode' => 'und',
   'item_id' => NULL,
   'revision_id' => NULL,
   'field_name' => 'field_related_articles',
   'default_revision' => true,
   'archived' => false,
   'entityType' => 'field_collection_item',
   'entityInfo' => 
  array (
    'label' => 'Field collection item',
    'label callback' => 'entity_class_label',
    'uri callback' => 'entity_class_uri',
    'entity class' => 'FieldCollectionItemEntity',
    'controller class' => 'EntityAPIController',
    'base table' => 'field_collection_item',
    'revision table' => 'field_collection_item_revision',
    'fieldable' => true,
    'redirect' => false,
    'entity keys' => 
    array (
      'id' => 'item_id',
      'revision' => 'revision_id',
      'bundle' => 'field_name',
      'uuid' => 'uuid',
    ),
    'module' => 'field_collection',
    'view modes' => 
    array (
      'full' => 
      array (
        'label' => 'Full content',
        'custom settings' => false,
      ),
      'diff_standard' => 
      array (
        'label' => 'Revision comparison',
        'custom settings' => false,
      ),
      'print' => 
      array (
        'label' => 'Print',
        'custom settings' => false,
      ),
      'token' => 
      array (
        'label' => 'Tokens',
        'custom settings' => false,
      ),
      'archive' => 
      array (
        'label' => 'Archive',
        'custom settings' => false,
      ),
      'banner' => 
      array (
        'label' => 'Banner',
        'custom settings' => false,
      ),
      'feature_tiles' => 
      array (
        'label' => 'Feature tiles',
        'custom settings' => false,
      ),
    ),
    'access callback' => 'field_collection_item_access',
    'deletion callback' => 'field_collection_item_delete',
    'metadata controller class' => 'FieldCollectionItemMetadataController',
    'bundles' => 
    array (
      'field_related_articles' => 
      array (
        'label' => 'Field collection field_related_articles',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-related-articles',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_images_for_carousal' => 
      array (
        'label' => 'Field collection field_images_for_carousal',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-images-for-carousal',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_nutrient_data' => 
      array (
        'label' => 'Field collection field_nutrient_data',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-nutrient-data',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_add_menu' => 
      array (
        'label' => 'Field collection field_add_menu',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-add-menu',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
    ),
    'static cache' => true,
    'field cache' => true,
    'load hook' => 'field_collection_item_load',
    'translation' => 
    array (
    ),
    'schema_fields_sql' => 
    array (
      'base table' => 
      array (
        0 => 'item_id',
        1 => 'revision_id',
        2 => 'field_name',
        3 => 'archived',
        4 => 'uuid',
      ),
      'revision table' => 
      array (
        0 => 'revision_id',
        1 => 'item_id',
      ),
    ),
    'token type' => 'field_collection_item',
    'configuration' => false,
    'uuid' => true,
  ),
   'idKey' => 'item_id',
   'nameKey' => 'item_id',
   'statusKey' => 'status',
   'defaultLabel' => false,
   'is_new' => true,
   'field_related_link' => 
  array (
    'und' => 
    array (
    ),
  ),
   'field_link_image' => 
  array (
    'und' => 
    array (
    ),
  ),
)),
                ),
                2 => array(
                  'field_related_link' => array(
                    'und' => array(
                      0 => array(
                        'title' => '',
                        'url' => '',
                      ),
                    ),
                  ),
                  'field_link_image' => array(
                    'und' => array(
                      0 => array(
                        'fid' => '0',
                      ),
                    ),
                  ),
                  '_weight' => '2',
                  'entity' => FieldCollectionItemEntity::__set_state(array(
   'fieldInfo' => NULL,
   'hostEntity' => NULL,
   'hostEntityId' => NULL,
   'hostEntityRevisionId' => NULL,
   'hostEntityType' => NULL,
   'langcode' => 'und',
   'item_id' => NULL,
   'revision_id' => NULL,
   'field_name' => 'field_related_articles',
   'default_revision' => true,
   'archived' => false,
   'entityType' => 'field_collection_item',
   'entityInfo' => 
  array (
    'label' => 'Field collection item',
    'label callback' => 'entity_class_label',
    'uri callback' => 'entity_class_uri',
    'entity class' => 'FieldCollectionItemEntity',
    'controller class' => 'EntityAPIController',
    'base table' => 'field_collection_item',
    'revision table' => 'field_collection_item_revision',
    'fieldable' => true,
    'redirect' => false,
    'entity keys' => 
    array (
      'id' => 'item_id',
      'revision' => 'revision_id',
      'bundle' => 'field_name',
      'uuid' => 'uuid',
    ),
    'module' => 'field_collection',
    'view modes' => 
    array (
      'full' => 
      array (
        'label' => 'Full content',
        'custom settings' => false,
      ),
      'diff_standard' => 
      array (
        'label' => 'Revision comparison',
        'custom settings' => false,
      ),
      'print' => 
      array (
        'label' => 'Print',
        'custom settings' => false,
      ),
      'token' => 
      array (
        'label' => 'Tokens',
        'custom settings' => false,
      ),
      'archive' => 
      array (
        'label' => 'Archive',
        'custom settings' => false,
      ),
      'banner' => 
      array (
        'label' => 'Banner',
        'custom settings' => false,
      ),
      'feature_tiles' => 
      array (
        'label' => 'Feature tiles',
        'custom settings' => false,
      ),
    ),
    'access callback' => 'field_collection_item_access',
    'deletion callback' => 'field_collection_item_delete',
    'metadata controller class' => 'FieldCollectionItemMetadataController',
    'bundles' => 
    array (
      'field_related_articles' => 
      array (
        'label' => 'Field collection field_related_articles',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-related-articles',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_images_for_carousal' => 
      array (
        'label' => 'Field collection field_images_for_carousal',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-images-for-carousal',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_nutrient_data' => 
      array (
        'label' => 'Field collection field_nutrient_data',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-nutrient-data',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_add_menu' => 
      array (
        'label' => 'Field collection field_add_menu',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-add-menu',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
    ),
    'static cache' => true,
    'field cache' => true,
    'load hook' => 'field_collection_item_load',
    'translation' => 
    array (
    ),
    'schema_fields_sql' => 
    array (
      'base table' => 
      array (
        0 => 'item_id',
        1 => 'revision_id',
        2 => 'field_name',
        3 => 'archived',
        4 => 'uuid',
      ),
      'revision table' => 
      array (
        0 => 'revision_id',
        1 => 'item_id',
      ),
    ),
    'token type' => 'field_collection_item',
    'configuration' => false,
    'uuid' => true,
  ),
   'idKey' => 'item_id',
   'nameKey' => 'item_id',
   'statusKey' => 'status',
   'defaultLabel' => false,
   'is_new' => true,
   'field_related_link' => 
  array (
    'und' => 
    array (
    ),
  ),
   'field_link_image' => 
  array (
    'und' => 
    array (
    ),
  ),
)),
                ),
                3 => array(
                  'field_related_link' => array(
                    'und' => array(
                      0 => array(
                        'title' => '',
                        'url' => '',
                      ),
                    ),
                  ),
                  'field_link_image' => array(
                    'und' => array(
                      0 => array(
                        'fid' => '0',
                      ),
                    ),
                  ),
                  '_weight' => '3',
                  'entity' => FieldCollectionItemEntity::__set_state(array(
   'fieldInfo' => NULL,
   'hostEntity' => NULL,
   'hostEntityId' => NULL,
   'hostEntityRevisionId' => NULL,
   'hostEntityType' => NULL,
   'langcode' => 'und',
   'item_id' => NULL,
   'revision_id' => NULL,
   'field_name' => 'field_related_articles',
   'default_revision' => true,
   'archived' => false,
   'entityType' => 'field_collection_item',
   'entityInfo' => 
  array (
    'label' => 'Field collection item',
    'label callback' => 'entity_class_label',
    'uri callback' => 'entity_class_uri',
    'entity class' => 'FieldCollectionItemEntity',
    'controller class' => 'EntityAPIController',
    'base table' => 'field_collection_item',
    'revision table' => 'field_collection_item_revision',
    'fieldable' => true,
    'redirect' => false,
    'entity keys' => 
    array (
      'id' => 'item_id',
      'revision' => 'revision_id',
      'bundle' => 'field_name',
      'uuid' => 'uuid',
    ),
    'module' => 'field_collection',
    'view modes' => 
    array (
      'full' => 
      array (
        'label' => 'Full content',
        'custom settings' => false,
      ),
      'diff_standard' => 
      array (
        'label' => 'Revision comparison',
        'custom settings' => false,
      ),
      'print' => 
      array (
        'label' => 'Print',
        'custom settings' => false,
      ),
      'token' => 
      array (
        'label' => 'Tokens',
        'custom settings' => false,
      ),
      'archive' => 
      array (
        'label' => 'Archive',
        'custom settings' => false,
      ),
      'banner' => 
      array (
        'label' => 'Banner',
        'custom settings' => false,
      ),
      'feature_tiles' => 
      array (
        'label' => 'Feature tiles',
        'custom settings' => false,
      ),
    ),
    'access callback' => 'field_collection_item_access',
    'deletion callback' => 'field_collection_item_delete',
    'metadata controller class' => 'FieldCollectionItemMetadataController',
    'bundles' => 
    array (
      'field_related_articles' => 
      array (
        'label' => 'Field collection field_related_articles',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-related-articles',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_images_for_carousal' => 
      array (
        'label' => 'Field collection field_images_for_carousal',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-images-for-carousal',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_nutrient_data' => 
      array (
        'label' => 'Field collection field_nutrient_data',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-nutrient-data',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_add_menu' => 
      array (
        'label' => 'Field collection field_add_menu',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-add-menu',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
    ),
    'static cache' => true,
    'field cache' => true,
    'load hook' => 'field_collection_item_load',
    'translation' => 
    array (
    ),
    'schema_fields_sql' => 
    array (
      'base table' => 
      array (
        0 => 'item_id',
        1 => 'revision_id',
        2 => 'field_name',
        3 => 'archived',
        4 => 'uuid',
      ),
      'revision table' => 
      array (
        0 => 'revision_id',
        1 => 'item_id',
      ),
    ),
    'token type' => 'field_collection_item',
    'configuration' => false,
    'uuid' => true,
  ),
   'idKey' => 'item_id',
   'nameKey' => 'item_id',
   'statusKey' => 'status',
   'defaultLabel' => false,
   'is_new' => true,
   'field_related_link' => 
  array (
    'und' => 
    array (
    ),
  ),
   'field_link_image' => 
  array (
    'und' => 
    array (
    ),
  ),
)),
                ),
                4 => array(
                  'field_related_link' => array(
                    'und' => array(
                      0 => array(
                        'title' => '',
                        'url' => '',
                      ),
                    ),
                  ),
                  'field_link_image' => array(
                    'und' => array(
                      0 => array(
                        'fid' => '0',
                      ),
                    ),
                  ),
                  '_weight' => '4',
                  'entity' => FieldCollectionItemEntity::__set_state(array(
   'fieldInfo' => NULL,
   'hostEntity' => NULL,
   'hostEntityId' => NULL,
   'hostEntityRevisionId' => NULL,
   'hostEntityType' => NULL,
   'langcode' => 'und',
   'item_id' => NULL,
   'revision_id' => NULL,
   'field_name' => 'field_related_articles',
   'default_revision' => true,
   'archived' => false,
   'entityType' => 'field_collection_item',
   'entityInfo' => 
  array (
    'label' => 'Field collection item',
    'label callback' => 'entity_class_label',
    'uri callback' => 'entity_class_uri',
    'entity class' => 'FieldCollectionItemEntity',
    'controller class' => 'EntityAPIController',
    'base table' => 'field_collection_item',
    'revision table' => 'field_collection_item_revision',
    'fieldable' => true,
    'redirect' => false,
    'entity keys' => 
    array (
      'id' => 'item_id',
      'revision' => 'revision_id',
      'bundle' => 'field_name',
      'uuid' => 'uuid',
    ),
    'module' => 'field_collection',
    'view modes' => 
    array (
      'full' => 
      array (
        'label' => 'Full content',
        'custom settings' => false,
      ),
      'diff_standard' => 
      array (
        'label' => 'Revision comparison',
        'custom settings' => false,
      ),
      'print' => 
      array (
        'label' => 'Print',
        'custom settings' => false,
      ),
      'token' => 
      array (
        'label' => 'Tokens',
        'custom settings' => false,
      ),
      'archive' => 
      array (
        'label' => 'Archive',
        'custom settings' => false,
      ),
      'banner' => 
      array (
        'label' => 'Banner',
        'custom settings' => false,
      ),
      'feature_tiles' => 
      array (
        'label' => 'Feature tiles',
        'custom settings' => false,
      ),
    ),
    'access callback' => 'field_collection_item_access',
    'deletion callback' => 'field_collection_item_delete',
    'metadata controller class' => 'FieldCollectionItemMetadataController',
    'bundles' => 
    array (
      'field_related_articles' => 
      array (
        'label' => 'Field collection field_related_articles',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-related-articles',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_images_for_carousal' => 
      array (
        'label' => 'Field collection field_images_for_carousal',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-images-for-carousal',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_nutrient_data' => 
      array (
        'label' => 'Field collection field_nutrient_data',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-nutrient-data',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
      'field_add_menu' => 
      array (
        'label' => 'Field collection field_add_menu',
        'admin' => 
        array (
          'path' => 'admin/structure/field-collections/%field_collection_field_name',
          'real path' => 'admin/structure/field-collections/field-add-menu',
          'bundle argument' => 3,
          'access arguments' => 
          array (
            0 => 'administer field collections',
          ),
        ),
        'rdf_mapping' => 
        array (
        ),
      ),
    ),
    'static cache' => true,
    'field cache' => true,
    'load hook' => 'field_collection_item_load',
    'translation' => 
    array (
    ),
    'schema_fields_sql' => 
    array (
      'base table' => 
      array (
        0 => 'item_id',
        1 => 'revision_id',
        2 => 'field_name',
        3 => 'archived',
        4 => 'uuid',
      ),
      'revision table' => 
      array (
        0 => 'revision_id',
        1 => 'item_id',
      ),
    ),
    'token type' => 'field_collection_item',
    'configuration' => false,
    'uuid' => true,
  ),
   'idKey' => 'item_id',
   'nameKey' => 'item_id',
   'statusKey' => 'status',
   'defaultLabel' => false,
   'is_new' => true,
   'field_related_link' => 
  array (
    'und' => 
    array (
    ),
  ),
   'field_link_image' => 
  array (
    'und' => 
    array (
    ),
  ),
)),
                ),
              ),
            ),
            'field_related_articles_value' => array(
              0 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '0',
              ),
              2 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '2',
              ),
              3 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '3',
              ),
              4 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '4',
              ),
            ),
            'field_related_articles_revision_id' => array(
              0 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '0',
              ),
              2 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '2',
              ),
              3 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '3',
              ),
              4 => array(
                'field_related_link' => array(
                  'und' => array(
                    0 => array(
                      'title' => '',
                      'url' => '',
                    ),
                  ),
                ),
                'field_link_image' => array(
                  'und' => array(
                    0 => array(
                      'fid' => '0',
                    ),
                  ),
                ),
                '_weight' => '4',
              ),
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related Articles',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'video-gallery-slider',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'bd0f7901-eb86-4cd7-bde4-31d63a3d8826';
    $display->content['new-bd0f7901-eb86-4cd7-bde4-31d63a3d8826'] = $pane;
    $display->panels['center'][11] = 'new-bd0f7901-eb86-4cd7-bde4-31d63a3d8826';
    $pane = new stdClass();
    $pane->pid = 'new-fd2efb54-eca8-44a3-ab56-913df0b0591d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_hide_page_blocks',
          'settings' => array(
            'field_hide_page_blocks' => array(
              'und' => array(
                0 => array(
                  'value' => 'Other Stories',
                ),
              ),
            ),
            'field_hide_page_blocks_value' => array(
              0 => 'Other Stories',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:article:field_microsite_institutional_sp',
          'settings' => array(
            'field_microsite_institutional_sp' => array(
              'und' => array(
                0 => array(
                  'tid' => '10316',
                ),
              ),
            ),
            'field_microsite_institutional_sp_tid' => '10316',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Other Stories of Interest',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'fd2efb54-eca8-44a3-ab56-913df0b0591d';
    $display->content['new-fd2efb54-eca8-44a3-ab56-913df0b0591d'] = $pane;
    $display->panels['center'][12] = 'new-fd2efb54-eca8-44a3-ab56-913df0b0591d';
    $pane = new stdClass();
    $pane->pid = 'new-e824dd5a-8486-4482-b50f-ba6e7902b2ab';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'e824dd5a-8486-4482-b50f-ba6e7902b2ab';
    $display->content['new-e824dd5a-8486-4482-b50f-ba6e7902b2ab'] = $pane;
    $display->panels['center'][13] = 'new-e824dd5a-8486-4482-b50f-ba6e7902b2ab';
    $pane = new stdClass();
    $pane->pid = 'new-d26a3296-708b-4deb-bad5-bb4654864414';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Related Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'related-topics',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'd26a3296-708b-4deb-bad5-bb4654864414';
    $display->content['new-d26a3296-708b-4deb-bad5-bb4654864414'] = $pane;
    $display->panels['center'][14] = 'new-d26a3296-708b-4deb-bad5-bb4654864414';
    $pane = new stdClass();
    $pane->pid = 'new-25bd24a7-7517-42d4-9d2e-3a76fd1cfdf3';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_8';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_microsite',
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
      'override_title_text' => 'Related Recipes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '25bd24a7-7517-42d4-9d2e-3a76fd1cfdf3';
    $display->content['new-25bd24a7-7517-42d4-9d2e-3a76fd1cfdf3'] = $pane;
    $display->panels['center'][15] = 'new-25bd24a7-7517-42d4-9d2e-3a76fd1cfdf3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1d9bada9-72d7-4762-9700-305d7c5c2ce1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ismaili_centres';
  $page->task = 'page';
  $page->admin_title = 'Ismaili-centres';
  $page->admin_description = '';
  $page->path = 'ismailicentres';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ismaili_centres_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ismaili_centres';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 3,
          3 => 1,
          4 => 'main-row',
          5 => 2,
          6 => 5,
          7 => 6,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'banner-slideshow-region',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'motif_strip',
          1 => 'about_us',
        ),
        'parent' => 'main',
        'class' => 'about-us-section',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Ismaili Centre Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'header_' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'highlight_right',
          1 => 'recent_news',
          2 => 'site_blocks',
          3 => 'history',
        ),
        'parent' => 'main',
        'class' => 'panels-flexible-row-last',
      ),
      'site_blocks' => array(
        'type' => 'region',
        'title' => 'Site Blocks',
        'width' => '29.996699788200917',
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'recent_news' => array(
        'type' => 'region',
        'title' => 'Recent News',
        'width' => 20.001206605302169,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'panels-flexible-region-6-footer',
      ),
      'history' => array(
        'type' => 'region',
        'title' => 'History',
        'width' => '30.000887001194748',
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'search_block',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'search_block' => array(
        'type' => 'region',
        'title' => 'Search Block',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      'motif_strip' => array(
        'type' => 'region',
        'title' => 'Motif Strip',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      'about_us' => array(
        'type' => 'region',
        'title' => 'about us',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'banner-slideshow-region',
      ),
      'highlight_right' => array(
        'type' => 'region',
        'title' => 'Highlight Right',
        'width' => 20.001206605302169,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'hightlight-box-right-pane',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'about_ismaili_centre' => NULL,
      'header' => NULL,
      'header_' => NULL,
      'about_us_bean_block' => NULL,
      'site_blocks' => NULL,
      'recent_news' => NULL,
      'history' => NULL,
      'footer' => NULL,
      'search_block' => NULL,
      'motif_strip' => NULL,
      'subscription' => NULL,
      'top' => NULL,
      'about_us' => NULL,
      'highlight_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Ismaili Centres';
  $display->uuid = '7c38963d-4b36-44d2-afb8-d1160ea8631e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d1ef3f82-af9d-4dc8-8562-6fdbb12ef0df';
    $pane->panel = 'about_us';
    $pane->type = 'block';
    $pane->subtype = 'bean-ismaili-centres-about-block';
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
      'css_class' => 'pane-bean-home-page-about-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd1ef3f82-af9d-4dc8-8562-6fdbb12ef0df';
    $display->content['new-d1ef3f82-af9d-4dc8-8562-6fdbb12ef0df'] = $pane;
    $display->panels['about_us'][0] = 'new-d1ef3f82-af9d-4dc8-8562-6fdbb12ef0df';
    $pane = new stdClass();
    $pane->pid = 'new-40039acd-f6e0-414a-9484-565a34c11c87';
    $pane->panel = 'about_us';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-about-us-ic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-about-us-ic',
      'parent_mlid' => 0,
      'parent' => 'menu-about-us-ic:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '40039acd-f6e0-414a-9484-565a34c11c87';
    $display->content['new-40039acd-f6e0-414a-9484-565a34c11c87'] = $pane;
    $display->panels['about_us'][1] = 'new-40039acd-f6e0-414a-9484-565a34c11c87';
    $pane = new stdClass();
    $pane->pid = 'new-f0390e5f-df42-429e-83df-886233d4d5c5';
    $pane->panel = 'about_us';
    $pane->type = 'block';
    $pane->subtype = 'bean-this-is-some-text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'f0390e5f-df42-429e-83df-886233d4d5c5';
    $display->content['new-f0390e5f-df42-429e-83df-886233d4d5c5'] = $pane;
    $display->panels['about_us'][2] = 'new-f0390e5f-df42-429e-83df-886233d4d5c5';
    $pane = new stdClass();
    $pane->pid = 'new-3a75f6c9-edde-40f4-bb25-07f637d2be0d';
    $pane->panel = 'about_us';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3a75f6c9-edde-40f4-bb25-07f637d2be0d';
    $display->content['new-3a75f6c9-edde-40f4-bb25-07f637d2be0d'] = $pane;
    $display->panels['about_us'][3] = 'new-3a75f6c9-edde-40f4-bb25-07f637d2be0d';
    $pane = new stdClass();
    $pane->pid = 'new-e73bfd7c-7901-4ef9-a7ef-2c0af969a11c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-banner-block_1';
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
    $pane->uuid = 'e73bfd7c-7901-4ef9-a7ef-2c0af969a11c';
    $display->content['new-e73bfd7c-7901-4ef9-a7ef-2c0af969a11c'] = $pane;
    $display->panels['center'][0] = 'new-e73bfd7c-7901-4ef9-a7ef-2c0af969a11c';
    $pane = new stdClass();
    $pane->pid = 'new-96c60f08-350e-48a2-88d6-655d6e8c807d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ismaili-centre-menu';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner-slideshow',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '96c60f08-350e-48a2-88d6-655d6e8c807d';
    $display->content['new-96c60f08-350e-48a2-88d6-655d6e8c807d'] = $pane;
    $display->panels['header'][0] = 'new-96c60f08-350e-48a2-88d6-655d6e8c807d';
    $pane = new stdClass();
    $pane->pid = 'new-4549c61e-9308-4922-9710-4e7cb799024e';
    $pane->panel = 'header_';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4549c61e-9308-4922-9710-4e7cb799024e';
    $display->content['new-4549c61e-9308-4922-9710-4e7cb799024e'] = $pane;
    $display->panels['header_'][0] = 'new-4549c61e-9308-4922-9710-4e7cb799024e';
    $pane = new stdClass();
    $pane->pid = 'new-3fd94268-30da-4cbb-9182-9e6dc189cd18';
    $pane->panel = 'header_';
    $pane->type = 'block';
    $pane->subtype = 'block-61';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3fd94268-30da-4cbb-9182-9e6dc189cd18';
    $display->content['new-3fd94268-30da-4cbb-9182-9e6dc189cd18'] = $pane;
    $display->panels['header_'][1] = 'new-3fd94268-30da-4cbb-9182-9e6dc189cd18';
    $pane = new stdClass();
    $pane->pid = 'new-8d16c389-71a4-4bf7-880c-26a10bc36578';
    $pane->panel = 'highlight_right';
    $pane->type = 'block';
    $pane->subtype = 'views-nodequeue_81-block_2';
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
    $pane->uuid = '8d16c389-71a4-4bf7-880c-26a10bc36578';
    $display->content['new-8d16c389-71a4-4bf7-880c-26a10bc36578'] = $pane;
    $display->panels['highlight_right'][0] = 'new-8d16c389-71a4-4bf7-880c-26a10bc36578';
    $pane = new stdClass();
    $pane->pid = 'new-51a6b098-7dc2-4bce-9ecb-705cb7588fa7';
    $pane->panel = 'highlight_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-highlight-right-box';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '51a6b098-7dc2-4bce-9ecb-705cb7588fa7';
    $display->content['new-51a6b098-7dc2-4bce-9ecb-705cb7588fa7'] = $pane;
    $display->panels['highlight_right'][1] = 'new-51a6b098-7dc2-4bce-9ecb-705cb7588fa7';
    $pane = new stdClass();
    $pane->pid = 'new-178491f4-ed61-4898-9dd5-791523a2f0f3';
    $pane->panel = 'history';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_ismaili-block_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'History',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '178491f4-ed61-4898-9dd5-791523a2f0f3';
    $display->content['new-178491f4-ed61-4898-9dd5-791523a2f0f3'] = $pane;
    $display->panels['history'][0] = 'new-178491f4-ed61-4898-9dd5-791523a2f0f3';
    $pane = new stdClass();
    $pane->pid = 'new-0eee3af5-3e40-4aba-b6e0-3dfce4178a63';
    $pane->panel = 'history';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_ismaili-block_4';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0eee3af5-3e40-4aba-b6e0-3dfce4178a63';
    $display->content['new-0eee3af5-3e40-4aba-b6e0-3dfce4178a63'] = $pane;
    $display->panels['history'][1] = 'new-0eee3af5-3e40-4aba-b6e0-3dfce4178a63';
    $pane = new stdClass();
    $pane->pid = 'new-55e683b1-5a12-47da-813b-73019d115d80';
    $pane->panel = 'history';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_ismaili-block_5';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '55e683b1-5a12-47da-813b-73019d115d80';
    $display->content['new-55e683b1-5a12-47da-813b-73019d115d80'] = $pane;
    $display->panels['history'][2] = 'new-55e683b1-5a12-47da-813b-73019d115d80';
    $pane = new stdClass();
    $pane->pid = 'new-90f565dd-6a73-4043-8282-9456b3a34bd3';
    $pane->panel = 'history';
    $pane->type = 'block';
    $pane->subtype = 'block-31';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'see-more',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '90f565dd-6a73-4043-8282-9456b3a34bd3';
    $display->content['new-90f565dd-6a73-4043-8282-9456b3a34bd3'] = $pane;
    $display->panels['history'][3] = 'new-90f565dd-6a73-4043-8282-9456b3a34bd3';
    $pane = new stdClass();
    $pane->pid = 'new-4e5c9205-1f78-4608-8134-835e3fafc766';
    $pane->panel = 'history';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_blocks-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'History',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4e5c9205-1f78-4608-8134-835e3fafc766';
    $display->content['new-4e5c9205-1f78-4608-8134-835e3fafc766'] = $pane;
    $display->panels['history'][4] = 'new-4e5c9205-1f78-4608-8134-835e3fafc766';
    $pane = new stdClass();
    $pane->pid = 'new-15859007-85d3-44a4-8125-537a10e5ddbe';
    $pane->panel = 'history';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_blocks-block_4';
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
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '15859007-85d3-44a4-8125-537a10e5ddbe';
    $display->content['new-15859007-85d3-44a4-8125-537a10e5ddbe'] = $pane;
    $display->panels['history'][5] = 'new-15859007-85d3-44a4-8125-537a10e5ddbe';
    $pane = new stdClass();
    $pane->pid = 'new-313c29e3-40ea-4368-bffb-81cb18cdb8b8';
    $pane->panel = 'history';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_blocks-block_5';
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
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '313c29e3-40ea-4368-bffb-81cb18cdb8b8';
    $display->content['new-313c29e3-40ea-4368-bffb-81cb18cdb8b8'] = $pane;
    $display->panels['history'][6] = 'new-313c29e3-40ea-4368-bffb-81cb18cdb8b8';
    $pane = new stdClass();
    $pane->pid = 'new-dd7842ab-29b9-4179-96b4-651720877c1a';
    $pane->panel = 'motif_strip';
    $pane->type = 'block';
    $pane->subtype = 'views-ismaili_centre_motif_grid-block';
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
      'css_class' => 'motif-strip-section',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd7842ab-29b9-4179-96b4-651720877c1a';
    $display->content['new-dd7842ab-29b9-4179-96b4-651720877c1a'] = $pane;
    $display->panels['motif_strip'][0] = 'new-dd7842ab-29b9-4179-96b4-651720877c1a';
    $pane = new stdClass();
    $pane->pid = 'new-dd0a16fd-9cf5-44af-8c87-1e9c03c32a74';
    $pane->panel = 'recent_news';
    $pane->type = 'block';
    $pane->subtype = 'views-nodequeue_76-block_2';
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
      'css_class' => 'hightlight-box-left-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd0a16fd-9cf5-44af-8c87-1e9c03c32a74';
    $display->content['new-dd0a16fd-9cf5-44af-8c87-1e9c03c32a74'] = $pane;
    $display->panels['recent_news'][0] = 'new-dd0a16fd-9cf5-44af-8c87-1e9c03c32a74';
    $pane = new stdClass();
    $pane->pid = 'new-f77339d7-1007-450d-9c28-0393128b37c1';
    $pane->panel = 'recent_news';
    $pane->type = 'block';
    $pane->subtype = 'bean-highlight-left-box';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hightlight-box-left-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f77339d7-1007-450d-9c28-0393128b37c1';
    $display->content['new-f77339d7-1007-450d-9c28-0393128b37c1'] = $pane;
    $display->panels['recent_news'][1] = 'new-f77339d7-1007-450d-9c28-0393128b37c1';
    $pane = new stdClass();
    $pane->pid = 'new-fd081b77-9bcf-4637-801a-588ca920de33';
    $pane->panel = 'recent_news';
    $pane->type = 'block';
    $pane->subtype = 'views-feature_tiles-block_1';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-views-feature-tiles-block',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fd081b77-9bcf-4637-801a-588ca920de33';
    $display->content['new-fd081b77-9bcf-4637-801a-588ca920de33'] = $pane;
    $display->panels['recent_news'][2] = 'new-fd081b77-9bcf-4637-801a-588ca920de33';
    $pane = new stdClass();
    $pane->pid = 'new-7695ccba-35d5-4cfa-bace-722999e2fdc6';
    $pane->panel = 'recent_news';
    $pane->type = 'block';
    $pane->subtype = 'views-feature_tiles-block_2';
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
      'css_class' => 'pane-views-feature-tiles-block',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7695ccba-35d5-4cfa-bace-722999e2fdc6';
    $display->content['new-7695ccba-35d5-4cfa-bace-722999e2fdc6'] = $pane;
    $display->panels['recent_news'][3] = 'new-7695ccba-35d5-4cfa-bace-722999e2fdc6';
    $pane = new stdClass();
    $pane->pid = 'new-e8b7d05f-f465-44eb-bc8e-c3456d985846';
    $pane->panel = 'site_blocks';
    $pane->type = 'block';
    $pane->subtype = 'views-search-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'upcoming-events pane-views-in-the-media-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8b7d05f-f465-44eb-bc8e-c3456d985846';
    $display->content['new-e8b7d05f-f465-44eb-bc8e-c3456d985846'] = $pane;
    $display->panels['site_blocks'][0] = 'new-e8b7d05f-f465-44eb-bc8e-c3456d985846';
    $pane = new stdClass();
    $pane->pid = 'new-2a9c5126-4c6c-4fec-9486-6fb1e9abb411';
    $pane->panel = 'site_blocks';
    $pane->type = 'block';
    $pane->subtype = 'views-quote_of_the_day-block_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Speeches',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-views-quote-of-the-day-block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2a9c5126-4c6c-4fec-9486-6fb1e9abb411';
    $display->content['new-2a9c5126-4c6c-4fec-9486-6fb1e9abb411'] = $pane;
    $display->panels['site_blocks'][1] = 'new-2a9c5126-4c6c-4fec-9486-6fb1e9abb411';
    $pane = new stdClass();
    $pane->pid = 'new-a1e3caa7-8674-4c45-b50e-c0221993132f';
    $pane->panel = 'site_blocks';
    $pane->type = 'block';
    $pane->subtype = 'views-quote_of_the_day-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Speeches',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-views-quote-of-the-day-block',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a1e3caa7-8674-4c45-b50e-c0221993132f';
    $display->content['new-a1e3caa7-8674-4c45-b50e-c0221993132f'] = $pane;
    $display->panels['site_blocks'][2] = 'new-a1e3caa7-8674-4c45-b50e-c0221993132f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ismaili_centres'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ismaili_home_page';
  $page->task = 'page';
  $page->admin_title = 'Ismaili home page';
  $page->admin_description = 'Panel for Ismaili home page.';
  $page->path = 'home';
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
  $handler->name = 'page_ismaili_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ismaili_home_page';
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 2,
          2 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'highlight_right',
          1 => 'left',
          2 => 'center',
          3 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '30.095103697425056',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 20.012526769022237,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'panels-flexible-region-6-footer',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '29.879842764530082',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'carousel_text_',
        ),
        'parent' => 'main',
        'class' => 'about-us-section',
      ),
      'carousel_text_' => array(
        'type' => 'region',
        'title' => 'About Us',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'banner-slideshow-region',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'about_us',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'about_us' => array(
        'type' => 'region',
        'title' => 'Carousel',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'highlight_right' => array(
        'type' => 'region',
        'title' => 'Highlight Right',
        'width' => 20.012526769022237,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'hightlight-box-right-pane',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'about_ismaili' => NULL,
      'carousel_text' => NULL,
      'carousel_text_' => NULL,
      'subscribe' => NULL,
      'about_us' => NULL,
      'highlight_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6c4b7c86-f514-4559-85c0-8d8f4f557cbd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ffaadcf-9999-4fa4-a809-47780d1da1f0';
    $pane->panel = 'about_us';
    $pane->type = 'block';
    $pane->subtype = 'views-banner-block';
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
    $pane->uuid = '5ffaadcf-9999-4fa4-a809-47780d1da1f0';
    $display->content['new-5ffaadcf-9999-4fa4-a809-47780d1da1f0'] = $pane;
    $display->panels['about_us'][0] = 'new-5ffaadcf-9999-4fa4-a809-47780d1da1f0';
    $pane = new stdClass();
    $pane->pid = 'new-c5948837-8394-4dd0-a61b-0575a6ef799c';
    $pane->panel = 'carousel_text_';
    $pane->type = 'block';
    $pane->subtype = 'bean-home-page-about-box';
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
    $pane->uuid = 'c5948837-8394-4dd0-a61b-0575a6ef799c';
    $display->content['new-c5948837-8394-4dd0-a61b-0575a6ef799c'] = $pane;
    $display->panels['carousel_text_'][0] = 'new-c5948837-8394-4dd0-a61b-0575a6ef799c';
    $pane = new stdClass();
    $pane->pid = 'new-2a8ffa8b-e0b0-4ae1-aa16-01160ab271f8';
    $pane->panel = 'carousel_text_';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-about-us-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2a8ffa8b-e0b0-4ae1-aa16-01160ab271f8';
    $display->content['new-2a8ffa8b-e0b0-4ae1-aa16-01160ab271f8'] = $pane;
    $display->panels['carousel_text_'][1] = 'new-2a8ffa8b-e0b0-4ae1-aa16-01160ab271f8';
    $pane = new stdClass();
    $pane->pid = 'new-007981a9-eae5-4b89-874c-bafb19cddfe0';
    $pane->panel = 'carousel_text_';
    $pane->type = 'block';
    $pane->subtype = 'bean-this-is-some-text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Get Email Updates',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '007981a9-eae5-4b89-874c-bafb19cddfe0';
    $display->content['new-007981a9-eae5-4b89-874c-bafb19cddfe0'] = $pane;
    $display->panels['carousel_text_'][2] = 'new-007981a9-eae5-4b89-874c-bafb19cddfe0';
    $pane = new stdClass();
    $pane->pid = 'new-299c05f0-1062-4007-b9b3-192cbcfeda0e';
    $pane->panel = 'carousel_text_';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '299c05f0-1062-4007-b9b3-192cbcfeda0e';
    $display->content['new-299c05f0-1062-4007-b9b3-192cbcfeda0e'] = $pane;
    $display->panels['carousel_text_'][3] = 'new-299c05f0-1062-4007-b9b3-192cbcfeda0e';
    $pane = new stdClass();
    $pane->pid = 'new-3cc029f0-6736-4e2f-9ff7-baa1e47fff75';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-in_the_media-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-views-in-the-media-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cc029f0-6736-4e2f-9ff7-baa1e47fff75';
    $display->content['new-3cc029f0-6736-4e2f-9ff7-baa1e47fff75'] = $pane;
    $display->panels['center'][0] = 'new-3cc029f0-6736-4e2f-9ff7-baa1e47fff75';
    $pane = new stdClass();
    $pane->pid = 'new-d9ca4f5c-f40e-4261-bada-3fc2ef2b13c5';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-quote_of_the_day-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Speeches',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd9ca4f5c-f40e-4261-bada-3fc2ef2b13c5';
    $display->content['new-d9ca4f5c-f40e-4261-bada-3fc2ef2b13c5'] = $pane;
    $display->panels['center'][1] = 'new-d9ca4f5c-f40e-4261-bada-3fc2ef2b13c5';
    $pane = new stdClass();
    $pane->pid = 'new-c623f162-8ffa-4aea-aacd-942b42692eb0';
    $pane->panel = 'highlight_right';
    $pane->type = 'block';
    $pane->subtype = 'views-nodequeue_81-block';
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
    $pane->uuid = 'c623f162-8ffa-4aea-aacd-942b42692eb0';
    $display->content['new-c623f162-8ffa-4aea-aacd-942b42692eb0'] = $pane;
    $display->panels['highlight_right'][0] = 'new-c623f162-8ffa-4aea-aacd-942b42692eb0';
    $pane = new stdClass();
    $pane->pid = 'new-b3647bb0-3ebe-4e26-a9bb-df7f0e69db26';
    $pane->panel = 'highlight_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-highlight-right-box';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'b3647bb0-3ebe-4e26-a9bb-df7f0e69db26';
    $display->content['new-b3647bb0-3ebe-4e26-a9bb-df7f0e69db26'] = $pane;
    $display->panels['highlight_right'][1] = 'new-b3647bb0-3ebe-4e26-a9bb-df7f0e69db26';
    $pane = new stdClass();
    $pane->pid = 'new-c3e653e2-ac96-43b0-9f7c-0844d493de48';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-nodequeue_76-block';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hightlight-box-left-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3e653e2-ac96-43b0-9f7c-0844d493de48';
    $display->content['new-c3e653e2-ac96-43b0-9f7c-0844d493de48'] = $pane;
    $display->panels['left'][0] = 'new-c3e653e2-ac96-43b0-9f7c-0844d493de48';
    $pane = new stdClass();
    $pane->pid = 'new-458d5215-7a32-4398-8451-3160862bdba6';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'bean-highlight-left-box';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hightlight-box-left-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '458d5215-7a32-4398-8451-3160862bdba6';
    $display->content['new-458d5215-7a32-4398-8451-3160862bdba6'] = $pane;
    $display->panels['left'][1] = 'new-458d5215-7a32-4398-8451-3160862bdba6';
    $pane = new stdClass();
    $pane->pid = 'new-ad779df2-2f60-4b05-9703-89b25038f621';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-feature_tiles-block';
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
    $pane->uuid = 'ad779df2-2f60-4b05-9703-89b25038f621';
    $display->content['new-ad779df2-2f60-4b05-9703-89b25038f621'] = $pane;
    $display->panels['left'][2] = 'new-ad779df2-2f60-4b05-9703-89b25038f621';
    $pane = new stdClass();
    $pane->pid = 'new-97830202-e939-4501-b5a9-9f72d359d0e5';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-in_the_media-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'in-the-media-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '97830202-e939-4501-b5a9-9f72d359d0e5';
    $display->content['new-97830202-e939-4501-b5a9-9f72d359d0e5'] = $pane;
    $display->panels['right'][0] = 'new-97830202-e939-4501-b5a9-9f72d359d0e5';
    $pane = new stdClass();
    $pane->pid = 'new-822eb4f2-4cbf-4e7d-9255-e73348f65e6a';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_ismaili-block';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'From the Archive',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section header',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '822eb4f2-4cbf-4e7d-9255-e73348f65e6a';
    $display->content['new-822eb4f2-4cbf-4e7d-9255-e73348f65e6a'] = $pane;
    $display->panels['right'][1] = 'new-822eb4f2-4cbf-4e7d-9255-e73348f65e6a';
    $pane = new stdClass();
    $pane->pid = 'new-ffa095fc-4bfe-4af3-a6b2-beacf1c24fb6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_ismaili-block_1';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ffa095fc-4bfe-4af3-a6b2-beacf1c24fb6';
    $display->content['new-ffa095fc-4bfe-4af3-a6b2-beacf1c24fb6'] = $pane;
    $display->panels['right'][2] = 'new-ffa095fc-4bfe-4af3-a6b2-beacf1c24fb6';
    $pane = new stdClass();
    $pane->pid = 'new-069f4ce5-919c-4926-8fd3-18059ac06e42';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_ismaili-block_2';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '069f4ce5-919c-4926-8fd3-18059ac06e42';
    $display->content['new-069f4ce5-919c-4926-8fd3-18059ac06e42'] = $pane;
    $display->panels['right'][3] = 'new-069f4ce5-919c-4926-8fd3-18059ac06e42';
    $pane = new stdClass();
    $pane->pid = 'new-c8360bee-7d4b-4d78-bd2c-e456442c3acf';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-26';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'see-more',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c8360bee-7d4b-4d78-bd2c-e456442c3acf';
    $display->content['new-c8360bee-7d4b-4d78-bd2c-e456442c3acf'] = $pane;
    $display->panels['right'][4] = 'new-c8360bee-7d4b-4d78-bd2c-e456442c3acf';
    $pane = new stdClass();
    $pane->pid = 'new-7966a777-d090-46d8-ba1e-9bfed0a99f13';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_blocks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'From the Archive',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7966a777-d090-46d8-ba1e-9bfed0a99f13';
    $display->content['new-7966a777-d090-46d8-ba1e-9bfed0a99f13'] = $pane;
    $display->panels['right'][5] = 'new-7966a777-d090-46d8-ba1e-9bfed0a99f13';
    $pane = new stdClass();
    $pane->pid = 'new-e689aeca-8aad-4545-829b-3b472c63d7c6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_blocks-block_1';
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
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e689aeca-8aad-4545-829b-3b472c63d7c6';
    $display->content['new-e689aeca-8aad-4545-829b-3b472c63d7c6'] = $pane;
    $display->panels['right'][6] = 'new-e689aeca-8aad-4545-829b-3b472c63d7c6';
    $pane = new stdClass();
    $pane->pid = 'new-1a49b688-7fa0-41fb-a223-18913c90aa82';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-archive_blocks-block_2';
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
      'css_class' => 'home-archive-section',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '1a49b688-7fa0-41fb-a223-18913c90aa82';
    $display->content['new-1a49b688-7fa0-41fb-a223-18913c90aa82'] = $pane;
    $display->panels['right'][7] = 'new-1a49b688-7fa0-41fb-a223-18913c90aa82';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ismaili_home_page'] = $page;

  return $pages;

}
