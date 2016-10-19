<?php
/**
 * @file
 * ak_panel_variants.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ak_panel_variants_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'agency_additional_footer';
  $mini->category = '';
  $mini->admin_title = 'Agency Additional Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_24_threecol_8_8_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ab9d826b-6740-42e9-bddb-79340e5349a5';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'agency_additional_footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c0ee9602-d3e8-45eb-b938-56570e810948';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_footer_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'width' => '300',
      'height' => '200',
    ),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->locks = array();
  $pane->uuid = 'c0ee9602-d3e8-45eb-b938-56570e810948';
  $display->content['new-c0ee9602-d3e8-45eb-b938-56570e810948'] = $pane;
  $display->panels['left'][0] = 'new-c0ee9602-d3e8-45eb-b938-56570e810948';
  $pane = new stdClass();
  $pane->pid = 'new-1e095af1-616b-44a2-826b-e39229b4485d';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_brochure_embed_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1e095af1-616b-44a2-826b-e39229b4485d';
  $display->content['new-1e095af1-616b-44a2-826b-e39229b4485d'] = $pane;
  $display->panels['middle'][0] = 'new-1e095af1-616b-44a2-826b-e39229b4485d';
  $pane = new stdClass();
  $pane->pid = 'new-d2f7e3d7-d9c7-4f75-845b-c31c0e82aa93';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<ul id="feedekRssFeed"></ul>

<script>
(function ($) {
  $("#feedekRssFeed").PaRSS(
      "%node:field-3rd-party-rss", // url to the feed
      3, // number of items to retrieve
      "M jS Y, g:i a", // date format
      true, // include descriptions?
      function() {
          /* optional callback function performed after list is appended to the page */
      }
  );
}(jQuery));
</script>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd2f7e3d7-d9c7-4f75-845b-c31c0e82aa93';
  $display->content['new-d2f7e3d7-d9c7-4f75-845b-c31c0e82aa93'] = $pane;
  $display->panels['right'][0] = 'new-d2f7e3d7-d9c7-4f75-845b-c31c0e82aa93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['agency_additional_footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'akaa_footer';
  $mini->category = '';
  $mini->admin_title = 'AKAA footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_24_threecol_8_8_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6011c955-e113-4c90-ab97-13e12dddefe4';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'akaa_footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0aacd65f-3989-4ff7-96d8-3490d8eed9c3';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '7136',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'teaser',
    'link_node_title' => 1,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-7 akaa-footer-pane',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0aacd65f-3989-4ff7-96d8-3490d8eed9c3';
  $display->content['new-0aacd65f-3989-4ff7-96d8-3490d8eed9c3'] = $pane;
  $display->panels['left'][0] = 'new-0aacd65f-3989-4ff7-96d8-3490d8eed9c3';
  $pane = new stdClass();
  $pane->pid = 'new-224b212b-b70b-48fa-a8c9-983dee06faf1';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'publications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-6 suffix-1 akaa-footer-pane',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '224b212b-b70b-48fa-a8c9-983dee06faf1';
  $display->content['new-224b212b-b70b-48fa-a8c9-983dee06faf1'] = $pane;
  $display->panels['middle'][0] = 'new-224b212b-b70b-48fa-a8c9-983dee06faf1';
  $pane = new stdClass();
  $pane->pid = 'new-e0478bb5-bfc8-44f8-bdbd-3fb61756ff9f';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AKAA Contact',
    'title' => '',
    'body' => '<span>For more information in English:</span>
<span>Sam Pickens</span>
<a href="mailto:sam.pickens@akdn.org">sam.pickens@akdn.org</a>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-7 suffix-1 akaa-footer-pane',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e0478bb5-bfc8-44f8-bdbd-3fb61756ff9f';
  $display->content['new-e0478bb5-bfc8-44f8-bdbd-3fb61756ff9f'] = $pane;
  $display->panels['right'][0] = 'new-e0478bb5-bfc8-44f8-bdbd-3fb61756ff9f';
  $pane = new stdClass();
  $pane->pid = 'new-585cf5b1-62d1-423f-a7d2-9c73e3c1a831';
  $pane->panel = 'right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '10632',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-7 suffix-1 akaa-footer-pane',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '585cf5b1-62d1-423f-a7d2-9c73e3c1a831';
  $display->content['new-585cf5b1-62d1-423f-a7d2-9c73e3c1a831'] = $pane;
  $display->panels['right'][1] = 'new-585cf5b1-62d1-423f-a7d2-9c73e3c1a831';
  $pane = new stdClass();
  $pane->pid = 'new-c6b08e14-f64c-4f44-9651-3ab1dc402297';
  $pane->panel = 'right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '12781',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-7 suffix-1 akaa-footer-pane',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c6b08e14-f64c-4f44-9651-3ab1dc402297';
  $display->content['new-c6b08e14-f64c-4f44-9651-3ab1dc402297'] = $pane;
  $display->panels['right'][2] = 'new-c6b08e14-f64c-4f44-9651-3ab1dc402297';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['akaa_footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_menus';
  $mini->category = '';
  $mini->admin_title = 'Footer Menus';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_24_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa900da4-5413-41f9-b459-aace9e801c99';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer_menus';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1a233748-8fce-4165-9807-271184043300';
  $pane->panel = 'middle';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-quick-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'menu-quick-links',
    'parent_mlid' => 0,
    'parent' => 'menu-quick-links:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'expanded' => 0,
    'sort' => 0,
    'override_title' => 1,
    'override_title_text' => 'Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-9',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a233748-8fce-4165-9807-271184043300';
  $display->content['new-1a233748-8fce-4165-9807-271184043300'] = $pane;
  $display->panels['middle'][0] = 'new-1a233748-8fce-4165-9807-271184043300';
  $pane = new stdClass();
  $pane->pid = 'new-9709eb9e-0534-4374-9a3b-8151002ae162';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-131';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'agencies/aga-khan-award-architecture-0
architecture
architecture/*
our-agencies/aga-khan-music-initiative
akmi
akmi/*
award-cycle
award-cycle/*',
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
    'css_id' => '',
    'css_class' => 'social-share-footer',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9709eb9e-0534-4374-9a3b-8151002ae162';
  $display->content['new-9709eb9e-0534-4374-9a3b-8151002ae162'] = $pane;
  $display->panels['middle'][1] = 'new-9709eb9e-0534-4374-9a3b-8151002ae162';
  $pane = new stdClass();
  $pane->pid = 'new-29903335-0d7f-4d73-b474-55df6e6ca247';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-151';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'architecture
architecture/*
award-cycle/*',
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '29903335-0d7f-4d73-b474-55df6e6ca247';
  $display->content['new-29903335-0d7f-4d73-b474-55df6e6ca247'] = $pane;
  $display->panels['middle'][2] = 'new-29903335-0d7f-4d73-b474-55df6e6ca247';
  $pane = new stdClass();
  $pane->pid = 'new-8913c612-129e-423c-8137-6f5029f45cd0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-166';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'akmi
akmi/*',
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8913c612-129e-423c-8137-6f5029f45cd0';
  $display->content['new-8913c612-129e-423c-8137-6f5029f45cd0'] = $pane;
  $display->panels['middle'][3] = 'new-8913c612-129e-423c-8137-6f5029f45cd0';
  $pane = new stdClass();
  $pane->pid = 'new-e2e61bd8-8e2f-4898-8337-6e735811ce35';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-161';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'architecture
architecture/*
award-cycle/*',
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e2e61bd8-8e2f-4898-8337-6e735811ce35';
  $display->content['new-e2e61bd8-8e2f-4898-8337-6e735811ce35'] = $pane;
  $display->panels['middle'][4] = 'new-e2e61bd8-8e2f-4898-8337-6e735811ce35';
  $pane = new stdClass();
  $pane->pid = 'new-e921f3e1-50f8-4931-a437-848ef9275e1d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'What we do',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-5',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e921f3e1-50f8-4931-a437-848ef9275e1d';
  $display->content['new-e921f3e1-50f8-4931-a437-848ef9275e1d'] = $pane;
  $display->panels['middle'][5] = 'new-e921f3e1-50f8-4931-a437-848ef9275e1d';
  $pane = new stdClass();
  $pane->pid = 'new-aab87926-71ae-45c4-86a4-2ab00f95d007';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'agencies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => 'Our Agencies',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-9',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'aab87926-71ae-45c4-86a4-2ab00f95d007';
  $display->content['new-aab87926-71ae-45c4-86a4-2ab00f95d007'] = $pane;
  $display->panels['middle'][6] = 'new-aab87926-71ae-45c4-86a4-2ab00f95d007';
  $pane = new stdClass();
  $pane->pid = 'new-c57c8153-24c0-4c00-8436-7cae1bbca0e9';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'geography_footer_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Where we work',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-11',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'c57c8153-24c0-4c00-8436-7cae1bbca0e9';
  $display->content['new-c57c8153-24c0-4c00-8436-7cae1bbca0e9'] = $pane;
  $display->panels['middle'][7] = 'new-c57c8153-24c0-4c00-8436-7cae1bbca0e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_menus'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'geography_footer_menu';
  $mini->category = '';
  $mini->admin_title = 'Geography Footer Menu';
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
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Geographies';
  $display->uuid = '2fd99608-baef-4aff-99d7-1adcbe948c5f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'geography_footer_menu';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6149f60d-1179-43d9-929e-f406e0f79993';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-8';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6149f60d-1179-43d9-929e-f406e0f79993';
  $display->content['new-6149f60d-1179-43d9-929e-f406e0f79993'] = $pane;
  $display->panels['middle'][0] = 'new-6149f60d-1179-43d9-929e-f406e0f79993';
  $pane = new stdClass();
  $pane->pid = 'new-44de811c-d405-4e91-9c5e-ac8b01c28475';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-9';
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
  $pane->uuid = '44de811c-d405-4e91-9c5e-ac8b01c28475';
  $display->content['new-44de811c-d405-4e91-9c5e-ac8b01c28475'] = $pane;
  $display->panels['middle'][1] = 'new-44de811c-d405-4e91-9c5e-ac8b01c28475';
  $pane = new stdClass();
  $pane->pid = 'new-fb940634-7a72-4568-9eea-807cc6151363';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-11';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fb940634-7a72-4568-9eea-807cc6151363';
  $display->content['new-fb940634-7a72-4568-9eea-807cc6151363'] = $pane;
  $display->panels['middle'][2] = 'new-fb940634-7a72-4568-9eea-807cc6151363';
  $pane = new stdClass();
  $pane->pid = 'new-55ce85c6-7db3-4599-8b8d-f78d04aabbea';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-10';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '55ce85c6-7db3-4599-8b8d-f78d04aabbea';
  $display->content['new-55ce85c6-7db3-4599-8b8d-f78d04aabbea'] = $pane;
  $display->panels['middle'][3] = 'new-55ce85c6-7db3-4599-8b8d-f78d04aabbea';
  $pane = new stdClass();
  $pane->pid = 'new-b7d40b62-73f9-4481-bddb-0d4b88e6a528';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-12';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b7d40b62-73f9-4481-bddb-0d4b88e6a528';
  $display->content['new-b7d40b62-73f9-4481-bddb-0d4b88e6a528'] = $pane;
  $display->panels['middle'][4] = 'new-b7d40b62-73f9-4481-bddb-0d4b88e6a528';
  $pane = new stdClass();
  $pane->pid = 'new-bcd45005-78d9-4ae0-a2e5-68953e8a89ac';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-14';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'bcd45005-78d9-4ae0-a2e5-68953e8a89ac';
  $display->content['new-bcd45005-78d9-4ae0-a2e5-68953e8a89ac'] = $pane;
  $display->panels['middle'][5] = 'new-bcd45005-78d9-4ae0-a2e5-68953e8a89ac';
  $pane = new stdClass();
  $pane->pid = 'new-4f797311-4419-461d-951a-77319b4c586d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-13';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '4f797311-4419-461d-951a-77319b4c586d';
  $display->content['new-4f797311-4419-461d-951a-77319b4c586d'] = $pane;
  $display->panels['middle'][6] = 'new-4f797311-4419-461d-951a-77319b4c586d';
  $pane = new stdClass();
  $pane->pid = 'new-f02bc23f-27ff-45ef-9be0-57a35b1886a9';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-15';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f02bc23f-27ff-45ef-9be0-57a35b1886a9';
  $display->content['new-f02bc23f-27ff-45ef-9be0-57a35b1886a9'] = $pane;
  $display->panels['middle'][7] = 'new-f02bc23f-27ff-45ef-9be0-57a35b1886a9';
  $pane = new stdClass();
  $pane->pid = 'new-38edfbfc-0b8e-4b6e-a08f-ac974fbbaacb';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-16';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '38edfbfc-0b8e-4b6e-a08f-ac974fbbaacb';
  $display->content['new-38edfbfc-0b8e-4b6e-a08f-ac974fbbaacb'] = $pane;
  $display->panels['middle'][8] = 'new-38edfbfc-0b8e-4b6e-a08f-ac974fbbaacb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6149f60d-1179-43d9-929e-f406e0f79993';
  $mini->display = $display;
  $export['geography_footer_menu'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'hub_page_subpage_logo';
  $mini->category = '';
  $mini->admin_title = 'Hub Page subpage logo';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a1e802c3-1e98-4ed1-a77d-9ccc131c906a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'hub_page_subpage_logo';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['hub_page_subpage_logo'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sharethis';
  $mini->category = 'Mini panels';
  $mini->admin_title = 'share this, print';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
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
  $display->uuid = '16871399-f96d-4255-8e0c-c10ac132f53d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'sharethis';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-19542934-f700-4790-80a0-fb0debc57066';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '19542934-f700-4790-80a0-fb0debc57066';
  $display->content['new-19542934-f700-4790-80a0-fb0debc57066'] = $pane;
  $display->panels['middle'][0] = 'new-19542934-f700-4790-80a0-fb0debc57066';
  $pane = new stdClass();
  $pane->pid = 'new-6469b1d6-b58f-40d4-9dc0-a78dd4fea92e';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'print-print-links';
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
  $pane->uuid = '6469b1d6-b58f-40d4-9dc0-a78dd4fea92e';
  $display->content['new-6469b1d6-b58f-40d4-9dc0-a78dd4fea92e'] = $pane;
  $display->panels['middle'][1] = 'new-6469b1d6-b58f-40d4-9dc0-a78dd4fea92e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-19542934-f700-4790-80a0-fb0debc57066';
  $mini->display = $display;
  $export['sharethis'] = $mini;

  return $export;
}
