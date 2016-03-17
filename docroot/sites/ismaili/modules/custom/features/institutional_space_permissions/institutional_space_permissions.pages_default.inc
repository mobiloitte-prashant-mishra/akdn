<?php
/**
 * @file
 * institutional_space_permissions.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function institutional_space_permissions_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Institutional Space',
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
              'institutional_space' => 'institutional_space',
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
        'class' => 'institutional-studies-pages',
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
          0 => 3,
          1 => 2,
          2 => 1,
          3 => 'main-row',
          4 => 4,
        ),
        'parent' => 'canvas',
        'class' => '',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_column',
        ),
        'parent' => 'main',
        'class' => 'main-body-row',
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
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu_bar',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'menu_bar' => array(
        'type' => 'region',
        'title' => 'Menu Bar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'institutional_space_banner',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'institutional_space_banner' => array(
        'type' => 'region',
        'title' => 'Institutional Space Banner',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_menu',
        ),
        'parent' => 'main',
        'class' => 'footer',
      ),
      'footer_menu' => array(
        'type' => 'region',
        'title' => 'Footer Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
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
      'menu_bar' => NULL,
      'institutional_space_banner' => NULL,
      'footer_menu' => NULL,
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
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Title',
                ),
              ),
            ),
            'field_hide_items_value' => array(
              0 => 'Title',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bb05028b-a346-4df9-b05f-4a584d9a1d49';
    $display->content['new-bb05028b-a346-4df9-b05f-4a584d9a1d49'] = $pane;
    $display->panels['center'][0] = 'new-bb05028b-a346-4df9-b05f-4a584d9a1d49';
    $pane = new stdClass();
    $pane->pid = 'new-fd459316-3c24-47b2-b985-99ebb753df34';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-11c52afd04aa619436f1c71337347579';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Image Carousel',
                ),
              ),
            ),
            'field_hide_items_value' => array(
              0 => 'Image Carousel',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fd459316-3c24-47b2-b985-99ebb753df34';
    $display->content['new-fd459316-3c24-47b2-b985-99ebb753df34'] = $pane;
    $display->panels['center'][1] = 'new-fd459316-3c24-47b2-b985-99ebb753df34';
    $pane = new stdClass();
    $pane->pid = 'new-8f76f31a-3755-48e8-9f3e-ffb7c3160d63';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Intro Text',
                ),
              ),
            ),
            'field_hide_items_value' => 'Intro Text',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8f76f31a-3755-48e8-9f3e-ffb7c3160d63';
    $display->content['new-8f76f31a-3755-48e8-9f3e-ffb7c3160d63'] = $pane;
    $display->panels['center'][2] = 'new-8f76f31a-3755-48e8-9f3e-ffb7c3160d63';
    $pane = new stdClass();
    $pane->pid = 'new-2bc5f59b-7352-463d-83c2-27dd559f535f';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_pages-block_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Upcoming Events',
                ),
              ),
            ),
            'field_hide_items_value' => 'Upcoming Events',
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
      'css_class' => 'upcoming-news-block',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2bc5f59b-7352-463d-83c2-27dd559f535f';
    $display->content['new-2bc5f59b-7352-463d-83c2-27dd559f535f'] = $pane;
    $display->panels['center'][3] = 'new-2bc5f59b-7352-463d-83c2-27dd559f535f';
    $pane = new stdClass();
    $pane->pid = 'new-65b0a7bb-62d6-438f-9583-cd94bcc5725c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_6';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Upcoming Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '65b0a7bb-62d6-438f-9583-cd94bcc5725c';
    $display->content['new-65b0a7bb-62d6-438f-9583-cd94bcc5725c'] = $pane;
    $display->panels['center'][4] = 'new-65b0a7bb-62d6-438f-9583-cd94bcc5725c';
    $pane = new stdClass();
    $pane->pid = 'new-4047d0df-384b-42aa-90c0-d11c40407749';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_15';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Recent News',
                ),
              ),
            ),
            'field_hide_items_value' => array(
              0 => 'Recent News',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
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
    $pane->uuid = '4047d0df-384b-42aa-90c0-d11c40407749';
    $display->content['new-4047d0df-384b-42aa-90c0-d11c40407749'] = $pane;
    $display->panels['center'][5] = 'new-4047d0df-384b-42aa-90c0-d11c40407749';
    $pane = new stdClass();
    $pane->pid = 'new-d7d6538b-a2d0-4ea9-b1ec-21b7bae76080';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-search-block_6';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Solr Recent News',
                ),
              ),
            ),
            'field_hide_items_value' => array(
              0 => 'Solr Recent News',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd7d6538b-a2d0-4ea9-b1ec-21b7bae76080';
    $display->content['new-d7d6538b-a2d0-4ea9-b1ec-21b7bae76080'] = $pane;
    $display->panels['center'][6] = 'new-d7d6538b-a2d0-4ea9-b1ec-21b7bae76080';
    $pane = new stdClass();
    $pane->pid = 'new-eeaca684-fc44-4009-976f-567a6e987300';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_1';
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
      'css_class' => 'more-link',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'eeaca684-fc44-4009-976f-567a6e987300';
    $display->content['new-eeaca684-fc44-4009-976f-567a6e987300'] = $pane;
    $display->panels['center'][7] = 'new-eeaca684-fc44-4009-976f-567a6e987300';
    $pane = new stdClass();
    $pane->pid = 'new-a00a0e8b-7263-44b7-93f3-0cfb43bc0b44';
    $pane->panel = 'footer_menu';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
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
    $pane->uuid = 'a00a0e8b-7263-44b7-93f3-0cfb43bc0b44';
    $display->content['new-a00a0e8b-7263-44b7-93f3-0cfb43bc0b44'] = $pane;
    $display->panels['footer_menu'][0] = 'new-a00a0e8b-7263-44b7-93f3-0cfb43bc0b44';
    $pane = new stdClass();
    $pane->pid = 'new-f26d3c43-acff-4b54-971e-b915c92a97e4';
    $pane->panel = 'footer_menu';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_8';
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
    $pane->uuid = 'f26d3c43-acff-4b54-971e-b915c92a97e4';
    $display->content['new-f26d3c43-acff-4b54-971e-b915c92a97e4'] = $pane;
    $display->panels['footer_menu'][1] = 'new-f26d3c43-acff-4b54-971e-b915c92a97e4';
    $pane = new stdClass();
    $pane->pid = 'new-873f670f-c87f-4698-b0a0-1e7955457c43';
    $pane->panel = 'footer_menu';
    $pane->type = 'block';
    $pane->subtype = 'block-16';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_use_default_copyright',
          'settings' => array(
            'field_use_default_copyright' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_use_default_copyright_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '873f670f-c87f-4698-b0a0-1e7955457c43';
    $display->content['new-873f670f-c87f-4698-b0a0-1e7955457c43'] = $pane;
    $display->panels['footer_menu'][2] = 'new-873f670f-c87f-4698-b0a0-1e7955457c43';
    $pane = new stdClass();
    $pane->pid = 'new-9b9f0cab-ed1e-4622-a793-14c15f658b90';
    $pane->panel = 'footer_menu';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9b9f0cab-ed1e-4622-a793-14c15f658b90';
    $display->content['new-9b9f0cab-ed1e-4622-a793-14c15f658b90'] = $pane;
    $display->panels['footer_menu'][3] = 'new-9b9f0cab-ed1e-4622-a793-14c15f658b90';
    $pane = new stdClass();
    $pane->pid = 'new-3175c6a4-f1c1-40e8-b7cc-1867af322737';
    $pane->panel = 'footer_menu';
    $pane->type = 'block';
    $pane->subtype = 'block-36';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subscribe',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3175c6a4-f1c1-40e8-b7cc-1867af322737';
    $display->content['new-3175c6a4-f1c1-40e8-b7cc-1867af322737'] = $pane;
    $display->panels['footer_menu'][4] = 'new-3175c6a4-f1c1-40e8-b7cc-1867af322737';
    $pane = new stdClass();
    $pane->pid = 'new-51f21eba-774f-4bb3-bd07-b6f2d4dd1179';
    $pane->panel = 'footer_menu';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-0';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '51f21eba-774f-4bb3-bd07-b6f2d4dd1179';
    $display->content['new-51f21eba-774f-4bb3-bd07-b6f2d4dd1179'] = $pane;
    $display->panels['footer_menu'][5] = 'new-51f21eba-774f-4bb3-bd07-b6f2d4dd1179';
    $pane = new stdClass();
    $pane->pid = 'new-bca402f8-2214-429b-8d5e-27e519bd9fb5';
    $pane->panel = 'footer_menu';
    $pane->type = 'block';
    $pane->subtype = 'widgets-s_ismaili_footer_social_icons';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'bca402f8-2214-429b-8d5e-27e519bd9fb5';
    $display->content['new-bca402f8-2214-429b-8d5e-27e519bd9fb5'] = $pane;
    $display->panels['footer_menu'][6] = 'new-bca402f8-2214-429b-8d5e-27e519bd9fb5';
    $pane = new stdClass();
    $pane->pid = 'new-e865bf5e-ce49-4e59-9367-9c1f924df5e6';
    $pane->panel = 'footer_menu';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_copyright_notice';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_use_default_copyright',
          'settings' => array(
            'field_use_default_copyright' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_use_default_copyright_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'custom-copyright-block',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e865bf5e-ce49-4e59-9367-9c1f924df5e6';
    $display->content['new-e865bf5e-ce49-4e59-9367-9c1f924df5e6'] = $pane;
    $display->panels['footer_menu'][7] = 'new-e865bf5e-ce49-4e59-9367-9c1f924df5e6';
    $pane = new stdClass();
    $pane->pid = 'new-47b94483-5ece-4e88-9a21-3c8270cb7217';
    $pane->panel = 'institutional_space_banner';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_banner_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47b94483-5ece-4e88-9a21-3c8270cb7217';
    $display->content['new-47b94483-5ece-4e88-9a21-3c8270cb7217'] = $pane;
    $display->panels['institutional_space_banner'][0] = 'new-47b94483-5ece-4e88-9a21-3c8270cb7217';
    $pane = new stdClass();
    $pane->pid = 'new-a6577092-e7f5-4604-ab6f-8dd8aabf1442';
    $pane->panel = 'menu_bar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_select_menu_items';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ismail-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6577092-e7f5-4604-ab6f-8dd8aabf1442';
    $display->content['new-a6577092-e7f5-4604-ab6f-8dd8aabf1442'] = $pane;
    $display->panels['menu_bar'][0] = 'new-a6577092-e7f5-4604-ab6f-8dd8aabf1442';
    $pane = new stdClass();
    $pane->pid = 'new-885193b6-dca9-4ad5-bd73-af745a399e49';
    $pane->panel = 'menu_bar';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_20';
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
      'css_class' => 'ismail-menu',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '885193b6-dca9-4ad5-bd73-af745a399e49';
    $display->content['new-885193b6-dca9-4ad5-bd73-af745a399e49'] = $pane;
    $display->panels['menu_bar'][1] = 'new-885193b6-dca9-4ad5-bd73-af745a399e49';
    $pane = new stdClass();
    $pane->pid = 'new-a6d5159d-f9ce-48f9-80ef-9fd26b958f35';
    $pane->panel = 'right_column';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_logo_image';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Institutional Space Logo',
                ),
              ),
            ),
            'field_hide_items_value' => 'Institutional Space Logo',
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
        'image_style' => '',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6d5159d-f9ce-48f9-80ef-9fd26b958f35';
    $display->content['new-a6d5159d-f9ce-48f9-80ef-9fd26b958f35'] = $pane;
    $display->panels['right_column'][0] = 'new-a6d5159d-f9ce-48f9-80ef-9fd26b958f35';
    $pane = new stdClass();
    $pane->pid = 'new-d89d378d-38e0-4e62-9079-b50782a1fb58';
    $pane->panel = 'right_column';
    $pane->type = 'block';
    $pane->subtype = 'widgets-s_socialmedia_share-default';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Sharing Options',
                ),
              ),
            ),
            'field_hide_items_value' => array(
              0 => 'Sharing Options',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd89d378d-38e0-4e62-9079-b50782a1fb58';
    $display->content['new-d89d378d-38e0-4e62-9079-b50782a1fb58'] = $pane;
    $display->panels['right_column'][1] = 'new-d89d378d-38e0-4e62-9079-b50782a1fb58';
    $pane = new stdClass();
    $pane->pid = 'new-b32c25e6-328f-49ef-9bf9-c95a4df76206';
    $pane->panel = 'right_column';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:institutional_space:field_hide_items',
          'settings' => array(
            'field_hide_items' => array(
              'und' => array(
                0 => array(
                  'value' => 'Photo Gallery',
                ),
              ),
            ),
            'field_hide_items_value' => 'Photo Gallery',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Gallery',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'related-recipe-section',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b32c25e6-328f-49ef-9bf9-c95a4df76206';
    $display->content['new-b32c25e6-328f-49ef-9bf9-c95a4df76206'] = $pane;
    $display->panels['right_column'][2] = 'new-b32c25e6-328f-49ef-9bf9-c95a4df76206';
    $pane = new stdClass();
    $pane->pid = 'new-18cf30f1-0104-4231-9343-4127cfedd8e4';
    $pane->panel = 'right_column';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_18';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Videos',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '18cf30f1-0104-4231-9343-4127cfedd8e4';
    $display->content['new-18cf30f1-0104-4231-9343-4127cfedd8e4'] = $pane;
    $display->panels['right_column'][3] = 'new-18cf30f1-0104-4231-9343-4127cfedd8e4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Calendar Event',
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
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:webform:field_microsite_institutional_sp',
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
        'class' => 'institute-studies-subscribe',
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
          0 => 'left_sidebar',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '29.98275437299828',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'is-sidebar',
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
      'left_sidebar' => array(
        'type' => 'region',
        'title' => 'Left Sidebar',
        'width' => '70.01724562700173',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'breadcrumb' => NULL,
      'left_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '83307e3e-b6db-4013-9a37-cd16ac35d0d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5bdbedea-a93e-4cd7-9575-dc0edeac284b';
    $pane->panel = 'breadcrumb';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_3';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bdbedea-a93e-4cd7-9575-dc0edeac284b';
    $display->content['new-5bdbedea-a93e-4cd7-9575-dc0edeac284b'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-5bdbedea-a93e-4cd7-9575-dc0edeac284b';
    $pane = new stdClass();
    $pane->pid = 'new-bb7955ad-6198-4401-9d74-8b0b9425e0ed';
    $pane->panel = 'breadcrumb';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block_4';
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
    $pane->uuid = 'bb7955ad-6198-4401-9d74-8b0b9425e0ed';
    $display->content['new-bb7955ad-6198-4401-9d74-8b0b9425e0ed'] = $pane;
    $display->panels['breadcrumb'][1] = 'new-bb7955ad-6198-4401-9d74-8b0b9425e0ed';
    $pane = new stdClass();
    $pane->pid = 'new-6a6df8c1-4fe6-44f8-8c8e-4c3a1c8dddf9';
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
    $pane->uuid = '6a6df8c1-4fe6-44f8-8c8e-4c3a1c8dddf9';
    $display->content['new-6a6df8c1-4fe6-44f8-8c8e-4c3a1c8dddf9'] = $pane;
    $display->panels['center'][0] = 'new-6a6df8c1-4fe6-44f8-8c8e-4c3a1c8dddf9';
    $pane = new stdClass();
    $pane->pid = 'new-0c148521-bbf5-48b6-86b4-3516fc949bb2';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-institutional_views-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Photo Galleries',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0c148521-bbf5-48b6-86b4-3516fc949bb2';
    $display->content['new-0c148521-bbf5-48b6-86b4-3516fc949bb2'] = $pane;
    $display->panels['center'][1] = 'new-0c148521-bbf5-48b6-86b4-3516fc949bb2';
    $pane = new stdClass();
    $pane->pid = 'new-3ac758af-f392-49df-963b-becbb03b626c';
    $pane->panel = 'left_sidebar';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
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
    $pane->uuid = '3ac758af-f392-49df-963b-becbb03b626c';
    $display->content['new-3ac758af-f392-49df-963b-becbb03b626c'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-3ac758af-f392-49df-963b-becbb03b626c';
    $pane = new stdClass();
    $pane->pid = 'new-4fb94a3f-9914-4636-89a5-5a31f09ae02d';
    $pane->panel = 'left_sidebar';
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
    $pane->uuid = '4fb94a3f-9914-4636-89a5-5a31f09ae02d';
    $display->content['new-4fb94a3f-9914-4636-89a5-5a31f09ae02d'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-4fb94a3f-9914-4636-89a5-5a31f09ae02d';
    $pane = new stdClass();
    $pane->pid = 'new-134bf825-53be-48ea-be35-34b7b5eb1126';
    $pane->panel = 'left_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
    $pane->uuid = '134bf825-53be-48ea-be35-34b7b5eb1126';
    $display->content['new-134bf825-53be-48ea-be35-34b7b5eb1126'] = $pane;
    $display->panels['left_sidebar'][2] = 'new-134bf825-53be-48ea-be35-34b7b5eb1126';
    $pane = new stdClass();
    $pane->pid = 'new-1d9d4951-b9c8-44a3-bd26-52ae1ef71674';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_slideshow-block_6';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'calendar_event' => 'calendar_event',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1d9d4951-b9c8-44a3-bd26-52ae1ef71674';
    $display->content['new-1d9d4951-b9c8-44a3-bd26-52ae1ef71674'] = $pane;
    $display->panels['left_sidebar'][3] = 'new-1d9d4951-b9c8-44a3-bd26-52ae1ef71674';
    $pane = new stdClass();
    $pane->pid = 'new-e821c11b-92d9-4c5f-888b-5b16ded5438a';
    $pane->panel = 'left_sidebar';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e821c11b-92d9-4c5f-888b-5b16ded5438a';
    $display->content['new-e821c11b-92d9-4c5f-888b-5b16ded5438a'] = $pane;
    $display->panels['left_sidebar'][4] = 'new-e821c11b-92d9-4c5f-888b-5b16ded5438a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5bdbedea-a93e-4cd7-9575-dc0edeac284b';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}
