<?php
/**
 * @file
 * ecard_template_view.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ecard_template_view_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ecard_thank_you';
  $page->task = 'page';
  $page->admin_title = 'Ecard Thank You';
  $page->admin_description = '';
  $page->path = 'ecard/thank-you';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ecard_thank_you__panel';
  $handler->task = 'page';
  $handler->subtask = 'ecard_thank_you';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Ecard Thank you page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'omega_24_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'ECARDS';
  $display->uuid = '2143771a-f429-43f6-8d84-194f6389f787';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ecard_thank_you__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f0c0053b-6c7c-4333-811a-1032a4206a12';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'delta_blocks-page-title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'ECARDS',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'title-border',
    'css_class' => 'title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0c0053b-6c7c-4333-811a-1032a4206a12';
  $display->content['new-f0c0053b-6c7c-4333-811a-1032a4206a12'] = $pane;
  $display->panels['middle'][0] = 'new-f0c0053b-6c7c-4333-811a-1032a4206a12';
  $pane = new stdClass();
  $pane->pid = 'new-acbc612a-4921-4342-9c1e-6cd41a7cb980';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Ecard Thank You',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p style="text-align: center;">&nbsp;</p><h5 style="text-align: center;"><span style="font-size:16px;">Thank you for using AKDN eCards. Your eCards have now been queued for sending and will reach your recipients shortly.</span></h5><p style="text-align: center;">&nbsp;</p><p style="text-align: center;"><a href="/ecards" style="padding: 10px; border-radius: 5px; text-decoration: none; color: #ffffff; background: #b59757;">SEND MORE ECARDS</a></p><p style="text-align: center;">&nbsp;</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'acbc612a-4921-4342-9c1e-6cd41a7cb980';
  $display->content['new-acbc612a-4921-4342-9c1e-6cd41a7cb980'] = $pane;
  $display->panels['middle'][1] = 'new-acbc612a-4921-4342-9c1e-6cd41a7cb980';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-acbc612a-4921-4342-9c1e-6cd41a7cb980';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ecard_thank_you'] = $page;

  return $pages;

}
