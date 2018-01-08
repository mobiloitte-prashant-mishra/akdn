<?php
/**
 * @file
 * aka_panel_home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aka_panel_home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'home';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->uuid = 'ac683fb9-669f-4e3c-8b7c-8f3a192cb22e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-964df1c3-67b2-4721-80ce-f8d2ef050c14';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-articles-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'What’s new in the field',
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
    $pane->uuid = '964df1c3-67b2-4721-80ce-f8d2ef050c14';
    $display->content['new-964df1c3-67b2-4721-80ce-f8d2ef050c14'] = $pane;
    $display->panels['center'][0] = 'new-964df1c3-67b2-4721-80ce-f8d2ef050c14';
    $pane = new stdClass();
    $pane->pid = 'new-0030731a-5c6d-4abc-8ec4-87e1d14dc7e1';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-spotlights-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Spotlight',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home_spotlights',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0030731a-5c6d-4abc-8ec4-87e1d14dc7e1';
    $display->content['new-0030731a-5c6d-4abc-8ec4-87e1d14dc7e1'] = $pane;
    $display->panels['center'][1] = 'new-0030731a-5c6d-4abc-8ec4-87e1d14dc7e1';
    $pane = new stdClass();
    $pane->pid = 'new-c196c179-091a-4264-ad12-de867716ee0a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-24';
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
      'css_id' => 'quick_links_general',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'c196c179-091a-4264-ad12-de867716ee0a';
    $display->content['new-c196c179-091a-4264-ad12-de867716ee0a'] = $pane;
    $display->panels['left'][0] = 'new-c196c179-091a-4264-ad12-de867716ee0a';
    $pane = new stdClass();
    $pane->pid = 'new-25ea5277-45eb-4fc5-b2eb-020d22cc6588';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-our-academies';
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
      'css_id' => 'our_academies',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '25ea5277-45eb-4fc5-b2eb-020d22cc6588';
    $display->content['new-25ea5277-45eb-4fc5-b2eb-020d22cc6588'] = $pane;
    $display->panels['left'][1] = 'new-25ea5277-45eb-4fc5-b2eb-020d22cc6588';
    $pane = new stdClass();
    $pane->pid = 'new-00527145-a647-47ba-9452-fea15d38cb27';
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
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '00527145-a647-47ba-9452-fea15d38cb27';
    $display->content['new-00527145-a647-47ba-9452-fea15d38cb27'] = $pane;
    $display->panels['left'][2] = 'new-00527145-a647-47ba-9452-fea15d38cb27';
    $pane = new stdClass();
    $pane->pid = 'new-0ae25360-daa1-4b7f-9001-526dd4eda55e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-26';
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
      'css_id' => 'multimedia_home',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '0ae25360-daa1-4b7f-9001-526dd4eda55e';
    $display->content['new-0ae25360-daa1-4b7f-9001-526dd4eda55e'] = $pane;
    $display->panels['left'][3] = 'new-0ae25360-daa1-4b7f-9001-526dd4eda55e';
    $pane = new stdClass();
    $pane->pid = 'new-b8b385dd-633a-4f90-ad44-9f29fcdc944e';
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
    $pane->uuid = 'b8b385dd-633a-4f90-ad44-9f29fcdc944e';
    $display->content['new-b8b385dd-633a-4f90-ad44-9f29fcdc944e'] = $pane;
    $display->panels['right'][0] = 'new-b8b385dd-633a-4f90-ad44-9f29fcdc944e';
    $pane = new stdClass();
    $pane->pid = 'new-b9d542fc-2871-43ce-be30-9b6eecdd4b2b';
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
    $pane->uuid = 'b9d542fc-2871-43ce-be30-9b6eecdd4b2b';
    $display->content['new-b9d542fc-2871-43ce-be30-9b6eecdd4b2b'] = $pane;
    $display->panels['right'][1] = 'new-b9d542fc-2871-43ce-be30-9b6eecdd4b2b';
    $pane = new stdClass();
    $pane->pid = 'new-c8fec158-20d7-404a-a0e4-d35b70753c7d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-alerts-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Notices',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'alert_general',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c8fec158-20d7-404a-a0e4-d35b70753c7d';
    $display->content['new-c8fec158-20d7-404a-a0e4-d35b70753c7d'] = $pane;
    $display->panels['right'][2] = 'new-c8fec158-20d7-404a-a0e4-d35b70753c7d';
    $pane = new stdClass();
    $pane->pid = 'new-c9a4a832-7ba6-4939-87c1-f78018b1dd97';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'views-slideshow_home-block_1';
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
      'css_id' => 'slideshow_home',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'c9a4a832-7ba6-4939-87c1-f78018b1dd97';
    $display->content['new-c9a4a832-7ba6-4939-87c1-f78018b1dd97'] = $pane;
    $display->panels['top'][0] = 'new-c9a4a832-7ba6-4939-87c1-f78018b1dd97';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
