<?php
/**
 * @file
 * panels_page.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function panels_page_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = 'Footer for the TheIsmaili.org';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          0 => 'footer_2_',
          1 => 'footer_2',
          2 => 'footer_1',
          3 => 'center',
          4 => 'footer_3',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Footer 4',
        'width' => '19.995757400773574',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'footer-border-right',
      ),
      'footer_1' => array(
        'type' => 'region',
        'title' => 'Footer 3',
        'width' => '20.11525437540395',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'footer-border-right',
      ),
      'footer_2' => array(
        'type' => 'region',
        'title' => 'Footer 2',
        'width' => 20.370769067187769,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'footer-border-right',
      ),
      'footer_3' => array(
        'type' => 'region',
        'title' => 'Footer 5',
        'width' => '19.147450089447442',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'footer_2_' => array(
        'type' => 'region',
        'title' => 'Footer 1',
        'width' => 20.370769067187769,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer_1' => NULL,
      'footer_2' => NULL,
      'footer_3' => NULL,
      'footer_2_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9a70f4cd-1b21-45a4-ac6c-4b839af97cfe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87715c18-9ac5-48d9-828f-69cf1585a7e7';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a href="/nutrition">NUTRITION CENTRE</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87715c18-9ac5-48d9-828f-69cf1585a7e7';
    $display->content['new-87715c18-9ac5-48d9-828f-69cf1585a7e7'] = $pane;
    $display->panels['center'][0] = 'new-87715c18-9ac5-48d9-828f-69cf1585a7e7';
    $pane = new stdClass();
    $pane->pid = 'new-328c5270-14fb-41d7-b095-c4058aa039d9';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '328c5270-14fb-41d7-b095-c4058aa039d9';
    $display->content['new-328c5270-14fb-41d7-b095-c4058aa039d9'] = $pane;
    $display->panels['center'][1] = 'new-328c5270-14fb-41d7-b095-c4058aa039d9';
    $pane = new stdClass();
    $pane->pid = 'new-c59128d3-9a68-4b00-af02-843895f989ca';
    $pane->panel = 'footer_1';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a href="/ismailicentres">ISMAILI CENTRES</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c59128d3-9a68-4b00-af02-843895f989ca';
    $display->content['new-c59128d3-9a68-4b00-af02-843895f989ca'] = $pane;
    $display->panels['footer_1'][0] = 'new-c59128d3-9a68-4b00-af02-843895f989ca';
    $pane = new stdClass();
    $pane->pid = 'new-65ad58cc-129d-4a1d-b3ed-68bcf1f7505d';
    $pane->panel = 'footer_1';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-7';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '65ad58cc-129d-4a1d-b3ed-68bcf1f7505d';
    $display->content['new-65ad58cc-129d-4a1d-b3ed-68bcf1f7505d'] = $pane;
    $display->panels['footer_1'][1] = 'new-65ad58cc-129d-4a1d-b3ed-68bcf1f7505d';
    $pane = new stdClass();
    $pane->pid = 'new-864b186a-bfb8-45de-a9ba-1fc8c916e112';
    $pane->panel = 'footer_2';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a href="/">THEISMAILI.ORG</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '864b186a-bfb8-45de-a9ba-1fc8c916e112';
    $display->content['new-864b186a-bfb8-45de-a9ba-1fc8c916e112'] = $pane;
    $display->panels['footer_2'][0] = 'new-864b186a-bfb8-45de-a9ba-1fc8c916e112';
    $pane = new stdClass();
    $pane->pid = 'new-69186342-8f31-4c03-bb92-539ad3a95e06';
    $pane->panel = 'footer_2';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69186342-8f31-4c03-bb92-539ad3a95e06';
    $display->content['new-69186342-8f31-4c03-bb92-539ad3a95e06'] = $pane;
    $display->panels['footer_2'][1] = 'new-69186342-8f31-4c03-bb92-539ad3a95e06';
    $pane = new stdClass();
    $pane->pid = 'new-78225cec-0c48-4070-a30d-94da58d476f1';
    $pane->panel = 'footer_2_';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-about-us-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a href="/about-us">About Us</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78225cec-0c48-4070-a30d-94da58d476f1';
    $display->content['new-78225cec-0c48-4070-a30d-94da58d476f1'] = $pane;
    $display->panels['footer_2_'][0] = 'new-78225cec-0c48-4070-a30d-94da58d476f1';
    $pane = new stdClass();
    $pane->pid = 'new-9a976094-79f6-482b-8bfd-f7dfc762d88d';
    $pane->panel = 'footer_2_';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9a976094-79f6-482b-8bfd-f7dfc762d88d';
    $display->content['new-9a976094-79f6-482b-8bfd-f7dfc762d88d'] = $pane;
    $display->panels['footer_2_'][1] = 'new-9a976094-79f6-482b-8bfd-f7dfc762d88d';
    $pane = new stdClass();
    $pane->pid = 'new-a2879ad4-8860-4b5e-8839-79f2175a9ea4';
    $pane->panel = 'footer_2_';
    $pane->type = 'block';
    $pane->subtype = 'block-36';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subscribe',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a2879ad4-8860-4b5e-8839-79f2175a9ea4';
    $display->content['new-a2879ad4-8860-4b5e-8839-79f2175a9ea4'] = $pane;
    $display->panels['footer_2_'][2] = 'new-a2879ad4-8860-4b5e-8839-79f2175a9ea4';
    $pane = new stdClass();
    $pane->pid = 'new-1230eba6-4062-4635-a879-aa636bf18f3e';
    $pane->panel = 'footer_2_';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-0';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1230eba6-4062-4635-a879-aa636bf18f3e';
    $display->content['new-1230eba6-4062-4635-a879-aa636bf18f3e'] = $pane;
    $display->panels['footer_2_'][3] = 'new-1230eba6-4062-4635-a879-aa636bf18f3e';
    $pane = new stdClass();
    $pane->pid = 'new-10ce95be-88b6-4404-b500-2f7137deb743';
    $pane->panel = 'footer_2_';
    $pane->type = 'block';
    $pane->subtype = 'widgets-s_ismaili_footer_social_icons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Follow Us',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '10ce95be-88b6-4404-b500-2f7137deb743';
    $display->content['new-10ce95be-88b6-4404-b500-2f7137deb743'] = $pane;
    $display->panels['footer_2_'][4] = 'new-10ce95be-88b6-4404-b500-2f7137deb743';
    $pane = new stdClass();
    $pane->pid = 'new-3d2f1979-c333-46ae-988c-4e835e823c5d';
    $pane->panel = 'footer_3';
    $pane->type = 'block';
    $pane->subtype = 'bean-golden-jubilee-archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Golden Jubilee',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d2f1979-c333-46ae-988c-4e835e823c5d';
    $display->content['new-3d2f1979-c333-46ae-988c-4e835e823c5d'] = $pane;
    $display->panels['footer_3'][0] = 'new-3d2f1979-c333-46ae-988c-4e835e823c5d';
    $pane = new stdClass();
    $pane->pid = 'new-4774ab07-6240-44a9-bbac-e5186491dfd4';
    $pane->panel = 'footer_3';
    $pane->type = 'block';
    $pane->subtype = 'bean-imamat-speeches-centre';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4774ab07-6240-44a9-bbac-e5186491dfd4';
    $display->content['new-4774ab07-6240-44a9-bbac-e5186491dfd4'] = $pane;
    $display->panels['footer_3'][1] = 'new-4774ab07-6240-44a9-bbac-e5186491dfd4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-78225cec-0c48-4070-a30d-94da58d476f1';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
