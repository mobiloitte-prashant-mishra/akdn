<?php
/**
 * @file
 * aka_dar_panel_home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aka_dar_panel_home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dar_home';
  $page->task = 'page';
  $page->admin_title = 'dar_home';
  $page->admin_description = '';
  $page->path = 'dar-es-salaam';
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
  $handler->name = 'page_dar_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dar_home';
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
  $display->layout = 'flexible:section';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'bottom' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = 'e8f2217c-f505-4ccd-be9e-59a606af86c8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dar_home_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-85d0a1cc-d573-4670-8f2f-27e3e70862f9';
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
  $pane->uuid = '85d0a1cc-d573-4670-8f2f-27e3e70862f9';
  $display->content['new-85d0a1cc-d573-4670-8f2f-27e3e70862f9'] = $pane;
  $display->panels['bottom'][0] = 'new-85d0a1cc-d573-4670-8f2f-27e3e70862f9';
  $pane = new stdClass();
  $pane->pid = 'new-64e510f3-619c-4f68-b799-88f44bf1b8cd';
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
  $pane->uuid = '64e510f3-619c-4f68-b799-88f44bf1b8cd';
  $display->content['new-64e510f3-619c-4f68-b799-88f44bf1b8cd'] = $pane;
  $display->panels['bottom'][1] = 'new-64e510f3-619c-4f68-b799-88f44bf1b8cd';
  $pane = new stdClass();
  $pane->pid = 'new-3c07deaa-8e74-4578-a150-1aadd69fe571';
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
  $pane->uuid = '3c07deaa-8e74-4578-a150-1aadd69fe571';
  $display->content['new-3c07deaa-8e74-4578-a150-1aadd69fe571'] = $pane;
  $display->panels['bottom'][2] = 'new-3c07deaa-8e74-4578-a150-1aadd69fe571';
  $pane = new stdClass();
  $pane->pid = 'new-0faad5dd-9ec2-42e3-b1c7-63aa1fc8349d';
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
  $pane->uuid = '0faad5dd-9ec2-42e3-b1c7-63aa1fc8349d';
  $display->content['new-0faad5dd-9ec2-42e3-b1c7-63aa1fc8349d'] = $pane;
  $display->panels['bottom'][3] = 'new-0faad5dd-9ec2-42e3-b1c7-63aa1fc8349d';
  $pane = new stdClass();
  $pane->pid = 'new-4d58d397-52c7-4fe4-8eaf-d94ce647a9c3';
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
  $pane->uuid = '4d58d397-52c7-4fe4-8eaf-d94ce647a9c3';
  $display->content['new-4d58d397-52c7-4fe4-8eaf-d94ce647a9c3'] = $pane;
  $display->panels['bottom'][4] = 'new-4d58d397-52c7-4fe4-8eaf-d94ce647a9c3';
  $pane = new stdClass();
  $pane->pid = 'new-c8e4ca65-a192-402e-b660-1c8f82f3b3b4';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-articles_maputo_home-block';
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
  $pane->uuid = 'c8e4ca65-a192-402e-b660-1c8f82f3b3b4';
  $display->content['new-c8e4ca65-a192-402e-b660-1c8f82f3b3b4'] = $pane;
  $display->panels['center'][0] = 'new-c8e4ca65-a192-402e-b660-1c8f82f3b3b4';
  $pane = new stdClass();
  $pane->pid = 'new-9e650a96-a55f-411f-a910-886df98ddfd8';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Quick links',
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
  $pane->uuid = '9e650a96-a55f-411f-a910-886df98ddfd8';
  $display->content['new-9e650a96-a55f-411f-a910-886df98ddfd8'] = $pane;
  $display->panels['left'][0] = 'new-9e650a96-a55f-411f-a910-886df98ddfd8';
  $pane = new stdClass();
  $pane->pid = 'new-dbae5954-1a5e-4547-ad74-3589dc8f1ffa';
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
    'css_id' => 'our_academies_home',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = 'dbae5954-1a5e-4547-ad74-3589dc8f1ffa';
  $display->content['new-dbae5954-1a5e-4547-ad74-3589dc8f1ffa'] = $pane;
  $display->panels['left'][1] = 'new-dbae5954-1a5e-4547-ad74-3589dc8f1ffa';
  $pane = new stdClass();
  $pane->pid = 'new-d9f3b07e-8463-4f9c-abb4-fe38f15bf403';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'break',
    'title' => '<none>',
    'body' => '<br />',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'd9f3b07e-8463-4f9c-abb4-fe38f15bf403';
  $display->content['new-d9f3b07e-8463-4f9c-abb4-fe38f15bf403'] = $pane;
  $display->panels['left'][2] = 'new-d9f3b07e-8463-4f9c-abb4-fe38f15bf403';
  $pane = new stdClass();
  $pane->pid = 'new-1c567bc3-dd69-4072-9905-c613ee442346';
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
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = '1c567bc3-dd69-4072-9905-c613ee442346';
  $display->content['new-1c567bc3-dd69-4072-9905-c613ee442346'] = $pane;
  $display->panels['left'][3] = 'new-1c567bc3-dd69-4072-9905-c613ee442346';
  $pane = new stdClass();
  $pane->pid = 'new-9baff717-e832-432a-9356-bdacc48dbf03';
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
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = '9baff717-e832-432a-9356-bdacc48dbf03';
  $display->content['new-9baff717-e832-432a-9356-bdacc48dbf03'] = $pane;
  $display->panels['left'][4] = 'new-9baff717-e832-432a-9356-bdacc48dbf03';
  $pane = new stdClass();
  $pane->pid = 'new-c4d85294-5540-4d71-a1e7-b9dcd0ddd6ea';
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
  $pane->uuid = 'c4d85294-5540-4d71-a1e7-b9dcd0ddd6ea';
  $display->content['new-c4d85294-5540-4d71-a1e7-b9dcd0ddd6ea'] = $pane;
  $display->panels['right'][0] = 'new-c4d85294-5540-4d71-a1e7-b9dcd0ddd6ea';
  $pane = new stdClass();
  $pane->pid = 'new-e0bb19ef-48d5-4654-a496-3e59f8468fac';
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
  $pane->uuid = 'e0bb19ef-48d5-4654-a496-3e59f8468fac';
  $display->content['new-e0bb19ef-48d5-4654-a496-3e59f8468fac'] = $pane;
  $display->panels['right'][1] = 'new-e0bb19ef-48d5-4654-a496-3e59f8468fac';
  $pane = new stdClass();
  $pane->pid = 'new-3cd6f6ef-6bfd-411b-8a15-5ae2bb3314c4';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-maputo_alert-block';
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
  $pane->css = array(
    'css_id' => 'alert',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '3cd6f6ef-6bfd-411b-8a15-5ae2bb3314c4';
  $display->content['new-3cd6f6ef-6bfd-411b-8a15-5ae2bb3314c4'] = $pane;
  $display->panels['right'][2] = 'new-3cd6f6ef-6bfd-411b-8a15-5ae2bb3314c4';
  $pane = new stdClass();
  $pane->pid = 'new-aa8ff6ba-833b-4dce-9600-33f074ec3098';
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
  $pane->uuid = 'aa8ff6ba-833b-4dce-9600-33f074ec3098';
  $display->content['new-aa8ff6ba-833b-4dce-9600-33f074ec3098'] = $pane;
  $display->panels['right'][3] = 'new-aa8ff6ba-833b-4dce-9600-33f074ec3098';
  $pane = new stdClass();
  $pane->pid = 'new-8f134534-e28c-4f3f-b66e-23a50484d387';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-13';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '0',
        ),
        'context' => 'logged-in-user',
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
    'css_id' => 'calendar',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = '';
  $pane->uuid = '8f134534-e28c-4f3f-b66e-23a50484d387';
  $display->content['new-8f134534-e28c-4f3f-b66e-23a50484d387'] = $pane;
  $display->panels['right'][4] = 'new-8f134534-e28c-4f3f-b66e-23a50484d387';
  $pane = new stdClass();
  $pane->pid = 'new-e91c047c-c837-4766-b907-75cf30b934ac';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'block-31';
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
  $pane->locks = array();
  $pane->uuid = 'e91c047c-c837-4766-b907-75cf30b934ac';
  $display->content['new-e91c047c-c837-4766-b907-75cf30b934ac'] = $pane;
  $display->panels['top'][0] = 'new-e91c047c-c837-4766-b907-75cf30b934ac';
  $pane = new stdClass();
  $pane->pid = 'new-6ba7195c-9111-412f-a7ba-307042e6def0';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-maputo-menu';
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
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '6ba7195c-9111-412f-a7ba-307042e6def0';
  $display->content['new-6ba7195c-9111-412f-a7ba-307042e6def0'] = $pane;
  $display->panels['top'][1] = 'new-6ba7195c-9111-412f-a7ba-307042e6def0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dar_home'] = $page;

  return $pages;

}
