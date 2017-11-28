<?php
/**
 * @file
 * aka_panel_panes.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function aka_panel_panes_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mini_panel_alerts';
  $mini->category = '';
  $mini->admin_title = 'mini_panel_alerts';
  $mini->admin_description = '';
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
  $display->uuid = '64297484-44e2-45b6-bd6a-677665756044';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d8e711b6-9c1b-4998-9181-e9210100fbbb';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-12';
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
      'css_id' => 'alert_icon',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'd8e711b6-9c1b-4998-9181-e9210100fbbb';
    $display->content['new-d8e711b6-9c1b-4998-9181-e9210100fbbb'] = $pane;
    $display->panels['middle'][0] = 'new-d8e711b6-9c1b-4998-9181-e9210100fbbb';
    $pane = new stdClass();
    $pane->pid = 'new-9756a148-237e-48c5-867a-29acce89a2bf';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-mombasa_alert-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Alerts',
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
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '9756a148-237e-48c5-867a-29acce89a2bf';
    $display->content['new-9756a148-237e-48c5-867a-29acce89a2bf'] = $pane;
    $display->panels['middle'][1] = 'new-9756a148-237e-48c5-867a-29acce89a2bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d8e711b6-9c1b-4998-9181-e9210100fbbb';
  $mini->display = $display;
  $export['mini_panel_alerts'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'multimedia';
  $mini->category = '';
  $mini->admin_title = 'Multimedia';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Multimedia';
  $display->uuid = '5c9a471a-ea6e-4665-b4e4-ab7c7db600d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ab9760a7-be2d-438a-848f-39eec00043fe';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-video-block_2';
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
    $pane->locks = '';
    $pane->uuid = 'ab9760a7-be2d-438a-848f-39eec00043fe';
    $display->content['new-ab9760a7-be2d-438a-848f-39eec00043fe'] = $pane;
    $display->panels['left'][0] = 'new-ab9760a7-be2d-438a-848f-39eec00043fe';
    $pane = new stdClass();
    $pane->pid = 'new-d7ffd5d6-373f-4e56-92e8-fd2dd72ed4dd';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-publications-block';
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
    $pane->locks = '';
    $pane->uuid = 'd7ffd5d6-373f-4e56-92e8-fd2dd72ed4dd';
    $display->content['new-d7ffd5d6-373f-4e56-92e8-fd2dd72ed4dd'] = $pane;
    $display->panels['right'][0] = 'new-d7ffd5d6-373f-4e56-92e8-fd2dd72ed4dd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ab9760a7-be2d-438a-848f-39eec00043fe';
  $mini->display = $display;
  $export['multimedia'] = $mini;

  return $export;
}
