<?php
/**
 * @file
 * aka_hydrabad_home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aka_hydrabad_home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hyderabad_home';
  $page->task = 'page';
  $page->admin_title = 'hyderabad_home';
  $page->admin_description = '';
  $page->path = 'hyderabad';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hyderabad_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hyderabad_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
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
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '26.00009335037374',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'home_center',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'Top',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'home_left',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '23.99990664962626',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'home_right',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'Bottom',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'footer',
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
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '22f08ed8-6a57-4aa4-af7b-dcd0b83c1130';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_hyderabad_home_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fe445057-9a6b-4996-bb9b-c7f551a30c2b';
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
  $pane->uuid = 'fe445057-9a6b-4996-bb9b-c7f551a30c2b';
  $display->content['new-fe445057-9a6b-4996-bb9b-c7f551a30c2b'] = $pane;
  $display->panels['bottom'][0] = 'new-fe445057-9a6b-4996-bb9b-c7f551a30c2b';
  $pane = new stdClass();
  $pane->pid = 'new-516a4413-551d-49dd-af8c-af24cccc2817';
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
  $pane->uuid = '516a4413-551d-49dd-af8c-af24cccc2817';
  $display->content['new-516a4413-551d-49dd-af8c-af24cccc2817'] = $pane;
  $display->panels['bottom'][1] = 'new-516a4413-551d-49dd-af8c-af24cccc2817';
  $pane = new stdClass();
  $pane->pid = 'new-710f0947-4387-4814-b7fe-37d80e694a83';
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
  $pane->uuid = '710f0947-4387-4814-b7fe-37d80e694a83';
  $display->content['new-710f0947-4387-4814-b7fe-37d80e694a83'] = $pane;
  $display->panels['bottom'][2] = 'new-710f0947-4387-4814-b7fe-37d80e694a83';
  $pane = new stdClass();
  $pane->pid = 'new-d496ccd3-b876-4cab-b048-2bc1fdf81c9a';
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
  $pane->uuid = 'd496ccd3-b876-4cab-b048-2bc1fdf81c9a';
  $display->content['new-d496ccd3-b876-4cab-b048-2bc1fdf81c9a'] = $pane;
  $display->panels['bottom'][3] = 'new-d496ccd3-b876-4cab-b048-2bc1fdf81c9a';
  $pane = new stdClass();
  $pane->pid = 'new-99552370-b901-4b36-bd84-1c58b67a557d';
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
  $pane->uuid = '99552370-b901-4b36-bd84-1c58b67a557d';
  $display->content['new-99552370-b901-4b36-bd84-1c58b67a557d'] = $pane;
  $display->panels['bottom'][4] = 'new-99552370-b901-4b36-bd84-1c58b67a557d';
  $pane = new stdClass();
  $pane->pid = 'new-793191bd-7286-4211-b307-e2d6a95f3cc3';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-articles_mombasa_home-block';
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
    'css_id' => 'home_news',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '793191bd-7286-4211-b307-e2d6a95f3cc3';
  $display->content['new-793191bd-7286-4211-b307-e2d6a95f3cc3'] = $pane;
  $display->panels['center'][0] = 'new-793191bd-7286-4211-b307-e2d6a95f3cc3';
  $pane = new stdClass();
  $pane->pid = 'new-00a71ca6-b446-4bdf-bd4a-9d57a142885b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'quick_links',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '00a71ca6-b446-4bdf-bd4a-9d57a142885b';
  $display->content['new-00a71ca6-b446-4bdf-bd4a-9d57a142885b'] = $pane;
  $display->panels['left'][0] = 'new-00a71ca6-b446-4bdf-bd4a-9d57a142885b';
  $pane = new stdClass();
  $pane->pid = 'new-72498b59-2746-435c-b9aa-559e7b1299ba';
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
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '72498b59-2746-435c-b9aa-559e7b1299ba';
  $display->content['new-72498b59-2746-435c-b9aa-559e7b1299ba'] = $pane;
  $display->panels['left'][1] = 'new-72498b59-2746-435c-b9aa-559e7b1299ba';
  $pane = new stdClass();
  $pane->pid = 'new-bf6cb8df-989e-4f88-9b8c-3856ce5f5828';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-14';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Multimedia',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'multimedia',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'bf6cb8df-989e-4f88-9b8c-3856ce5f5828';
  $display->content['new-bf6cb8df-989e-4f88-9b8c-3856ce5f5828'] = $pane;
  $display->panels['left'][2] = 'new-bf6cb8df-989e-4f88-9b8c-3856ce5f5828';
  $pane = new stdClass();
  $pane->pid = 'new-5a259f94-f032-423c-a0e4-df9fdae2ee80';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
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
    'css_id' => 'search_home',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '5a259f94-f032-423c-a0e4-df9fdae2ee80';
  $display->content['new-5a259f94-f032-423c-a0e4-df9fdae2ee80'] = $pane;
  $display->panels['right'][0] = 'new-5a259f94-f032-423c-a0e4-df9fdae2ee80';
  $pane = new stdClass();
  $pane->pid = 'new-6ec41222-f6fc-458e-86a8-e4718338566d';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '6ec41222-f6fc-458e-86a8-e4718338566d';
  $display->content['new-6ec41222-f6fc-458e-86a8-e4718338566d'] = $pane;
  $display->panels['right'][1] = 'new-6ec41222-f6fc-458e-86a8-e4718338566d';
  $pane = new stdClass();
  $pane->pid = 'new-d94f265c-5dc3-48c6-82dd-69364d3d9e44';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-hyderabad_alert-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Alert',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'd94f265c-5dc3-48c6-82dd-69364d3d9e44';
  $display->content['new-d94f265c-5dc3-48c6-82dd-69364d3d9e44'] = $pane;
  $display->panels['right'][2] = 'new-d94f265c-5dc3-48c6-82dd-69364d3d9e44';
  $pane = new stdClass();
  $pane->pid = 'new-f9877cd6-a74b-4b21-b318-cd905ad62c53';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-12';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = 'f9877cd6-a74b-4b21-b318-cd905ad62c53';
  $display->content['new-f9877cd6-a74b-4b21-b318-cd905ad62c53'] = $pane;
  $display->panels['right'][3] = 'new-f9877cd6-a74b-4b21-b318-cd905ad62c53';
  $pane = new stdClass();
  $pane->pid = 'new-b0a0b566-27d9-4b8d-92c9-1a159dca528a';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-13';
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
    'css_id' => 'calendar',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = 'b0a0b566-27d9-4b8d-92c9-1a159dca528a';
  $display->content['new-b0a0b566-27d9-4b8d-92c9-1a159dca528a'] = $pane;
  $display->panels['right'][4] = 'new-b0a0b566-27d9-4b8d-92c9-1a159dca528a';
  $pane = new stdClass();
  $pane->pid = 'new-816443ca-45a4-413e-a658-4cd1c63b7ff5';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-30';
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
    'css_id' => 'ib_logo',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '816443ca-45a4-413e-a658-4cd1c63b7ff5';
  $display->content['new-816443ca-45a4-413e-a658-4cd1c63b7ff5'] = $pane;
  $display->panels['right'][5] = 'new-816443ca-45a4-413e-a658-4cd1c63b7ff5';
  $pane = new stdClass();
  $pane->pid = 'new-893883c8-bae0-4eaf-a04b-0d2548869021';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'block-17';
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
  $pane->uuid = '893883c8-bae0-4eaf-a04b-0d2548869021';
  $display->content['new-893883c8-bae0-4eaf-a04b-0d2548869021'] = $pane;
  $display->panels['top'][0] = 'new-893883c8-bae0-4eaf-a04b-0d2548869021';
  $pane = new stdClass();
  $pane->pid = 'new-43dad369-db5b-4f0a-9630-92b94f0db639';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
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
    'css_id' => 'top_nav_reduced',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '43dad369-db5b-4f0a-9630-92b94f0db639';
  $display->content['new-43dad369-db5b-4f0a-9630-92b94f0db639'] = $pane;
  $display->panels['top'][1] = 'new-43dad369-db5b-4f0a-9630-92b94f0db639';
  $pane = new stdClass();
  $pane->pid = 'new-2760a255-8957-4e93-991f-69b7c861c690';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-hyderabad-menu';
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
    'css_id' => 'top_nav_academy',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '2760a255-8957-4e93-991f-69b7c861c690';
  $display->content['new-2760a255-8957-4e93-991f-69b7c861c690'] = $pane;
  $display->panels['top'][2] = 'new-2760a255-8957-4e93-991f-69b7c861c690';
  $pane = new stdClass();
  $pane->pid = 'new-5b118ba0-e964-450f-bc38-58a837e18106';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'views-hyderabad_slideshow_home-block';
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
    'css_id' => 'slideshow_home',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = '5b118ba0-e964-450f-bc38-58a837e18106';
  $display->content['new-5b118ba0-e964-450f-bc38-58a837e18106'] = $pane;
  $display->panels['top'][3] = 'new-5b118ba0-e964-450f-bc38-58a837e18106';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hyderabad_home'] = $page;

  return $pages;

}
