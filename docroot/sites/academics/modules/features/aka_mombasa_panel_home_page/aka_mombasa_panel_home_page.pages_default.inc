<?php
/**
 * @file
 * aka_mombasa_panel_home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aka_mombasa_panel_home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mombasa_home';
  $page->task = 'page';
  $page->admin_title = 'mombasa_home';
  $page->admin_description = '';
  $page->path = 'mombasa';
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
  $handler->name = 'page_mombasa_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mombasa_home';
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
  $display->title = '';
  $display->uuid = '34486e2b-79c3-4d0a-89b1-281e6e025146';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-97112c0e-3d79-44b3-ab34-2793ca1d7704';
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
    $pane->uuid = '97112c0e-3d79-44b3-ab34-2793ca1d7704';
    $display->content['new-97112c0e-3d79-44b3-ab34-2793ca1d7704'] = $pane;
    $display->panels['bottom'][0] = 'new-97112c0e-3d79-44b3-ab34-2793ca1d7704';
    $pane = new stdClass();
    $pane->pid = 'new-78baad50-56ad-4e37-8c82-311ea105f2f4';
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
    $pane->uuid = '78baad50-56ad-4e37-8c82-311ea105f2f4';
    $display->content['new-78baad50-56ad-4e37-8c82-311ea105f2f4'] = $pane;
    $display->panels['bottom'][1] = 'new-78baad50-56ad-4e37-8c82-311ea105f2f4';
    $pane = new stdClass();
    $pane->pid = 'new-e5c9a15a-fae0-454a-8bc2-66e45c3216d1';
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
    $pane->uuid = 'e5c9a15a-fae0-454a-8bc2-66e45c3216d1';
    $display->content['new-e5c9a15a-fae0-454a-8bc2-66e45c3216d1'] = $pane;
    $display->panels['bottom'][2] = 'new-e5c9a15a-fae0-454a-8bc2-66e45c3216d1';
    $pane = new stdClass();
    $pane->pid = 'new-523dc29e-3fba-47e4-a11a-1e01c0c9895e';
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
    $pane->uuid = '523dc29e-3fba-47e4-a11a-1e01c0c9895e';
    $display->content['new-523dc29e-3fba-47e4-a11a-1e01c0c9895e'] = $pane;
    $display->panels['bottom'][3] = 'new-523dc29e-3fba-47e4-a11a-1e01c0c9895e';
    $pane = new stdClass();
    $pane->pid = 'new-b7c96acb-7da0-4a61-ba9e-0d7ec841f94b';
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
    $pane->uuid = 'b7c96acb-7da0-4a61-ba9e-0d7ec841f94b';
    $display->content['new-b7c96acb-7da0-4a61-ba9e-0d7ec841f94b'] = $pane;
    $display->panels['bottom'][4] = 'new-b7c96acb-7da0-4a61-ba9e-0d7ec841f94b';
    $pane = new stdClass();
    $pane->pid = 'new-e2b7c2b0-e600-4341-8c4b-15f257892fe9';
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
    $pane->uuid = 'e2b7c2b0-e600-4341-8c4b-15f257892fe9';
    $display->content['new-e2b7c2b0-e600-4341-8c4b-15f257892fe9'] = $pane;
    $display->panels['center'][0] = 'new-e2b7c2b0-e600-4341-8c4b-15f257892fe9';
    $pane = new stdClass();
    $pane->pid = 'new-3b76e1ef-f332-40b7-aab5-a12dfd0a5c4e';
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
    $pane->uuid = '3b76e1ef-f332-40b7-aab5-a12dfd0a5c4e';
    $display->content['new-3b76e1ef-f332-40b7-aab5-a12dfd0a5c4e'] = $pane;
    $display->panels['left'][0] = 'new-3b76e1ef-f332-40b7-aab5-a12dfd0a5c4e';
    $pane = new stdClass();
    $pane->pid = 'new-ba29c47d-5f1a-4a7d-aeff-649879a0c53a';
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
    $pane->uuid = 'ba29c47d-5f1a-4a7d-aeff-649879a0c53a';
    $display->content['new-ba29c47d-5f1a-4a7d-aeff-649879a0c53a'] = $pane;
    $display->panels['left'][1] = 'new-ba29c47d-5f1a-4a7d-aeff-649879a0c53a';
    $pane = new stdClass();
    $pane->pid = 'new-7f7f790a-33b5-4bfc-be31-1f8e7ff7a7ab';
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
    $pane->uuid = '7f7f790a-33b5-4bfc-be31-1f8e7ff7a7ab';
    $display->content['new-7f7f790a-33b5-4bfc-be31-1f8e7ff7a7ab'] = $pane;
    $display->panels['left'][2] = 'new-7f7f790a-33b5-4bfc-be31-1f8e7ff7a7ab';
    $pane = new stdClass();
    $pane->pid = 'new-98f10783-a52e-453c-b050-909351c18265';
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
    $pane->uuid = '98f10783-a52e-453c-b050-909351c18265';
    $display->content['new-98f10783-a52e-453c-b050-909351c18265'] = $pane;
    $display->panels['left'][3] = 'new-98f10783-a52e-453c-b050-909351c18265';
    $pane = new stdClass();
    $pane->pid = 'new-d83b7411-1cd4-4b6b-8ca8-cb70f6d2d7cd';
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
    $pane->uuid = 'd83b7411-1cd4-4b6b-8ca8-cb70f6d2d7cd';
    $display->content['new-d83b7411-1cd4-4b6b-8ca8-cb70f6d2d7cd'] = $pane;
    $display->panels['left'][4] = 'new-d83b7411-1cd4-4b6b-8ca8-cb70f6d2d7cd';
    $pane = new stdClass();
    $pane->pid = 'new-0695a5c1-bce7-4b60-90f5-5b928b110110';
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
    $pane->uuid = '0695a5c1-bce7-4b60-90f5-5b928b110110';
    $display->content['new-0695a5c1-bce7-4b60-90f5-5b928b110110'] = $pane;
    $display->panels['right'][0] = 'new-0695a5c1-bce7-4b60-90f5-5b928b110110';
    $pane = new stdClass();
    $pane->pid = 'new-0667edba-bdee-49a5-9474-9f889193ed33';
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
    $pane->uuid = '0667edba-bdee-49a5-9474-9f889193ed33';
    $display->content['new-0667edba-bdee-49a5-9474-9f889193ed33'] = $pane;
    $display->panels['right'][1] = 'new-0667edba-bdee-49a5-9474-9f889193ed33';
    $pane = new stdClass();
    $pane->pid = 'new-267cdd00-9f82-4488-a9bd-92d485c202ac';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-mombasa_alert-block';
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
    $pane->uuid = '267cdd00-9f82-4488-a9bd-92d485c202ac';
    $display->content['new-267cdd00-9f82-4488-a9bd-92d485c202ac'] = $pane;
    $display->panels['right'][2] = 'new-267cdd00-9f82-4488-a9bd-92d485c202ac';
    $pane = new stdClass();
    $pane->pid = 'new-3ac8d6f2-4985-47be-8672-c1e6e3bd93ab';
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
    $pane->uuid = '3ac8d6f2-4985-47be-8672-c1e6e3bd93ab';
    $display->content['new-3ac8d6f2-4985-47be-8672-c1e6e3bd93ab'] = $pane;
    $display->panels['right'][3] = 'new-3ac8d6f2-4985-47be-8672-c1e6e3bd93ab';
    $pane = new stdClass();
    $pane->pid = 'new-9f1d36bf-d5f9-499f-9274-5def7d13b484';
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
    $pane->uuid = '9f1d36bf-d5f9-499f-9274-5def7d13b484';
    $display->content['new-9f1d36bf-d5f9-499f-9274-5def7d13b484'] = $pane;
    $display->panels['right'][4] = 'new-9f1d36bf-d5f9-499f-9274-5def7d13b484';
    $pane = new stdClass();
    $pane->pid = 'new-70347860-2534-4f4f-85b4-90f6f8c02715';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-18';
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
    $pane->locks = '';
    $pane->uuid = '70347860-2534-4f4f-85b4-90f6f8c02715';
    $display->content['new-70347860-2534-4f4f-85b4-90f6f8c02715'] = $pane;
    $display->panels['right'][5] = 'new-70347860-2534-4f4f-85b4-90f6f8c02715';
    $pane = new stdClass();
    $pane->pid = 'new-e43813c7-46ba-486d-8815-ded99a41a19f';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mombasa
mombasa/
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
      'css_id' => 'logo',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'e43813c7-46ba-486d-8815-ded99a41a19f';
    $display->content['new-e43813c7-46ba-486d-8815-ded99a41a19f'] = $pane;
    $display->panels['top'][0] = 'new-e43813c7-46ba-486d-8815-ded99a41a19f';
    $pane = new stdClass();
    $pane->pid = 'new-86031f3b-703b-4e45-b2b4-2641683bf38b';
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
    $pane->uuid = '86031f3b-703b-4e45-b2b4-2641683bf38b';
    $display->content['new-86031f3b-703b-4e45-b2b4-2641683bf38b'] = $pane;
    $display->panels['top'][1] = 'new-86031f3b-703b-4e45-b2b4-2641683bf38b';
    $pane = new stdClass();
    $pane->pid = 'new-8add3d2e-53b7-4ad3-a9d6-8c86cadeb9b5';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-mombasa-menu';
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
    $pane->uuid = '8add3d2e-53b7-4ad3-a9d6-8c86cadeb9b5';
    $display->content['new-8add3d2e-53b7-4ad3-a9d6-8c86cadeb9b5'] = $pane;
    $display->panels['top'][2] = 'new-8add3d2e-53b7-4ad3-a9d6-8c86cadeb9b5';
    $pane = new stdClass();
    $pane->pid = 'new-a86100d9-5409-4ed6-ab2a-1d7fa80a337c';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'views-mombasa_slideshow_home-block';
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
    $pane->uuid = 'a86100d9-5409-4ed6-ab2a-1d7fa80a337c';
    $display->content['new-a86100d9-5409-4ed6-ab2a-1d7fa80a337c'] = $pane;
    $display->panels['top'][3] = 'new-a86100d9-5409-4ed6-ab2a-1d7fa80a337c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mombasa_home'] = $page;

  return $pages;

}
