<?php
/**
 * @file
 * akdn_internal_news_page.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function akdn_internal_news_page_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'akdn_internal_news_page_mini_pan';
  $mini->category = '';
  $mini->admin_title = 'AKDN internal News page mini panel';
  $mini->admin_description = 'AKDN internal News page mini panel';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '11a1b2e0-ff1d-4387-beef-c1c270606746';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'akdn_internal_news_page_mini_pan';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f2c5c0c8-7f12-474c-8c43-7d83470a2fd3';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_internal_news_page_header';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f2c5c0c8-7f12-474c-8c43-7d83470a2fd3';
  $display->content['new-f2c5c0c8-7f12-474c-8c43-7d83470a2fd3'] = $pane;
  $display->panels['middle'][0] = 'new-f2c5c0c8-7f12-474c-8c43-7d83470a2fd3';
  $pane = new stdClass();
  $pane->pid = 'new-ae095ee8-759d-43c5-84a8-c587f075f48c';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_search_internal_news_page';
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
  $pane->uuid = 'ae095ee8-759d-43c5-84a8-c587f075f48c';
  $display->content['new-ae095ee8-759d-43c5-84a8-c587f075f48c'] = $pane;
  $display->panels['middle'][1] = 'new-ae095ee8-759d-43c5-84a8-c587f075f48c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f2c5c0c8-7f12-474c-8c43-7d83470a2fd3';
  $mini->display = $display;
  $export['akdn_internal_news_page_mini_pan'] = $mini;

  return $export;
}
