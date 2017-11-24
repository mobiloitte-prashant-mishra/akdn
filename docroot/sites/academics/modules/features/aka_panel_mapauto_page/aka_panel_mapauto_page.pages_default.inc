<?php
/**
 * @file
 * aka_panel_mapauto_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aka_panel_mapauto_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'maputo_home';
  $page->task = 'page';
  $page->admin_title = 'maputo_home';
  $page->admin_description = '';
  $page->path = 'maputo';
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
  $handler->name = 'page_maputo_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'maputo_home';
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
  $display->uuid = 'befeec79-0c81-4c12-af4f-82e41c6511b7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_maputo_home_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-daa8e628-4ddd-4f80-b190-48170801f399';
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
  $pane->uuid = 'daa8e628-4ddd-4f80-b190-48170801f399';
  $display->content['new-daa8e628-4ddd-4f80-b190-48170801f399'] = $pane;
  $display->panels['bottom'][0] = 'new-daa8e628-4ddd-4f80-b190-48170801f399';
  $pane = new stdClass();
  $pane->pid = 'new-6a13fe47-303c-4165-b613-d4e813c5a780';
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
  $pane->uuid = '6a13fe47-303c-4165-b613-d4e813c5a780';
  $display->content['new-6a13fe47-303c-4165-b613-d4e813c5a780'] = $pane;
  $display->panels['bottom'][1] = 'new-6a13fe47-303c-4165-b613-d4e813c5a780';
  $pane = new stdClass();
  $pane->pid = 'new-e6d8da1a-9ed7-45a8-af14-58c5e6c7474a';
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
  $pane->uuid = 'e6d8da1a-9ed7-45a8-af14-58c5e6c7474a';
  $display->content['new-e6d8da1a-9ed7-45a8-af14-58c5e6c7474a'] = $pane;
  $display->panels['bottom'][2] = 'new-e6d8da1a-9ed7-45a8-af14-58c5e6c7474a';
  $pane = new stdClass();
  $pane->pid = 'new-6c895e14-c95e-4d3e-a411-ab3b7048fd7a';
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
  $pane->uuid = '6c895e14-c95e-4d3e-a411-ab3b7048fd7a';
  $display->content['new-6c895e14-c95e-4d3e-a411-ab3b7048fd7a'] = $pane;
  $display->panels['bottom'][3] = 'new-6c895e14-c95e-4d3e-a411-ab3b7048fd7a';
  $pane = new stdClass();
  $pane->pid = 'new-04846a92-a10b-448f-a860-734ba917760b';
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
  $pane->uuid = '04846a92-a10b-448f-a860-734ba917760b';
  $display->content['new-04846a92-a10b-448f-a860-734ba917760b'] = $pane;
  $display->panels['bottom'][4] = 'new-04846a92-a10b-448f-a860-734ba917760b';
  $pane = new stdClass();
  $pane->pid = 'new-01648721-c318-4b23-b41c-7358f5e75894';
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
  $pane->uuid = '01648721-c318-4b23-b41c-7358f5e75894';
  $display->content['new-01648721-c318-4b23-b41c-7358f5e75894'] = $pane;
  $display->panels['center'][0] = 'new-01648721-c318-4b23-b41c-7358f5e75894';
  $pane = new stdClass();
  $pane->pid = 'new-5647143f-7592-46d6-a024-895c85442506';
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
  $pane->uuid = '5647143f-7592-46d6-a024-895c85442506';
  $display->content['new-5647143f-7592-46d6-a024-895c85442506'] = $pane;
  $display->panels['left'][0] = 'new-5647143f-7592-46d6-a024-895c85442506';
  $pane = new stdClass();
  $pane->pid = 'new-394ee503-32fe-41b8-9c9b-2767aab2dd74';
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
  $pane->uuid = '394ee503-32fe-41b8-9c9b-2767aab2dd74';
  $display->content['new-394ee503-32fe-41b8-9c9b-2767aab2dd74'] = $pane;
  $display->panels['left'][1] = 'new-394ee503-32fe-41b8-9c9b-2767aab2dd74';
  $pane = new stdClass();
  $pane->pid = 'new-062fa26e-346c-4959-8c2e-99b76149d495';
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
  $pane->uuid = '062fa26e-346c-4959-8c2e-99b76149d495';
  $display->content['new-062fa26e-346c-4959-8c2e-99b76149d495'] = $pane;
  $display->panels['left'][2] = 'new-062fa26e-346c-4959-8c2e-99b76149d495';
  $pane = new stdClass();
  $pane->pid = 'new-162177c5-fbbd-41eb-8f64-d6f2e4c00dc6';
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
  $pane->uuid = '162177c5-fbbd-41eb-8f64-d6f2e4c00dc6';
  $display->content['new-162177c5-fbbd-41eb-8f64-d6f2e4c00dc6'] = $pane;
  $display->panels['left'][3] = 'new-162177c5-fbbd-41eb-8f64-d6f2e4c00dc6';
  $pane = new stdClass();
  $pane->pid = 'new-a31eac6f-bedc-452d-aff2-9fe514a0687d';
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
  $pane->uuid = 'a31eac6f-bedc-452d-aff2-9fe514a0687d';
  $display->content['new-a31eac6f-bedc-452d-aff2-9fe514a0687d'] = $pane;
  $display->panels['left'][4] = 'new-a31eac6f-bedc-452d-aff2-9fe514a0687d';
  $pane = new stdClass();
  $pane->pid = 'new-28b395b5-f727-4847-9f58-b020ba5b4db9';
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
  $pane->uuid = '28b395b5-f727-4847-9f58-b020ba5b4db9';
  $display->content['new-28b395b5-f727-4847-9f58-b020ba5b4db9'] = $pane;
  $display->panels['right'][0] = 'new-28b395b5-f727-4847-9f58-b020ba5b4db9';
  $pane = new stdClass();
  $pane->pid = 'new-3b42a942-6b3e-4c32-bad2-bacb028cf7c6';
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
  $pane->uuid = '3b42a942-6b3e-4c32-bad2-bacb028cf7c6';
  $display->content['new-3b42a942-6b3e-4c32-bad2-bacb028cf7c6'] = $pane;
  $display->panels['right'][1] = 'new-3b42a942-6b3e-4c32-bad2-bacb028cf7c6';
  $pane = new stdClass();
  $pane->pid = 'new-5f2d861f-a9d3-4b7a-91d9-1f1754fe2abd';
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
  $pane->uuid = '5f2d861f-a9d3-4b7a-91d9-1f1754fe2abd';
  $display->content['new-5f2d861f-a9d3-4b7a-91d9-1f1754fe2abd'] = $pane;
  $display->panels['right'][2] = 'new-5f2d861f-a9d3-4b7a-91d9-1f1754fe2abd';
  $pane = new stdClass();
  $pane->pid = 'new-2102363e-5710-40e5-842a-a35e70f079db';
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
  $pane->uuid = '2102363e-5710-40e5-842a-a35e70f079db';
  $display->content['new-2102363e-5710-40e5-842a-a35e70f079db'] = $pane;
  $display->panels['right'][3] = 'new-2102363e-5710-40e5-842a-a35e70f079db';
  $pane = new stdClass();
  $pane->pid = 'new-fdebad5c-6f8b-4879-8718-a7d2affc16a1';
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
  $pane->uuid = 'fdebad5c-6f8b-4879-8718-a7d2affc16a1';
  $display->content['new-fdebad5c-6f8b-4879-8718-a7d2affc16a1'] = $pane;
  $display->panels['right'][4] = 'new-fdebad5c-6f8b-4879-8718-a7d2affc16a1';
  $pane = new stdClass();
  $pane->pid = 'new-57cff3fb-def8-4c33-891a-82d75ec8f931';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'block-15';
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
  $pane->uuid = '57cff3fb-def8-4c33-891a-82d75ec8f931';
  $display->content['new-57cff3fb-def8-4c33-891a-82d75ec8f931'] = $pane;
  $display->panels['top'][0] = 'new-57cff3fb-def8-4c33-891a-82d75ec8f931';
  $pane = new stdClass();
  $pane->pid = 'new-12029214-893a-4c9e-9e96-0b4b79bed1f2';
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
  $pane->uuid = '12029214-893a-4c9e-9e96-0b4b79bed1f2';
  $display->content['new-12029214-893a-4c9e-9e96-0b4b79bed1f2'] = $pane;
  $display->panels['top'][1] = 'new-12029214-893a-4c9e-9e96-0b4b79bed1f2';
  $pane = new stdClass();
  $pane->pid = 'new-7a51a475-aca7-4eff-b6b3-1f47fd46f211';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'views-maputo_slideshow_home-block';
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
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = '7a51a475-aca7-4eff-b6b3-1f47fd46f211';
  $display->content['new-7a51a475-aca7-4eff-b6b3-1f47fd46f211'] = $pane;
  $display->panels['top'][2] = 'new-7a51a475-aca7-4eff-b6b3-1f47fd46f211';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['maputo_home'] = $page;

  return $pages;

}
