<?php
/**
 * @file
 * akdn_internal_news_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function akdn_internal_news_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_aa4eb0ca-b7e0-4e4b-bb30-c8798caddfca';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'AKDN internal News page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'internal-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'akdn_internal_news_page' => 'akdn_internal_news_page',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '840a3835-94f2-4b4e-a704-5d43112544fe';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-db18ef35-04b1-4f5c-bb35-47037a16538b';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db18ef35-04b1-4f5c-bb35-47037a16538b';
  $display->content['new-db18ef35-04b1-4f5c-bb35-47037a16538b'] = $pane;
  $display->panels['middle'][0] = 'new-db18ef35-04b1-4f5c-bb35-47037a16538b';
  $pane = new stdClass();
  $pane->pid = 'new-e4f236d4-2954-4ee2-8331-0e97863316c9';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'akdn_internal_news_page_mini_pan';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e4f236d4-2954-4ee2-8331-0e97863316c9';
  $display->content['new-e4f236d4-2954-4ee2-8331-0e97863316c9'] = $pane;
  $display->panels['middle'][1] = 'new-e4f236d4-2954-4ee2-8331-0e97863316c9';
  $pane = new stdClass();
  $pane->pid = 'new-91604676-3c18-41a8-a878-3911acd2f847';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_internal_news_config_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '91604676-3c18-41a8-a878-3911acd2f847';
  $display->content['new-91604676-3c18-41a8-a878-3911acd2f847'] = $pane;
  $display->panels['middle'][2] = 'new-91604676-3c18-41a8-a878-3911acd2f847';
  $pane = new stdClass();
  $pane->pid = 'new-03b3ba49-15d4-42f6-a512-3d2233b6adbf';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_internal_news_page_footer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '03b3ba49-15d4-42f6-a512-3d2233b6adbf';
  $display->content['new-03b3ba49-15d4-42f6-a512-3d2233b6adbf'] = $pane;
  $display->panels['middle'][3] = 'new-03b3ba49-15d4-42f6-a512-3d2233b6adbf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-db18ef35-04b1-4f5c-bb35-47037a16538b';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_aa4eb0ca-b7e0-4e4b-bb30-c8798caddfca'] = $handler;

  return $export;
}
