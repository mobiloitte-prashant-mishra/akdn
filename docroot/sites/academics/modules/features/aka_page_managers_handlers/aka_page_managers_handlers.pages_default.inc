<?php
/**
 * @file
 * aka_page_managers_handlers.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function aka_page_managers_handlers_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'internal_page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'section',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Mombasa',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'media_gallery' => 'media_gallery',
              'article' => 'article',
              'basic_hyderabad' => 'basic_hyderabad',
              'basic_maputo' => 'basic_maputo',
              'basic_mombasa' => 'basic_mombasa',
              'page' => 'page',
              'photo_gallery' => 'photo_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '3',
            3 => array(
              2 => '2',
            ),
            2 => array(),
            1 => array(),
          ),
          'context' => 'context_entity:taxonomy_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '36568f7b-d9d8-415e-95a0-d5b51e84f76f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06519df1-e925-48bb-a70d-1a4d3909165b';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'col1',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '06519df1-e925-48bb-a70d-1a4d3909165b';
    $display->content['new-06519df1-e925-48bb-a70d-1a4d3909165b'] = $pane;
    $display->panels['bottom'][0] = 'new-06519df1-e925-48bb-a70d-1a4d3909165b';
    $pane = new stdClass();
    $pane->pid = 'new-f63bb01e-f9cd-4999-8a1b-e35840a1c4a1';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'col2',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'f63bb01e-f9cd-4999-8a1b-e35840a1c4a1';
    $display->content['new-f63bb01e-f9cd-4999-8a1b-e35840a1c4a1'] = $pane;
    $display->panels['bottom'][1] = 'new-f63bb01e-f9cd-4999-8a1b-e35840a1c4a1';
    $pane = new stdClass();
    $pane->pid = 'new-52985874-931c-4985-ac5d-02348dda3f2b';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'col3',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '52985874-931c-4985-ac5d-02348dda3f2b';
    $display->content['new-52985874-931c-4985-ac5d-02348dda3f2b'] = $pane;
    $display->panels['bottom'][2] = 'new-52985874-931c-4985-ac5d-02348dda3f2b';
    $pane = new stdClass();
    $pane->pid = 'new-11b6576c-f4dc-458a-b9fc-8c4d781911a3';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'col4',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '11b6576c-f4dc-458a-b9fc-8c4d781911a3';
    $display->content['new-11b6576c-f4dc-458a-b9fc-8c4d781911a3'] = $pane;
    $display->panels['bottom'][3] = 'new-11b6576c-f4dc-458a-b9fc-8c4d781911a3';
    $pane = new stdClass();
    $pane->pid = 'new-e8827035-86d2-4993-ad2c-e1593f43301b';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'col5',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = 'e8827035-86d2-4993-ad2c-e1593f43301b';
    $display->content['new-e8827035-86d2-4993-ad2c-e1593f43301b'] = $pane;
    $display->panels['bottom'][4] = 'new-e8827035-86d2-4993-ad2c-e1593f43301b';
    $pane = new stdClass();
    $pane->pid = 'new-de8e58cd-38e4-40ee-92ba-0cdd944fb8f8';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'de8e58cd-38e4-40ee-92ba-0cdd944fb8f8';
    $display->content['new-de8e58cd-38e4-40ee-92ba-0cdd944fb8f8'] = $pane;
    $display->panels['left'][0] = 'new-de8e58cd-38e4-40ee-92ba-0cdd944fb8f8';
    $pane = new stdClass();
    $pane->pid = 'new-ed093c78-c46f-43b6-9788-6d09d01e5d63';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'hyderabad/
hyderabad/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'ed093c78-c46f-43b6-9788-6d09d01e5d63';
    $display->content['new-ed093c78-c46f-43b6-9788-6d09d01e5d63'] = $pane;
    $display->panels['left'][1] = 'new-ed093c78-c46f-43b6-9788-6d09d01e5d63';
    $pane = new stdClass();
    $pane->pid = 'new-4e8e6e62-f503-4e23-93bf-2440dd79e28a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mombasa/
mombasa/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '4e8e6e62-f503-4e23-93bf-2440dd79e28a';
    $display->content['new-4e8e6e62-f503-4e23-93bf-2440dd79e28a'] = $pane;
    $display->panels['left'][2] = 'new-4e8e6e62-f503-4e23-93bf-2440dd79e28a';
    $pane = new stdClass();
    $pane->pid = 'new-d4fc592f-3b59-4c47-afa8-1c5abdf15edc';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'maputo/
maputo/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'd4fc592f-3b59-4c47-afa8-1c5abdf15edc';
    $display->content['new-d4fc592f-3b59-4c47-afa8-1c5abdf15edc'] = $pane;
    $display->panels['left'][3] = 'new-d4fc592f-3b59-4c47-afa8-1c5abdf15edc';
    $pane = new stdClass();
    $pane->pid = 'new-2052cf7e-1a71-4ed6-bb49-0eff05b738c9';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-our-academies';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => '',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'our_academies',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '2052cf7e-1a71-4ed6-bb49-0eff05b738c9';
    $display->content['new-2052cf7e-1a71-4ed6-bb49-0eff05b738c9'] = $pane;
    $display->panels['left'][4] = 'new-2052cf7e-1a71-4ed6-bb49-0eff05b738c9';
    $pane = new stdClass();
    $pane->pid = 'new-d4ff92b4-53e5-41ee-af7b-0d4a2c8ec6ab';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
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
      'css_id' => 'find_academy',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = 'd4ff92b4-53e5-41ee-af7b-0d4a2c8ec6ab';
    $display->content['new-d4ff92b4-53e5-41ee-af7b-0d4a2c8ec6ab'] = $pane;
    $display->panels['left'][5] = 'new-d4ff92b4-53e5-41ee-af7b-0d4a2c8ec6ab';
    $pane = new stdClass();
    $pane->pid = 'new-d6f33007-6a38-4fc7-b31a-be69e7f8d54a';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'zoo/bienvenue
zoo/zoo-pratique',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img src="/sites/bamako.localhost/files/pix.gif">',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = 'd6f33007-6a38-4fc7-b31a-be69e7f8d54a';
    $display->content['new-d6f33007-6a38-4fc7-b31a-be69e7f8d54a'] = $pane;
    $display->panels['left'][6] = 'new-d6f33007-6a38-4fc7-b31a-be69e7f8d54a';
    $pane = new stdClass();
    $pane->pid = 'new-3d7250d0-83ac-4a08-9ad6-0c23ba489580';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_panoramic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '3d7250d0-83ac-4a08-9ad6-0c23ba489580';
    $display->content['new-3d7250d0-83ac-4a08-9ad6-0c23ba489580'] = $pane;
    $display->panels['middle'][0] = 'new-3d7250d0-83ac-4a08-9ad6-0c23ba489580';
    $pane = new stdClass();
    $pane->pid = 'new-32eaf910-e9a8-420d-b48c-b782bbdafecd';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'section_title',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '32eaf910-e9a8-420d-b48c-b782bbdafecd';
    $display->content['new-32eaf910-e9a8-420d-b48c-b782bbdafecd'] = $pane;
    $display->panels['middle'][1] = 'new-32eaf910-e9a8-420d-b48c-b782bbdafecd';
    $pane = new stdClass();
    $pane->pid = 'new-e40dea3f-dc8b-4691-8965-e73fc197db29';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->locks = '';
    $pane->uuid = 'e40dea3f-dc8b-4691-8965-e73fc197db29';
    $display->content['new-e40dea3f-dc8b-4691-8965-e73fc197db29'] = $pane;
    $display->panels['middle'][2] = 'new-e40dea3f-dc8b-4691-8965-e73fc197db29';
    $pane = new stdClass();
    $pane->pid = 'new-fc9b9c25-4b1a-4a32-becc-850ea3ee423f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-articles-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'news-publications/news',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'fc9b9c25-4b1a-4a32-becc-850ea3ee423f';
    $display->content['new-fc9b9c25-4b1a-4a32-becc-850ea3ee423f'] = $pane;
    $display->panels['middle'][3] = 'new-fc9b9c25-4b1a-4a32-becc-850ea3ee423f';
    $pane = new stdClass();
    $pane->pid = 'new-7569b34e-1868-4522-8724-40bb76bdd1e9';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_view_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'viewreference_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '7569b34e-1868-4522-8724-40bb76bdd1e9';
    $display->content['new-7569b34e-1868-4522-8724-40bb76bdd1e9'] = $pane;
    $display->panels['middle'][4] = 'new-7569b34e-1868-4522-8724-40bb76bdd1e9';
    $pane = new stdClass();
    $pane->pid = 'new-d26a300f-41b8-4b61-a3c8-cc7fa14ac9ab';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
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
      'css_id' => 'top',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = 'd26a300f-41b8-4b61-a3c8-cc7fa14ac9ab';
    $display->content['new-d26a300f-41b8-4b61-a3c8-cc7fa14ac9ab'] = $pane;
    $display->panels['middle'][5] = 'new-d26a300f-41b8-4b61-a3c8-cc7fa14ac9ab';
    $pane = new stdClass();
    $pane->pid = 'new-51fa2c40-e1fa-49c7-8d5f-843eb5171586';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
      'css_id' => 'search',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '51fa2c40-e1fa-49c7-8d5f-843eb5171586';
    $display->content['new-51fa2c40-e1fa-49c7-8d5f-843eb5171586'] = $pane;
    $display->panels['right'][0] = 'new-51fa2c40-e1fa-49c7-8d5f-843eb5171586';
    $pane = new stdClass();
    $pane->pid = 'new-19a843c7-615f-427c-a861-97e926954d54';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-9';
    $pane->shown = TRUE;
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '19a843c7-615f-427c-a861-97e926954d54';
    $display->content['new-19a843c7-615f-427c-a861-97e926954d54'] = $pane;
    $display->panels['right'][1] = 'new-19a843c7-615f-427c-a861-97e926954d54';
    $pane = new stdClass();
    $pane->pid = 'new-bd6070e9-fba9-4751-aca3-74f43144cdfd';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-general_news_right-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'mombasa/
mombasa/*
hyderabad/
hyderabad/*
maputo/
maputo/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'What\'s New',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'whats_new',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'bd6070e9-fba9-4751-aca3-74f43144cdfd';
    $display->content['new-bd6070e9-fba9-4751-aca3-74f43144cdfd'] = $pane;
    $display->panels['right'][2] = 'new-bd6070e9-fba9-4751-aca3-74f43144cdfd';
    $pane = new stdClass();
    $pane->pid = 'new-77a405d3-1480-4403-a31c-a605b89fe8cf';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_hyderabad_titles-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'hyderabad/
hyderabad/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'What\'s New',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'whats_new',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '77a405d3-1480-4403-a31c-a605b89fe8cf';
    $display->content['new-77a405d3-1480-4403-a31c-a605b89fe8cf'] = $pane;
    $display->panels['right'][3] = 'new-77a405d3-1480-4403-a31c-a605b89fe8cf';
    $pane = new stdClass();
    $pane->pid = 'new-a57fdb4a-5483-4c8d-880b-95cfd107f1dc';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_maputo_titles-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'maputo/
maputo/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'What\'s new',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'whats_new',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = 'a57fdb4a-5483-4c8d-880b-95cfd107f1dc';
    $display->content['new-a57fdb4a-5483-4c8d-880b-95cfd107f1dc'] = $pane;
    $display->panels['right'][4] = 'new-a57fdb4a-5483-4c8d-880b-95cfd107f1dc';
    $pane = new stdClass();
    $pane->pid = 'new-ab273139-989b-43d6-ba58-da74e7edf65b';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-articles_mombasa_titles-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mombasa/
mombasa/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'What\'s new',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'whats_new',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = 'ab273139-989b-43d6-ba58-da74e7edf65b';
    $display->content['new-ab273139-989b-43d6-ba58-da74e7edf65b'] = $pane;
    $display->panels['right'][5] = 'new-ab273139-989b-43d6-ba58-da74e7edf65b';
    $pane = new stdClass();
    $pane->pid = 'new-f8a843b7-e8f2-4855-861e-0f9a85bae0cc';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-18';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mombasa/
mombasa/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'ib_logo',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = 'f8a843b7-e8f2-4855-861e-0f9a85bae0cc';
    $display->content['new-f8a843b7-e8f2-4855-861e-0f9a85bae0cc'] = $pane;
    $display->panels['right'][6] = 'new-f8a843b7-e8f2-4855-861e-0f9a85bae0cc';
    $pane = new stdClass();
    $pane->pid = 'new-f588bed4-1677-46bb-ab30-5fd3c2e00cbd';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
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
      'css_id' => 'logo',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'f588bed4-1677-46bb-ab30-5fd3c2e00cbd';
    $display->content['new-f588bed4-1677-46bb-ab30-5fd3c2e00cbd'] = $pane;
    $display->panels['top'][0] = 'new-f588bed4-1677-46bb-ab30-5fd3c2e00cbd';
    $pane = new stdClass();
    $pane->pid = 'new-3c7adf97-f87d-419b-a11b-186e8e19ad85';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-17';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'hyderabad/
hyderabad/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '3c7adf97-f87d-419b-a11b-186e8e19ad85';
    $display->content['new-3c7adf97-f87d-419b-a11b-186e8e19ad85'] = $pane;
    $display->panels['top'][1] = 'new-3c7adf97-f87d-419b-a11b-186e8e19ad85';
    $pane = new stdClass();
    $pane->pid = 'new-3e2f88eb-db84-4790-b757-a71174f2ebc2';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-15';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'maputo/
maputo/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '3e2f88eb-db84-4790-b757-a71174f2ebc2';
    $display->content['new-3e2f88eb-db84-4790-b757-a71174f2ebc2'] = $pane;
    $display->panels['top'][2] = 'new-3e2f88eb-db84-4790-b757-a71174f2ebc2';
    $pane = new stdClass();
    $pane->pid = 'new-015b6f0b-3b3c-4f0e-b7b1-c50b6aaafd5f';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '015b6f0b-3b3c-4f0e-b7b1-c50b6aaafd5f';
    $display->content['new-015b6f0b-3b3c-4f0e-b7b1-c50b6aaafd5f'] = $pane;
    $display->panels['top'][3] = 'new-015b6f0b-3b3c-4f0e-b7b1-c50b6aaafd5f';
    $pane = new stdClass();
    $pane->pid = 'new-cbfee6f5-0666-4858-8eec-5397ae1b788d';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'mombasa
mombasa/*
maputo
maputo/*
hyderabad
hyderabad/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'top_nav',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = 'cbfee6f5-0666-4858-8eec-5397ae1b788d';
    $display->content['new-cbfee6f5-0666-4858-8eec-5397ae1b788d'] = $pane;
    $display->panels['top'][4] = 'new-cbfee6f5-0666-4858-8eec-5397ae1b788d';
    $pane = new stdClass();
    $pane->pid = 'new-5ea7b1f5-a941-4126-99ce-8d02b45cecda';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mombasa/*
hyderabad/*
maputo/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'top_nav_reduced',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = '5ea7b1f5-a941-4126-99ce-8d02b45cecda';
    $display->content['new-5ea7b1f5-a941-4126-99ce-8d02b45cecda'] = $pane;
    $display->panels['top'][5] = 'new-5ea7b1f5-a941-4126-99ce-8d02b45cecda';
    $pane = new stdClass();
    $pane->pid = 'new-ad1fcbb4-bf26-447a-b3ee-ba990b10c4c5';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-mombasa-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mombasa/
mombasa/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'top_nav_academy',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = 'ad1fcbb4-bf26-447a-b3ee-ba990b10c4c5';
    $display->content['new-ad1fcbb4-bf26-447a-b3ee-ba990b10c4c5'] = $pane;
    $display->panels['top'][6] = 'new-ad1fcbb4-bf26-447a-b3ee-ba990b10c4c5';
    $pane = new stdClass();
    $pane->pid = 'new-544db915-0f9f-4abc-a9f9-caa5dc75faf6';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-hyderabad-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'hyderabad/
hyderabad/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'top_nav_academy',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = '';
    $pane->uuid = '544db915-0f9f-4abc-a9f9-caa5dc75faf6';
    $display->content['new-544db915-0f9f-4abc-a9f9-caa5dc75faf6'] = $pane;
    $display->panels['top'][7] = 'new-544db915-0f9f-4abc-a9f9-caa5dc75faf6';
    $pane = new stdClass();
    $pane->pid = 'new-f2dae2a0-662d-4062-a6a4-25c219450c5f';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-maputo-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'maputo/
maputo/*',
          ),
          'context' => 'empty',
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
    $pane->css = array(
      'css_id' => 'top_nav_academy',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = '';
    $pane->uuid = 'f2dae2a0-662d-4062-a6a4-25c219450c5f';
    $display->content['new-f2dae2a0-662d-4062-a6a4-25c219450c5f'] = $pane;
    $display->panels['top'][8] = 'new-f2dae2a0-662d-4062-a6a4-25c219450c5f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'section',
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
          0 => 'main-row',
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
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
      'sidebar_first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b7789908-6a3b-4e56-b30b-8b33994383ad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-112227e9-5620-4e0e-aea5-d235cafeb741';
    $pane->panel = 'center';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '112227e9-5620-4e0e-aea5-d235cafeb741';
    $display->content['new-112227e9-5620-4e0e-aea5-d235cafeb741'] = $pane;
    $display->panels['center'][0] = 'new-112227e9-5620-4e0e-aea5-d235cafeb741';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context'] = $handler;

  return $export;
}
