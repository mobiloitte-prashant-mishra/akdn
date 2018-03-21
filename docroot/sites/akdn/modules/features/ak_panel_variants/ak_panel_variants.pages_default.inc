<?php

/**
 * @file
 * ak_panel_variants.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ak_panel_variants_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Agency',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          13 => '13',
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
          11 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Agency [field_agency])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_agency-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'agency' => 'agency',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'agencies/aga-khan-award-architecture-0
architecture
node/22106
our-agencies/aga-khan-music-initiative
akmi',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_threerow_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce282776-5ff5-4a94-be98-679b9895383e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-26f85847-41fe-4fc3-bcbe-8bf00626eb12';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'manual_about_page';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-23',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '26f85847-41fe-4fc3-bcbe-8bf00626eb12';
  $display->content['new-26f85847-41fe-4fc3-bcbe-8bf00626eb12'] = $pane;
  $display->panels['bottom'][0] = 'new-26f85847-41fe-4fc3-bcbe-8bf00626eb12';
  $pane = new stdClass();
  $pane->pid = 'new-fc23f384-a3d8-4f68-9f8a-ae7cc75354d5';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-18',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fc23f384-a3d8-4f68-9f8a-ae7cc75354d5';
  $display->content['new-fc23f384-a3d8-4f68-9f8a-ae7cc75354d5'] = $pane;
  $display->panels['bottom'][1] = 'new-fc23f384-a3d8-4f68-9f8a-ae7cc75354d5';
  $pane = new stdClass();
  $pane->pid = 'new-2017e0c7-99af-4156-abd1-8cc01e008589';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_7',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2017e0c7-99af-4156-abd1-8cc01e008589';
  $display->content['new-2017e0c7-99af-4156-abd1-8cc01e008589'] = $pane;
  $display->panels['bottom'][2] = 'new-2017e0c7-99af-4156-abd1-8cc01e008589';
  $pane = new stdClass();
  $pane->pid = 'new-b745c1a4-df30-42f4-987a-cd71a9c54219';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_8',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b745c1a4-df30-42f4-987a-cd71a9c54219';
  $display->content['new-b745c1a4-df30-42f4-987a-cd71a9c54219'] = $pane;
  $display->panels['bottom'][3] = 'new-b745c1a4-df30-42f4-987a-cd71a9c54219';
  $pane = new stdClass();
  $pane->pid = 'new-779a34fa-ec9d-411e-bdf5-0c09c8b33e73';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_9',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '779a34fa-ec9d-411e-bdf5-0c09c8b33e73';
  $display->content['new-779a34fa-ec9d-411e-bdf5-0c09c8b33e73'] = $pane;
  $display->panels['bottom'][4] = 'new-779a34fa-ec9d-411e-bdf5-0c09c8b33e73';
  $pane = new stdClass();
  $pane->pid = 'new-bdce07c5-4751-43dc-a1fa-80b5981d592d';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_10',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->uuid = 'bdce07c5-4751-43dc-a1fa-80b5981d592d';
  $display->content['new-bdce07c5-4751-43dc-a1fa-80b5981d592d'] = $pane;
  $display->panels['bottom'][5] = 'new-bdce07c5-4751-43dc-a1fa-80b5981d592d';
  $pane = new stdClass();
  $pane->pid = 'new-da73ac31-f060-49f0-ad46-5e9c5d0f727d';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'projects';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_enable_project_slider',
        'settings' => array(
          'field_enable_project_slider' => array(
            'en' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_enable_project_slider_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-24',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'da73ac31-f060-49f0-ad46-5e9c5d0f727d';
  $display->content['new-da73ac31-f060-49f0-ad46-5e9c5d0f727d'] = $pane;
  $display->panels['bottom'][6] = 'new-da73ac31-f060-49f0-ad46-5e9c5d0f727d';
  $pane = new stdClass();
  $pane->pid = 'new-cb47b075-24ca-4ad5-a02b-2b5ab89f884b';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'agency_additional_footer';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_turn_on_secondary_footer',
        'settings' => array(
          'field_turn_on_secondary_footer' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_turn_on_secondary_footer_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-24',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'cb47b075-24ca-4ad5-a02b-2b5ab89f884b';
  $display->content['new-cb47b075-24ca-4ad5-a02b-2b5ab89f884b'] = $pane;
  $display->panels['bottom'][7] = 'new-cb47b075-24ca-4ad5-a02b-2b5ab89f884b';
  $pane = new stdClass();
  $pane->pid = 'new-45884e68-22f7-4b75-9776-ab82ab06f7af';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Banner automatic',
          'php' => 'global $language;
  $node = $contexts[\'argument_entity_id:node_1\']->data;
  if(!empty($node->field_featured_content_area)){
    $banner = $node->field_featured_content_area[$language->language][0][\'value\'];
    if(!$banner){ return true; }
  }

  ',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45884e68-22f7-4b75-9776-ab82ab06f7af';
  $display->content['new-45884e68-22f7-4b75-9776-ab82ab06f7af'] = $pane;
  $display->panels['middle'][0] = 'new-45884e68-22f7-4b75-9776-ab82ab06f7af';
  $pane = new stdClass();
  $pane->pid = 'new-08482cf7-0c01-4f12-b738-3cd5141e613e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow_manual';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Banner manual',
          'php' => 'global $language;
  $node = $contexts[\'argument_entity_id:node_1\']->data;
  if(!empty($node->field_featured_content_area)){
    $banner = $node->field_featured_content_area[$language->language][0][\'value\'];
    if($banner){ return true; }
  }',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '08482cf7-0c01-4f12-b738-3cd5141e613e';
  $display->content['new-08482cf7-0c01-4f12-b738-3cd5141e613e'] = $pane;
  $display->panels['middle'][1] = 'new-08482cf7-0c01-4f12-b738-3cd5141e613e';
  $pane = new stdClass();
  $pane->pid = 'new-dc92b67e-3607-42b0-8c4a-2c3cc304b004';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About page information',
    'title' => '',
    'body' => '<?php
  $node = menu_get_object();
  print \'<div class = "whatsnew-right-content">\';
  if (isset($node->field_about_page)) {
    $about = node_load(reset($node->field_about_page)[0][\'nid\']);
    if (isset($about->nid)) {
      print \'<p class = "whats-new-gold">ABOUT THE</p>\';
      print \'<div class = "grid-whatsnew-block_subtitle">\'. reset($about->field_short_title)[0][\'value\'] .\'</div>\';
      if (empty(reset($about->body)[0][\'value\'])) {
        if(!empty(reset($about->body)[0][\'summary\'])) {
          print \'<div class="grid-whatsnew-block_body">\'. reset($about->body)[0][\'summary\'] .\' </div>\';
        }
      }
      else {
        if(!empty(reset($about->body)[0][\'summary\'])) {
          print \'<div class="grid-whatsnew-block_body">\'. reset($about->body)[0][\'summary\'] .\' <a  href="\'. url("node/{$about->nid}") .\'" class= "views-more-link">More</a></div>\';
        }
        else {
          print \'<div class="grid-whatsnew-block_body">\'. text_summary(reset($about->body)[0][\'value\'], reset($about->body)[0][\'format\'], 1200) .\' <a  href="\'. url("node/{$about->nid}") .\'" class= "views-more-link">More</a></div>\';
        }
      }
      print \'</div>\';
    }
  }
  ?>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-18 suffix-5 hub-about-short-title whatsnew-right',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dc92b67e-3607-42b0-8c4a-2c3cc304b004';
  $display->content['new-dc92b67e-3607-42b0-8c4a-2c3cc304b004'] = $pane;
  $display->panels['middle'][2] = 'new-dc92b67e-3607-42b0-8c4a-2c3cc304b004';
  $pane = new stdClass();
  $pane->pid = 'new-e3b95231-6db3-43b1-b5e6-1c1d8dd58630';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'country_hub_pages',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'geography-page print-wrapper',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e3b95231-6db3-43b1-b5e6-1c1d8dd58630';
  $display->content['new-e3b95231-6db3-43b1-b5e6-1c1d8dd58630'] = $pane;
  $display->panels['middle'][3] = 'new-e3b95231-6db3-43b1-b5e6-1c1d8dd58630';
  $pane = new stdClass();
  $pane->pid = 'new-766d7040-33d1-44e8-93d3-cf1ea7c20732';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class= "print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '766d7040-33d1-44e8-93d3-cf1ea7c20732';
  $display->content['new-766d7040-33d1-44e8-93d3-cf1ea7c20732'] = $pane;
  $display->panels['middle'][4] = 'new-766d7040-33d1-44e8-93d3-cf1ea7c20732';
  $pane = new stdClass();
  $pane->pid = 'new-b8c93586-0cb0-48be-9e4b-7ea5a6737c36';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-news_and_resources_links';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b8c93586-0cb0-48be-9e4b-7ea5a6737c36';
  $display->content['new-b8c93586-0cb0-48be-9e4b-7ea5a6737c36'] = $pane;
  $display->panels['middle'][5] = 'new-b8c93586-0cb0-48be-9e4b-7ea5a6737c36';
  $pane = new stdClass();
  $pane->pid = 'new-8ab615f9-7e22-487d-b26c-6091b971117d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-what_we_do_news_and_resources';
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
  $pane->uuid = '8ab615f9-7e22-487d-b26c-6091b971117d';
  $display->content['new-8ab615f9-7e22-487d-b26c-6091b971117d'] = $pane;
  $display->panels['middle'][6] = 'new-8ab615f9-7e22-487d-b26c-6091b971117d';
  $pane = new stdClass();
  $pane->pid = 'new-327732db-ca2f-4e6f-b2c4-d6d8f97592a9';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '327732db-ca2f-4e6f-b2c4-d6d8f97592a9';
  $display->content['new-327732db-ca2f-4e6f-b2c4-d6d8f97592a9'] = $pane;
  $display->panels['middle'][7] = 'new-327732db-ca2f-4e6f-b2c4-d6d8f97592a9';
  $pane = new stdClass();
  $pane->pid = 'new-ac216e9a-9ea3-4da6-a776-aae4136d9d75';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'ac216e9a-9ea3-4da6-a776-aae4136d9d75';
  $display->content['new-ac216e9a-9ea3-4da6-a776-aae4136d9d75'] = $pane;
  $display->panels['middle'][8] = 'new-ac216e9a-9ea3-4da6-a776-aae4136d9d75';
  $pane = new stdClass();
  $pane->pid = 'new-a16ee31f-1fdc-4473-8db4-b1b06e0c92d4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_sheet_block';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'a16ee31f-1fdc-4473-8db4-b1b06e0c92d4';
  $display->content['new-a16ee31f-1fdc-4473-8db4-b1b06e0c92d4'] = $pane;
  $display->panels['middle'][9] = 'new-a16ee31f-1fdc-4473-8db4-b1b06e0c92d4';
  $pane = new stdClass();
  $pane->pid = 'new-6c8b4cb7-7543-4837-b8d9-acf16473793b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_block_show_hide';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Has content',
          'php' => '$view = views_get_view_result(\'facts_blocks\', \'facts_block\', arg(1));
  $result = count($view);
  if (!empty($result)) {
  return true;
  }',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '6c8b4cb7-7543-4837-b8d9-acf16473793b';
  $display->content['new-6c8b4cb7-7543-4837-b8d9-acf16473793b'] = $pane;
  $display->panels['middle'][10] = 'new-6c8b4cb7-7543-4837-b8d9-acf16473793b';
  $pane = new stdClass();
  $pane->pid = 'new-29ad37ee-fe21-45af-9c93-2ccaa6dfac03';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'manual_fact_blocks',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '29ad37ee-fe21-45af-9c93-2ccaa6dfac03';
  $display->content['new-29ad37ee-fe21-45af-9c93-2ccaa6dfac03'] = $pane;
  $display->panels['middle'][11] = 'new-29ad37ee-fe21-45af-9c93-2ccaa6dfac03';
  $pane = new stdClass();
  $pane->pid = 'new-e8773a2a-98e6-468b-8c56-744f91eed0bc';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'e8773a2a-98e6-468b-8c56-744f91eed0bc';
  $display->content['new-e8773a2a-98e6-468b-8c56-744f91eed0bc'] = $pane;
  $display->panels['middle'][12] = 'new-e8773a2a-98e6-468b-8c56-744f91eed0bc';
  $pane = new stdClass();
  $pane->pid = 'new-2a9eab19-11f0-45d8-9d35-cef6aa1acb44';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '2a9eab19-11f0-45d8-9d35-cef6aa1acb44';
  $display->content['new-2a9eab19-11f0-45d8-9d35-cef6aa1acb44'] = $pane;
  $display->panels['middle'][13] = 'new-2a9eab19-11f0-45d8-9d35-cef6aa1acb44';
  $pane = new stdClass();
  $pane->pid = 'new-1269de14-8dac-4629-bf98-44a845ea9f79';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '1269de14-8dac-4629-bf98-44a845ea9f79';
  $display->content['new-1269de14-8dac-4629-bf98-44a845ea9f79'] = $pane;
  $display->panels['middle'][14] = 'new-1269de14-8dac-4629-bf98-44a845ea9f79';
  $pane = new stdClass();
  $pane->pid = 'new-90472a50-b1aa-49f3-aae9-61579b72000a';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '90472a50-b1aa-49f3-aae9-61579b72000a';
  $display->content['new-90472a50-b1aa-49f3-aae9-61579b72000a'] = $pane;
  $display->panels['middle'][15] = 'new-90472a50-b1aa-49f3-aae9-61579b72000a';
  $pane = new stdClass();
  $pane->pid = 'new-d2a67699-3ffd-4f96-9076-cb5068a30827';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'd2a67699-3ffd-4f96-9076-cb5068a30827';
  $display->content['new-d2a67699-3ffd-4f96-9076-cb5068a30827'] = $pane;
  $display->panels['middle'][16] = 'new-d2a67699-3ffd-4f96-9076-cb5068a30827';
  $pane = new stdClass();
  $pane->pid = 'new-72b065d7-25e6-4f1a-b936-a9780bd273c3';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_agency_logo_with_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'agency_listing_logo_flex',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'agencies_logo',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '72b065d7-25e6-4f1a-b936-a9780bd273c3';
  $display->content['new-72b065d7-25e6-4f1a-b936-a9780bd273c3'] = $pane;
  $display->panels['top'][0] = 'new-72b065d7-25e6-4f1a-b936-a9780bd273c3';
  $pane = new stdClass();
  $pane->pid = 'new-1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'agencies_title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'agencies_title_wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3';
  $display->content['new-1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3'] = $pane;
  $display->panels['top'][1] = 'new-1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3';
  $pane = new stdClass();
  $pane->pid = 'new-dc04e75e-9a3e-46a4-bc59-8c22975876c2';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_breadcrumb_trail';
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
  $pane->uuid = 'dc04e75e-9a3e-46a4-bc59-8c22975876c2';
  $display->content['new-dc04e75e-9a3e-46a4-bc59-8c22975876c2'] = $pane;
  $display->panels['top'][2] = 'new-dc04e75e-9a3e-46a4-bc59-8c22975876c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'AKMI Video',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'podcast' => 'podcast',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:podcast:field_akmi_pages',
          'settings' => array(
            'field_akmi_pages' => array(
              'und' => array(
                0 => array(
                  'tid' => '8546',
                ),
              ),
            ),
            'field_akmi_pages_tid' => '8546',
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
  $display->uuid = '3457a4fd-85d8-4131-b622-749f2cdd255a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_10';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e869fc44-38bb-436c-95d3-3d2415e24dcc';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_archive_page_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akmi-podcast-video',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e869fc44-38bb-436c-95d3-3d2415e24dcc';
  $display->content['new-e869fc44-38bb-436c-95d3-3d2415e24dcc'] = $pane;
  $display->panels['middle'][0] = 'new-e869fc44-38bb-436c-95d3-3d2415e24dcc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'AKMI Audio',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'podcast' => 'podcast',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:podcast:field_akmi_pages',
          'settings' => array(
            'field_akmi_pages' => array(
              'und' => array(
                0 => array(
                  'tid' => '8531',
                ),
              ),
            ),
            'field_akmi_pages_tid' => '8531',
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
  $display->uuid = 'f25f2f2a-734e-4372-8872-0d238c3fa6dd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_11';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-01c54cfe-0681-483f-a5fa-dbdfe3ad75d2';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_archive_page_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_7',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '01c54cfe-0681-483f-a5fa-dbdfe3ad75d2';
  $display->content['new-01c54cfe-0681-483f-a5fa-dbdfe3ad75d2'] = $pane;
  $display->panels['middle'][0] = 'new-01c54cfe-0681-483f-a5fa-dbdfe3ad75d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_12';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -6;
  $handler->conf = array(
    'title' => 'Akmi',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akmi-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          13 => '13',
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
          11 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Agency [field_agency])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_agency-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'agency' => 'agency',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'our-agencies/aga-khan-music-initiative
node/22106
akmi',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_threerow_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce282776-5ff5-4a94-be98-679b9895383e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_12';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-26f85847-41fe-4fc3-bcbe-8bf00626eb12';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'manual_about_page';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-23',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '26f85847-41fe-4fc3-bcbe-8bf00626eb12';
  $display->content['new-26f85847-41fe-4fc3-bcbe-8bf00626eb12'] = $pane;
  $display->panels['bottom'][0] = 'new-26f85847-41fe-4fc3-bcbe-8bf00626eb12';
  $pane = new stdClass();
  $pane->pid = 'new-fc23f384-a3d8-4f68-9f8a-ae7cc75354d5';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-18',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fc23f384-a3d8-4f68-9f8a-ae7cc75354d5';
  $display->content['new-fc23f384-a3d8-4f68-9f8a-ae7cc75354d5'] = $pane;
  $display->panels['bottom'][1] = 'new-fc23f384-a3d8-4f68-9f8a-ae7cc75354d5';
  $pane = new stdClass();
  $pane->pid = 'new-2017e0c7-99af-4156-abd1-8cc01e008589';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_7',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2017e0c7-99af-4156-abd1-8cc01e008589';
  $display->content['new-2017e0c7-99af-4156-abd1-8cc01e008589'] = $pane;
  $display->panels['bottom'][2] = 'new-2017e0c7-99af-4156-abd1-8cc01e008589';
  $pane = new stdClass();
  $pane->pid = 'new-b745c1a4-df30-42f4-987a-cd71a9c54219';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_8',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b745c1a4-df30-42f4-987a-cd71a9c54219';
  $display->content['new-b745c1a4-df30-42f4-987a-cd71a9c54219'] = $pane;
  $display->panels['bottom'][3] = 'new-b745c1a4-df30-42f4-987a-cd71a9c54219';
  $pane = new stdClass();
  $pane->pid = 'new-779a34fa-ec9d-411e-bdf5-0c09c8b33e73';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_9',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '779a34fa-ec9d-411e-bdf5-0c09c8b33e73';
  $display->content['new-779a34fa-ec9d-411e-bdf5-0c09c8b33e73'] = $pane;
  $display->panels['bottom'][4] = 'new-779a34fa-ec9d-411e-bdf5-0c09c8b33e73';
  $pane = new stdClass();
  $pane->pid = 'new-bdce07c5-4751-43dc-a1fa-80b5981d592d';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_10',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->uuid = 'bdce07c5-4751-43dc-a1fa-80b5981d592d';
  $display->content['new-bdce07c5-4751-43dc-a1fa-80b5981d592d'] = $pane;
  $display->panels['bottom'][5] = 'new-bdce07c5-4751-43dc-a1fa-80b5981d592d';
  $pane = new stdClass();
  $pane->pid = 'new-da73ac31-f060-49f0-ad46-5e9c5d0f727d';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'projects';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_enable_project_slider',
        'settings' => array(
          'field_enable_project_slider' => array(
            'en' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_enable_project_slider_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-24',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'da73ac31-f060-49f0-ad46-5e9c5d0f727d';
  $display->content['new-da73ac31-f060-49f0-ad46-5e9c5d0f727d'] = $pane;
  $display->panels['bottom'][6] = 'new-da73ac31-f060-49f0-ad46-5e9c5d0f727d';
  $pane = new stdClass();
  $pane->pid = 'new-cb47b075-24ca-4ad5-a02b-2b5ab89f884b';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'agency_additional_footer';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_turn_on_secondary_footer',
        'settings' => array(
          'field_turn_on_secondary_footer' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_turn_on_secondary_footer_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-24',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'cb47b075-24ca-4ad5-a02b-2b5ab89f884b';
  $display->content['new-cb47b075-24ca-4ad5-a02b-2b5ab89f884b'] = $pane;
  $display->panels['bottom'][7] = 'new-cb47b075-24ca-4ad5-a02b-2b5ab89f884b';
  $pane = new stdClass();
  $pane->pid = 'new-45884e68-22f7-4b75-9776-ab82ab06f7af';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_featured_content_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45884e68-22f7-4b75-9776-ab82ab06f7af';
  $display->content['new-45884e68-22f7-4b75-9776-ab82ab06f7af'] = $pane;
  $display->panels['middle'][0] = 'new-45884e68-22f7-4b75-9776-ab82ab06f7af';
  $pane = new stdClass();
  $pane->pid = 'new-08482cf7-0c01-4f12-b738-3cd5141e613e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow_manual';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_featured_content_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '08482cf7-0c01-4f12-b738-3cd5141e613e';
  $display->content['new-08482cf7-0c01-4f12-b738-3cd5141e613e'] = $pane;
  $display->panels['middle'][1] = 'new-08482cf7-0c01-4f12-b738-3cd5141e613e';
  $pane = new stdClass();
  $pane->pid = 'new-dc92b67e-3607-42b0-8c4a-2c3cc304b004';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About page information',
    'title' => '',
    'body' => '<?php
$node = menu_get_object();
print \'<div class = "whatsnew-right-content">\';
if (isset($node->field_about_page)) {
  $about = node_load($node->field_about_page[$node->language][0][\'nid\']);
  if (isset($about->nid)) {
    print \'<p class = "whats-new-gold">ABOUT THE</p>\';
    $short_title_language = $about->field_short_title;
    print \'<div class = "grid-whatsnew-block_subtitle">\'. $about->field_short_title[key($short_title_language)][0][\'value\'] .\'</div>\';
  if (isset($about->body[$about->language][0][\'summary\']) && !empty($about->body[$about->language][0][\'summary\']))
    print \'<div class="grid-whatsnew-block_body">\'. $about->body[$about->language][0][\'summary\'] .\' <a href="\'. url("node/{$about->nid}" ) .\'" class= "views-more-link">More</a></div>\';
  else
      print \'<div class="grid-whatsnew-block_body">\'. text_summary($about->body[$about->language][0][\'value\'], $about->body[$about->language][0][\'format\'], 1200) .\' <a  href="\'. url("node/{$about->nid}") .\'" class= "views-more-link">More</a></div>\';
  }
  print \'</div>\';
}
?>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-18 suffix-5 hub-about-short-title whatsnew-right',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dc92b67e-3607-42b0-8c4a-2c3cc304b004';
  $display->content['new-dc92b67e-3607-42b0-8c4a-2c3cc304b004'] = $pane;
  $display->panels['middle'][2] = 'new-dc92b67e-3607-42b0-8c4a-2c3cc304b004';
  $pane = new stdClass();
  $pane->pid = 'new-e3b95231-6db3-43b1-b5e6-1c1d8dd58630';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'country_hub_pages',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'geography-page',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e3b95231-6db3-43b1-b5e6-1c1d8dd58630';
  $display->content['new-e3b95231-6db3-43b1-b5e6-1c1d8dd58630'] = $pane;
  $display->panels['middle'][3] = 'new-e3b95231-6db3-43b1-b5e6-1c1d8dd58630';
  $pane = new stdClass();
  $pane->pid = 'new-b8c93586-0cb0-48be-9e4b-7ea5a6737c36';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-news_and_resources_links';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b8c93586-0cb0-48be-9e4b-7ea5a6737c36';
  $display->content['new-b8c93586-0cb0-48be-9e4b-7ea5a6737c36'] = $pane;
  $display->panels['middle'][4] = 'new-b8c93586-0cb0-48be-9e4b-7ea5a6737c36';
  $pane = new stdClass();
  $pane->pid = 'new-8ab615f9-7e22-487d-b26c-6091b971117d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-what_we_do_news_and_resources';
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
  $pane->uuid = '8ab615f9-7e22-487d-b26c-6091b971117d';
  $display->content['new-8ab615f9-7e22-487d-b26c-6091b971117d'] = $pane;
  $display->panels['middle'][5] = 'new-8ab615f9-7e22-487d-b26c-6091b971117d';
  $pane = new stdClass();
  $pane->pid = 'new-a16ee31f-1fdc-4473-8db4-b1b06e0c92d4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_sheet_block';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a16ee31f-1fdc-4473-8db4-b1b06e0c92d4';
  $display->content['new-a16ee31f-1fdc-4473-8db4-b1b06e0c92d4'] = $pane;
  $display->panels['middle'][6] = 'new-a16ee31f-1fdc-4473-8db4-b1b06e0c92d4';
  $pane = new stdClass();
  $pane->pid = 'new-6c8b4cb7-7543-4837-b8d9-acf16473793b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_block_show_hide';
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
  $pane->uuid = '6c8b4cb7-7543-4837-b8d9-acf16473793b';
  $display->content['new-6c8b4cb7-7543-4837-b8d9-acf16473793b'] = $pane;
  $display->panels['middle'][7] = 'new-6c8b4cb7-7543-4837-b8d9-acf16473793b';
  $pane = new stdClass();
  $pane->pid = 'new-29ad37ee-fe21-45af-9c93-2ccaa6dfac03';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'manual_fact_blocks',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
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
  $pane->uuid = '29ad37ee-fe21-45af-9c93-2ccaa6dfac03';
  $display->content['new-29ad37ee-fe21-45af-9c93-2ccaa6dfac03'] = $pane;
  $display->panels['middle'][8] = 'new-29ad37ee-fe21-45af-9c93-2ccaa6dfac03';
  $pane = new stdClass();
  $pane->pid = 'new-2a9eab19-11f0-45d8-9d35-cef6aa1acb44';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '2a9eab19-11f0-45d8-9d35-cef6aa1acb44';
  $display->content['new-2a9eab19-11f0-45d8-9d35-cef6aa1acb44'] = $pane;
  $display->panels['middle'][9] = 'new-2a9eab19-11f0-45d8-9d35-cef6aa1acb44';
  $pane = new stdClass();
  $pane->pid = 'new-1269de14-8dac-4629-bf98-44a845ea9f79';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '1269de14-8dac-4629-bf98-44a845ea9f79';
  $display->content['new-1269de14-8dac-4629-bf98-44a845ea9f79'] = $pane;
  $display->panels['middle'][10] = 'new-1269de14-8dac-4629-bf98-44a845ea9f79';
  $pane = new stdClass();
  $pane->pid = 'new-90472a50-b1aa-49f3-aae9-61579b72000a';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '90472a50-b1aa-49f3-aae9-61579b72000a';
  $display->content['new-90472a50-b1aa-49f3-aae9-61579b72000a'] = $pane;
  $display->panels['middle'][11] = 'new-90472a50-b1aa-49f3-aae9-61579b72000a';
  $pane = new stdClass();
  $pane->pid = 'new-d2a67699-3ffd-4f96-9076-cb5068a30827';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'd2a67699-3ffd-4f96-9076-cb5068a30827';
  $display->content['new-d2a67699-3ffd-4f96-9076-cb5068a30827'] = $pane;
  $display->panels['middle'][12] = 'new-d2a67699-3ffd-4f96-9076-cb5068a30827';
  $pane = new stdClass();
  $pane->pid = 'new-72b065d7-25e6-4f1a-b936-a9780bd273c3';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_agency_logo_with_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'agency_listing_logo_flex',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'agencies_logo',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '72b065d7-25e6-4f1a-b936-a9780bd273c3';
  $display->content['new-72b065d7-25e6-4f1a-b936-a9780bd273c3'] = $pane;
  $display->panels['top'][0] = 'new-72b065d7-25e6-4f1a-b936-a9780bd273c3';
  $pane = new stdClass();
  $pane->pid = 'new-1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'agencies_title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'agencies_title_wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3';
  $display->content['new-1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3'] = $pane;
  $display->panels['top'][1] = 'new-1a211e68-9fbb-45cb-b6d6-1cf536d8c7a3';
  $pane = new stdClass();
  $pane->pid = 'new-dc04e75e-9a3e-46a4-bc59-8c22975876c2';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_breadcrumb_trail';
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
  $pane->uuid = 'dc04e75e-9a3e-46a4-bc59-8c22975876c2';
  $display->content['new-dc04e75e-9a3e-46a4-bc59-8c22975876c2'] = $pane;
  $display->panels['top'][2] = 'new-dc04e75e-9a3e-46a4-bc59-8c22975876c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'Article News',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'body-article-news press-release-detail',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'article_type' => 0,
          'media_folders' => 0,
          'podcast_type' => 0,
          'focus_areas' => 0,
          'countries' => 0,
          'agencies' => 0,
          'publication_type' => 0,
          'publication_category' => 0,
          'speech_themes' => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_article_cat',
          'settings' => array(
            'field_article_cat' => array(
              'und' => array(
                0 => array(
                  'tid' => '2',
                ),
              ),
            ),
            'field_article_cat_tid' => '2',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = 'aa06f1f3-ada1-4159-926f-368d4ac1ef13';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_13';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60fdbad6-c09d-46de-a0df-7f09fa242c2c';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center_detail_page_slideshows';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'press_center_detail_pages',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '60fdbad6-c09d-46de-a0df-7f09fa242c2c';
  $display->content['new-60fdbad6-c09d-46de-a0df-7f09fa242c2c'] = $pane;
  $display->panels['left'][0] = 'new-60fdbad6-c09d-46de-a0df-7f09fa242c2c';
  $pane = new stdClass();
  $pane->pid = 'new-5ddfdeb9-46a3-4a27-8648-c7d34bce4cf0';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5ddfdeb9-46a3-4a27-8648-c7d34bce4cf0';
  $display->content['new-5ddfdeb9-46a3-4a27-8648-c7d34bce4cf0'] = $pane;
  $display->panels['left'][1] = 'new-5ddfdeb9-46a3-4a27-8648-c7d34bce4cf0';
  $pane = new stdClass();
  $pane->pid = 'new-5b5f98c7-c885-46be-acfc-9c8f06d354d6';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5b5f98c7-c885-46be-acfc-9c8f06d354d6';
  $display->content['new-5b5f98c7-c885-46be-acfc-9c8f06d354d6'] = $pane;
  $display->panels['left'][2] = 'new-5b5f98c7-c885-46be-acfc-9c8f06d354d6';
  $pane = new stdClass();
  $pane->pid = 'new-2a302b1e-654a-447d-b199-efc5bca0d937';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'wrapper_raw',
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2a302b1e-654a-447d-b199-efc5bca0d937';
  $display->content['new-2a302b1e-654a-447d-b199-efc5bca0d937'] = $pane;
  $display->panels['left'][3] = 'new-2a302b1e-654a-447d-b199-efc5bca0d937';
  $pane = new stdClass();
  $pane->pid = 'new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_article_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $display->content['new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054'] = $pane;
  $display->panels['left'][4] = 'new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $pane = new stdClass();
  $pane->pid = 'new-d106c55c-b3c1-4220-87e7-837c203271bf';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd106c55c-b3c1-4220-87e7-837c203271bf';
  $display->content['new-d106c55c-b3c1-4220-87e7-837c203271bf'] = $pane;
  $display->panels['left'][5] = 'new-d106c55c-b3c1-4220-87e7-837c203271bf';
  $pane = new stdClass();
  $pane->pid = 'new-76dee8a9-4fa2-4f93-bd8a-5f1a4a611bb0';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-language',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '76dee8a9-4fa2-4f93-bd8a-5f1a4a611bb0';
  $display->content['new-76dee8a9-4fa2-4f93-bd8a-5f1a4a611bb0'] = $pane;
  $display->panels['left'][6] = 'new-76dee8a9-4fa2-4f93-bd8a-5f1a4a611bb0';
  $pane = new stdClass();
  $pane->pid = 'new-1397360a-6ff7-499b-8ee2-23032d13a6c0';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '1397360a-6ff7-499b-8ee2-23032d13a6c0';
  $display->content['new-1397360a-6ff7-499b-8ee2-23032d13a6c0'] = $pane;
  $display->panels['left'][7] = 'new-1397360a-6ff7-499b-8ee2-23032d13a6c0';
  $pane = new stdClass();
  $pane->pid = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
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
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $display->content['new-fe90b133-3b04-4ac2-80a7-e680ae96b24b'] = $pane;
  $display->panels['left'][8] = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane = new stdClass();
  $pane->pid = 'new-d5a3c1b9-a472-486b-8efb-fd4231371328';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'd5a3c1b9-a472-486b-8efb-fd4231371328';
  $display->content['new-d5a3c1b9-a472-486b-8efb-fd4231371328'] = $pane;
  $display->panels['left'][9] = 'new-d5a3c1b9-a472-486b-8efb-fd4231371328';
  $pane = new stdClass();
  $pane->pid = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'ce365a39-54a0-4640-a592-f401386db51b';
  $display->content['new-ce365a39-54a0-4640-a592-f401386db51b'] = $pane;
  $display->panels['left'][10] = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane = new stdClass();
  $pane->pid = 'new-68277fb3-a25f-4a33-86e2-fccb3b77dc02';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_12',
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
  $pane->uuid = '68277fb3-a25f-4a33-86e2-fccb3b77dc02';
  $display->content['new-68277fb3-a25f-4a33-86e2-fccb3b77dc02'] = $pane;
  $display->panels['right'][0] = 'new-68277fb3-a25f-4a33-86e2-fccb3b77dc02';
  $pane = new stdClass();
  $pane->pid = 'new-762e4955-3e79-4e8e-a4bd-557ec96d19bf';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'SEE ALSO',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '762e4955-3e79-4e8e-a4bd-557ec96d19bf';
  $display->content['new-762e4955-3e79-4e8e-a4bd-557ec96d19bf'] = $pane;
  $display->panels['right'][1] = 'new-762e4955-3e79-4e8e-a4bd-557ec96d19bf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_13'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_14';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Publications',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node-type-article press-release-detail akdn-publication-details',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'article_type' => 0,
          'media_folders' => 0,
          'podcast_type' => 0,
          'focus_areas' => 0,
          'countries' => 0,
          'agencies' => 0,
          'publication_type' => 0,
          'publication_category' => 0,
          'speech_themes' => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'publication' => 'publication',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa06f1f3-ada1-4159-926f-368d4ac1ef13';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_14';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e4dbd12f-44de-487d-9af2-611f5fbfe9ef';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publication_file';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_url_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'publications_file_url',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4dbd12f-44de-487d-9af2-611f5fbfe9ef';
  $display->content['new-e4dbd12f-44de-487d-9af2-611f5fbfe9ef'] = $pane;
  $display->panels['left'][0] = 'new-e4dbd12f-44de-487d-9af2-611f5fbfe9ef';
  $pane = new stdClass();
  $pane->pid = 'new-052a57ee-f218-444f-835e-1ac92fa16782';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publication_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'colorbox_node_style' => 'medium',
      'colorbox_image_style' => 'medium',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
      'image_link' => 'content',
      'image_style' => 'publications_list_image_style',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'publications_image_path',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '052a57ee-f218-444f-835e-1ac92fa16782';
  $display->content['new-052a57ee-f218-444f-835e-1ac92fa16782'] = $pane;
  $display->panels['left'][1] = 'new-052a57ee-f218-444f-835e-1ac92fa16782';
  $pane = new stdClass();
  $pane->pid = 'new-eccf47b0-a9df-431b-9227-efe39de24e7e';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publication_file';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_download_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'text' => 'Download',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'eccf47b0-a9df-431b-9227-efe39de24e7e';
  $display->content['new-eccf47b0-a9df-431b-9227-efe39de24e7e'] = $pane;
  $display->panels['left'][2] = 'new-eccf47b0-a9df-431b-9227-efe39de24e7e';
  $pane = new stdClass();
  $pane->pid = 'new-b3b70429-4fe9-4ffa-bc54-a98a311dc1ac';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b3b70429-4fe9-4ffa-bc54-a98a311dc1ac';
  $display->content['new-b3b70429-4fe9-4ffa-bc54-a98a311dc1ac'] = $pane;
  $display->panels['left'][3] = 'new-b3b70429-4fe9-4ffa-bc54-a98a311dc1ac';
  $pane = new stdClass();
  $pane->pid = 'new-1c0a9e02-4202-44db-9010-d75257b96a5a';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_article_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1c0a9e02-4202-44db-9010-d75257b96a5a';
  $display->content['new-1c0a9e02-4202-44db-9010-d75257b96a5a'] = $pane;
  $display->panels['left'][4] = 'new-1c0a9e02-4202-44db-9010-d75257b96a5a';
  $pane = new stdClass();
  $pane->pid = 'new-d3926e52-8727-4872-9782-21bad3ba4d68';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publication_isbn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => 'content',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'ISBN',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd3926e52-8727-4872-9782-21bad3ba4d68';
  $display->content['new-d3926e52-8727-4872-9782-21bad3ba4d68'] = $pane;
  $display->panels['left'][5] = 'new-d3926e52-8727-4872-9782-21bad3ba4d68';
  $pane = new stdClass();
  $pane->pid = 'new-0eb6b524-43cc-4b7f-83b3-04c0f6fd649e';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publication_purchase_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Purchase Link',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0eb6b524-43cc-4b7f-83b3-04c0f6fd649e';
  $display->content['new-0eb6b524-43cc-4b7f-83b3-04c0f6fd649e'] = $pane;
  $display->panels['left'][6] = 'new-0eb6b524-43cc-4b7f-83b3-04c0f6fd649e';
  $pane = new stdClass();
  $pane->pid = 'new-d6bbff22-6c30-438c-a158-398ae8be33b5';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_project_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'd6bbff22-6c30-438c-a158-398ae8be33b5';
  $display->content['new-d6bbff22-6c30-438c-a158-398ae8be33b5'] = $pane;
  $display->panels['left'][7] = 'new-d6bbff22-6c30-438c-a158-398ae8be33b5';
  $pane = new stdClass();
  $pane->pid = 'new-17d4c775-222c-4950-9912-1b6b7264184c';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_publications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '17d4c775-222c-4950-9912-1b6b7264184c';
  $display->content['new-17d4c775-222c-4950-9912-1b6b7264184c'] = $pane;
  $display->panels['left'][8] = 'new-17d4c775-222c-4950-9912-1b6b7264184c';
  $pane = new stdClass();
  $pane->pid = 'new-66267e85-4f8a-4de5-b43e-5aa9581a3ff3';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'LANGUAGES',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-language',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '66267e85-4f8a-4de5-b43e-5aa9581a3ff3';
  $display->content['new-66267e85-4f8a-4de5-b43e-5aa9581a3ff3'] = $pane;
  $display->panels['left'][9] = 'new-66267e85-4f8a-4de5-b43e-5aa9581a3ff3';
  $pane = new stdClass();
  $pane->pid = 'new-3479c415-0659-4531-938c-3164599d524e';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'publications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'about_this_publication',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-about-publication',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '3479c415-0659-4531-938c-3164599d524e';
  $display->content['new-3479c415-0659-4531-938c-3164599d524e'] = $pane;
  $display->panels['left'][10] = 'new-3479c415-0659-4531-938c-3164599d524e';
  $pane = new stdClass();
  $pane->pid = 'new-6d135fe9-5d4c-4446-871a-232d223f360e';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publication_isbn';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '6d135fe9-5d4c-4446-871a-232d223f360e';
  $display->content['new-6d135fe9-5d4c-4446-871a-232d223f360e'] = $pane;
  $display->panels['left'][11] = 'new-6d135fe9-5d4c-4446-871a-232d223f360e';
  $pane = new stdClass();
  $pane->pid = 'new-1397360a-6ff7-499b-8ee2-23032d13a6c0';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '1397360a-6ff7-499b-8ee2-23032d13a6c0';
  $display->content['new-1397360a-6ff7-499b-8ee2-23032d13a6c0'] = $pane;
  $display->panels['left'][12] = 'new-1397360a-6ff7-499b-8ee2-23032d13a6c0';
  $pane = new stdClass();
  $pane->pid = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $display->content['new-fe90b133-3b04-4ac2-80a7-e680ae96b24b'] = $pane;
  $display->panels['left'][13] = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane = new stdClass();
  $pane->pid = 'new-40408234-2e89-4826-90ae-0fbeb220822e';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '40408234-2e89-4826-90ae-0fbeb220822e';
  $display->content['new-40408234-2e89-4826-90ae-0fbeb220822e'] = $pane;
  $display->panels['left'][14] = 'new-40408234-2e89-4826-90ae-0fbeb220822e';
  $pane = new stdClass();
  $pane->pid = 'new-062ab28d-3c2d-4378-8867-d7c1dff52ec7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '062ab28d-3c2d-4378-8867-d7c1dff52ec7';
  $display->content['new-062ab28d-3c2d-4378-8867-d7c1dff52ec7'] = $pane;
  $display->panels['left'][15] = 'new-062ab28d-3c2d-4378-8867-d7c1dff52ec7';
  $pane = new stdClass();
  $pane->pid = 'new-514b3b78-bbb8-4286-bf03-782a4fe7bf59';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '514b3b78-bbb8-4286-bf03-782a4fe7bf59';
  $display->content['new-514b3b78-bbb8-4286-bf03-782a4fe7bf59'] = $pane;
  $display->panels['left'][16] = 'new-514b3b78-bbb8-4286-bf03-782a4fe7bf59';
  $pane = new stdClass();
  $pane->pid = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'ce365a39-54a0-4640-a592-f401386db51b';
  $display->content['new-ce365a39-54a0-4640-a592-f401386db51b'] = $pane;
  $display->panels['left'][17] = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane = new stdClass();
  $pane->pid = 'new-efe80136-37de-4cfe-b7b1-fb83eefbd2fe';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'publications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'override_title' => 0,
    'override_title_text' => 'Latest On AKDN',
    'context' => array(
      0 => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'efe80136-37de-4cfe-b7b1-fb83eefbd2fe';
  $display->content['new-efe80136-37de-4cfe-b7b1-fb83eefbd2fe'] = $pane;
  $display->panels['right'][0] = 'new-efe80136-37de-4cfe-b7b1-fb83eefbd2fe';
  $pane = new stdClass();
  $pane->pid = 'new-bc87d640-c35e-4dda-8867-29fb34a7fdf9';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
  $pane->shown = FALSE;
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
    'display' => 'block_8',
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
  $pane->uuid = 'bc87d640-c35e-4dda-8867-29fb34a7fdf9';
  $display->content['new-bc87d640-c35e-4dda-8867-29fb34a7fdf9'] = $pane;
  $display->panels['right'][1] = 'new-bc87d640-c35e-4dda-8867-29fb34a7fdf9';
  $pane = new stdClass();
  $pane->pid = 'new-aee5fb1f-be0a-4b23-be91-0b5cdb1ec0db';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
  $pane->shown = FALSE;
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
    'display' => 'block_3',
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
  $pane->uuid = 'aee5fb1f-be0a-4b23-be91-0b5cdb1ec0db';
  $display->content['new-aee5fb1f-be0a-4b23-be91-0b5cdb1ec0db'] = $pane;
  $display->panels['right'][2] = 'new-aee5fb1f-be0a-4b23-be91-0b5cdb1ec0db';
  $pane = new stdClass();
  $pane->pid = 'new-2c23198d-b71a-4b1f-8eb4-08c66750c43c';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
  $pane->shown = FALSE;
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
    'display' => 'block_7',
    'override_title' => 1,
    'override_title_text' => 'Photographs',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2c23198d-b71a-4b1f-8eb4-08c66750c43c';
  $display->content['new-2c23198d-b71a-4b1f-8eb4-08c66750c43c'] = $pane;
  $display->panels['right'][3] = 'new-2c23198d-b71a-4b1f-8eb4-08c66750c43c';
  $pane = new stdClass();
  $pane->pid = 'new-0f7ac85a-443b-4581-ad9e-e8b9bf03dc9f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'SEE ALSO',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0f7ac85a-443b-4581-ad9e-e8b9bf03dc9f';
  $display->content['new-0f7ac85a-443b-4581-ad9e-e8b9bf03dc9f'] = $pane;
  $display->panels['right'][4] = 'new-0f7ac85a-443b-4581-ad9e-e8b9bf03dc9f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_14'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_15';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'title' => 'Press Release',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'press-release-detail press-release-detail-type',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'article_type' => 0,
          'media_folders' => 0,
          'podcast_type' => 0,
          'focus_areas' => 0,
          'countries' => 0,
          'agencies' => 0,
          'publication_type' => 0,
          'publication_category' => 0,
          'speech_themes' => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_article_cat',
          'settings' => array(
            'field_article_cat' => array(
              'und' => array(
                0 => array(
                  'tid' => '4',
                ),
              ),
            ),
            'field_article_cat_tid' => '4',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = 'aa06f1f3-ada1-4159-926f-368d4ac1ef13';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_15';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1a85fa1b-a08c-4830-8c6f-a51f56e442f3';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center_detail_page_slideshows';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'press_center_detail_pages',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '1a85fa1b-a08c-4830-8c6f-a51f56e442f3';
  $display->content['new-1a85fa1b-a08c-4830-8c6f-a51f56e442f3'] = $pane;
  $display->panels['left'][0] = 'new-1a85fa1b-a08c-4830-8c6f-a51f56e442f3';
  $pane = new stdClass();
  $pane->pid = 'new-a934ddda-3b96-493b-9dde-b4b75bf9a169';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'a934ddda-3b96-493b-9dde-b4b75bf9a169';
  $display->content['new-a934ddda-3b96-493b-9dde-b4b75bf9a169'] = $pane;
  $display->panels['left'][1] = 'new-a934ddda-3b96-493b-9dde-b4b75bf9a169';
  $pane = new stdClass();
  $pane->pid = 'new-02ac1ca6-dfc8-46a1-a418-ea55b41e5e2b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '02ac1ca6-dfc8-46a1-a418-ea55b41e5e2b';
  $display->content['new-02ac1ca6-dfc8-46a1-a418-ea55b41e5e2b'] = $pane;
  $display->panels['left'][2] = 'new-02ac1ca6-dfc8-46a1-a418-ea55b41e5e2b';
  $pane = new stdClass();
  $pane->pid = 'new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_article_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $display->content['new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054'] = $pane;
  $display->panels['left'][3] = 'new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $pane = new stdClass();
  $pane->pid = 'new-9ea4a774-fcdd-4dd9-915c-41c5ea380b0b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9ea4a774-fcdd-4dd9-915c-41c5ea380b0b';
  $display->content['new-9ea4a774-fcdd-4dd9-915c-41c5ea380b0b'] = $pane;
  $display->panels['left'][4] = 'new-9ea4a774-fcdd-4dd9-915c-41c5ea380b0b';
  $pane = new stdClass();
  $pane->pid = 'new-c9a39808-df1a-40d0-95b5-4df82f629624';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'LANGUAGES',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c9a39808-df1a-40d0-95b5-4df82f629624';
  $display->content['new-c9a39808-df1a-40d0-95b5-4df82f629624'] = $pane;
  $display->panels['left'][5] = 'new-c9a39808-df1a-40d0-95b5-4df82f629624';
  $pane = new stdClass();
  $pane->pid = 'new-9c2e1bfd-4ffe-49eb-9c72-24dc1d03564b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_attachment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_download_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'text' => 'PDF',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '9c2e1bfd-4ffe-49eb-9c72-24dc1d03564b';
  $display->content['new-9c2e1bfd-4ffe-49eb-9c72-24dc1d03564b'] = $pane;
  $display->panels['left'][6] = 'new-9c2e1bfd-4ffe-49eb-9c72-24dc1d03564b';
  $pane = new stdClass();
  $pane->pid = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
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
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $display->content['new-fe90b133-3b04-4ac2-80a7-e680ae96b24b'] = $pane;
  $display->panels['left'][7] = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane = new stdClass();
  $pane->pid = 'new-e153faa6-28fb-4bc7-8b35-730cf81db15c';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'e153faa6-28fb-4bc7-8b35-730cf81db15c';
  $display->content['new-e153faa6-28fb-4bc7-8b35-730cf81db15c'] = $pane;
  $display->panels['left'][8] = 'new-e153faa6-28fb-4bc7-8b35-730cf81db15c';
  $pane = new stdClass();
  $pane->pid = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'ce365a39-54a0-4640-a592-f401386db51b';
  $display->content['new-ce365a39-54a0-4640-a592-f401386db51b'] = $pane;
  $display->panels['left'][9] = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane = new stdClass();
  $pane->pid = 'new-967fc408-4dcb-4d89-9e4c-a3f2ed2cdcf3';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_search_pages_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'override_title' => 0,
    'override_title_text' => 'LATEST ON AKDN',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '967fc408-4dcb-4d89-9e4c-a3f2ed2cdcf3';
  $display->content['new-967fc408-4dcb-4d89-9e4c-a3f2ed2cdcf3'] = $pane;
  $display->panels['right'][0] = 'new-967fc408-4dcb-4d89-9e4c-a3f2ed2cdcf3';
  $pane = new stdClass();
  $pane->pid = 'new-762e4955-3e79-4e8e-a4bd-557ec96d19bf';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'SEE ALSO',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '762e4955-3e79-4e8e-a4bd-557ec96d19bf';
  $display->content['new-762e4955-3e79-4e8e-a4bd-557ec96d19bf'] = $pane;
  $display->panels['right'][1] = 'new-762e4955-3e79-4e8e-a4bd-557ec96d19bf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_15'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_16';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'title' => 'Basic Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'basic-page akdn-basic-page akdn-basic-page-about-us',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'article_type' => 0,
          'media_folders' => 0,
          'podcast_type' => 0,
          'focus_areas' => 0,
          'countries' => 0,
          'agencies' => 0,
          'publication_type' => 0,
          'publication_category' => 0,
          'speech_themes' => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:page:field_tags',
          'settings' => array(
            'field_tags' => array(
              'en' => array(
                0 => array(
                  'tid' => '9006',
                  'vid' => '1',
                  'name' => 'about us',
                  'description' => NULL,
                  'format' => NULL,
                  'weight' => '0',
                  'uuid' => '2c2927dc-3de8-442a-a679-cd3894eeb8f6',
                  'vocabulary_machine_name' => 'tags',
                  'metatags' => array(),
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                  'translations' => (object) array(
                    'original' => 'en',
                    'data' => array(
                      'en' => array(
                        'entity_type' => 'taxonomy_term',
                        'entity_id' => '9006',
                        'language' => 'en',
                        'source' => '',
                        'uid' => '1',
                        'status' => '1',
                        'translate' => '0',
                        'created' => '1449839991',
                        'changed' => '1449839991',
                      ),
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'about us',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa06f1f3-ada1-4159-926f-368d4ac1ef13';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_16';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41fc9da0-7fc3-4aad-be99-671fef1b2ce3';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'basic_page_slideshow',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-slideshow',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41fc9da0-7fc3-4aad-be99-671fef1b2ce3';
  $display->content['new-41fc9da0-7fc3-4aad-be99-671fef1b2ce3'] = $pane;
  $display->panels['left'][0] = 'new-41fc9da0-7fc3-4aad-be99-671fef1b2ce3';
  $pane = new stdClass();
  $pane->pid = 'new-24754a86-4596-4681-af6b-748869d75ddf';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-short-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '24754a86-4596-4681-af6b-748869d75ddf';
  $display->content['new-24754a86-4596-4681-af6b-748869d75ddf'] = $pane;
  $display->panels['left'][1] = 'new-24754a86-4596-4681-af6b-748869d75ddf';
  $pane = new stdClass();
  $pane->pid = 'new-7792e6e6-3fbf-494a-b1e6-f21ad44d2077';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7792e6e6-3fbf-494a-b1e6-f21ad44d2077';
  $display->content['new-7792e6e6-3fbf-494a-b1e6-f21ad44d2077'] = $pane;
  $display->panels['left'][2] = 'new-7792e6e6-3fbf-494a-b1e6-f21ad44d2077';
  $pane = new stdClass();
  $pane->pid = 'new-77845c6c-5905-4378-8536-4714230b13ff';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'basic_page_summary',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '77845c6c-5905-4378-8536-4714230b13ff';
  $display->content['new-77845c6c-5905-4378-8536-4714230b13ff'] = $pane;
  $display->panels['left'][3] = 'new-77845c6c-5905-4378-8536-4714230b13ff';
  $pane = new stdClass();
  $pane->pid = 'new-6b440262-9b1b-4e1a-9af5-8103a3dea435';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_accordian_style_block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-quick-links',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6b440262-9b1b-4e1a-9af5-8103a3dea435';
  $display->content['new-6b440262-9b1b-4e1a-9af5-8103a3dea435'] = $pane;
  $display->panels['left'][4] = 'new-6b440262-9b1b-4e1a-9af5-8103a3dea435';
  $pane = new stdClass();
  $pane->pid = 'new-978c05e0-04ae-44d4-87c5-2050dd21e3e0';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_link_to_style_block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '978c05e0-04ae-44d4-87c5-2050dd21e3e0';
  $display->content['new-978c05e0-04ae-44d4-87c5-2050dd21e3e0'] = $pane;
  $display->panels['left'][5] = 'new-978c05e0-04ae-44d4-87c5-2050dd21e3e0';
  $pane = new stdClass();
  $pane->pid = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:page:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'basic',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => 'basic',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '%keywords',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'ce365a39-54a0-4640-a592-f401386db51b';
  $display->content['new-ce365a39-54a0-4640-a592-f401386db51b'] = $pane;
  $display->panels['left'][6] = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane = new stdClass();
  $pane->pid = 'new-3986cc86-c5dc-4b2d-87be-a79b11104126';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'other_activities',
    'context' => array(
      0 => '',
      1 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'other-activities-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3986cc86-c5dc-4b2d-87be-a79b11104126';
  $display->content['new-3986cc86-c5dc-4b2d-87be-a79b11104126'] = $pane;
  $display->panels['right'][0] = 'new-3986cc86-c5dc-4b2d-87be-a79b11104126';
  $pane = new stdClass();
  $pane->pid = 'new-30dd8388-863a-45d5-8cba-bf7c62008352';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-all_areas_of_activity';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '30dd8388-863a-45d5-8cba-bf7c62008352';
  $display->content['new-30dd8388-863a-45d5-8cba-bf7c62008352'] = $pane;
  $display->panels['right'][1] = 'new-30dd8388-863a-45d5-8cba-bf7c62008352';
  $pane = new stdClass();
  $pane->pid = 'new-5a9767a2-2ea8-4413-83ad-f671a40dee42';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:page:field_right_show_block',
        'settings' => array(
          'field_right_show_block' => array(
            'en' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_right_show_block_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'custom_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hub-page-rural-development',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5a9767a2-2ea8-4413-83ad-f671a40dee42';
  $display->content['new-5a9767a2-2ea8-4413-83ad-f671a40dee42'] = $pane;
  $display->panels['right'][2] = 'new-5a9767a2-2ea8-4413-83ad-f671a40dee42';
  $pane = new stdClass();
  $pane->pid = 'new-5a495f2d-9b47-4a7c-9e4d-91a24978ac15';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-right_panel_press_center_block';
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
  $pane->uuid = '5a495f2d-9b47-4a7c-9e4d-91a24978ac15';
  $display->content['new-5a495f2d-9b47-4a7c-9e4d-91a24978ac15'] = $pane;
  $display->panels['right'][3] = 'new-5a495f2d-9b47-4a7c-9e4d-91a24978ac15';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_16'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_17';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'About US',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'basic-page akdn-basic-page akdn-basic-page-about-us',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'article_type' => 0,
          'media_folders' => 0,
          'podcast_type' => 0,
          'focus_areas' => 0,
          'countries' => 0,
          'agencies' => 0,
          'publication_type' => 0,
          'publication_category' => 0,
          'speech_themes' => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:page:field_tags',
          'settings' => array(
            'field_tags' => array(
              'en' => array(
                0 => array(
                  'tid' => '9006',
                  'vid' => '1',
                  'name' => 'about us',
                  'description' => NULL,
                  'format' => NULL,
                  'weight' => '0',
                  'uuid' => '2c2927dc-3de8-442a-a679-cd3894eeb8f6',
                  'vocabulary_machine_name' => 'tags',
                  'metatags' => array(),
                  'rdf_mapping' => array(
                    'rdftype' => array(
                      0 => 'skos:Concept',
                    ),
                    'name' => array(
                      'predicates' => array(
                        0 => 'rdfs:label',
                        1 => 'skos:prefLabel',
                      ),
                    ),
                    'description' => array(
                      'predicates' => array(
                        0 => 'skos:definition',
                      ),
                    ),
                    'vid' => array(
                      'predicates' => array(
                        0 => 'skos:inScheme',
                      ),
                      'type' => 'rel',
                    ),
                    'parent' => array(
                      'predicates' => array(
                        0 => 'skos:broader',
                      ),
                      'type' => 'rel',
                    ),
                  ),
                  'translations' => (object) array(
                    'original' => 'en',
                    'data' => array(
                      'en' => array(
                        'entity_type' => 'taxonomy_term',
                        'entity_id' => '9006',
                        'language' => 'en',
                        'source' => '',
                        'uid' => '1',
                        'status' => '1',
                        'translate' => '0',
                        'created' => '1449839991',
                        'changed' => '1449839991',
                      ),
                    ),
                  ),
                ),
              ),
            ),
            'field_tags_tid' => 'about us',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
    'left' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa06f1f3-ada1-4159-926f-368d4ac1ef13';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_17';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4cda4bf3-a77d-4c48-804e-4fc2b41204d6';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'or',
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:page:field_create_featured_content',
        'settings' => array(
          'field_create_featured_content' => array(
            'en' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_create_featured_content_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_14',
    'context' => array(
      0 => '',
      1 => '',
    ),
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
  $pane->uuid = '4cda4bf3-a77d-4c48-804e-4fc2b41204d6';
  $display->content['new-4cda4bf3-a77d-4c48-804e-4fc2b41204d6'] = $pane;
  $display->panels['left'][0] = 'new-4cda4bf3-a77d-4c48-804e-4fc2b41204d6';
  $pane = new stdClass();
  $pane->pid = 'new-f8107b9b-b8a6-4336-8a3a-f69080862968';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'f8107b9b-b8a6-4336-8a3a-f69080862968';
  $display->content['new-f8107b9b-b8a6-4336-8a3a-f69080862968'] = $pane;
  $display->panels['left'][1] = 'new-f8107b9b-b8a6-4336-8a3a-f69080862968';
  $pane = new stdClass();
  $pane->pid = 'new-5b5f98c7-c885-46be-acfc-9c8f06d354d6';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5b5f98c7-c885-46be-acfc-9c8f06d354d6';
  $display->content['new-5b5f98c7-c885-46be-acfc-9c8f06d354d6'] = $pane;
  $display->panels['left'][2] = 'new-5b5f98c7-c885-46be-acfc-9c8f06d354d6';
  $pane = new stdClass();
  $pane->pid = 'new-ead81ad7-6708-496c-b468-9899a207cf02';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'basic_page_summary',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = 'ead81ad7-6708-496c-b468-9899a207cf02';
  $display->content['new-ead81ad7-6708-496c-b468-9899a207cf02'] = $pane;
  $display->panels['left'][3] = 'new-ead81ad7-6708-496c-b468-9899a207cf02';
  $pane = new stdClass();
  $pane->pid = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:page:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'basic',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => 'basic',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '%keywords',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ce365a39-54a0-4640-a592-f401386db51b';
  $display->content['new-ce365a39-54a0-4640-a592-f401386db51b'] = $pane;
  $display->panels['left'][4] = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $pane = new stdClass();
  $pane->pid = 'new-f879c6a6-330e-44ca-993a-7bc0f7540aae';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'f879c6a6-330e-44ca-993a-7bc0f7540aae';
  $display->content['new-f879c6a6-330e-44ca-993a-7bc0f7540aae'] = $pane;
  $display->panels['left'][5] = 'new-f879c6a6-330e-44ca-993a-7bc0f7540aae';
  $pane = new stdClass();
  $pane->pid = 'new-0e473413-6d44-4b34-be60-8216ffee9e90';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'node/17291',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_4',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '0e473413-6d44-4b34-be60-8216ffee9e90';
  $display->content['new-0e473413-6d44-4b34-be60-8216ffee9e90'] = $pane;
  $display->panels['left'][6] = 'new-0e473413-6d44-4b34-be60-8216ffee9e90';
  $pane = new stdClass();
  $pane->pid = 'new-2e93ac35-a31c-4683-bca3-303fc0ad1a51';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_accordian_style_block';
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
  $pane->uuid = '2e93ac35-a31c-4683-bca3-303fc0ad1a51';
  $display->content['new-2e93ac35-a31c-4683-bca3-303fc0ad1a51'] = $pane;
  $display->panels['left'][7] = 'new-2e93ac35-a31c-4683-bca3-303fc0ad1a51';
  $pane = new stdClass();
  $pane->pid = 'new-41c75d0f-d755-49a8-9a60-d71dc47fb48b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_link_to_style_block';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '41c75d0f-d755-49a8-9a60-d71dc47fb48b';
  $display->content['new-41c75d0f-d755-49a8-9a60-d71dc47fb48b'] = $pane;
  $display->panels['left'][8] = 'new-41c75d0f-d755-49a8-9a60-d71dc47fb48b';
  $pane = new stdClass();
  $pane->pid = 'new-b0c486e5-a3a9-4a89-b9df-9c471042a68d';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
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
  $pane->uuid = 'b0c486e5-a3a9-4a89-b9df-9c471042a68d';
  $display->content['new-b0c486e5-a3a9-4a89-b9df-9c471042a68d'] = $pane;
  $display->panels['right'][0] = 'new-b0c486e5-a3a9-4a89-b9df-9c471042a68d';
  $pane = new stdClass();
  $pane->pid = 'new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_article_link';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Rural Development Around the world',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $display->content['new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054'] = $pane;
  $display->panels['right'][1] = 'new-6aaa45b1-0fb9-4890-bbdc-69c35ef64054';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ce365a39-54a0-4640-a592-f401386db51b';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_17'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_18';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -11;
  $handler->conf = array(
    'title' => 'Press Release Video Detail',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'press-release-detail press-release-video-detail',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'podcast' => 'podcast',
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
  $display->layout = 'omega_24_twocol_18_6';
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
  $display->uuid = '3457a4fd-85d8-4131-b622-749f2cdd255a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_18';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8251bcf1-22d0-4f42-ab87-79af950871b0';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_podcast_image';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'colorbox',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'colorbox_node_style' => 'featured_content',
      'colorbox_image_style' => 'featured_content',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '8251bcf1-22d0-4f42-ab87-79af950871b0';
  $display->content['new-8251bcf1-22d0-4f42-ab87-79af950871b0'] = $pane;
  $display->panels['left'][0] = 'new-8251bcf1-22d0-4f42-ab87-79af950871b0';
  $pane = new stdClass();
  $pane->pid = 'new-61e2e9dc-2f03-4c64-b8e4-f528089bac7d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_custom_video_player';
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
    'css_id' => '',
    'css_class' => 'pane-video-block',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '61e2e9dc-2f03-4c64-b8e4-f528089bac7d';
  $display->content['new-61e2e9dc-2f03-4c64-b8e4-f528089bac7d'] = $pane;
  $display->panels['left'][1] = 'new-61e2e9dc-2f03-4c64-b8e4-f528089bac7d';
  $pane = new stdClass();
  $pane->pid = 'new-3fdd9cdb-727b-4ab2-acca-71233d5c9116';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-61';
  $pane->shown = FALSE;
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3fdd9cdb-727b-4ab2-acca-71233d5c9116';
  $display->content['new-3fdd9cdb-727b-4ab2-acca-71233d5c9116'] = $pane;
  $display->panels['left'][2] = 'new-3fdd9cdb-727b-4ab2-acca-71233d5c9116';
  $pane = new stdClass();
  $pane->pid = 'new-5509f72a-5501-4fa5-ae8b-ff6bf698a5dc';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5509f72a-5501-4fa5-ae8b-ff6bf698a5dc';
  $display->content['new-5509f72a-5501-4fa5-ae8b-ff6bf698a5dc'] = $pane;
  $display->panels['left'][3] = 'new-5509f72a-5501-4fa5-ae8b-ff6bf698a5dc';
  $pane = new stdClass();
  $pane->pid = 'new-f88c70ac-5282-4a07-9b62-5e6507b7004a';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f88c70ac-5282-4a07-9b62-5e6507b7004a';
  $display->content['new-f88c70ac-5282-4a07-9b62-5e6507b7004a'] = $pane;
  $display->panels['left'][4] = 'new-f88c70ac-5282-4a07-9b62-5e6507b7004a';
  $pane = new stdClass();
  $pane->pid = 'new-fcef706d-d194-4ffc-bc25-86cf59c85ee0';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_podcast_related_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'fcef706d-d194-4ffc-bc25-86cf59c85ee0';
  $display->content['new-fcef706d-d194-4ffc-bc25-86cf59c85ee0'] = $pane;
  $display->panels['left'][5] = 'new-fcef706d-d194-4ffc-bc25-86cf59c85ee0';
  $pane = new stdClass();
  $pane->pid = 'new-773b922d-1b88-4670-81fa-542d9409a29c';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_podcast_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '773b922d-1b88-4670-81fa-542d9409a29c';
  $display->content['new-773b922d-1b88-4670-81fa-542d9409a29c'] = $pane;
  $display->panels['left'][6] = 'new-773b922d-1b88-4670-81fa-542d9409a29c';
  $pane = new stdClass();
  $pane->pid = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
  $pane->uuid = 'b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $display->content['new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4'] = $pane;
  $display->panels['left'][7] = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane = new stdClass();
  $pane->pid = 'new-31c66cee-d110-4490-942e-6c1473ce630f';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '31c66cee-d110-4490-942e-6c1473ce630f';
  $display->content['new-31c66cee-d110-4490-942e-6c1473ce630f'] = $pane;
  $display->panels['left'][8] = 'new-31c66cee-d110-4490-942e-6c1473ce630f';
  $pane = new stdClass();
  $pane->pid = 'new-778dacfc-f1d5-4c25-98cb-49f2c09dca48';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '778dacfc-f1d5-4c25-98cb-49f2c09dca48';
  $display->content['new-778dacfc-f1d5-4c25-98cb-49f2c09dca48'] = $pane;
  $display->panels['left'][9] = 'new-778dacfc-f1d5-4c25-98cb-49f2c09dca48';
  $pane = new stdClass();
  $pane->pid = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $display->content['new-83e36fd5-94e4-448e-bd85-61a72f3d36f1'] = $pane;
  $display->panels['left'][10] = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane = new stdClass();
  $pane->pid = 'new-3fab4ff8-741c-49c9-bb7e-d19cab089cd7';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_15',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '3fab4ff8-741c-49c9-bb7e-d19cab089cd7';
  $display->content['new-3fab4ff8-741c-49c9-bb7e-d19cab089cd7'] = $pane;
  $display->panels['right'][0] = 'new-3fab4ff8-741c-49c9-bb7e-d19cab089cd7';
  $pane = new stdClass();
  $pane->pid = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
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
  $pane->uuid = 'ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->content['new-ab061d57-ae2b-4913-87d9-5d11cc978619'] = $pane;
  $display->panels['right'][1] = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_18'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_19';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'title' => 'Events Details',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'press-release-events press-release-detail',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
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
  $display->layout = 'omega_24_twocol_18_6';
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
  $display->uuid = '3457a4fd-85d8-4131-b622-749f2cdd255a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_19';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-00f9b63a-ea04-4233-9407-16fcffe933f9';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center_detail_page_slideshows';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '00f9b63a-ea04-4233-9407-16fcffe933f9';
  $display->content['new-00f9b63a-ea04-4233-9407-16fcffe933f9'] = $pane;
  $display->panels['left'][0] = 'new-00f9b63a-ea04-4233-9407-16fcffe933f9';
  $pane = new stdClass();
  $pane->pid = 'new-cb26dc31-8be1-41fc-b83a-0c52486d33e1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'cb26dc31-8be1-41fc-b83a-0c52486d33e1';
  $display->content['new-cb26dc31-8be1-41fc-b83a-0c52486d33e1'] = $pane;
  $display->panels['left'][1] = 'new-cb26dc31-8be1-41fc-b83a-0c52486d33e1';
  $pane = new stdClass();
  $pane->pid = 'new-d4a6b792-6008-4495-bc7f-f390f267da97';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'd4a6b792-6008-4495-bc7f-f390f267da97';
  $display->content['new-d4a6b792-6008-4495-bc7f-f390f267da97'] = $pane;
  $display->panels['left'][2] = 'new-d4a6b792-6008-4495-bc7f-f390f267da97';
  $pane = new stdClass();
  $pane->pid = 'new-50af21c5-c9bc-46ba-a92d-743b326b384e';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '50af21c5-c9bc-46ba-a92d-743b326b384e';
  $display->content['new-50af21c5-c9bc-46ba-a92d-743b326b384e'] = $pane;
  $display->panels['left'][3] = 'new-50af21c5-c9bc-46ba-a92d-743b326b384e';
  $pane = new stdClass();
  $pane->pid = 'new-9bdd3557-1fb1-4eac-82cc-9ef561580f34';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_related';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9bdd3557-1fb1-4eac-82cc-9ef561580f34';
  $display->content['new-9bdd3557-1fb1-4eac-82cc-9ef561580f34'] = $pane;
  $display->panels['left'][4] = 'new-9bdd3557-1fb1-4eac-82cc-9ef561580f34';
  $pane = new stdClass();
  $pane->pid = 'new-9444d95a-d521-4901-905f-6828936eaf67';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9444d95a-d521-4901-905f-6828936eaf67';
  $display->content['new-9444d95a-d521-4901-905f-6828936eaf67'] = $pane;
  $display->panels['left'][5] = 'new-9444d95a-d521-4901-905f-6828936eaf67';
  $pane = new stdClass();
  $pane->pid = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
  $pane->uuid = 'b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $display->content['new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4'] = $pane;
  $display->panels['left'][6] = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane = new stdClass();
  $pane->pid = 'new-d74c6201-99d3-4ead-9670-da5d7aacf655';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'd74c6201-99d3-4ead-9670-da5d7aacf655';
  $display->content['new-d74c6201-99d3-4ead-9670-da5d7aacf655'] = $pane;
  $display->panels['left'][7] = 'new-d74c6201-99d3-4ead-9670-da5d7aacf655';
  $pane = new stdClass();
  $pane->pid = 'new-52de5707-adee-46fc-bbea-b99739fdcaaa';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '52de5707-adee-46fc-bbea-b99739fdcaaa';
  $display->content['new-52de5707-adee-46fc-bbea-b99739fdcaaa'] = $pane;
  $display->panels['left'][8] = 'new-52de5707-adee-46fc-bbea-b99739fdcaaa';
  $pane = new stdClass();
  $pane->pid = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $display->content['new-83e36fd5-94e4-448e-bd85-61a72f3d36f1'] = $pane;
  $display->panels['left'][9] = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane = new stdClass();
  $pane->pid = 'new-784e027c-f578-47f9-a87d-dc76f599089d';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_16',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '784e027c-f578-47f9-a87d-dc76f599089d';
  $display->content['new-784e027c-f578-47f9-a87d-dc76f599089d'] = $pane;
  $display->panels['right'][0] = 'new-784e027c-f578-47f9-a87d-dc76f599089d';
  $pane = new stdClass();
  $pane->pid = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
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
  $pane->uuid = 'ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->content['new-ab061d57-ae2b-4913-87d9-5d11cc978619'] = $pane;
  $display->panels['right'][1] = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_19'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Thematic Area',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'whatwedo-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          11 => '11',
          13 => 0,
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'focus_area' => 'focus_area',
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
  $display->layout = 'omega_24_threerow_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '95ad6369-b5c3-492a-a034-97184aaf824c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f7aa549e-ac13-408b-a646-c14d21c0c3c5';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'projects';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:focus_area:field_project_listing_area',
        'settings' => array(
          'field_project_listing_area' => array(
            'und' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_project_listing_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'what_we_do_auto_project_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar print-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f7aa549e-ac13-408b-a646-c14d21c0c3c5';
  $display->content['new-f7aa549e-ac13-408b-a646-c14d21c0c3c5'] = $pane;
  $display->panels['bottom'][0] = 'new-f7aa549e-ac13-408b-a646-c14d21c0c3c5';
  $pane = new stdClass();
  $pane->pid = 'new-7117eddb-9130-4a9b-93ad-e5c41bd7a487';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'projects';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:focus_area:field_project_listing_area',
        'settings' => array(
          'field_project_listing_area' => array(
            'und' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_project_listing_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'what_we_do_manual_project_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar print-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7117eddb-9130-4a9b-93ad-e5c41bd7a487';
  $display->content['new-7117eddb-9130-4a9b-93ad-e5c41bd7a487'] = $pane;
  $display->panels['bottom'][1] = 'new-7117eddb-9130-4a9b-93ad-e5c41bd7a487';
  $pane = new stdClass();
  $pane->pid = 'new-d26e2f69-1f37-4c98-b6f5-e3d3a97e6e25';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class= "print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd26e2f69-1f37-4c98-b6f5-e3d3a97e6e25';
  $display->content['new-d26e2f69-1f37-4c98-b6f5-e3d3a97e6e25'] = $pane;
  $display->panels['bottom'][2] = 'new-d26e2f69-1f37-4c98-b6f5-e3d3a97e6e25';
  $pane = new stdClass();
  $pane->pid = 'new-64a717c4-3e86-4fc8-8937-9c510a170c5c';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-news_and_resources_links';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '64a717c4-3e86-4fc8-8937-9c510a170c5c';
  $display->content['new-64a717c4-3e86-4fc8-8937-9c510a170c5c'] = $pane;
  $display->panels['bottom'][3] = 'new-64a717c4-3e86-4fc8-8937-9c510a170c5c';
  $pane = new stdClass();
  $pane->pid = 'new-341fe5a1-7022-4a81-b9e8-14e852973afc';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-what_we_do_news_and_resources';
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
  $pane->uuid = '341fe5a1-7022-4a81-b9e8-14e852973afc';
  $display->content['new-341fe5a1-7022-4a81-b9e8-14e852973afc'] = $pane;
  $display->panels['bottom'][4] = 'new-341fe5a1-7022-4a81-b9e8-14e852973afc';
  $pane = new stdClass();
  $pane->pid = 'new-4c56557e-de33-4f70-ac88-15583fb92302';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4c56557e-de33-4f70-ac88-15583fb92302';
  $display->content['new-4c56557e-de33-4f70-ac88-15583fb92302'] = $pane;
  $display->panels['bottom'][5] = 'new-4c56557e-de33-4f70-ac88-15583fb92302';
  $pane = new stdClass();
  $pane->pid = 'new-73bbff6f-6cc3-40b6-92dc-0aab452f967c';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class= "print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '73bbff6f-6cc3-40b6-92dc-0aab452f967c';
  $display->content['new-73bbff6f-6cc3-40b6-92dc-0aab452f967c'] = $pane;
  $display->panels['bottom'][6] = 'new-73bbff6f-6cc3-40b6-92dc-0aab452f967c';
  $pane = new stdClass();
  $pane->pid = 'new-fc6b5d42-efc4-4297-a33a-0591fe9bec43';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_sheet_block';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'fc6b5d42-efc4-4297-a33a-0591fe9bec43';
  $display->content['new-fc6b5d42-efc4-4297-a33a-0591fe9bec43'] = $pane;
  $display->panels['bottom'][7] = 'new-fc6b5d42-efc4-4297-a33a-0591fe9bec43';
  $pane = new stdClass();
  $pane->pid = 'new-be84a02f-ab7e-4d9f-97a1-c6ddff68f5a7';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_block_show_hide';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Has content',
          'php' => '$view = views_get_view_result(\'facts_blocks\', \'facts_block\', arg(1));
$result = count($view);
if (!empty($result)) {
return true;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->uuid = 'be84a02f-ab7e-4d9f-97a1-c6ddff68f5a7';
  $display->content['new-be84a02f-ab7e-4d9f-97a1-c6ddff68f5a7'] = $pane;
  $display->panels['bottom'][8] = 'new-be84a02f-ab7e-4d9f-97a1-c6ddff68f5a7';
  $pane = new stdClass();
  $pane->pid = 'new-1b96d966-5330-44c0-a8e3-c37b94e3e2a4';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'manual_fact_blocks',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '1b96d966-5330-44c0-a8e3-c37b94e3e2a4';
  $display->content['new-1b96d966-5330-44c0-a8e3-c37b94e3e2a4'] = $pane;
  $display->panels['bottom'][9] = 'new-1b96d966-5330-44c0-a8e3-c37b94e3e2a4';
  $pane = new stdClass();
  $pane->pid = 'new-441cfe99-960c-47ae-9c6c-d4ece9bec6ee';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '441cfe99-960c-47ae-9c6c-d4ece9bec6ee';
  $display->content['new-441cfe99-960c-47ae-9c6c-d4ece9bec6ee'] = $pane;
  $display->panels['bottom'][10] = 'new-441cfe99-960c-47ae-9c6c-d4ece9bec6ee';
  $pane = new stdClass();
  $pane->pid = 'new-f03f78cb-80d4-4065-892e-d702b4c9d80f';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'manual_about_page';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-23',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'f03f78cb-80d4-4065-892e-d702b4c9d80f';
  $display->content['new-f03f78cb-80d4-4065-892e-d702b4c9d80f'] = $pane;
  $display->panels['bottom'][11] = 'new-f03f78cb-80d4-4065-892e-d702b4c9d80f';
  $pane = new stdClass();
  $pane->pid = 'new-d7ba8c88-9604-4dd6-aa23-36696eace6b6';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:focus_area:field_use_focus_area_body_text',
        'settings' => array(
          'field_use_focus_area_body_text' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_use_focus_area_body_text_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-18 prefix-1',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'd7ba8c88-9604-4dd6-aa23-36696eace6b6';
  $display->content['new-d7ba8c88-9604-4dd6-aa23-36696eace6b6'] = $pane;
  $display->panels['bottom'][12] = 'new-d7ba8c88-9604-4dd6-aa23-36696eace6b6';
  $pane = new stdClass();
  $pane->pid = 'new-86288391-aadc-4d3c-8dc9-a167c7a43a28';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'manual_project_block';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:focus_area:field_use_focus_area_body_text',
        'settings' => array(
          'field_use_focus_area_body_text' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_use_focus_area_body_text_value' => NULL,
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'entity_field_value:node:focus_area:field_project_listing_area',
        'settings' => array(
          'field_project_listing_area' => array(
            'und' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_project_listing_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-18 prefix-1',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '86288391-aadc-4d3c-8dc9-a167c7a43a28';
  $display->content['new-86288391-aadc-4d3c-8dc9-a167c7a43a28'] = $pane;
  $display->panels['bottom'][13] = 'new-86288391-aadc-4d3c-8dc9-a167c7a43a28';
  $pane = new stdClass();
  $pane->pid = 'new-afc16ca7-1e03-4634-b2d1-03a1b9ced28b';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_7',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'afc16ca7-1e03-4634-b2d1-03a1b9ced28b';
  $display->content['new-afc16ca7-1e03-4634-b2d1-03a1b9ced28b'] = $pane;
  $display->panels['bottom'][14] = 'new-afc16ca7-1e03-4634-b2d1-03a1b9ced28b';
  $pane = new stdClass();
  $pane->pid = 'new-328ce205-dcbf-4f87-aee9-ed14cc64a315';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_8',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '328ce205-dcbf-4f87-aee9-ed14cc64a315';
  $display->content['new-328ce205-dcbf-4f87-aee9-ed14cc64a315'] = $pane;
  $display->panels['bottom'][15] = 'new-328ce205-dcbf-4f87-aee9-ed14cc64a315';
  $pane = new stdClass();
  $pane->pid = 'new-0a32607e-ad32-4f28-a038-815a07a0dc8b';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_10',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '0a32607e-ad32-4f28-a038-815a07a0dc8b';
  $display->content['new-0a32607e-ad32-4f28-a038-815a07a0dc8b'] = $pane;
  $display->panels['bottom'][16] = 'new-0a32607e-ad32-4f28-a038-815a07a0dc8b';
  $pane = new stdClass();
  $pane->pid = 'new-9f80f16a-0f4c-4a39-98e7-33917a6aa775';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'projects';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_enable_project_slider',
        'settings' => array(
          'field_enable_project_slider' => array(
            'en' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_enable_project_slider_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-24',
  );
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '9f80f16a-0f4c-4a39-98e7-33917a6aa775';
  $display->content['new-9f80f16a-0f4c-4a39-98e7-33917a6aa775'] = $pane;
  $display->panels['bottom'][17] = 'new-9f80f16a-0f4c-4a39-98e7-33917a6aa775';
  $pane = new stdClass();
  $pane->pid = 'new-c92dd0cb-1873-48ec-b438-3e8d65c4c721';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:focus_area:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_featured_content_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c92dd0cb-1873-48ec-b438-3e8d65c4c721';
  $display->content['new-c92dd0cb-1873-48ec-b438-3e8d65c4c721'] = $pane;
  $display->panels['middle'][0] = 'new-c92dd0cb-1873-48ec-b438-3e8d65c4c721';
  $pane = new stdClass();
  $pane->pid = 'new-84891879-477b-48df-8d9e-9f6e3c2e17d2';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow_manual';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:focus_area:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_featured_content_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '84891879-477b-48df-8d9e-9f6e3c2e17d2';
  $display->content['new-84891879-477b-48df-8d9e-9f6e3c2e17d2'] = $pane;
  $display->panels['middle'][1] = 'new-84891879-477b-48df-8d9e-9f6e3c2e17d2';
  $pane = new stdClass();
  $pane->pid = 'new-4188e98f-2945-4f35-9ca4-7922cebd12e4';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About page information',
    'title' => '',
    'body' => '<?php
$node = menu_get_object();
print \'<div class = "whatsnew-right-content">\';
if (isset($node->field_about_page)) {
  $about = node_load($node->field_about_page[$node->language][0][\'nid\']);
  if (isset($about->nid)) {
    print \'<p class = "whats-new-gold">AKDN AND</p>\';
    $short_title_language = $about->field_short_title;
    print \'<div class = "grid-whatsnew-block_subtitle">\'. $about->field_short_title[key($short_title_language)][0][\'value\'] .\'</div>\';
  if (isset($about->body[$about->language][0][\'summary\']) && !empty($about->body[$about->language][0][\'summary\']))
    print \'<div class="grid-whatsnew-block_body">\'. $about->body[$about->language][0][\'summary\'].\'</div>\';
  else
      print \'<div class="grid-whatsnew-block_body">\'. text_summary($about->body[$about->language][0][\'value\'], $about->body[$about->language][0][\'format\'], 1200) .\'</div>\';
  }
  print \'</div>\';
}
?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hub-about-short-title whatsnew-right',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4188e98f-2945-4f35-9ca4-7922cebd12e4';
  $display->content['new-4188e98f-2945-4f35-9ca4-7922cebd12e4'] = $pane;
  $display->panels['middle'][2] = 'new-4188e98f-2945-4f35-9ca4-7922cebd12e4';
  $pane = new stdClass();
  $pane->pid = 'new-7a833036-75b5-4903-bf70-659c286fe94a';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'focus_areas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'what_we_do_summary_text',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'whatwedo-left',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7a833036-75b5-4903-bf70-659c286fe94a';
  $display->content['new-7a833036-75b5-4903-bf70-659c286fe94a'] = $pane;
  $display->panels['middle'][3] = 'new-7a833036-75b5-4903-bf70-659c286fe94a';
  $pane = new stdClass();
  $pane->pid = 'new-491ae475-2f58-4ed8-bda0-48909aec674f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'focus_areas';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'what_we_do_agency_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'whatwedo-right',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '491ae475-2f58-4ed8-bda0-48909aec674f';
  $display->content['new-491ae475-2f58-4ed8-bda0-48909aec674f'] = $pane;
  $display->panels['middle'][4] = 'new-491ae475-2f58-4ed8-bda0-48909aec674f';
  $pane = new stdClass();
  $pane->pid = 'new-710ef449-31ed-4b8e-8017-e48f6a2a70b0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '710ef449-31ed-4b8e-8017-e48f6a2a70b0';
  $display->content['new-710ef449-31ed-4b8e-8017-e48f6a2a70b0'] = $pane;
  $display->panels['middle'][5] = 'new-710ef449-31ed-4b8e-8017-e48f6a2a70b0';
  $pane = new stdClass();
  $pane->pid = 'new-25bc0f09-db7b-4243-97f7-3220c9e6ef10';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '25bc0f09-db7b-4243-97f7-3220c9e6ef10';
  $display->content['new-25bc0f09-db7b-4243-97f7-3220c9e6ef10'] = $pane;
  $display->panels['middle'][6] = 'new-25bc0f09-db7b-4243-97f7-3220c9e6ef10';
  $pane = new stdClass();
  $pane->pid = 'new-7c16ee53-a496-48a9-a54c-2621adce56bb';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '7c16ee53-a496-48a9-a54c-2621adce56bb';
  $display->content['new-7c16ee53-a496-48a9-a54c-2621adce56bb'] = $pane;
  $display->panels['middle'][7] = 'new-7c16ee53-a496-48a9-a54c-2621adce56bb';
  $pane = new stdClass();
  $pane->pid = 'new-6856a44a-49d8-4cd2-bceb-a0c10ff62422';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '6856a44a-49d8-4cd2-bceb-a0c10ff62422';
  $display->content['new-6856a44a-49d8-4cd2-bceb-a0c10ff62422'] = $pane;
  $display->panels['middle'][8] = 'new-6856a44a-49d8-4cd2-bceb-a0c10ff62422';
  $pane = new stdClass();
  $pane->pid = 'new-f90bb0b9-1aa8-4204-b98c-9ab47acc2d53';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_agency_logo_with_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'f90bb0b9-1aa8-4204-b98c-9ab47acc2d53';
  $display->content['new-f90bb0b9-1aa8-4204-b98c-9ab47acc2d53'] = $pane;
  $display->panels['top'][0] = 'new-f90bb0b9-1aa8-4204-b98c-9ab47acc2d53';
  $pane = new stdClass();
  $pane->pid = 'new-dcb6569b-7b33-4766-a06e-4f08bce8b568';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dcb6569b-7b33-4766-a06e-4f08bce8b568';
  $display->content['new-dcb6569b-7b33-4766-a06e-4f08bce8b568'] = $pane;
  $display->panels['top'][1] = 'new-dcb6569b-7b33-4766-a06e-4f08bce8b568';
  $pane = new stdClass();
  $pane->pid = 'new-647971cf-777f-4aaf-bdd0-d3af35f54c44';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_breadcrumb_trail';
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
  $pane->uuid = '647971cf-777f-4aaf-bdd0-d3af35f54c44';
  $display->content['new-647971cf-777f-4aaf-bdd0-d3af35f54c44'] = $pane;
  $display->panels['top'][2] = 'new-647971cf-777f-4aaf-bdd0-d3af35f54c44';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f90bb0b9-1aa8-4204-b98c-9ab47acc2d53';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_20';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -9;
  $handler->conf = array(
    'title' => 'Speech Detail Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'press-release-detail press-release-speech-detail ',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'speech' => 'speech',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'middle' => NULL,
      'left' => array(),
      'right' => array(),
    ),
    'style' => 'wrapper_raw',
    'left' => array(
      'style' => 'wrapper_raw',
    ),
    'right' => array(
      'style' => 'wrapper_raw',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3457a4fd-85d8-4131-b622-749f2cdd255a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_20';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2a1766ac-2be1-43ab-90c5-08c0d2ad5fea';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center_detail_page_slideshows';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2a1766ac-2be1-43ab-90c5-08c0d2ad5fea';
  $display->content['new-2a1766ac-2be1-43ab-90c5-08c0d2ad5fea'] = $pane;
  $display->panels['left'][0] = 'new-2a1766ac-2be1-43ab-90c5-08c0d2ad5fea';
  $pane = new stdClass();
  $pane->pid = 'new-366a5766-7e67-480c-8e63-6a0cde8b3435';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '366a5766-7e67-480c-8e63-6a0cde8b3435';
  $display->content['new-366a5766-7e67-480c-8e63-6a0cde8b3435'] = $pane;
  $display->panels['left'][1] = 'new-366a5766-7e67-480c-8e63-6a0cde8b3435';
  $pane = new stdClass();
  $pane->pid = 'new-d4a6b792-6008-4495-bc7f-f390f267da97';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'wrapper_raw',
    'settings' => array(),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd4a6b792-6008-4495-bc7f-f390f267da97';
  $display->content['new-d4a6b792-6008-4495-bc7f-f390f267da97'] = $pane;
  $display->panels['left'][2] = 'new-d4a6b792-6008-4495-bc7f-f390f267da97';
  $pane = new stdClass();
  $pane->pid = 'new-44a162cd-b149-48a3-827d-f4706252ed43';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '44a162cd-b149-48a3-827d-f4706252ed43';
  $display->content['new-44a162cd-b149-48a3-827d-f4706252ed43'] = $pane;
  $display->panels['left'][3] = 'new-44a162cd-b149-48a3-827d-f4706252ed43';
  $pane = new stdClass();
  $pane->pid = 'new-ec0680e1-6682-4b92-a915-fa23d3987ed0';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'speeches-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ec0680e1-6682-4b92-a915-fa23d3987ed0';
  $display->content['new-ec0680e1-6682-4b92-a915-fa23d3987ed0'] = $pane;
  $display->panels['left'][4] = 'new-ec0680e1-6682-4b92-a915-fa23d3987ed0';
  $pane = new stdClass();
  $pane->pid = 'new-07ad8d9a-4cfb-4f68-b87c-8b99b429b36d';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_speech';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '07ad8d9a-4cfb-4f68-b87c-8b99b429b36d';
  $display->content['new-07ad8d9a-4cfb-4f68-b87c-8b99b429b36d'] = $pane;
  $display->panels['left'][5] = 'new-07ad8d9a-4cfb-4f68-b87c-8b99b429b36d';
  $pane = new stdClass();
  $pane->pid = 'new-0e400cc3-029b-419b-bf44-c7ee2227d887';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_speech_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0e400cc3-029b-419b-bf44-c7ee2227d887';
  $display->content['new-0e400cc3-029b-419b-bf44-c7ee2227d887'] = $pane;
  $display->panels['left'][6] = 'new-0e400cc3-029b-419b-bf44-c7ee2227d887';
  $pane = new stdClass();
  $pane->pid = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $display->content['new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4'] = $pane;
  $display->panels['left'][7] = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane = new stdClass();
  $pane->pid = 'new-60f2cff0-c006-4c7e-aef4-df3bd7d567fa';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_attachment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_download_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'text' => 'PDF',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '60f2cff0-c006-4c7e-aef4-df3bd7d567fa';
  $display->content['new-60f2cff0-c006-4c7e-aef4-df3bd7d567fa'] = $pane;
  $display->panels['left'][8] = 'new-60f2cff0-c006-4c7e-aef4-df3bd7d567fa';
  $pane = new stdClass();
  $pane->pid = 'new-d74c6201-99d3-4ead-9670-da5d7aacf655';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-email akaa-projectfinder-mail-share-print',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'd74c6201-99d3-4ead-9670-da5d7aacf655';
  $display->content['new-d74c6201-99d3-4ead-9670-da5d7aacf655'] = $pane;
  $display->panels['left'][9] = 'new-d74c6201-99d3-4ead-9670-da5d7aacf655';
  $pane = new stdClass();
  $pane->pid = 'new-67b71dac-4a7f-462d-8143-a077d0c1d545';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_custom_video_player_speech';
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
    'css_id' => '',
    'css_class' => 'custom-video-speech',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '67b71dac-4a7f-462d-8143-a077d0c1d545';
  $display->content['new-67b71dac-4a7f-462d-8143-a077d0c1d545'] = $pane;
  $display->panels['left'][10] = 'new-67b71dac-4a7f-462d-8143-a077d0c1d545';
  $pane = new stdClass();
  $pane->pid = 'new-1dced188-3d3e-499f-8376-244794f56e83';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-177';
  $pane->shown = FALSE;
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '1dced188-3d3e-499f-8376-244794f56e83';
  $display->content['new-1dced188-3d3e-499f-8376-244794f56e83'] = $pane;
  $display->panels['left'][11] = 'new-1dced188-3d3e-499f-8376-244794f56e83';
  $pane = new stdClass();
  $pane->pid = 'new-a2000b04-0bc8-42fc-9c92-026deedadc67';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'a2000b04-0bc8-42fc-9c92-026deedadc67';
  $display->content['new-a2000b04-0bc8-42fc-9c92-026deedadc67'] = $pane;
  $display->panels['left'][12] = 'new-a2000b04-0bc8-42fc-9c92-026deedadc67';
  $pane = new stdClass();
  $pane->pid = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $display->content['new-83e36fd5-94e4-448e-bd85-61a72f3d36f1'] = $pane;
  $display->panels['left'][13] = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane = new stdClass();
  $pane->pid = 'new-4314fd76-2f25-48c4-a509-0250ffa17b9a';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_17',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4314fd76-2f25-48c4-a509-0250ffa17b9a';
  $display->content['new-4314fd76-2f25-48c4-a509-0250ffa17b9a'] = $pane;
  $display->panels['right'][0] = 'new-4314fd76-2f25-48c4-a509-0250ffa17b9a';
  $pane = new stdClass();
  $pane->pid = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->content['new-ab061d57-ae2b-4913-87d9-5d11cc978619'] = $pane;
  $display->panels['right'][1] = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_20'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_21';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -8;
  $handler->conf = array(
    'title' => 'Photograph Detail page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'press-release-detail press-release-photograps-detail',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'middle' => NULL,
      'left' => array(),
      'right' => array(),
    ),
    'style' => 'wrapper_raw',
    'left' => array(
      'style' => 'wrapper_raw',
    ),
    'right' => array(
      'style' => 'wrapper_raw',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3457a4fd-85d8-4131-b622-749f2cdd255a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_21';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3e74d183-7e75-42cd-9e10-a96f44291333';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center_detail_page_slideshows';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '3e74d183-7e75-42cd-9e10-a96f44291333';
  $display->content['new-3e74d183-7e75-42cd-9e10-a96f44291333'] = $pane;
  $display->panels['left'][0] = 'new-3e74d183-7e75-42cd-9e10-a96f44291333';
  $pane = new stdClass();
  $pane->pid = 'new-73123f88-1776-4442-89c2-26e1c0e77c2d';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_gallery_images';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'galleryformatter_default',
    'delta_limit' => '50',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'slide_style' => 'two_third_width_carousel_grid_inner',
      'thumb_style' => 'photo_thumb',
      'style' => 'nostyle',
      'linking_method' => 'onclick_full',
      'link_to_full' => 1,
      'link_to_full_style' => '0',
      'modal' => 'colorbox',
      'colorbox_node_style' => 'two_third_width_carousel_grid_inner',
      'colorbox_node_style_first' => '',
      'colorbox_image_style' => 'featured_content',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'custom',
      'colorbox_caption_custom' => '[file:field-image-caption]^[file:field-image-copytight]',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'photograph-detail-banner',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '73123f88-1776-4442-89c2-26e1c0e77c2d';
  $display->content['new-73123f88-1776-4442-89c2-26e1c0e77c2d'] = $pane;
  $display->panels['left'][1] = 'new-73123f88-1776-4442-89c2-26e1c0e77c2d';
  $pane = new stdClass();
  $pane->pid = 'new-595c86f9-1b4c-4c70-beee-afd173313dad';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '595c86f9-1b4c-4c70-beee-afd173313dad';
  $display->content['new-595c86f9-1b4c-4c70-beee-afd173313dad'] = $pane;
  $display->panels['left'][2] = 'new-595c86f9-1b4c-4c70-beee-afd173313dad';
  $pane = new stdClass();
  $pane->pid = 'new-d4a6b792-6008-4495-bc7f-f390f267da97';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd4a6b792-6008-4495-bc7f-f390f267da97';
  $display->content['new-d4a6b792-6008-4495-bc7f-f390f267da97'] = $pane;
  $display->panels['left'][3] = 'new-d4a6b792-6008-4495-bc7f-f390f267da97';
  $pane = new stdClass();
  $pane->pid = 'new-0f0db43f-7fb4-4602-9693-cc96030dd44a';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0f0db43f-7fb4-4602-9693-cc96030dd44a';
  $display->content['new-0f0db43f-7fb4-4602-9693-cc96030dd44a'] = $pane;
  $display->panels['left'][4] = 'new-0f0db43f-7fb4-4602-9693-cc96030dd44a';
  $pane = new stdClass();
  $pane->pid = 'new-fbf8dc32-79f4-4281-ab84-8860da6cae72';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_gallery_related_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'fbf8dc32-79f4-4281-ab84-8860da6cae72';
  $display->content['new-fbf8dc32-79f4-4281-ab84-8860da6cae72'] = $pane;
  $display->panels['left'][5] = 'new-fbf8dc32-79f4-4281-ab84-8860da6cae72';
  $pane = new stdClass();
  $pane->pid = 'new-d63d8a76-b885-4baf-88be-e53c0034a269';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_gallery_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd63d8a76-b885-4baf-88be-e53c0034a269';
  $display->content['new-d63d8a76-b885-4baf-88be-e53c0034a269'] = $pane;
  $display->panels['left'][6] = 'new-d63d8a76-b885-4baf-88be-e53c0034a269';
  $pane = new stdClass();
  $pane->pid = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $display->content['new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4'] = $pane;
  $display->panels['left'][7] = 'new-b4cdfeb9-c6e0-4f5b-90b5-ef1cd5e4cda4';
  $pane = new stdClass();
  $pane->pid = 'new-d74c6201-99d3-4ead-9670-da5d7aacf655';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'd74c6201-99d3-4ead-9670-da5d7aacf655';
  $display->content['new-d74c6201-99d3-4ead-9670-da5d7aacf655'] = $pane;
  $display->panels['left'][8] = 'new-d74c6201-99d3-4ead-9670-da5d7aacf655';
  $pane = new stdClass();
  $pane->pid = 'new-273803cf-9e73-474b-ba78-780434c8deac';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '273803cf-9e73-474b-ba78-780434c8deac';
  $display->content['new-273803cf-9e73-474b-ba78-780434c8deac'] = $pane;
  $display->panels['left'][9] = 'new-273803cf-9e73-474b-ba78-780434c8deac';
  $pane = new stdClass();
  $pane->pid = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $display->content['new-83e36fd5-94e4-448e-bd85-61a72f3d36f1'] = $pane;
  $display->panels['left'][10] = 'new-83e36fd5-94e4-448e-bd85-61a72f3d36f1';
  $pane = new stdClass();
  $pane->pid = 'new-dfad649d-ddbf-4319-8e15-30b5b96a65ee';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_18',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = 'dfad649d-ddbf-4319-8e15-30b5b96a65ee';
  $display->content['new-dfad649d-ddbf-4319-8e15-30b5b96a65ee'] = $pane;
  $display->panels['right'][0] = 'new-dfad649d-ddbf-4319-8e15-30b5b96a65ee';
  $pane = new stdClass();
  $pane->pid = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->content['new-ab061d57-ae2b-4913-87d9-5d11cc978619'] = $pane;
  $display->panels['right'][1] = 'new-ab061d57-ae2b-4913-87d9-5d11cc978619';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_21'] = $handler;


  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_22';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -7;
  $handler->conf = array(
    'title' => 'Custom Content',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'custom_content' => 'custom_content',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'akdn-social
      terms-conditions
      privacy-policy',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c91c91e3-a843-4312-b0d3-05c1fac9f986';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_22';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $pane->panel = 'left';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $display->content['new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483'] = $pane;
  $display->panels['left'][0] = 'new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $pane = new stdClass();
  $pane->pid = 'new-c550aa88-5c72-4517-b886-41a3e34acde7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c550aa88-5c72-4517-b886-41a3e34acde7';
  $display->content['new-c550aa88-5c72-4517-b886-41a3e34acde7'] = $pane;
  $display->panels['left'][1] = 'new-c550aa88-5c72-4517-b886-41a3e34acde7';
  $pane = new stdClass();
  $pane->pid = 'new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'node/*/draft',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'basic_page_summary',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
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
  $pane->uuid = '42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $display->content['new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb'] = $pane;
  $display->panels['left'][2] = 'new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $pane = new stdClass();
  $pane->pid = 'new-c3a0c5e9-8464-4c17-9a18-5254ecc129a9';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view_draft';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'node/*/draft',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'entity_field_value:node:custom_content:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'accordian',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => array(
            0 => 'accordian',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
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
    'display' => 'basic_page_summary_draft',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = 'c3a0c5e9-8464-4c17-9a18-5254ecc129a9';
  $display->content['new-c3a0c5e9-8464-4c17-9a18-5254ecc129a9'] = $pane;
  $display->panels['left'][3] = 'new-c3a0c5e9-8464-4c17-9a18-5254ecc129a9';
  $pane = new stdClass();
  $pane->pid = 'new-0256f115-9442-4bc8-989a-ded9da80e47e';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view_draft';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'node/*/draft',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'entity_field_value:node:custom_content:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'accordian',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => array(
            0 => 'accordian',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
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
    'display' => 'basic_page_accordian_view_draft',
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0256f115-9442-4bc8-989a-ded9da80e47e';
  $display->content['new-0256f115-9442-4bc8-989a-ded9da80e47e'] = $pane;
  $display->panels['left'][4] = 'new-0256f115-9442-4bc8-989a-ded9da80e47e';
  $pane = new stdClass();
  $pane->pid = 'new-a9f3b514-9005-4567-b0df-382885c76a7d';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-body',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a9f3b514-9005-4567-b0df-382885c76a7d';
  $display->content['new-a9f3b514-9005-4567-b0df-382885c76a7d'] = $pane;
  $display->panels['left'][5] = 'new-a9f3b514-9005-4567-b0df-382885c76a7d';
  $pane = new stdClass();
  $pane->pid = 'new-b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:custom_content:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'basic',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => 'basic',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-body',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $display->content['new-b9caf433-e7db-43b3-ba41-4d4d96b48954'] = $pane;
  $display->panels['left'][6] = 'new-b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $pane = new stdClass();
  $pane->pid = 'new-24d44d98-25dd-4110-b778-c63f4c59f000';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_accordian_style_block';
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
  $pane->uuid = '24d44d98-25dd-4110-b778-c63f4c59f000';
  $display->content['new-24d44d98-25dd-4110-b778-c63f4c59f000'] = $pane;
  $display->panels['left'][7] = 'new-24d44d98-25dd-4110-b778-c63f4c59f000';
  $pane = new stdClass();
  $pane->pid = 'new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_link_to_style_block';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'd8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $display->content['new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2'] = $pane;
  $display->panels['left'][8] = 'new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $pane = new stdClass();
  $pane->pid = 'new-c0a12c4e-3dac-4d15-8617-340c3e94b4b5';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'custom_header_block';
  $pane->shown = FALSE;
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
    'display' => 'block',
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
  $pane->uuid = 'c0a12c4e-3dac-4d15-8617-340c3e94b4b5';
  $display->content['new-c0a12c4e-3dac-4d15-8617-340c3e94b4b5'] = $pane;
  $display->panels['right'][0] = 'new-c0a12c4e-3dac-4d15-8617-340c3e94b4b5';
  $pane = new stdClass();
  $pane->pid = 'new-96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
    'display' => 'other_activities',
    'context' => array(
      0 => '',
      1 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'other-activities-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $display->content['new-96750ec7-139d-4d98-8162-7cfb5567b1bc'] = $pane;
  $display->panels['right'][1] = 'new-96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $pane = new stdClass();
  $pane->pid = 'new-b9e71951-5bc6-4c9b-a0b9-216475259839';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-all_areas_of_activity';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = 'b9e71951-5bc6-4c9b-a0b9-216475259839';
  $display->content['new-b9e71951-5bc6-4c9b-a0b9-216475259839'] = $pane;
  $display->panels['right'][2] = 'new-b9e71951-5bc6-4c9b-a0b9-216475259839';
  $pane = new stdClass();
  $pane->pid = 'new-5ad0e171-484b-4069-a6a8-84522103a560';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'custom_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-block-right',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5ad0e171-484b-4069-a6a8-84522103a560';
  $display->content['new-5ad0e171-484b-4069-a6a8-84522103a560'] = $pane;
  $display->panels['right'][3] = 'new-5ad0e171-484b-4069-a6a8-84522103a560';
  $pane = new stdClass();
  $pane->pid = 'new-43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-right_panel_press_center_block';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = '43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $display->content['new-43c9f034-ba51-4c2e-a311-b4de2fa0530d'] = $pane;
  $display->panels['right'][4] = 'new-43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $pane = new stdClass();
  $pane->pid = 'new-e7cee5f8-abf1-4500-bda3-028f599a30ef';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'custom_header_block';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:custom_content:field_rchb_show_block',
        'settings' => array(
          'field_rchb_show_block' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_rchb_show_block_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
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
    'display' => 'custom_header_block_view',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'custom-page-header-block',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e7cee5f8-abf1-4500-bda3-028f599a30ef';
  $display->content['new-e7cee5f8-abf1-4500-bda3-028f599a30ef'] = $pane;
  $display->panels['right'][5] = 'new-e7cee5f8-abf1-4500-bda3-028f599a30ef';
  $pane = new stdClass();
  $pane->pid = 'new-5536cd27-2232-48b2-b9f0-745411216764';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'custom_header_block';
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
    'display' => 'block_6',
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '5536cd27-2232-48b2-b9f0-745411216764';
  $display->content['new-5536cd27-2232-48b2-b9f0-745411216764'] = $pane;
  $display->panels['right'][6] = 'new-5536cd27-2232-48b2-b9f0-745411216764';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_22'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_23';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -5;
  $handler->conf = array(
    'title' => 'AKMI Artist Detail Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akaa-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'akmi_artists' => 'akmi_artists',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ae4bbcfd-9c40-438d-bf04-665bf02e2bf7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_23';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a04c85d6-98fb-45c2-885e-d88151e4af3c';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akmi_artists_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'image_artist_carousel',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a04c85d6-98fb-45c2-885e-d88151e4af3c';
  $display->content['new-a04c85d6-98fb-45c2-885e-d88151e4af3c'] = $pane;
  $display->panels['left'][0] = 'new-a04c85d6-98fb-45c2-885e-d88151e4af3c';
  $pane = new stdClass();
  $pane->pid = 'new-a71a8b00-5f50-45cd-be74-a6cf54f2db9a';
  $pane->panel = 'left';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => 'field-name-title-field',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a71a8b00-5f50-45cd-be74-a6cf54f2db9a';
  $display->content['new-a71a8b00-5f50-45cd-be74-a6cf54f2db9a'] = $pane;
  $display->panels['left'][1] = 'new-a71a8b00-5f50-45cd-be74-a6cf54f2db9a';
  $pane = new stdClass();
  $pane->pid = 'new-8a804077-fd68-4a39-b1b0-8b2995311bc7';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-akmi_performance-page';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Performance Finder',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectfinder-wrapper akaa-performancefinder-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8a804077-fd68-4a39-b1b0-8b2995311bc7';
  $display->content['new-8a804077-fd68-4a39-b1b0-8b2995311bc7'] = $pane;
  $display->panels['left'][2] = 'new-8a804077-fd68-4a39-b1b0-8b2995311bc7';
  $pane = new stdClass();
  $pane->pid = 'new-7b170a73-6642-4714-83b1-563e0b113c33';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="akaa-projectinfo-block-techinfo-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7b170a73-6642-4714-83b1-563e0b113c33';
  $display->content['new-7b170a73-6642-4714-83b1-563e0b113c33'] = $pane;
  $display->panels['left'][3] = 'new-7b170a73-6642-4714-83b1-563e0b113c33';
  $pane = new stdClass();
  $pane->pid = 'new-6fcb58c7-dcae-4948-8729-61df020fb323';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Technical info Title',
    'title' => '',
    'body' => '<?php print \'<h2 class="pane-title">Artist Information</h2>\'; ?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-techinfo-title',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6fcb58c7-dcae-4948-8729-61df020fb323';
  $display->content['new-6fcb58c7-dcae-4948-8729-61df020fb323'] = $pane;
  $display->panels['left'][4] = 'new-6fcb58c7-dcae-4948-8729-61df020fb323';
  $pane = new stdClass();
  $pane->pid = 'new-cf3fed40-ca76-41bd-87f4-dcf6fb2a52cd';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akmi_artists_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
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
  $pane->uuid = 'cf3fed40-ca76-41bd-87f4-dcf6fb2a52cd';
  $display->content['new-cf3fed40-ca76-41bd-87f4-dcf6fb2a52cd'] = $pane;
  $display->panels['left'][5] = 'new-cf3fed40-ca76-41bd-87f4-dcf6fb2a52cd';
  $pane = new stdClass();
  $pane->pid = 'new-540c5b99-ac1d-4290-ba0f-adc14f7d8942';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '540c5b99-ac1d-4290-ba0f-adc14f7d8942';
  $display->content['new-540c5b99-ac1d-4290-ba0f-adc14f7d8942'] = $pane;
  $display->panels['left'][6] = 'new-540c5b99-ac1d-4290-ba0f-adc14f7d8942';
  $pane = new stdClass();
  $pane->pid = 'new-486e70a7-c400-44f4-a79d-10c698b14f93';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => ' akaa-projectinfo-block-body-wrapper',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '486e70a7-c400-44f4-a79d-10c698b14f93';
  $display->content['new-486e70a7-c400-44f4-a79d-10c698b14f93'] = $pane;
  $display->panels['left'][7] = 'new-486e70a7-c400-44f4-a79d-10c698b14f93';
  $pane = new stdClass();
  $pane->pid = 'new-bc42d4f5-c416-4aca-98d8-50e6e2596167';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'perf_programme_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-projects-country',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'bc42d4f5-c416-4aca-98d8-50e6e2596167';
  $display->content['new-bc42d4f5-c416-4aca-98d8-50e6e2596167'] = $pane;
  $display->panels['left'][8] = 'new-bc42d4f5-c416-4aca-98d8-50e6e2596167';
  $pane = new stdClass();
  $pane->pid = 'new-8e3b2345-19cf-4b0f-8501-973f0f7c45a3';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akmi_artists_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-cycle-right',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e3b2345-19cf-4b0f-8501-973f0f7c45a3';
  $display->content['new-8e3b2345-19cf-4b0f-8501-973f0f7c45a3'] = $pane;
  $display->panels['right'][0] = 'new-8e3b2345-19cf-4b0f-8501-973f0f7c45a3';
  $pane = new stdClass();
  $pane->pid = 'new-e4bb5433-4b71-483f-90a3-b2c85edce758';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akmi_artists_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '50',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-all-award-cycle-btn',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e4bb5433-4b71-483f-90a3-b2c85edce758';
  $display->content['new-e4bb5433-4b71-483f-90a3-b2c85edce758'] = $pane;
  $display->panels['right'][1] = 'new-e4bb5433-4b71-483f-90a3-b2c85edce758';
  $pane = new stdClass();
  $pane->pid = 'new-56b47fe8-4b8d-4732-b739-09a40c04a90f';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'custom_header_block';
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
    'display' => 'custom_block_rhs',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akmi-custom-header-block',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '56b47fe8-4b8d-4732-b739-09a40c04a90f';
  $display->content['new-56b47fe8-4b8d-4732-b739-09a40c04a90f'] = $pane;
  $display->panels['right'][2] = 'new-56b47fe8-4b8d-4732-b739-09a40c04a90f';
  $pane = new stdClass();
  $pane->pid = 'new-6aa76631-744e-422d-91c1-04b1146cd185';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akmi_artists_views';
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
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-related-info',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6aa76631-744e-422d-91c1-04b1146cd185';
  $display->content['new-6aa76631-744e-422d-91c1-04b1146cd185'] = $pane;
  $display->panels['right'][3] = 'new-6aa76631-744e-422d-91c1-04b1146cd185';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_23'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_24';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'AKMI Performance Detail Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akmi-performance-body akaa-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'akmi_performance' => 'akmi_performance',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fd7c50d9-bcc5-4e28-97ac-4d2559fc87a5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_24';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-002563de-030a-463b-9a01-90908aaa168d';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'akmi_performance_carousel',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '002563de-030a-463b-9a01-90908aaa168d';
  $display->content['new-002563de-030a-463b-9a01-90908aaa168d'] = $pane;
  $display->panels['left'][0] = 'new-002563de-030a-463b-9a01-90908aaa168d';
  $pane = new stdClass();
  $pane->pid = 'new-62b35651-1dbf-4941-9a12-dbe04739005c';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-akmi_performance-page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Performance Finder',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectfinder-wrapper akaa-performancefinder-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '62b35651-1dbf-4941-9a12-dbe04739005c';
  $display->content['new-62b35651-1dbf-4941-9a12-dbe04739005c'] = $pane;
  $display->panels['left'][1] = 'new-62b35651-1dbf-4941-9a12-dbe04739005c';
  $pane = new stdClass();
  $pane->pid = 'new-cd50e66e-903e-4d6d-adcb-aeb8c3d95d81';
  $pane->panel = 'left';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => 'field-name-title-field',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-title',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cd50e66e-903e-4d6d-adcb-aeb8c3d95d81';
  $display->content['new-cd50e66e-903e-4d6d-adcb-aeb8c3d95d81'] = $pane;
  $display->panels['left'][2] = 'new-cd50e66e-903e-4d6d-adcb-aeb8c3d95d81';
  $pane = new stdClass();
  $pane->pid = 'new-99e1cb0f-792c-48ae-9998-e94c2bf9f7f3';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="akaa-projectinfo-block-techinfo-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '99e1cb0f-792c-48ae-9998-e94c2bf9f7f3';
  $display->content['new-99e1cb0f-792c-48ae-9998-e94c2bf9f7f3'] = $pane;
  $display->panels['left'][3] = 'new-99e1cb0f-792c-48ae-9998-e94c2bf9f7f3';
  $pane = new stdClass();
  $pane->pid = 'new-8ffadd91-d16e-436b-8824-feb8f049d56b';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'admin_title' => 'Technical Video Title',
    'title' => '',
    'body' => '<?php print \'<h2 class="pane-title">Video</h2>\'; ?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-techinfo-title',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8ffadd91-d16e-436b-8824-feb8f049d56b';
  $display->content['new-8ffadd91-d16e-436b-8824-feb8f049d56b'] = $pane;
  $display->panels['left'][4] = 'new-8ffadd91-d16e-436b-8824-feb8f049d56b';
  $pane = new stdClass();
  $pane->pid = 'new-2735a30b-966b-4b1d-b9a8-cd8fb8b9d394';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'performance_detail_page',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
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
  $pane->uuid = '2735a30b-966b-4b1d-b9a8-cd8fb8b9d394';
  $display->content['new-2735a30b-966b-4b1d-b9a8-cd8fb8b9d394'] = $pane;
  $display->panels['left'][5] = 'new-2735a30b-966b-4b1d-b9a8-cd8fb8b9d394';
  $pane = new stdClass();
  $pane->pid = 'new-b5033568-4709-4929-a8ec-b4f545b1488c';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'b5033568-4709-4929-a8ec-b4f545b1488c';
  $display->content['new-b5033568-4709-4929-a8ec-b4f545b1488c'] = $pane;
  $display->panels['left'][6] = 'new-b5033568-4709-4929-a8ec-b4f545b1488c';
  $pane = new stdClass();
  $pane->pid = 'new-c613e265-44bd-4efa-8545-232809f2bf15';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-body-wrapper',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'c613e265-44bd-4efa-8545-232809f2bf15';
  $display->content['new-c613e265-44bd-4efa-8545-232809f2bf15'] = $pane;
  $display->panels['left'][7] = 'new-c613e265-44bd-4efa-8545-232809f2bf15';
  $pane = new stdClass();
  $pane->pid = 'new-19848f62-2366-45ed-a3f0-b9b95609c9a7';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'artist_performance_table',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-projects-country',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '19848f62-2366-45ed-a3f0-b9b95609c9a7';
  $display->content['new-19848f62-2366-45ed-a3f0-b9b95609c9a7'] = $pane;
  $display->panels['left'][8] = 'new-19848f62-2366-45ed-a3f0-b9b95609c9a7';
  $pane = new stdClass();
  $pane->pid = 'new-1bb0e536-cfbc-4d68-b538-08780072c005';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
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
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-cycle-right',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bb0e536-cfbc-4d68-b538-08780072c005';
  $display->content['new-1bb0e536-cfbc-4d68-b538-08780072c005'] = $pane;
  $display->panels['right'][0] = 'new-1bb0e536-cfbc-4d68-b538-08780072c005';
  $pane = new stdClass();
  $pane->pid = 'new-a4f2315f-73ba-47c4-bd0e-b690da8c9969';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '30',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => '',
    ),
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
  $pane->locks = array();
  $pane->uuid = 'a4f2315f-73ba-47c4-bd0e-b690da8c9969';
  $display->content['new-a4f2315f-73ba-47c4-bd0e-b690da8c9969'] = $pane;
  $display->panels['right'][1] = 'new-a4f2315f-73ba-47c4-bd0e-b690da8c9969';
  $pane = new stdClass();
  $pane->pid = 'new-519f27cb-798a-40f9-b319-2cf564cd023c';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'custom_header_block';
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
    'display' => 'custom_block_rhs',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akmi-custom-header-block',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '519f27cb-798a-40f9-b319-2cf564cd023c';
  $display->content['new-519f27cb-798a-40f9-b319-2cf564cd023c'] = $pane;
  $display->panels['right'][2] = 'new-519f27cb-798a-40f9-b319-2cf564cd023c';
  $pane = new stdClass();
  $pane->pid = 'new-8cf8ef1a-62d8-4c04-b667-eb495c97993a';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '8cf8ef1a-62d8-4c04-b667-eb495c97993a';
  $display->content['new-8cf8ef1a-62d8-4c04-b667-eb495c97993a'] = $pane;
  $display->panels['right'][3] = 'new-8cf8ef1a-62d8-4c04-b667-eb495c97993a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_24'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_25';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'AKDN-Social',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'custom_content' => 'custom_content',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'akdn-social',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c91c91e3-a843-4312-b0d3-05c1fac9f986';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_25';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $display->content['new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483'] = $pane;
  $display->panels['middle'][0] = 'new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $pane = new stdClass();
  $pane->pid = 'new-c550aa88-5c72-4517-b886-41a3e34acde7';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c550aa88-5c72-4517-b886-41a3e34acde7';
  $display->content['new-c550aa88-5c72-4517-b886-41a3e34acde7'] = $pane;
  $display->panels['middle'][1] = 'new-c550aa88-5c72-4517-b886-41a3e34acde7';
  $pane = new stdClass();
  $pane->pid = 'new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'basic_page_summary',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
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
  $pane->uuid = '42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $display->content['new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb'] = $pane;
  $display->panels['middle'][2] = 'new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $pane = new stdClass();
  $pane->pid = 'new-b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:custom_content:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'basic',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => 'basic',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-body',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $display->content['new-b9caf433-e7db-43b3-ba41-4d4d96b48954'] = $pane;
  $display->panels['middle'][3] = 'new-b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $pane = new stdClass();
  $pane->pid = 'new-24d44d98-25dd-4110-b778-c63f4c59f000';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_accordian_style_block';
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
  $pane->uuid = '24d44d98-25dd-4110-b778-c63f4c59f000';
  $display->content['new-24d44d98-25dd-4110-b778-c63f4c59f000'] = $pane;
  $display->panels['middle'][4] = 'new-24d44d98-25dd-4110-b778-c63f4c59f000';
  $pane = new stdClass();
  $pane->pid = 'new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_link_to_style_block';
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
  $pane->uuid = 'd8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $display->content['new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2'] = $pane;
  $display->panels['middle'][5] = 'new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $pane = new stdClass();
  $pane->pid = 'new-96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'akdn-social',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
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
    'display' => 'other_activities',
    'context' => array(
      0 => '',
      1 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'other-activities-title',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $display->content['new-96750ec7-139d-4d98-8162-7cfb5567b1bc'] = $pane;
  $display->panels['middle'][6] = 'new-96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $pane = new stdClass();
  $pane->pid = 'new-b9e71951-5bc6-4c9b-a0b9-216475259839';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-all_areas_of_activity';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'akdn-social',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->uuid = 'b9e71951-5bc6-4c9b-a0b9-216475259839';
  $display->content['new-b9e71951-5bc6-4c9b-a0b9-216475259839'] = $pane;
  $display->panels['middle'][7] = 'new-b9e71951-5bc6-4c9b-a0b9-216475259839';
  $pane = new stdClass();
  $pane->pid = 'new-94b74415-18fd-4315-aedc-6cbbb273e136';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'akdn-social',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'custom_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-block-right',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '94b74415-18fd-4315-aedc-6cbbb273e136';
  $display->content['new-94b74415-18fd-4315-aedc-6cbbb273e136'] = $pane;
  $display->panels['middle'][8] = 'new-94b74415-18fd-4315-aedc-6cbbb273e136';
  $pane = new stdClass();
  $pane->pid = 'new-43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-right_panel_press_center_block';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'akdn-social',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $display->content['new-43c9f034-ba51-4c2e-a311-b4de2fa0530d'] = $pane;
  $display->panels['middle'][9] = 'new-43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_25'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_26';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'T&C-Privacy Policy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'custom_content' => 'custom_content',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'terms-conditions
privacy-policy',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c91c91e3-a843-4312-b0d3-05c1fac9f986';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_26';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $display->content['new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483'] = $pane;
  $display->panels['middle'][0] = 'new-a5a2207c-cd63-45f6-9f76-e4cea0ab5483';
  $pane = new stdClass();
  $pane->pid = 'new-c550aa88-5c72-4517-b886-41a3e34acde7';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c550aa88-5c72-4517-b886-41a3e34acde7';
  $display->content['new-c550aa88-5c72-4517-b886-41a3e34acde7'] = $pane;
  $display->panels['middle'][1] = 'new-c550aa88-5c72-4517-b886-41a3e34acde7';
  $pane = new stdClass();
  $pane->pid = 'new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'basic_page_summary',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
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
  $pane->uuid = '42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $display->content['new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb'] = $pane;
  $display->panels['middle'][2] = 'new-42e822ca-bc51-4b22-a7fa-070bc30dfbcb';
  $pane = new stdClass();
  $pane->pid = 'new-b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:custom_content:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'basic',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => 'basic',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-body',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $display->content['new-b9caf433-e7db-43b3-ba41-4d4d96b48954'] = $pane;
  $display->panels['middle'][3] = 'new-b9caf433-e7db-43b3-ba41-4d4d96b48954';
  $pane = new stdClass();
  $pane->pid = 'new-24d44d98-25dd-4110-b778-c63f4c59f000';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_accordian_style_block';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '24d44d98-25dd-4110-b778-c63f4c59f000';
  $display->content['new-24d44d98-25dd-4110-b778-c63f4c59f000'] = $pane;
  $display->panels['middle'][4] = 'new-24d44d98-25dd-4110-b778-c63f4c59f000';
  $pane = new stdClass();
  $pane->pid = 'new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_link_to_style_block';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $display->content['new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2'] = $pane;
  $display->panels['middle'][5] = 'new-d8250acf-ee9b-4aef-8ef3-cf626a1cf4a2';
  $pane = new stdClass();
  $pane->pid = 'new-96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
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
    'display' => 'other_activities',
    'context' => array(
      0 => '',
      1 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'other-activities-title',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $display->content['new-96750ec7-139d-4d98-8162-7cfb5567b1bc'] = $pane;
  $display->panels['middle'][6] = 'new-96750ec7-139d-4d98-8162-7cfb5567b1bc';
  $pane = new stdClass();
  $pane->pid = 'new-b9e71951-5bc6-4c9b-a0b9-216475259839';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-all_areas_of_activity';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->uuid = 'b9e71951-5bc6-4c9b-a0b9-216475259839';
  $display->content['new-b9e71951-5bc6-4c9b-a0b9-216475259839'] = $pane;
  $display->panels['middle'][7] = 'new-b9e71951-5bc6-4c9b-a0b9-216475259839';
  $pane = new stdClass();
  $pane->pid = 'new-94b74415-18fd-4315-aedc-6cbbb273e136';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'custom_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-custom-block-right',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '94b74415-18fd-4315-aedc-6cbbb273e136';
  $display->content['new-94b74415-18fd-4315-aedc-6cbbb273e136'] = $pane;
  $display->panels['middle'][8] = 'new-94b74415-18fd-4315-aedc-6cbbb273e136';
  $pane = new stdClass();
  $pane->pid = 'new-43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-right_panel_press_center_block';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $display->content['new-43c9f034-ba51-4c2e-a311-b4de2fa0530d'] = $pane;
  $display->panels['middle'][9] = 'new-43c9f034-ba51-4c2e-a311-b4de2fa0530d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_26'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Geography',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'geography-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          13 => '13',
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
          11 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'geography' => 'geography',
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
  $display->layout = 'omega_24_threerow_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b0295e68-793b-401d-be5c-29b3fcb87669';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0bfe6ff8-0120-4a33-81aa-b71909c00e16';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'manual_about_page';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-23',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0bfe6ff8-0120-4a33-81aa-b71909c00e16';
  $display->content['new-0bfe6ff8-0120-4a33-81aa-b71909c00e16'] = $pane;
  $display->panels['bottom'][0] = 'new-0bfe6ff8-0120-4a33-81aa-b71909c00e16';
  $pane = new stdClass();
  $pane->pid = 'new-f33ad4a9-8b84-4193-9aa8-4c4a69427872';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-18',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f33ad4a9-8b84-4193-9aa8-4c4a69427872';
  $display->content['new-f33ad4a9-8b84-4193-9aa8-4c4a69427872'] = $pane;
  $display->panels['bottom'][1] = 'new-f33ad4a9-8b84-4193-9aa8-4c4a69427872';
  $pane = new stdClass();
  $pane->pid = 'new-fcb9e3da-066b-4710-8fe5-ef0857183704';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="whatwedo-left geography-grid-equalise">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fcb9e3da-066b-4710-8fe5-ef0857183704';
  $display->content['new-fcb9e3da-066b-4710-8fe5-ef0857183704'] = $pane;
  $display->panels['bottom'][2] = 'new-fcb9e3da-066b-4710-8fe5-ef0857183704';
  $pane = new stdClass();
  $pane->pid = 'new-0684b759-5e65-4fff-b5d4-8d91a8b50f72';
  $pane->panel = 'bottom';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'if (arg(0) == "node" && is_numeric(arg(1))) {
    $node_data = menu_get_object();
    $mlid = $node_data->menu_node_links[key($node_data->menu_node_links)];
    $plid =  $mlid->mlid;
  $result = db_query("SELECT  COUNT(*) AS count
  FROM  node  LEFT JOIN  field_data_field_about_page  field_data_field_about_page ON node.nid = field_data_field_about_page.entity_id AND field_data_field_about_page.entity_type = \'node\' AND field_data_field_about_page.deleted = \'0\'
  LEFT JOIN  node  node_field_data_field_about_page ON field_data_field_about_page.field_about_page_nid = node_field_data_field_about_page.nid
  LEFT JOIN  menu_node  menu_node ON node.nid = menu_node.nid
  LEFT JOIN  menu_links  menu_links ON menu_node.mlid = menu_links.mlid
  WHERE  menu_links.plid = :plid  AND node.status = \'1\' AND node.type IN  (\'page\', \'geography\', \'hub_page\')", array(\':plid\' => $plid));
  $record = $result->fetchField(); 
    if($record == 0 || $record == 1 ) {
      return TRUE;
    } else {
     return FALSE;
   }
  }
  ',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'teaser',
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'www-summary',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0684b759-5e65-4fff-b5d4-8d91a8b50f72';
  $display->content['new-0684b759-5e65-4fff-b5d4-8d91a8b50f72'] = $pane;
  $display->panels['bottom'][3] = 'new-0684b759-5e65-4fff-b5d4-8d91a8b50f72';
  $pane = new stdClass();
  $pane->pid = 'new-18c899ec-404f-4793-ac89-313350d05781';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'if (arg(0) == "node" && is_numeric(arg(1))) {
    $node_data = menu_get_object();
    $mlid = $node_data->menu_node_links[key($node_data->menu_node_links)];
    $plid =  $mlid->mlid;
  $result = db_query("SELECT  COUNT(*) AS count
  FROM  node  LEFT JOIN  field_data_field_about_page  field_data_field_about_page ON node.nid = field_data_field_about_page.entity_id AND field_data_field_about_page.entity_type = \'node\' AND field_data_field_about_page.deleted = \'0\'
  LEFT JOIN  node  node_field_data_field_about_page ON field_data_field_about_page.field_about_page_nid = node_field_data_field_about_page.nid
  LEFT JOIN  menu_node  menu_node ON node.nid = menu_node.nid
  LEFT JOIN  menu_links  menu_links ON menu_node.mlid = menu_links.mlid
  WHERE  menu_links.plid = :plid  AND node.status = \'1\' AND node.type IN  (\'page\', \'geography\', \'hub_page\')", array(\':plid\' => $plid));
  $record = $result->fetchField(); 
    if($record == 0 || $record == 1 ) {
      return TRUE;
    } else {
     return FALSE;
   }
  }
  ',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'www-body',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '18c899ec-404f-4793-ac89-313350d05781';
  $display->content['new-18c899ec-404f-4793-ac89-313350d05781'] = $pane;
  $display->panels['bottom'][4] = 'new-18c899ec-404f-4793-ac89-313350d05781';
  $pane = new stdClass();
  $pane->pid = 'new-5157fa85-2021-4923-8f58-3e30489f5c39';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '5157fa85-2021-4923-8f58-3e30489f5c39';
  $display->content['new-5157fa85-2021-4923-8f58-3e30489f5c39'] = $pane;
  $display->panels['bottom'][5] = 'new-5157fa85-2021-4923-8f58-3e30489f5c39';
  $pane = new stdClass();
  $pane->pid = 'new-b565c680-f793-4c48-94f3-5fc1c61d20bf';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="whatwedo-right geography-see-also geography-grid-equalise">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'b565c680-f793-4c48-94f3-5fc1c61d20bf';
  $display->content['new-b565c680-f793-4c48-94f3-5fc1c61d20bf'] = $pane;
  $display->panels['bottom'][6] = 'new-b565c680-f793-4c48-94f3-5fc1c61d20bf';
  $pane = new stdClass();
  $pane->pid = 'new-843ba46e-542f-40d0-bd52-83b9c9092a32';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
    'display' => 'block_5',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'see-also-brochure',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '843ba46e-542f-40d0-bd52-83b9c9092a32';
  $display->content['new-843ba46e-542f-40d0-bd52-83b9c9092a32'] = $pane;
  $display->panels['bottom'][7] = 'new-843ba46e-542f-40d0-bd52-83b9c9092a32';
  $pane = new stdClass();
  $pane->pid = 'new-8f1bb2d7-5456-4e8e-9fef-f3d820489e8e';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:geography:field_show_block',
        'settings' => array(
          'field_show_block' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_block_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'custom_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'see-also-custom',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '8f1bb2d7-5456-4e8e-9fef-f3d820489e8e';
  $display->content['new-8f1bb2d7-5456-4e8e-9fef-f3d820489e8e'] = $pane;
  $display->panels['bottom'][8] = 'new-8f1bb2d7-5456-4e8e-9fef-f3d820489e8e';
  $pane = new stdClass();
  $pane->pid = 'new-17111f9c-9bb8-4575-959c-c4a905e11273';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '17111f9c-9bb8-4575-959c-c4a905e11273';
  $display->content['new-17111f9c-9bb8-4575-959c-c4a905e11273'] = $pane;
  $display->panels['bottom'][9] = 'new-17111f9c-9bb8-4575-959c-c4a905e11273';
  $pane = new stdClass();
  $pane->pid = 'new-096495c4-987e-4376-baa7-a7b6d6b34cbb';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'if (arg(0) == "node" && is_numeric(arg(1))) {
    $node_data = menu_get_object();
    $mlid = $node_data->menu_node_links[key($node_data->menu_node_links)];
    $plid =  $mlid->mlid;
  $result = db_query("SELECT  COUNT(*) AS count
  FROM  node  LEFT JOIN  field_data_field_about_page  field_data_field_about_page ON node.nid = field_data_field_about_page.entity_id AND field_data_field_about_page.entity_type = \'node\' AND field_data_field_about_page.deleted = \'0\'
  LEFT JOIN  node  node_field_data_field_about_page ON field_data_field_about_page.field_about_page_nid = node_field_data_field_about_page.nid
  LEFT JOIN  menu_node  menu_node ON node.nid = menu_node.nid
  LEFT JOIN  menu_links  menu_links ON menu_node.mlid = menu_links.mlid
  WHERE  menu_links.plid = :plid  AND node.status = \'1\' AND node.type IN  (\'page\', \'geography\', \'hub_page\')", array(\':plid\' => $plid));
  $record = $result->fetchField(); 
    if($record > 1 ) {
      return TRUE;
    } else {
     return FALSE;
   }
  }
  ',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'country_hub_pages',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'print-wrapper',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '096495c4-987e-4376-baa7-a7b6d6b34cbb';
  $display->content['new-096495c4-987e-4376-baa7-a7b6d6b34cbb'] = $pane;
  $display->panels['bottom'][10] = 'new-096495c4-987e-4376-baa7-a7b6d6b34cbb';
  $pane = new stdClass();
  $pane->pid = 'new-ff3541f4-06c8-494b-af39-674d6b387711';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'ff3541f4-06c8-494b-af39-674d6b387711';
  $display->content['new-ff3541f4-06c8-494b-af39-674d6b387711'] = $pane;
  $display->panels['bottom'][11] = 'new-ff3541f4-06c8-494b-af39-674d6b387711';
  $pane = new stdClass();
  $pane->pid = 'new-2c2e5640-8d0c-46e8-b316-e62abef02db7';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-news_and_resources_links';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '2c2e5640-8d0c-46e8-b316-e62abef02db7';
  $display->content['new-2c2e5640-8d0c-46e8-b316-e62abef02db7'] = $pane;
  $display->panels['bottom'][12] = 'new-2c2e5640-8d0c-46e8-b316-e62abef02db7';
  $pane = new stdClass();
  $pane->pid = 'new-e6b7e26e-dc39-47a8-ab40-12a06c1d9a97';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-what_we_do_news_and_resources';
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'e6b7e26e-dc39-47a8-ab40-12a06c1d9a97';
  $display->content['new-e6b7e26e-dc39-47a8-ab40-12a06c1d9a97'] = $pane;
  $display->panels['bottom'][13] = 'new-e6b7e26e-dc39-47a8-ab40-12a06c1d9a97';
  $pane = new stdClass();
  $pane->pid = 'new-d70ba694-715c-40bb-b800-14c3e7949000';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'd70ba694-715c-40bb-b800-14c3e7949000';
  $display->content['new-d70ba694-715c-40bb-b800-14c3e7949000'] = $pane;
  $display->panels['bottom'][14] = 'new-d70ba694-715c-40bb-b800-14c3e7949000';
  $pane = new stdClass();
  $pane->pid = 'new-e052e5e3-979c-4c05-a95b-1f0ac6a3903d';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'e052e5e3-979c-4c05-a95b-1f0ac6a3903d';
  $display->content['new-e052e5e3-979c-4c05-a95b-1f0ac6a3903d'] = $pane;
  $display->panels['bottom'][15] = 'new-e052e5e3-979c-4c05-a95b-1f0ac6a3903d';
  $pane = new stdClass();
  $pane->pid = 'new-a879d335-457c-474d-87b8-1f5142c90625';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_sheet_block';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'a879d335-457c-474d-87b8-1f5142c90625';
  $display->content['new-a879d335-457c-474d-87b8-1f5142c90625'] = $pane;
  $display->panels['bottom'][16] = 'new-a879d335-457c-474d-87b8-1f5142c90625';
  $pane = new stdClass();
  $pane->pid = 'new-1f5871b9-3cd0-4157-920b-93e302060a7a';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-fact_block_show_hide';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Has content',
          'php' => '$view = views_get_view_result(\'facts_blocks\', \'facts_block\', arg(1));
  $result = count($view);
  if (!empty($result)) {
  return true;
  }',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '1f5871b9-3cd0-4157-920b-93e302060a7a';
  $display->content['new-1f5871b9-3cd0-4157-920b-93e302060a7a'] = $pane;
  $display->panels['bottom'][17] = 'new-1f5871b9-3cd0-4157-920b-93e302060a7a';
  $pane = new stdClass();
  $pane->pid = 'new-984df6ba-f0e7-4874-a88b-0030f3106879';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'manual_fact_blocks',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '984df6ba-f0e7-4874-a88b-0030f3106879';
  $display->content['new-984df6ba-f0e7-4874-a88b-0030f3106879'] = $pane;
  $display->panels['bottom'][18] = 'new-984df6ba-f0e7-4874-a88b-0030f3106879';
  $pane = new stdClass();
  $pane->pid = 'new-56799b75-d7f0-4693-ba31-4df5f9a7456a';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</dev>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = '56799b75-d7f0-4693-ba31-4df5f9a7456a';
  $display->content['new-56799b75-d7f0-4693-ba31-4df5f9a7456a'] = $pane;
  $display->panels['bottom'][19] = 'new-56799b75-d7f0-4693-ba31-4df5f9a7456a';
  $pane = new stdClass();
  $pane->pid = 'new-b283e2d1-ade1-4289-8ece-12f3eb73416e';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_7',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = 'b283e2d1-ade1-4289-8ece-12f3eb73416e';
  $display->content['new-b283e2d1-ade1-4289-8ece-12f3eb73416e'] = $pane;
  $display->panels['bottom'][20] = 'new-b283e2d1-ade1-4289-8ece-12f3eb73416e';
  $pane = new stdClass();
  $pane->pid = 'new-23dc6030-020a-42ad-b48f-861b790228a5';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
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
    'display' => 'block_8',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = '23dc6030-020a-42ad-b48f-861b790228a5';
  $display->content['new-23dc6030-020a-42ad-b48f-861b790228a5'] = $pane;
  $display->panels['bottom'][21] = 'new-23dc6030-020a-42ad-b48f-861b790228a5';
  $pane = new stdClass();
  $pane->pid = 'new-e2c7305c-9b39-47a3-a1af-6d2aacd2635d';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_9',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = 'e2c7305c-9b39-47a3-a1af-6d2aacd2635d';
  $display->content['new-e2c7305c-9b39-47a3-a1af-6d2aacd2635d'] = $pane;
  $display->panels['bottom'][22] = 'new-e2c7305c-9b39-47a3-a1af-6d2aacd2635d';
  $pane = new stdClass();
  $pane->pid = 'new-9421c1e7-44fd-4a67-a5fe-f2b7fd6b32f4';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_10',
    'context' => array(
      0 => 'relationship_nat_term_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 23;
  $pane->locks = array();
  $pane->uuid = '9421c1e7-44fd-4a67-a5fe-f2b7fd6b32f4';
  $display->content['new-9421c1e7-44fd-4a67-a5fe-f2b7fd6b32f4'] = $pane;
  $display->panels['bottom'][23] = 'new-9421c1e7-44fd-4a67-a5fe-f2b7fd6b32f4';
  $pane = new stdClass();
  $pane->pid = 'new-4ea58167-b422-4027-a977-633b82b31537';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'projects';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_enable_project_slider',
        'settings' => array(
          'field_enable_project_slider' => array(
            'en' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_enable_project_slider_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-24 project-carousel',
  );
  $pane->extras = array();
  $pane->position = 24;
  $pane->locks = array();
  $pane->uuid = '4ea58167-b422-4027-a977-633b82b31537';
  $display->content['new-4ea58167-b422-4027-a977-633b82b31537'] = $pane;
  $display->panels['bottom'][24] = 'new-4ea58167-b422-4027-a977-633b82b31537';
  $pane = new stdClass();
  $pane->pid = 'new-a6c08814-7ca1-448f-a008-b05cdac4ee4b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_featured_content_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a6c08814-7ca1-448f-a008-b05cdac4ee4b';
  $display->content['new-a6c08814-7ca1-448f-a008-b05cdac4ee4b'] = $pane;
  $display->panels['middle'][0] = 'new-a6c08814-7ca1-448f-a008-b05cdac4ee4b';
  $pane = new stdClass();
  $pane->pid = 'new-e795d639-9623-4bda-abdf-d8452b67b2be';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow_manual';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:geography:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_featured_content_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e795d639-9623-4bda-abdf-d8452b67b2be';
  $display->content['new-e795d639-9623-4bda-abdf-d8452b67b2be'] = $pane;
  $display->panels['middle'][1] = 'new-e795d639-9623-4bda-abdf-d8452b67b2be';
  $pane = new stdClass();
  $pane->pid = 'new-30f6f4d9-f085-4092-87ea-10b6710ee04c';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About page short title',
    'title' => '',
    'body' => '<?php
  $node = menu_get_object();
  print \'<div class = "whatsnew-right-content">\';
  if (isset($node->field_about_page)) {
    $about = node_load(reset($node->field_about_page)[0][\'nid\']);
    if (isset($about->nid)) {
      print \'<p class = "whats-new-gold">AKDN IN</p>\';
      print \'<div class = "grid-whatsnew-block_subtitle">\'. reset($about->field_short_title)[0][\'value\'] .\'</div>\';
      if (empty(reset($about->body)[0][\'value\'])) {
        if(!empty(reset($about->body)[0][\'summary\'])) {
          print \'<div class="grid-whatsnew-block_body">\'. reset($about->body)[0][\'summary\'] .\' </div>\';
        }
      }
      else {
        if(!empty(reset($about->body)[0][\'summary\'])) {
          print \'<div class="grid-whatsnew-block_body">\'. reset($about->body)[0][\'summary\'] .\' <a  href="\'. url("node/{$about->nid}") .\'" class= "views-more-link">More</a></div>\';
        }
        else {
          print \'<div class="grid-whatsnew-block_body">\'. text_summary(reset($about->body)[0][\'value\'], reset($about->body)[0][\'format\'], 1200) .\' <a  href="\'. url("node/{$about->nid}") .\'" class= "views-more-link">More</a></div>\';
        }
      }
      print \'</div>\';
    }
  }
  ?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hub-about-short-title whatsnew-right',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '30f6f4d9-f085-4092-87ea-10b6710ee04c';
  $display->content['new-30f6f4d9-f085-4092-87ea-10b6710ee04c'] = $pane;
  $display->panels['middle'][2] = 'new-30f6f4d9-f085-4092-87ea-10b6710ee04c';
  $pane = new stdClass();
  $pane->pid = 'new-e40a5ad8-9e36-49bd-843a-388c58c484c2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e40a5ad8-9e36-49bd-843a-388c58c484c2';
  $display->content['new-e40a5ad8-9e36-49bd-843a-388c58c484c2'] = $pane;
  $display->panels['middle'][3] = 'new-e40a5ad8-9e36-49bd-843a-388c58c484c2';
  $pane = new stdClass();
  $pane->pid = 'new-326c325c-f870-4863-aa1f-4eb76145f0b8';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '326c325c-f870-4863-aa1f-4eb76145f0b8';
  $display->content['new-326c325c-f870-4863-aa1f-4eb76145f0b8'] = $pane;
  $display->panels['middle'][4] = 'new-326c325c-f870-4863-aa1f-4eb76145f0b8';
  $pane = new stdClass();
  $pane->pid = 'new-41501d96-1980-4f0e-91f4-3341f841bb01';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '41501d96-1980-4f0e-91f4-3341f841bb01';
  $display->content['new-41501d96-1980-4f0e-91f4-3341f841bb01'] = $pane;
  $display->panels['middle'][5] = 'new-41501d96-1980-4f0e-91f4-3341f841bb01';
  $pane = new stdClass();
  $pane->pid = 'new-7ba9ddae-f068-456a-9240-c96026f06190';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '7ba9ddae-f068-456a-9240-c96026f06190';
  $display->content['new-7ba9ddae-f068-456a-9240-c96026f06190'] = $pane;
  $display->panels['middle'][6] = 'new-7ba9ddae-f068-456a-9240-c96026f06190';
  $pane = new stdClass();
  $pane->pid = 'new-642806ab-f0a4-4cb4-b822-c7cb8ff4c406';
  $pane->panel = 'top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => 'title',
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
  $pane->uuid = '642806ab-f0a4-4cb4-b822-c7cb8ff4c406';
  $display->content['new-642806ab-f0a4-4cb4-b822-c7cb8ff4c406'] = $pane;
  $display->panels['top'][0] = 'new-642806ab-f0a4-4cb4-b822-c7cb8ff4c406';
  $pane = new stdClass();
  $pane->pid = 'new-0eb361ba-c3d1-4c99-8071-7c127bd87af0';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'title',
    'id' => '',
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
  $pane->uuid = '0eb361ba-c3d1-4c99-8071-7c127bd87af0';
  $display->content['new-0eb361ba-c3d1-4c99-8071-7c127bd87af0'] = $pane;
  $display->panels['top'][1] = 'new-0eb361ba-c3d1-4c99-8071-7c127bd87af0';
  $pane = new stdClass();
  $pane->pid = 'new-e57d3140-3539-4280-8f29-0c5d5fee1856';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_breadcrumb_trail';
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
  $pane->uuid = 'e57d3140-3539-4280-8f29-0c5d5fee1856';
  $display->content['new-e57d3140-3539-4280-8f29-0c5d5fee1856'] = $pane;
  $display->panels['top'][2] = 'new-e57d3140-3539-4280-8f29-0c5d5fee1856';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Hub Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'article_type' => 0,
          'media_folders' => 0,
          'podcast_type' => 0,
          'focus_areas' => 0,
          'countries' => 0,
          'agencies' => 0,
          'publication_type' => 0,
          'publication_category' => 0,
          'speech_themes' => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node from Node (field_agency_geography)',
        'keyword' => 'ag_geog_node',
        'name' => 'entity_from_field:field_agency_geography-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'hub_page' => 'hub_page',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dd1af45f-31e3-447c-a8c2-74decc66f62c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5adc2f76-7faf-4b0a-b7fc-abdc6d861f96';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5adc2f76-7faf-4b0a-b7fc-abdc6d861f96';
  $display->content['new-5adc2f76-7faf-4b0a-b7fc-abdc6d861f96'] = $pane;
  $display->panels['left'][0] = 'new-5adc2f76-7faf-4b0a-b7fc-abdc6d861f96';
  $pane = new stdClass();
  $pane->pid = 'new-4747e97c-7b30-4cab-953f-e8751dd673a4';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hub-about-short-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4747e97c-7b30-4cab-953f-e8751dd673a4';
  $display->content['new-4747e97c-7b30-4cab-953f-e8751dd673a4'] = $pane;
  $display->panels['left'][1] = 'new-4747e97c-7b30-4cab-953f-e8751dd673a4';
  $pane = new stdClass();
  $pane->pid = 'new-11677797-73c5-4b14-87db-84142223cb05';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'basic_pages_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'basic_page_summary',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
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
  $pane->uuid = '11677797-73c5-4b14-87db-84142223cb05';
  $display->content['new-11677797-73c5-4b14-87db-84142223cb05'] = $pane;
  $display->panels['left'][2] = 'new-11677797-73c5-4b14-87db-84142223cb05';
  $pane = new stdClass();
  $pane->pid = 'new-707051cf-00f2-485e-8dcf-b8e1307bdef0';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:hub_page:field_basic_page_choose_layout',
        'settings' => array(
          'field_basic_page_choose_layout' => array(
            'en' => array(
              0 => array(
                'value' => 'basic',
              ),
            ),
          ),
          'field_basic_page_choose_layout_value' => 'basic',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '707051cf-00f2-485e-8dcf-b8e1307bdef0';
  $display->content['new-707051cf-00f2-485e-8dcf-b8e1307bdef0'] = $pane;
  $display->panels['left'][3] = 'new-707051cf-00f2-485e-8dcf-b8e1307bdef0';
  $pane = new stdClass();
  $pane->pid = 'new-dc0eb75a-6aed-49dc-9a04-0d2ec7d7e790';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_accordian_style_block';
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
  $pane->uuid = 'dc0eb75a-6aed-49dc-9a04-0d2ec7d7e790';
  $display->content['new-dc0eb75a-6aed-49dc-9a04-0d2ec7d7e790'] = $pane;
  $display->panels['left'][4] = 'new-dc0eb75a-6aed-49dc-9a04-0d2ec7d7e790';
  $pane = new stdClass();
  $pane->pid = 'new-0db64c01-6023-4778-b672-9fbaaa483cd2';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-basic_page_link_to_style_block';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-quick-links',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '0db64c01-6023-4778-b672-9fbaaa483cd2';
  $display->content['new-0db64c01-6023-4778-b672-9fbaaa483cd2'] = $pane;
  $display->panels['left'][5] = 'new-0db64c01-6023-4778-b672-9fbaaa483cd2';
  $pane = new stdClass();
  $pane->pid = 'new-65030380-4467-4fa5-b236-2bcbe82a6356';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '65030380-4467-4fa5-b236-2bcbe82a6356';
  $display->content['new-65030380-4467-4fa5-b236-2bcbe82a6356'] = $pane;
  $display->panels['left'][6] = 'new-65030380-4467-4fa5-b236-2bcbe82a6356';
  $pane = new stdClass();
  $pane->pid = 'new-f79af014-dc77-4ff6-82d3-ab62e4428f01';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f79af014-dc77-4ff6-82d3-ab62e4428f01';
  $display->content['new-f79af014-dc77-4ff6-82d3-ab62e4428f01'] = $pane;
  $display->panels['left'][7] = 'new-f79af014-dc77-4ff6-82d3-ab62e4428f01';
  $pane = new stdClass();
  $pane->pid = 'new-11ecebe3-af90-4190-b9fc-6cfa29f80486';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '11ecebe3-af90-4190-b9fc-6cfa29f80486';
  $display->content['new-11ecebe3-af90-4190-b9fc-6cfa29f80486'] = $pane;
  $display->panels['left'][8] = 'new-11ecebe3-af90-4190-b9fc-6cfa29f80486';
  $pane = new stdClass();
  $pane->pid = 'new-9a83142b-4247-4d7b-9a40-277d4faa91c2';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '9a83142b-4247-4d7b-9a40-277d4faa91c2';
  $display->content['new-9a83142b-4247-4d7b-9a40-277d4faa91c2'] = $pane;
  $display->panels['left'][9] = 'new-9a83142b-4247-4d7b-9a40-277d4faa91c2';
  $pane = new stdClass();
  $pane->pid = 'new-06ad7e0d-1a24-46a5-a712-6b2dc681986c';
  $pane->panel = 'left';
  $pane->type = 'dsc';
  $pane->subtype = 'dsc';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'title' => '',
    'body' => '<?php

global $language;
$lang = $language->language;
$title;

if (isset($entity->field_short_title[$lang])) {
  $title = $entity->field_short_title[$lang][0][\'value\'];
} else if (isset($entity->field_short_title[\'und\'])) {
  $title = $entity->field_short_title[\'und\'][0][\'value\'];
} else {
  $title = \'\';
}

print "<h1>" . $title . "</h1>";

?>',
    'format' => 'ds_code',
    'context' => array(),
    'override_title' => '',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-23',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '06ad7e0d-1a24-46a5-a712-6b2dc681986c';
  $display->content['new-06ad7e0d-1a24-46a5-a712-6b2dc681986c'] = $pane;
  $display->panels['left'][10] = 'new-06ad7e0d-1a24-46a5-a712-6b2dc681986c';
  $pane = new stdClass();
  $pane->pid = 'new-4ae31797-1078-4669-bb00-a0cc37f7d0fb';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'manual_about_page';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-23',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '4ae31797-1078-4669-bb00-a0cc37f7d0fb';
  $display->content['new-4ae31797-1078-4669-bb00-a0cc37f7d0fb'] = $pane;
  $display->panels['left'][11] = 'new-4ae31797-1078-4669-bb00-a0cc37f7d0fb';
  $pane = new stdClass();
  $pane->pid = 'new-8de7b5be-d4bf-4545-8e19-c30b93800980';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-18',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '8de7b5be-d4bf-4545-8e19-c30b93800980';
  $display->content['new-8de7b5be-d4bf-4545-8e19-c30b93800980'] = $pane;
  $display->panels['left'][12] = 'new-8de7b5be-d4bf-4545-8e19-c30b93800980';
  $pane = new stdClass();
  $pane->pid = 'new-6b86a6f1-40ff-448f-a5d0-22382c2e4d7d';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_6',
    'context' => array(
      0 => 'relationship_entity_from_field:field_agency_geography-node-node_1.nid',
      1 => 'relationship_terms_from_node_1.tids',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '6b86a6f1-40ff-448f-a5d0-22382c2e4d7d';
  $display->content['new-6b86a6f1-40ff-448f-a5d0-22382c2e4d7d'] = $pane;
  $display->panels['left'][13] = 'new-6b86a6f1-40ff-448f-a5d0-22382c2e4d7d';
  $pane = new stdClass();
  $pane->pid = 'new-b7fb0bb1-7c82-44bc-a734-3c1837eb3baa';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_7',
    'context' => array(
      0 => 'relationship_terms_from_node_1.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'b7fb0bb1-7c82-44bc-a734-3c1837eb3baa';
  $display->content['new-b7fb0bb1-7c82-44bc-a734-3c1837eb3baa'] = $pane;
  $display->panels['left'][14] = 'new-b7fb0bb1-7c82-44bc-a734-3c1837eb3baa';
  $pane = new stdClass();
  $pane->pid = 'new-1782d130-eff1-498d-ad21-76b8a4420af7';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
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
    'display' => 'block_8',
    'context' => array(
      0 => 'relationship_terms_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '1782d130-eff1-498d-ad21-76b8a4420af7';
  $display->content['new-1782d130-eff1-498d-ad21-76b8a4420af7'] = $pane;
  $display->panels['left'][15] = 'new-1782d130-eff1-498d-ad21-76b8a4420af7';
  $pane = new stdClass();
  $pane->pid = 'new-26dd65a2-d9d7-4382-bb67-06b1fdaf0601';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_9',
    'context' => array(
      0 => 'relationship_terms_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '26dd65a2-d9d7-4382-bb67-06b1fdaf0601';
  $display->content['new-26dd65a2-d9d7-4382-bb67-06b1fdaf0601'] = $pane;
  $display->panels['left'][16] = 'new-26dd65a2-d9d7-4382-bb67-06b1fdaf0601';
  $pane = new stdClass();
  $pane->pid = 'new-9a2edd56-135a-4c46-8611-691978ccd355';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_10',
    'context' => array(
      0 => 'relationship_terms_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '9a2edd56-135a-4c46-8611-691978ccd355';
  $display->content['new-9a2edd56-135a-4c46-8611-691978ccd355'] = $pane;
  $display->panels['left'][17] = 'new-9a2edd56-135a-4c46-8611-691978ccd355';
  $pane = new stdClass();
  $pane->pid = 'new-012d56ea-6162-48d0-9e76-41fe25968156';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'other_activities',
    'context' => array(
      0 => '',
      1 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'other-activities-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '012d56ea-6162-48d0-9e76-41fe25968156';
  $display->content['new-012d56ea-6162-48d0-9e76-41fe25968156'] = $pane;
  $display->panels['right'][0] = 'new-012d56ea-6162-48d0-9e76-41fe25968156';
  $pane = new stdClass();
  $pane->pid = 'new-46a1b196-2684-4cc6-b214-dba06e6539a2';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-all_areas_of_activity';
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
  $pane->uuid = '46a1b196-2684-4cc6-b214-dba06e6539a2';
  $display->content['new-46a1b196-2684-4cc6-b214-dba06e6539a2'] = $pane;
  $display->panels['right'][1] = 'new-46a1b196-2684-4cc6-b214-dba06e6539a2';
  $pane = new stdClass();
  $pane->pid = 'new-4030d631-422b-455f-80fb-f29eae5d212f';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'hub_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:hub_page:field_right_show_block',
        'settings' => array(
          'field_right_show_block' => array(
            'en' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_right_show_block_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'custom_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hub-page-rural-development',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4030d631-422b-455f-80fb-f29eae5d212f';
  $display->content['new-4030d631-422b-455f-80fb-f29eae5d212f'] = $pane;
  $display->panels['right'][2] = 'new-4030d631-422b-455f-80fb-f29eae5d212f';
  $pane = new stdClass();
  $pane->pid = 'new-ee0c20e2-079f-4757-9c94-b28fb72b1283';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-right_panel_press_center_block';
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
  $pane->uuid = 'ee0c20e2-079f-4757-9c94-b28fb72b1283';
  $display->content['new-ee0c20e2-079f-4757-9c94-b28fb72b1283'] = $pane;
  $display->panels['right'][3] = 'new-ee0c20e2-079f-4757-9c94-b28fb72b1283';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Project',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'press-release-detail akdn-project-details',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'article_type' => 0,
          'media_folders' => 0,
          'podcast_type' => 0,
          'focus_areas' => 0,
          'countries' => 0,
          'agencies' => 0,
          'publication_type' => 0,
          'publication_category' => 0,
          'speech_themes' => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa06f1f3-ada1-4159-926f-368d4ac1ef13';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-33a5e31a-f596-4958-938c-7ce9cca85b34';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'press_center_detail_page_slideshows';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '33a5e31a-f596-4958-938c-7ce9cca85b34';
  $display->content['new-33a5e31a-f596-4958-938c-7ce9cca85b34'] = $pane;
  $display->panels['left'][0] = 'new-33a5e31a-f596-4958-938c-7ce9cca85b34';
  $pane = new stdClass();
  $pane->pid = 'new-6d594eda-3d27-441b-a8fe-e8804b10e963';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '6d594eda-3d27-441b-a8fe-e8804b10e963';
  $display->content['new-6d594eda-3d27-441b-a8fe-e8804b10e963'] = $pane;
  $display->panels['left'][1] = 'new-6d594eda-3d27-441b-a8fe-e8804b10e963';
  $pane = new stdClass();
  $pane->pid = 'new-f5b8d00b-8551-4745-9a62-cd923071c6af';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sub_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'f5b8d00b-8551-4745-9a62-cd923071c6af';
  $display->content['new-f5b8d00b-8551-4745-9a62-cd923071c6af'] = $pane;
  $display->panels['left'][2] = 'new-f5b8d00b-8551-4745-9a62-cd923071c6af';
  $pane = new stdClass();
  $pane->pid = 'new-57888275-9068-472a-8ad0-9bcd4e37f20d';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sub_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-18 prefix-1',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '57888275-9068-472a-8ad0-9bcd4e37f20d';
  $display->content['new-57888275-9068-472a-8ad0-9bcd4e37f20d'] = $pane;
  $display->panels['left'][3] = 'new-57888275-9068-472a-8ad0-9bcd4e37f20d';
  $pane = new stdClass();
  $pane->pid = 'new-6cd1c4a1-0e7c-428d-a11e-e8b31ae344e2';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="related-block-info">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6cd1c4a1-0e7c-428d-a11e-e8b31ae344e2';
  $display->content['new-6cd1c4a1-0e7c-428d-a11e-e8b31ae344e2'] = $pane;
  $display->panels['left'][4] = 'new-6cd1c4a1-0e7c-428d-a11e-e8b31ae344e2';
  $pane = new stdClass();
  $pane->pid = 'new-0e3d4d74-cc9e-4487-a7d9-031096975027';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'More projects by',
    'title' => '',
    'body' => '<?php
print \'<h2 class="pane-title">\'.t(\'More projects by\').\'</h2>\';
?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '0e3d4d74-cc9e-4487-a7d9-031096975027';
  $display->content['new-0e3d4d74-cc9e-4487-a7d9-031096975027'] = $pane;
  $display->panels['left'][5] = 'new-0e3d4d74-cc9e-4487-a7d9-031096975027';
  $pane = new stdClass();
  $pane->pid = 'new-1a4df95e-93eb-409c-b5e6-52dd2233575e';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'project_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '1a4df95e-93eb-409c-b5e6-52dd2233575e';
  $display->content['new-1a4df95e-93eb-409c-b5e6-52dd2233575e'] = $pane;
  $display->panels['left'][6] = 'new-1a4df95e-93eb-409c-b5e6-52dd2233575e';
  $pane = new stdClass();
  $pane->pid = 'new-99a36f8f-162f-4d51-a948-a51f4f63f1b3';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_country';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'nat_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'More Projects By',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '99a36f8f-162f-4d51-a948-a51f4f63f1b3';
  $display->content['new-99a36f8f-162f-4d51-a948-a51f4f63f1b3'] = $pane;
  $display->panels['left'][7] = 'new-99a36f8f-162f-4d51-a948-a51f4f63f1b3';
  $pane = new stdClass();
  $pane->pid = 'new-994feef6-6916-47f2-9fd8-0175a6e07408';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_agency';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'nat_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '994feef6-6916-47f2-9fd8-0175a6e07408';
  $display->content['new-994feef6-6916-47f2-9fd8-0175a6e07408'] = $pane;
  $display->panels['left'][8] = 'new-994feef6-6916-47f2-9fd8-0175a6e07408';
  $pane = new stdClass();
  $pane->pid = 'new-8c293410-99af-4568-a234-7228739d5998';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_focus_area';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'nat_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '8c293410-99af-4568-a234-7228739d5998';
  $display->content['new-8c293410-99af-4568-a234-7228739d5998'] = $pane;
  $display->panels['left'][9] = 'new-8c293410-99af-4568-a234-7228739d5998';
  $pane = new stdClass();
  $pane->pid = 'new-1f44a020-9e4c-4cd9-9910-1e21317a9257';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '1f44a020-9e4c-4cd9-9910-1e21317a9257';
  $display->content['new-1f44a020-9e4c-4cd9-9910-1e21317a9257'] = $pane;
  $display->panels['left'][10] = 'new-1f44a020-9e4c-4cd9-9910-1e21317a9257';
  $pane = new stdClass();
  $pane->pid = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
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
    'css_id' => '',
    'css_class' => 'pane-email',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $display->content['new-fe90b133-3b04-4ac2-80a7-e680ae96b24b'] = $pane;
  $display->panels['left'][11] = 'new-fe90b133-3b04-4ac2-80a7-e680ae96b24b';
  $pane = new stdClass();
  $pane->pid = 'new-670cb09f-95c7-41df-9667-4691074265c0';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '670cb09f-95c7-41df-9667-4691074265c0';
  $display->content['new-670cb09f-95c7-41df-9667-4691074265c0'] = $pane;
  $display->panels['left'][12] = 'new-670cb09f-95c7-41df-9667-4691074265c0';
  $pane = new stdClass();
  $pane->pid = 'new-ea1adc31-0dcd-49e2-b35e-07afe756af87';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'ea1adc31-0dcd-49e2-b35e-07afe756af87';
  $display->content['new-ea1adc31-0dcd-49e2-b35e-07afe756af87'] = $pane;
  $display->panels['left'][13] = 'new-ea1adc31-0dcd-49e2-b35e-07afe756af87';
  $pane = new stdClass();
  $pane->pid = 'new-6846c9ec-e31b-4cf8-a398-242dcd163ca2';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'recent_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'context' => array(
      0 => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6846c9ec-e31b-4cf8-a398-242dcd163ca2';
  $display->content['new-6846c9ec-e31b-4cf8-a398-242dcd163ca2'] = $pane;
  $display->panels['right'][0] = 'new-6846c9ec-e31b-4cf8-a398-242dcd163ca2';
  $pane = new stdClass();
  $pane->pid = 'new-142b89bf-25e5-48da-83ef-82fa400eb8f9';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_11',
    'context' => array(
      0 => 'relationship_terms_from_node_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '142b89bf-25e5-48da-83ef-82fa400eb8f9';
  $display->content['new-142b89bf-25e5-48da-83ef-82fa400eb8f9'] = $pane;
  $display->panels['right'][1] = 'new-142b89bf-25e5-48da-83ef-82fa400eb8f9';
  $pane = new stdClass();
  $pane->pid = 'new-b891fdf2-49cc-4d62-ad3c-2504ab839671';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b891fdf2-49cc-4d62-ad3c-2504ab839671';
  $display->content['new-b891fdf2-49cc-4d62-ad3c-2504ab839671'] = $pane;
  $display->panels['right'][2] = 'new-b891fdf2-49cc-4d62-ad3c-2504ab839671';
  $pane = new stdClass();
  $pane->pid = 'new-d0ff1784-99c6-46ad-86ef-1653d51faadd';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-see-also';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-menu-menu-see-also',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd0ff1784-99c6-46ad-86ef-1653d51faadd';
  $display->content['new-d0ff1784-99c6-46ad-86ef-1653d51faadd'] = $pane;
  $display->panels['right'][3] = 'new-d0ff1784-99c6-46ad-86ef-1653d51faadd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Agency - AKAA',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akaa-body akaa-akmi-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          13 => '13',
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
          11 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Agency [field_agency])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_agency-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'agency' => 'agency',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'agencies/aga-khan-award-architecture-0
architecture
node/9576',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '889376c6-bfe3-4331-9425-a48f5415438c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9cc31b64-51e0-4186-a81a-7e24a4962442';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_agency_logo_with_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-logotitle',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9cc31b64-51e0-4186-a81a-7e24a4962442';
  $display->content['new-9cc31b64-51e0-4186-a81a-7e24a4962442'] = $pane;
  $display->panels['middle'][0] = 'new-9cc31b64-51e0-4186-a81a-7e24a4962442';
  $pane = new stdClass();
  $pane->pid = 'new-376c976e-e45d-4a06-acff-aefa2f61c649';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-page_lang_switcher';
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
  $pane->uuid = '376c976e-e45d-4a06-acff-aefa2f61c649';
  $display->content['new-376c976e-e45d-4a06-acff-aefa2f61c649'] = $pane;
  $display->panels['middle'][1] = 'new-376c976e-e45d-4a06-acff-aefa2f61c649';
  $pane = new stdClass();
  $pane->pid = 'new-e17359a1-b697-4cc1-8e4f-352d22515840';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_breadcrumb_trail';
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
  $pane->uuid = 'e17359a1-b697-4cc1-8e4f-352d22515840';
  $display->content['new-e17359a1-b697-4cc1-8e4f-352d22515840'] = $pane;
  $display->panels['middle'][2] = 'new-e17359a1-b697-4cc1-8e4f-352d22515840';
  $pane = new stdClass();
  $pane->pid = 'new-55f1ca01-60f3-4a80-9da3-c3f43371ec2d';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_featured_content_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_8',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '55f1ca01-60f3-4a80-9da3-c3f43371ec2d';
  $display->content['new-55f1ca01-60f3-4a80-9da3-c3f43371ec2d'] = $pane;
  $display->panels['middle'][3] = 'new-55f1ca01-60f3-4a80-9da3-c3f43371ec2d';
  $pane = new stdClass();
  $pane->pid = 'new-a6140b18-4691-460a-b8df-592cf86a5018';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow_manual';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_featured_content_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a6140b18-4691-460a-b8df-592cf86a5018';
  $display->content['new-a6140b18-4691-460a-b8df-592cf86a5018'] = $pane;
  $display->panels['middle'][4] = 'new-a6140b18-4691-460a-b8df-592cf86a5018';
  $pane = new stdClass();
  $pane->pid = 'new-5e446bed-c7e4-4a41-970c-3c45c215c7f0';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_featured_content_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '5e446bed-c7e4-4a41-970c-3c45c215c7f0';
  $display->content['new-5e446bed-c7e4-4a41-970c-3c45c215c7f0'] = $pane;
  $display->panels['middle'][5] = 'new-5e446bed-c7e4-4a41-970c-3c45c215c7f0';
  $pane = new stdClass();
  $pane->pid = 'new-08e79d72-112f-4f20-93a7-ff60656c4084';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About page information',
    'title' => '',
    'body' => '<?php
global $language;
$lang = $language->language;

$node = menu_get_object();

print \'<div class = "whatsnew-right-content">\';
if (isset($node->field_about_page)) {
$about = (isset($node->field_about_page[$lang])) ?  node_load($node->field_about_page[$lang][0][\'nid\']) : node_load($node->field_about_page[$node->language][0][\'nid\']);
  if (isset($about->nid)) {
    print \'<p class = "whats-new-gold">\'.t("ABOUT THE").\'</p>\';
$short_title_language = (isset($about->field_short_title[$lang])) ?  $about->field_short_title[$lang] : $about->field_short_title[$about->language];
    print \'<div class = "grid-whatsnew-block_subtitle">\'. $short_title_language[0][\'value\'] .\'</div>\';
$body = (isset($about->body[$lang])) ?  $about->body[$lang] : $about->body[$about->language];

    if (!empty($body[0][\'summary\']) && !empty($body[0][\'value\']))
      print \'<div class="grid-whatsnew-block_body">\'. $body[0][\'summary\'] .\' <a class = "views-more-link-akaa" href="\'.
      url("node/{$about->nid}") .\'">\'.t("More").\'</a></div>\';
    else if (!empty($body[0][\'summary\']) && empty($body[0][\'value\']))
      print \'<div class="grid-whatsnew-block_body">\'. $body[0][\'summary\'] .\'</div>\';
    else
      print \'<div class="grid-whatsnew-block_body">\'. text_summary($body[0][\'value\'], $body[0][\'format\'], 1200) .\' <a class = "views-more-link-akaa" href="\'.url("node/{$about->nid}") .\'">\'.t("More").\'</a></div>\';
   }
}
print \'</div>\';
?>',
    'format' => 'php_code',
    'substitute' => 0,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'whatsnew-right',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '08e79d72-112f-4f20-93a7-ff60656c4084';
  $display->content['new-08e79d72-112f-4f20-93a7-ff60656c4084'] = $pane;
  $display->panels['middle'][6] = 'new-08e79d72-112f-4f20-93a7-ff60656c4084';
  $pane = new stdClass();
  $pane->pid = 'new-d19e0a11-792e-48eb-8586-daad72910091';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'd19e0a11-792e-48eb-8586-daad72910091';
  $display->content['new-d19e0a11-792e-48eb-8586-daad72910091'] = $pane;
  $display->panels['middle'][7] = 'new-d19e0a11-792e-48eb-8586-daad72910091';
  $pane = new stdClass();
  $pane->pid = 'new-ecf0c6b1-bd15-431a-b89d-47c68396466d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-akaa_projects-page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Project Finder',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectfinder-wrapper',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'ecf0c6b1-bd15-431a-b89d-47c68396466d';
  $display->content['new-ecf0c6b1-bd15-431a-b89d-47c68396466d'] = $pane;
  $display->panels['middle'][8] = 'new-ecf0c6b1-bd15-431a-b89d-47c68396466d';
  $pane = new stdClass();
  $pane->pid = 'new-d5101811-d924-4637-89a5-faa7d27d2ae3';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'd5101811-d924-4637-89a5-faa7d27d2ae3';
  $display->content['new-d5101811-d924-4637-89a5-faa7d27d2ae3'] = $pane;
  $display->panels['middle'][9] = 'new-d5101811-d924-4637-89a5-faa7d27d2ae3';
  $pane = new stdClass();
  $pane->pid = 'new-afb751dc-43b0-4132-96ca-fa0a4f0c6226';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Award Cycle: Header title',
    'title' => '',
    'body' => '<?php
print  \'<div class="sub-navbar">
<div class="pane-content">\' . t("<p><span>I</span><span>NFORMATION ON THE AWARD</span></p>") .\'
</div>
</div>\';
?>',
    'format' => 'php_code',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-header-title',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'afb751dc-43b0-4132-96ca-fa0a4f0c6226';
  $display->content['new-afb751dc-43b0-4132-96ca-fa0a4f0c6226'] = $pane;
  $display->panels['middle'][10] = 'new-afb751dc-43b0-4132-96ca-fa0a4f0c6226';
  $pane = new stdClass();
  $pane->pid = 'new-0c225ca9-d185-4dff-a620-7e6bdf67a6ab';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'wrapper_raw',
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="akaa-award-cycle-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '0c225ca9-d185-4dff-a620-7e6bdf67a6ab';
  $display->content['new-0c225ca9-d185-4dff-a620-7e6bdf67a6ab'] = $pane;
  $display->panels['middle'][11] = 'new-0c225ca9-d185-4dff-a620-7e6bdf67a6ab';
  $pane = new stdClass();
  $pane->pid = 'new-bbbce8f5-1405-4f60-9ff4-6089a1db986c';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'award_cycle';
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
    'display' => 'current_cycle_year_images',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'bbbce8f5-1405-4f60-9ff4-6089a1db986c';
  $display->content['new-bbbce8f5-1405-4f60-9ff4-6089a1db986c'] = $pane;
  $display->panels['middle'][12] = 'new-bbbce8f5-1405-4f60-9ff4-6089a1db986c';
  $pane = new stdClass();
  $pane->pid = 'new-827e7546-2c02-442a-bef7-6fbc7998ef28';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'award_cycle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '1',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_6',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '827e7546-2c02-442a-bef7-6fbc7998ef28';
  $display->content['new-827e7546-2c02-442a-bef7-6fbc7998ef28'] = $pane;
  $display->panels['middle'][13] = 'new-827e7546-2c02-442a-bef7-6fbc7998ef28';
  $pane = new stdClass();
  $pane->pid = 'new-a8f020c2-5ac8-481b-9971-8b5172feef79';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'award_cycle';
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
    'display' => 'akaa_short_video',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block akaa-award-cycle-block-short-video',
  );
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'a8f020c2-5ac8-481b-9971-8b5172feef79';
  $display->content['new-a8f020c2-5ac8-481b-9971-8b5172feef79'] = $pane;
  $display->panels['middle'][14] = 'new-a8f020c2-5ac8-481b-9971-8b5172feef79';
  $pane = new stdClass();
  $pane->pid = 'new-64c9f564-9a04-45e9-8efe-2cca89097d84';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'wrapper_raw',
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '64c9f564-9a04-45e9-8efe-2cca89097d84';
  $display->content['new-64c9f564-9a04-45e9-8efe-2cca89097d84'] = $pane;
  $display->panels['middle'][15] = 'new-64c9f564-9a04-45e9-8efe-2cca89097d84';
  $pane = new stdClass();
  $pane->pid = 'new-f2b827f4-3838-4e8f-b4a8-bfc41cbfdc00';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'f2b827f4-3838-4e8f-b4a8-bfc41cbfdc00';
  $display->content['new-f2b827f4-3838-4e8f-b4a8-bfc41cbfdc00'] = $pane;
  $display->panels['middle'][16] = 'new-f2b827f4-3838-4e8f-b4a8-bfc41cbfdc00';
  $pane = new stdClass();
  $pane->pid = 'new-1c331221-cabf-4cc5-a819-a950d29c0c1b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '1c331221-cabf-4cc5-a819-a950d29c0c1b';
  $display->content['new-1c331221-cabf-4cc5-a819-a950d29c0c1b'] = $pane;
  $display->panels['middle'][17] = 'new-1c331221-cabf-4cc5-a819-a950d29c0c1b';
  $pane = new stdClass();
  $pane->pid = 'new-af2d5300-2a06-4be8-bdfb-a9a62e265130';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akaa_home_page';
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
    'display' => 'block_2',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = 'af2d5300-2a06-4be8-bdfb-a9a62e265130';
  $display->content['new-af2d5300-2a06-4be8-bdfb-a9a62e265130'] = $pane;
  $display->panels['middle'][18] = 'new-af2d5300-2a06-4be8-bdfb-a9a62e265130';
  $pane = new stdClass();
  $pane->pid = 'new-f8a44f3c-e295-4d4e-a247-2361a32ad602';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akaa_custom-akaa_news_resources_tiles';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'show block 1',
          'php' => 'global $language;
  $node = $contexts[\'argument_entity_id:node_1\']->data;
  if(!empty($node->field_show_news_and_resources)){
    $news_and_resource = $node->field_show_news_and_resources[$language->language][0][\'value\'];
    if(!empty($news_and_resource)){ return true; }
  }',
        ),
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
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = 'f8a44f3c-e295-4d4e-a247-2361a32ad602';
  $display->content['new-f8a44f3c-e295-4d4e-a247-2361a32ad602'] = $pane;
  $display->panels['middle'][19] = 'new-f8a44f3c-e295-4d4e-a247-2361a32ad602';
  $pane = new stdClass();
  $pane->pid = 'new-fed62927-7cea-40f0-a78b-77ac0f882c8b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = 'fed62927-7cea-40f0-a78b-77ac0f882c8b';
  $display->content['new-fed62927-7cea-40f0-a78b-77ac0f882c8b'] = $pane;
  $display->panels['middle'][20] = 'new-fed62927-7cea-40f0-a78b-77ac0f882c8b';
  $pane = new stdClass();
  $pane->pid = 'new-1cf347f2-966d-45b5-98d8-272ccc335474';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = '1cf347f2-966d-45b5-98d8-272ccc335474';
  $display->content['new-1cf347f2-966d-45b5-98d8-272ccc335474'] = $pane;
  $display->panels['middle'][21] = 'new-1cf347f2-966d-45b5-98d8-272ccc335474';
  $pane = new stdClass();
  $pane->pid = 'new-c8da45b8-aaae-4b7c-8d2e-c8a71bcd1ea2';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akaa_home_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = 'c8da45b8-aaae-4b7c-8d2e-c8a71bcd1ea2';
  $display->content['new-c8da45b8-aaae-4b7c-8d2e-c8a71bcd1ea2'] = $pane;
  $display->panels['middle'][22] = 'new-c8da45b8-aaae-4b7c-8d2e-c8a71bcd1ea2';
  $pane = new stdClass();
  $pane->pid = 'new-aa8f7339-4abd-4c7c-8842-d2228249505e';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akaa_custom-_akaa_custom_social_sharing';
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
  $pane->position = 23;
  $pane->locks = array();
  $pane->uuid = 'aa8f7339-4abd-4c7c-8842-d2228249505e';
  $display->content['new-aa8f7339-4abd-4c7c-8842-d2228249505e'] = $pane;
  $display->panels['middle'][23] = 'new-aa8f7339-4abd-4c7c-8842-d2228249505e';
  $pane = new stdClass();
  $pane->pid = 'new-5d982b2f-e0e9-4417-9049-fb8379a058ef';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 24;
  $pane->locks = array();
  $pane->uuid = '5d982b2f-e0e9-4417-9049-fb8379a058ef';
  $display->content['new-5d982b2f-e0e9-4417-9049-fb8379a058ef'] = $pane;
  $display->panels['middle'][24] = 'new-5d982b2f-e0e9-4417-9049-fb8379a058ef';
  $pane = new stdClass();
  $pane->pid = 'new-77380b88-c152-4f12-9c25-862d9c78be74';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akaa_home_page';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Has content',
          'php' => '$view = views_get_view_result(\'facts_blocks\', \'block_3\', arg(1));
$result = count($view);
if (!empty($result)) {
return true;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 25;
  $pane->locks = array();
  $pane->uuid = '77380b88-c152-4f12-9c25-862d9c78be74';
  $display->content['new-77380b88-c152-4f12-9c25-862d9c78be74'] = $pane;
  $display->panels['middle'][25] = 'new-77380b88-c152-4f12-9c25-862d9c78be74';
  $pane = new stdClass();
  $pane->pid = 'new-8d63d0bf-8580-41db-a151-79c833868350';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'show fact block',
          'php' => 'global $language;
  $node = $contexts[\'argument_entity_id:node_1\']->data;
  if(!empty($node->field_show_fact_block)){
    $facts = $node->field_show_fact_block[$language->language][0][\'value\'];
    if(!empty($facts)){ return true; }
  }',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 26;
  $pane->locks = array();
  $pane->uuid = '8d63d0bf-8580-41db-a151-79c833868350';
  $display->content['new-8d63d0bf-8580-41db-a151-79c833868350'] = $pane;
  $display->panels['middle'][26] = 'new-8d63d0bf-8580-41db-a151-79c833868350';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Award Cycle',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akaa-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          13 => '13',
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
          11 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Agency [field_agency])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_agency-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'award_cycle' => 'award_cycle',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1905557b-18ae-404a-9919-7080a82b36a0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8c9b57c4-4314-4175-b8c8-1abe440216c2';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:award_cycle:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_featured_content_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_9',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-cycle-slideshow',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8c9b57c4-4314-4175-b8c8-1abe440216c2';
  $display->content['new-8c9b57c4-4314-4175-b8c8-1abe440216c2'] = $pane;
  $display->panels['left'][0] = 'new-8c9b57c4-4314-4175-b8c8-1abe440216c2';
  $pane = new stdClass();
  $pane->pid = 'new-38b1e796-692b-42e7-873d-8f92eeb1fdb8';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow_manual';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:award_cycle:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_featured_content_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-cycle-slideshow',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '38b1e796-692b-42e7-873d-8f92eeb1fdb8';
  $display->content['new-38b1e796-692b-42e7-873d-8f92eeb1fdb8'] = $pane;
  $display->panels['left'][1] = 'new-38b1e796-692b-42e7-873d-8f92eeb1fdb8';
  $pane = new stdClass();
  $pane->pid = 'new-66be9347-f2ae-47f6-8319-15e86ba313f0';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '66be9347-f2ae-47f6-8319-15e86ba313f0';
  $display->content['new-66be9347-f2ae-47f6-8319-15e86ba313f0'] = $pane;
  $display->panels['left'][2] = 'new-66be9347-f2ae-47f6-8319-15e86ba313f0';
  $pane = new stdClass();
  $pane->pid = 'new-1551cdd7-5612-418e-be3b-32de4a4623e6';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-akaa_projects-page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Project Finder',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectfinder-wrapper',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1551cdd7-5612-418e-be3b-32de4a4623e6';
  $display->content['new-1551cdd7-5612-418e-be3b-32de4a4623e6'] = $pane;
  $display->panels['left'][3] = 'new-1551cdd7-5612-418e-be3b-32de4a4623e6';
  $pane = new stdClass();
  $pane->pid = 'new-c732ef5b-4557-4b04-86f2-eee2a5889cd8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_short_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-short-title',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c732ef5b-4557-4b04-86f2-eee2a5889cd8';
  $display->content['new-c732ef5b-4557-4b04-86f2-eee2a5889cd8'] = $pane;
  $display->panels['left'][4] = 'new-c732ef5b-4557-4b04-86f2-eee2a5889cd8';
  $pane = new stdClass();
  $pane->pid = 'new-d52014e9-262d-4169-9ea5-7575c21e0ac8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-cycle-pane-body',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd52014e9-262d-4169-9ea5-7575c21e0ac8';
  $display->content['new-d52014e9-262d-4169-9ea5-7575c21e0ac8'] = $pane;
  $display->panels['left'][5] = 'new-d52014e9-262d-4169-9ea5-7575c21e0ac8';
  $pane = new stdClass();
  $pane->pid = 'new-637d652c-8113-4dd2-9322-1920111239a6';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About this Cycle',
    'title' => '',
    'body' => '<?php
$node = menu_get_object();
if (isset($node->field_about_page)) {
  $about = node_load($node->field_about_page[$node->language][0][\'nid\']);
  if (isset($about->nid)) {
    if (isset($about->body[$about->language][0][\'summary\']) && !empty($about->body[$about->language][0][\'value\']))
      print \'<div class="about">\'. $about->body[$about->language][0][\'summary\'] .\' <a href="\'. url("node/{$about->nid}") .\'">[More]</a></div>\';
    else if (!empty($about->body[$about->language][0][\'summary\']) && empty($about->body[$about->language][0][\'value\'])) 
      print \'<div class="about">\'. $about->body[$about->language][0][\'summary\'] .\'</div>\';
    else
      print \'<div class="about">\'. text_summary($about->body[$about->language][0][\'value\'], $about->body[$about->language][0][\'format\'], 1200) .\' <a href="\'.
      url("node/{$about->nid}") .\'">[More]</a></div>\';
  }
}
?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'basic-page-summary',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '637d652c-8113-4dd2-9322-1920111239a6';
  $display->content['new-637d652c-8113-4dd2-9322-1920111239a6'] = $pane;
  $display->panels['left'][6] = 'new-637d652c-8113-4dd2-9322-1920111239a6';
  $pane = new stdClass();
  $pane->pid = 'new-07d3c982-bf8c-4c1d-b17f-0aef25bcf365';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'cycle_project_listing_block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'award-cycle-project-list',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '07d3c982-bf8c-4c1d-b17f-0aef25bcf365';
  $display->content['new-07d3c982-bf8c-4c1d-b17f-0aef25bcf365'] = $pane;
  $display->panels['left'][7] = 'new-07d3c982-bf8c-4c1d-b17f-0aef25bcf365';
  $pane = new stdClass();
  $pane->pid = 'new-ad379de6-894b-40d5-883f-ceeb3553d388';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
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
    'display' => 'other_cycles_block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-cycle-right',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ad379de6-894b-40d5-883f-ceeb3553d388';
  $display->content['new-ad379de6-894b-40d5-883f-ceeb3553d388'] = $pane;
  $display->panels['right'][0] = 'new-ad379de6-894b-40d5-883f-ceeb3553d388';
  $pane = new stdClass();
  $pane->pid = 'new-42d28a6f-b3ae-4801-8014-9db818ebacf3';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'all_award_cycles',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-all-award-cycle-btn',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '42d28a6f-b3ae-4801-8014-9db818ebacf3';
  $display->content['new-42d28a6f-b3ae-4801-8014-9db818ebacf3'] = $pane;
  $display->panels['right'][1] = 'new-42d28a6f-b3ae-4801-8014-9db818ebacf3';
  $pane = new stdClass();
  $pane->pid = 'new-67fd34a1-adc4-4243-8685-0a73a50e180e';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
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
    'display' => 'block_6',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-related-info',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '67fd34a1-adc4-4243-8685-0a73a50e180e';
  $display->content['new-67fd34a1-adc4-4243-8685-0a73a50e180e'] = $pane;
  $display->panels['right'][2] = 'new-67fd34a1-adc4-4243-8685-0a73a50e180e';
  $pane = new stdClass();
  $pane->pid = 'new-8df908be-be7a-4bfb-9e2d-736d5d8908c6';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'akaa_custom-akaa_see_also_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'SEE ALSO',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8df908be-be7a-4bfb-9e2d-736d5d8908c6';
  $display->content['new-8df908be-be7a-4bfb-9e2d-736d5d8908c6'] = $pane;
  $display->panels['right'][3] = 'new-8df908be-be7a-4bfb-9e2d-736d5d8908c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Architecture Project',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akaa-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          13 => '13',
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
          11 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Agency [field_agency])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_agency-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'architecture_project' => 'architecture_project',
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
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '853c6789-a872-446a-aafd-a5309fa0b5d5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2681b158-c7f1-405b-bd30-5eecf90b980f';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_11',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-cycle-slideshow',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2681b158-c7f1-405b-bd30-5eecf90b980f';
  $display->content['new-2681b158-c7f1-405b-bd30-5eecf90b980f'] = $pane;
  $display->panels['left'][0] = 'new-2681b158-c7f1-405b-bd30-5eecf90b980f';
  $pane = new stdClass();
  $pane->pid = 'new-6b6a0033-9749-407e-9fe1-7e2c166bee3c';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6b6a0033-9749-407e-9fe1-7e2c166bee3c';
  $display->content['new-6b6a0033-9749-407e-9fe1-7e2c166bee3c'] = $pane;
  $display->panels['left'][1] = 'new-6b6a0033-9749-407e-9fe1-7e2c166bee3c';
  $pane = new stdClass();
  $pane->pid = 'new-3750374a-0c7c-4bb4-b6a3-1c29c08d12c9';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-akaa_projects-page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Project Finder',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectfinder-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3750374a-0c7c-4bb4-b6a3-1c29c08d12c9';
  $display->content['new-3750374a-0c7c-4bb4-b6a3-1c29c08d12c9'] = $pane;
  $display->panels['left'][2] = 'new-3750374a-0c7c-4bb4-b6a3-1c29c08d12c9';
  $pane = new stdClass();
  $pane->pid = 'new-c1e7e80a-589b-4f5f-9213-59ef662377dd';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-title',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c1e7e80a-589b-4f5f-9213-59ef662377dd';
  $display->content['new-c1e7e80a-589b-4f5f-9213-59ef662377dd'] = $pane;
  $display->panels['left'][3] = 'new-c1e7e80a-589b-4f5f-9213-59ef662377dd';
  $pane = new stdClass();
  $pane->pid = 'new-637f24f2-a9e4-43f7-b05a-4ea61403ec07';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="akaa-projectinfo-block-techinfo-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '637f24f2-a9e4-43f7-b05a-4ea61403ec07';
  $display->content['new-637f24f2-a9e4-43f7-b05a-4ea61403ec07'] = $pane;
  $display->panels['left'][4] = 'new-637f24f2-a9e4-43f7-b05a-4ea61403ec07';
  $pane = new stdClass();
  $pane->pid = 'new-c5d3c021-76bf-4532-a762-33b218e0dd82';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Technical Information Title',
    'title' => '',
    'body' => '<?php print \'<h2 class="pane-title">Technical Information</h2>\'; ?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-techinfo-title',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c5d3c021-76bf-4532-a762-33b218e0dd82';
  $display->content['new-c5d3c021-76bf-4532-a762-33b218e0dd82'] = $pane;
  $display->panels['left'][5] = 'new-c5d3c021-76bf-4532-a762-33b218e0dd82';
  $pane = new stdClass();
  $pane->pid = 'new-3fe767c1-552a-4d65-b6f2-80d77fe8981c';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akaa_project_details';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'akaa-technicalinfo-award-cycle',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '3fe767c1-552a-4d65-b6f2-80d77fe8981c';
  $display->content['new-3fe767c1-552a-4d65-b6f2-80d77fe8981c'] = $pane;
  $display->panels['left'][6] = 'new-3fe767c1-552a-4d65-b6f2-80d77fe8981c';
  $pane = new stdClass();
  $pane->pid = 'new-4b1f1ef8-bf0a-48e2-8df5-2d33435d0f16';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-technicalinfo-content',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '4b1f1ef8-bf0a-48e2-8df5-2d33435d0f16';
  $display->content['new-4b1f1ef8-bf0a-48e2-8df5-2d33435d0f16'] = $pane;
  $display->panels['left'][7] = 'new-4b1f1ef8-bf0a-48e2-8df5-2d33435d0f16';
  $pane = new stdClass();
  $pane->pid = 'new-9e1a7e2c-ff2b-420b-bcbe-503f610c66ea';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AKAA Project Resource Download',
    'title' => 'Downloads',
    'body' => '<?php
$languages = language_list();
$this_project = node_load(%node:nid);
$link = \'\';
foreach ($this_project->field_press_kits as $lang_key => $lang_array) {
foreach ($lang_array as $key => $items) {
$collection = field_collection_item_load($items);
$file = $collection->field_press_kit_file;
$file = array_shift(array_shift(array_values($file)));
$file = (object)$file;
$file_url = file_create_url($file->uri);
$label = array_shift(array_shift(array_values($collection->field_press_kit_label)));
$label = $label[\'value\'];
$link = $link . \'<div class="akaa-technicalinfo-download-link">\' . l($label, $file_url)  . \'</div>\';
}
}
if($link != \'\') {
$link = \'<div class="akaa-technicalinfo-download-row">\' . \'<div class="akaa-technicalinfo-download-label">\' . "Project Brief: " . \'</div>\' . $link . \'</div>\';
}

$this_project1 = node_load(%node:nid);
if(!empty($this_project1->field_zipped_images)) {
$file1 =  $this_project1->field_zipped_images[\'und\'][0];
$file1 = (object)$file1;
$file_url1 = file_create_url($file1->uri);
$link1 = \'<div class="akaa-technicalinfo-download-row">\' . \'<div class="akaa-technicalinfo-download-link">\' . l(t(\'Images\'), $file_url1, array(\'attributes\' => array(\'class\' => \'download-link\'))) . \'</div>\' . \'</div>\';
}
print $link;  print $link1;
?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-technicalinfo-download',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '9e1a7e2c-ff2b-420b-bcbe-503f610c66ea';
  $display->content['new-9e1a7e2c-ff2b-420b-bcbe-503f610c66ea'] = $pane;
  $display->panels['left'][8] = 'new-9e1a7e2c-ff2b-420b-bcbe-503f610c66ea';
  $pane = new stdClass();
  $pane->pid = 'new-4d5a8a64-d3a4-44ca-8115-3a5dcd363f95';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
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
    'css_id' => '',
    'css_class' => 'akaa-projectfinder-mail-share-print',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '4d5a8a64-d3a4-44ca-8115-3a5dcd363f95';
  $display->content['new-4d5a8a64-d3a4-44ca-8115-3a5dcd363f95'] = $pane;
  $display->panels['left'][9] = 'new-4d5a8a64-d3a4-44ca-8115-3a5dcd363f95';
  $pane = new stdClass();
  $pane->pid = 'new-ca4670ae-1b5b-4eea-98f2-1d26ed63bdbd';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_custom_v_p_for_archi';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'ca4670ae-1b5b-4eea-98f2-1d26ed63bdbd';
  $display->content['new-ca4670ae-1b5b-4eea-98f2-1d26ed63bdbd'] = $pane;
  $display->panels['left'][10] = 'new-ca4670ae-1b5b-4eea-98f2-1d26ed63bdbd';
  $pane = new stdClass();
  $pane->pid = 'new-9952e4fe-cfe0-498a-80dd-89e77fc87070';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-66';
  $pane->shown = FALSE;
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
    'css_id' => '',
    'css_class' => 'akaa-technicalinfo-video',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '9952e4fe-cfe0-498a-80dd-89e77fc87070';
  $display->content['new-9952e4fe-cfe0-498a-80dd-89e77fc87070'] = $pane;
  $display->panels['left'][11] = 'new-9952e4fe-cfe0-498a-80dd-89e77fc87070';
  $pane = new stdClass();
  $pane->pid = 'new-b1dad9f7-1160-44a8-be9f-b60985914ac2';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'b1dad9f7-1160-44a8-be9f-b60985914ac2';
  $display->content['new-b1dad9f7-1160-44a8-be9f-b60985914ac2'] = $pane;
  $display->panels['left'][12] = 'new-b1dad9f7-1160-44a8-be9f-b60985914ac2';
  $pane = new stdClass();
  $pane->pid = 'new-f027f39f-b381-4c92-8fed-ea1e5f4020a6';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectinfo-block-body-wrapper',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'f027f39f-b381-4c92-8fed-ea1e5f4020a6';
  $display->content['new-f027f39f-b381-4c92-8fed-ea1e5f4020a6'] = $pane;
  $display->panels['left'][13] = 'new-f027f39f-b381-4c92-8fed-ea1e5f4020a6';
  $pane = new stdClass();
  $pane->pid = 'new-df196983-ef74-43d3-9ea0-61c73debd159';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-projects-country',
  );
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'df196983-ef74-43d3-9ea0-61c73debd159';
  $display->content['new-df196983-ef74-43d3-9ea0-61c73debd159'] = $pane;
  $display->panels['left'][14] = 'new-df196983-ef74-43d3-9ea0-61c73debd159';
  $pane = new stdClass();
  $pane->pid = 'new-0d392f05-33a7-416a-ae97-f26a0fa44759';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-projects-building-type',
  );
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '0d392f05-33a7-416a-ae97-f26a0fa44759';
  $display->content['new-0d392f05-33a7-416a-ae97-f26a0fa44759'] = $pane;
  $display->panels['left'][15] = 'new-0d392f05-33a7-416a-ae97-f26a0fa44759';
  $pane = new stdClass();
  $pane->pid = 'new-1b6ecc34-34af-475e-b2d2-9d0c2c2dd35b';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
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
    'display' => 'other_arch_projects',
    'context' => array(
      0 => '',
      1 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-other-project-right',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1b6ecc34-34af-475e-b2d2-9d0c2c2dd35b';
  $display->content['new-1b6ecc34-34af-475e-b2d2-9d0c2c2dd35b'] = $pane;
  $display->panels['right'][0] = 'new-1b6ecc34-34af-475e-b2d2-9d0c2c2dd35b';
  $pane = new stdClass();
  $pane->pid = 'new-35054f28-6ffa-4753-b081-96d005d47fa3';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'display' => 'all_projects_this_cycle',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-all-award-cycle-btn',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '35054f28-6ffa-4753-b081-96d005d47fa3';
  $display->content['new-35054f28-6ffa-4753-b081-96d005d47fa3'] = $pane;
  $display->panels['right'][1] = 'new-35054f28-6ffa-4753-b081-96d005d47fa3';
  $pane = new stdClass();
  $pane->pid = 'new-2e897c04-d36c-4333-a4b2-4364d9aa6c38';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
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
    'display' => 'related_award_links_projects',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-related-info',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e897c04-d36c-4333-a4b2-4364d9aa6c38';
  $display->content['new-2e897c04-d36c-4333-a4b2-4364d9aa6c38'] = $pane;
  $display->panels['right'][2] = 'new-2e897c04-d36c-4333-a4b2-4364d9aa6c38';
  $pane = new stdClass();
  $pane->pid = 'new-0deb397c-9bd4-4c66-9553-03c406183abe';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'akaa_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'all_cycles_project',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-related-info',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0deb397c-9bd4-4c66-9553-03c406183abe';
  $display->content['new-0deb397c-9bd4-4c66-9553-03c406183abe'] = $pane;
  $display->panels['right'][3] = 'new-0deb397c-9bd4-4c66-9553-03c406183abe';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Agency-AKMI',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akmi-homepage inner-pages akaa-akmi-body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term from node (NAT)',
        'keyword' => 'nat_term',
        'name' => 'nat_term_from_node',
        'vid' => array(
          13 => '13',
          2 => 0,
          12 => 0,
          8 => 0,
          9 => 0,
          15 => 0,
          14 => 0,
          16 => 0,
          1 => 0,
          11 => 0,
        ),
        'concatenator' => ',',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Agency [field_agency])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_agency-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'agency' => 'agency',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'akmi
node/22106',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '08caa733-1061-4fea-948b-20287467b8ec';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-14c5b399-288e-421e-b087-a051b635186c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_agency_logo_with_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-logotitle',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '14c5b399-288e-421e-b087-a051b635186c';
  $display->content['new-14c5b399-288e-421e-b087-a051b635186c'] = $pane;
  $display->panels['middle'][0] = 'new-14c5b399-288e-421e-b087-a051b635186c';
  $pane = new stdClass();
  $pane->pid = 'new-13e8ca91-e1ae-4ce5-ab9b-5c7a7b06b750';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-akdn_breadcrumb_trail';
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
  $pane->locks = array();
  $pane->uuid = '13e8ca91-e1ae-4ce5-ab9b-5c7a7b06b750';
  $display->content['new-13e8ca91-e1ae-4ce5-ab9b-5c7a7b06b750'] = $pane;
  $display->panels['middle'][1] = 'new-13e8ca91-e1ae-4ce5-ab9b-5c7a7b06b750';
  $pane = new stdClass();
  $pane->pid = 'new-12be3363-fab7-4ffc-a55e-29d767d36d1f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '0',
              ),
            ),
          ),
          'field_featured_content_area_value' => '0',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_15',
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
  $pane->uuid = '12be3363-fab7-4ffc-a55e-29d767d36d1f';
  $display->content['new-12be3363-fab7-4ffc-a55e-29d767d36d1f'] = $pane;
  $display->panels['middle'][2] = 'new-12be3363-fab7-4ffc-a55e-29d767d36d1f';
  $pane = new stdClass();
  $pane->pid = 'new-8ea645f7-ce5f-40f6-adc4-328a467d923e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow_manual';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_featured_content_area',
        'settings' => array(
          'field_featured_content_area' => array(
            'en' => array(
              0 => array(
                'value' => '1',
              ),
            ),
          ),
          'field_featured_content_area_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
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
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_entity_id:node_1.vid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-slideshow banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8ea645f7-ce5f-40f6-adc4-328a467d923e';
  $display->content['new-8ea645f7-ce5f-40f6-adc4-328a467d923e'] = $pane;
  $display->panels['middle'][3] = 'new-8ea645f7-ce5f-40f6-adc4-328a467d923e';
  $pane = new stdClass();
  $pane->pid = 'new-349c5078-e9b4-4b0a-99f9-98185dfdc7c7';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akmi_custom-akmi_homepage_aboutus';
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
    'css_id' => '',
    'css_class' => 'whatsnew-right',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '349c5078-e9b4-4b0a-99f9-98185dfdc7c7';
  $display->content['new-349c5078-e9b4-4b0a-99f9-98185dfdc7c7'] = $pane;
  $display->panels['middle'][4] = 'new-349c5078-e9b4-4b0a-99f9-98185dfdc7c7';
  $pane = new stdClass();
  $pane->pid = 'new-ef92728f-7755-4ad8-9460-81bbbc5ce293';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-akmi_performance-page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'PERFORMANCE FINDER',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-projectfinder-wrapper akaa-performancefinder-wrapper',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ef92728f-7755-4ad8-9460-81bbbc5ce293';
  $display->content['new-ef92728f-7755-4ad8-9460-81bbbc5ce293'] = $pane;
  $display->panels['middle'][5] = 'new-ef92728f-7755-4ad8-9460-81bbbc5ce293';
  $pane = new stdClass();
  $pane->pid = 'new-9bc288c3-3690-4502-9d39-a8629245c08d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '9bc288c3-3690-4502-9d39-a8629245c08d';
  $display->content['new-9bc288c3-3690-4502-9d39-a8629245c08d'] = $pane;
  $display->panels['middle'][6] = 'new-9bc288c3-3690-4502-9d39-a8629245c08d';
  $pane = new stdClass();
  $pane->pid = 'new-5fe17080-b62d-433a-af5a-04008f2bebf1';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_home_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'info_akmi_header',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '5fe17080-b62d-433a-af5a-04008f2bebf1';
  $display->content['new-5fe17080-b62d-433a-af5a-04008f2bebf1'] = $pane;
  $display->panels['middle'][7] = 'new-5fe17080-b62d-433a-af5a-04008f2bebf1';
  $pane = new stdClass();
  $pane->pid = 'new-798ed81d-d47f-4904-b35e-85fe7351b523';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="akaa-award-cycle-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '798ed81d-d47f-4904-b35e-85fe7351b523';
  $display->content['new-798ed81d-d47f-4904-b35e-85fe7351b523'] = $pane;
  $display->panels['middle'][8] = 'new-798ed81d-d47f-4904-b35e-85fe7351b523';
  $pane = new stdClass();
  $pane->pid = 'new-cb9fbdf2-cdfd-48c8-9413-29fc4ddafd8f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_home_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'akmi_activity_image',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'cb9fbdf2-cdfd-48c8-9413-29fc4ddafd8f';
  $display->content['new-cb9fbdf2-cdfd-48c8-9413-29fc4ddafd8f'] = $pane;
  $display->panels['middle'][9] = 'new-cb9fbdf2-cdfd-48c8-9413-29fc4ddafd8f';
  $pane = new stdClass();
  $pane->pid = 'new-6df1b0c4-94cb-4da1-9a67-b4923a736997';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_performance';
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
    'display' => 'akmi_performance_home_tile',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '6df1b0c4-94cb-4da1-9a67-b4923a736997';
  $display->content['new-6df1b0c4-94cb-4da1-9a67-b4923a736997'] = $pane;
  $display->panels['middle'][10] = 'new-6df1b0c4-94cb-4da1-9a67-b4923a736997';
  $pane = new stdClass();
  $pane->pid = 'new-f75286d2-14d8-4cb4-a396-32e1acc506ac';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'award_cycle';
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
    'display' => 'block_5',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block akaa-award-cycle-block-short-video',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'f75286d2-14d8-4cb4-a396-32e1acc506ac';
  $display->content['new-f75286d2-14d8-4cb4-a396-32e1acc506ac'] = $pane;
  $display->panels['middle'][11] = 'new-f75286d2-14d8-4cb4-a396-32e1acc506ac';
  $pane = new stdClass();
  $pane->pid = 'new-e39e989d-d441-4c8a-9260-92e484b1b089';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'award_cycle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_7',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block akaa-award-cycle-block-textbook',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'e39e989d-d441-4c8a-9260-92e484b1b089';
  $display->content['new-e39e989d-d441-4c8a-9260-92e484b1b089'] = $pane;
  $display->panels['middle'][12] = 'new-e39e989d-d441-4c8a-9260-92e484b1b089';
  $pane = new stdClass();
  $pane->pid = 'new-47476130-c9ef-4ae1-bdac-b209ce4f1119';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_events_views';
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
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '47476130-c9ef-4ae1-bdac-b209ce4f1119';
  $display->content['new-47476130-c9ef-4ae1-bdac-b209ce4f1119'] = $pane;
  $display->panels['middle'][13] = 'new-47476130-c9ef-4ae1-bdac-b209ce4f1119';
  $pane = new stdClass();
  $pane->pid = 'new-a00a6d63-84a1-4217-83e3-f7c0038794fa';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_cd_dvd_series';
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
    'display' => 'akmi_home_cd_dvd_block',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'akaa-award-cycle-block',
  );
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'a00a6d63-84a1-4217-83e3-f7c0038794fa';
  $display->content['new-a00a6d63-84a1-4217-83e3-f7c0038794fa'] = $pane;
  $display->panels['middle'][14] = 'new-a00a6d63-84a1-4217-83e3-f7c0038794fa';
  $pane = new stdClass();
  $pane->pid = 'new-eb0a4675-7647-4b45-9147-962abf0f5be4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'eb0a4675-7647-4b45-9147-962abf0f5be4';
  $display->content['new-eb0a4675-7647-4b45-9147-962abf0f5be4'] = $pane;
  $display->panels['middle'][15] = 'new-eb0a4675-7647-4b45-9147-962abf0f5be4';
  $pane = new stdClass();
  $pane->pid = 'new-ffb62ae1-672f-4866-882f-373afe47c53d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'ffb62ae1-672f-4866-882f-373afe47c53d';
  $display->content['new-ffb62ae1-672f-4866-882f-373afe47c53d'] = $pane;
  $display->panels['middle'][16] = 'new-ffb62ae1-672f-4866-882f-373afe47c53d';
  $pane = new stdClass();
  $pane->pid = 'new-a7d2ba14-d300-4f42-9a50-620f273e653a';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_home_page';
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
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'a7d2ba14-d300-4f42-9a50-620f273e653a';
  $display->content['new-a7d2ba14-d300-4f42-9a50-620f273e653a'] = $pane;
  $display->panels['middle'][17] = 'new-a7d2ba14-d300-4f42-9a50-620f273e653a';
  $pane = new stdClass();
  $pane->pid = 'new-6da68c19-0d99-4368-ba28-5e0de4c4be0d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '6da68c19-0d99-4368-ba28-5e0de4c4be0d';
  $display->content['new-6da68c19-0d99-4368-ba28-5e0de4c4be0d'] = $pane;
  $display->panels['middle'][18] = 'new-6da68c19-0d99-4368-ba28-5e0de4c4be0d';
  $pane = new stdClass();
  $pane->pid = 'new-5731b942-0ed6-4911-a622-9c406994e7e6';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_home_page';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_show_news_and_resources',
        'settings' => array(
          'field_show_news_and_resources' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_news_and_resources_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = '5731b942-0ed6-4911-a622-9c406994e7e6';
  $display->content['new-5731b942-0ed6-4911-a622-9c406994e7e6'] = $pane;
  $display->panels['middle'][19] = 'new-5731b942-0ed6-4911-a622-9c406994e7e6';
  $pane = new stdClass();
  $pane->pid = 'new-0c0745d5-a143-4060-aeab-63f193bd2c71';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akmi_custom-akmi_news_resources_block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_show_news_and_resources',
        'settings' => array(
          'field_show_news_and_resources' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_news_and_resources_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
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
    'css_class' => 'what-we-do-main-wrapper',
  );
  $pane->extras = array();
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = '0c0745d5-a143-4060-aeab-63f193bd2c71';
  $display->content['new-0c0745d5-a143-4060-aeab-63f193bd2c71'] = $pane;
  $display->panels['middle'][20] = 'new-0c0745d5-a143-4060-aeab-63f193bd2c71';
  $pane = new stdClass();
  $pane->pid = 'new-460fb719-5ff0-48d0-80a9-6e38e904f172';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = '460fb719-5ff0-48d0-80a9-6e38e904f172';
  $display->content['new-460fb719-5ff0-48d0-80a9-6e38e904f172'] = $pane;
  $display->panels['middle'][21] = 'new-460fb719-5ff0-48d0-80a9-6e38e904f172';
  $pane = new stdClass();
  $pane->pid = 'new-e81a87e5-01c1-4e45-aef7-2b66bf56a5e4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-141';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '<div class="print-wrapper">',
        'suffix' => '',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = 'e81a87e5-01c1-4e45-aef7-2b66bf56a5e4';
  $display->content['new-e81a87e5-01c1-4e45-aef7-2b66bf56a5e4'] = $pane;
  $display->panels['middle'][22] = 'new-e81a87e5-01c1-4e45-aef7-2b66bf56a5e4';
  $pane = new stdClass();
  $pane->pid = 'new-ff0d05a4-f836-4ba9-8fc4-8cbea0930d5f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_home_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 23;
  $pane->locks = array();
  $pane->uuid = 'ff0d05a4-f836-4ba9-8fc4-8cbea0930d5f';
  $display->content['new-ff0d05a4-f836-4ba9-8fc4-8cbea0930d5f'] = $pane;
  $display->panels['middle'][23] = 'new-ff0d05a4-f836-4ba9-8fc4-8cbea0930d5f';
  $pane = new stdClass();
  $pane->pid = 'new-8b797524-9ac8-4e8a-8ec6-0e893e3c7961';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akmi_custom-akmi_social_sharing_block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_show_social_share',
        'settings' => array(
          'field_show_social_share' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_social_share_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
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
    'settings' => array(
      'title' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'content' => array(
        'prefix' => '',
        'suffix' => '</div>',
      ),
      'theme' => 0,
    ),
    'style' => 'wrapper_raw',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 24;
  $pane->locks = array();
  $pane->uuid = '8b797524-9ac8-4e8a-8ec6-0e893e3c7961';
  $display->content['new-8b797524-9ac8-4e8a-8ec6-0e893e3c7961'] = $pane;
  $display->panels['middle'][24] = 'new-8b797524-9ac8-4e8a-8ec6-0e893e3c7961';
  $pane = new stdClass();
  $pane->pid = 'new-cc22deff-6f92-4a22-9cee-f73687d6c923';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-146';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 25;
  $pane->locks = array();
  $pane->uuid = 'cc22deff-6f92-4a22-9cee-f73687d6c923';
  $display->content['new-cc22deff-6f92-4a22-9cee-f73687d6c923'] = $pane;
  $display->panels['middle'][25] = 'new-cc22deff-6f92-4a22-9cee-f73687d6c923';
  $pane = new stdClass();
  $pane->pid = 'new-afcea62e-2a8c-4dc9-be69-a6ff76c299c1';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akmi_home_page';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Has content',
          'php' => '$view = views_get_view_result(\'facts_blocks\', \'block_4\', arg(1));
$result = count($view);
if (!empty($result)) {
return true;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sub-navbar',
  );
  $pane->extras = array();
  $pane->position = 26;
  $pane->locks = array();
  $pane->uuid = 'afcea62e-2a8c-4dc9-be69-a6ff76c299c1';
  $display->content['new-afcea62e-2a8c-4dc9-be69-a6ff76c299c1'] = $pane;
  $display->panels['middle'][26] = 'new-afcea62e-2a8c-4dc9-be69-a6ff76c299c1';
  $pane = new stdClass();
  $pane->pid = 'new-a47e1d25-a98e-4242-b3c4-e57ba98004cc';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:agency:field_show_fact_block',
        'settings' => array(
          'field_show_fact_block' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_fact_block_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 27;
  $pane->locks = array();
  $pane->uuid = 'a47e1d25-a98e-4242-b3c4-e57ba98004cc';
  $display->content['new-a47e1d25-a98e-4242-b3c4-e57ba98004cc'] = $pane;
  $display->panels['middle'][27] = 'new-a47e1d25-a98e-4242-b3c4-e57ba98004cc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panelizer_node';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panelizer_node';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Hub Page',
    'contexts' => array(),
    'relationships' => array(),
    'context' => 'argument_entity_id:node_1',
  );
  $export['node_view_panelizer_node'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ak_panel_variants_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'akaa_page_layout';
  $page->task = 'page';
  $page->admin_title = 'AKAA Page layout';
  $page->admin_description = '';
  $page->path = 'architecture/*';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'architecture/steering-committee',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_akaa_page_layout_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'akaa_page_layout';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_18_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '90fe8474-b2f9-4ccd-9d73-ba2ef6a53656';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_akaa_page_layout_panel_context';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['akaa_page_layout'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'Front';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Front',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'akdn_main_body',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'preface_first' => NULL,
      'preface_second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1edd956e-55dc-4472-9170-54837784efa9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-605b96c6-cd76-42cb-9e23-7094ef3bae05';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'delta_blocks-logo';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '605b96c6-cd76-42cb-9e23-7094ef3bae05';
  $display->content['new-605b96c6-cd76-42cb-9e23-7094ef3bae05'] = $pane;
  $display->panels['middle'][0] = 'new-605b96c6-cd76-42cb-9e23-7094ef3bae05';
  $pane = new stdClass();
  $pane->pid = 'new-b006a1a7-5c22-410b-af31-df4837ab4266';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Homepage logo',
    'title' => '',
    'body' => '<div class="logo-img"><a href="/" id="logo" title="Return to the Aga Khan Development Network home page" class="active"><img typeof="foaf:Image" src="http://akdn.prod.acquia-sites.com/sites/all/themes/akdn/images/logo.png" alt="Aga&nbsp;Khan Development Network"></a></div>',
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
  $pane->uuid = 'b006a1a7-5c22-410b-af31-df4837ab4266';
  $display->content['new-b006a1a7-5c22-410b-af31-df4837ab4266'] = $pane;
  $display->panels['middle'][1] = 'new-b006a1a7-5c22-410b-af31-df4837ab4266';
  $pane = new stdClass();
  $pane->pid = 'new-735ee48c-b500-41f5-a245-0e9bf5d765c6';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner-slideshow-views-no-title homepage-slideshow',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '735ee48c-b500-41f5-a245-0e9bf5d765c6';
  $display->content['new-735ee48c-b500-41f5-a245-0e9bf5d765c6'] = $pane;
  $display->panels['middle'][2] = 'new-735ee48c-b500-41f5-a245-0e9bf5d765c6';
  $pane = new stdClass();
  $pane->pid = 'new-b9d72d29-575b-4f9b-b3f3-3ecd9d7f958a';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b9d72d29-575b-4f9b-b3f3-3ecd9d7f958a';
  $display->content['new-b9d72d29-575b-4f9b-b3f3-3ecd9d7f958a'] = $pane;
  $display->panels['middle'][3] = 'new-b9d72d29-575b-4f9b-b3f3-3ecd9d7f958a';
  $pane = new stdClass();
  $pane->pid = 'new-bf267094-79ec-4b6e-af63-e2aed2d8da28';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'breaking_news';
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
    'display' => 'block',
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
  $pane->uuid = 'bf267094-79ec-4b6e-af63-e2aed2d8da28';
  $display->content['new-bf267094-79ec-4b6e-af63-e2aed2d8da28'] = $pane;
  $display->panels['middle'][4] = 'new-bf267094-79ec-4b6e-af63-e2aed2d8da28';
  $pane = new stdClass();
  $pane->pid = 'new-cfc8e1c1-103b-4f60-bb8e-94d72f708be4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-121';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'cfc8e1c1-103b-4f60-bb8e-94d72f708be4';
  $display->content['new-cfc8e1c1-103b-4f60-bb8e-94d72f708be4'] = $pane;
  $display->panels['middle'][5] = 'new-cfc8e1c1-103b-4f60-bb8e-94d72f708be4';
  $pane = new stdClass();
  $pane->pid = 'new-da576d83-ae85-4319-8f36-d7192c1df6d2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'print-print-links';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'da576d83-ae85-4319-8f36-d7192c1df6d2';
  $display->content['new-da576d83-ae85-4319-8f36-d7192c1df6d2'] = $pane;
  $display->panels['middle'][6] = 'new-da576d83-ae85-4319-8f36-d7192c1df6d2';
  $pane = new stdClass();
  $pane->pid = 'new-f27692c4-89c2-471c-82d1-4bf5a2635152';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f27692c4-89c2-471c-82d1-4bf5a2635152';
  $display->content['new-f27692c4-89c2-471c-82d1-4bf5a2635152'] = $pane;
  $display->panels['middle'][7] = 'new-f27692c4-89c2-471c-82d1-4bf5a2635152';
  $pane = new stdClass();
  $pane->pid = 'new-8d118bba-5728-4d92-888f-7a34a2a21dc9';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '8d118bba-5728-4d92-888f-7a34a2a21dc9';
  $display->content['new-8d118bba-5728-4d92-888f-7a34a2a21dc9'] = $pane;
  $display->panels['middle'][8] = 'new-8d118bba-5728-4d92-888f-7a34a2a21dc9';
  $pane = new stdClass();
  $pane->pid = 'new-88f0878f-2e32-4235-b093-1feccba7379e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_us';
  $pane->shown = FALSE;
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
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '88f0878f-2e32-4235-b093-1feccba7379e';
  $display->content['new-88f0878f-2e32-4235-b093-1feccba7379e'] = $pane;
  $display->panels['middle'][9] = 'new-88f0878f-2e32-4235-b093-1feccba7379e';
  $pane = new stdClass();
  $pane->pid = 'new-4c656b4e-b631-4b21-ba93-e6d1e7e81848';
  $pane->panel = 'middle';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '2949',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'body_only',
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
    'css_class' => 'prefix-1 grid-18 suffix-5',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '4c656b4e-b631-4b21-ba93-e6d1e7e81848';
  $display->content['new-4c656b4e-b631-4b21-ba93-e6d1e7e81848'] = $pane;
  $display->panels['middle'][10] = 'new-4c656b4e-b631-4b21-ba93-e6d1e7e81848';
  $pane = new stdClass();
  $pane->pid = 'new-aad09e32-1ad7-456c-ace4-c5f1845853a9';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facebook_feeds';
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
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'aad09e32-1ad7-456c-ace4-c5f1845853a9';
  $display->content['new-aad09e32-1ad7-456c-ace4-c5f1845853a9'] = $pane;
  $display->panels['middle'][11] = 'new-aad09e32-1ad7-456c-ace4-c5f1845853a9';
  $pane = new stdClass();
  $pane->pid = 'new-24746f29-85a7-4d6e-81df-a716a3d479d4';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facebook_feeds';
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
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'home-page-twitter-pane',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '24746f29-85a7-4d6e-81df-a716a3d479d4';
  $display->content['new-24746f29-85a7-4d6e-81df-a716a3d479d4'] = $pane;
  $display->panels['middle'][12] = 'new-24746f29-85a7-4d6e-81df-a716a3d479d4';
  $pane = new stdClass();
  $pane->pid = 'new-4d9ff5f6-d25c-4aea-ac0b-34309063d34f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facebook_feeds';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
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
    'display' => 'block_3',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'home-page-instagram-pane',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '4d9ff5f6-d25c-4aea-ac0b-34309063d34f';
  $display->content['new-4d9ff5f6-d25c-4aea-ac0b-34309063d34f'] = $pane;
  $display->panels['middle'][13] = 'new-4d9ff5f6-d25c-4aea-ac0b-34309063d34f';
  $pane = new stdClass();
  $pane->pid = 'new-bce8ddbb-0bb6-453d-aeb2-19845494a0f9';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facebook_feeds';
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
    'display' => 'block_2',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'bce8ddbb-0bb6-453d-aeb2-19845494a0f9';
  $display->content['new-bce8ddbb-0bb6-453d-aeb2-19845494a0f9'] = $pane;
  $display->panels['middle'][14] = 'new-bce8ddbb-0bb6-453d-aeb2-19845494a0f9';
  $pane = new stdClass();
  $pane->pid = 'new-b3febb88-e61c-44f0-99dd-1a31eb19dbe0';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-14 prefix-1',
  );
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'b3febb88-e61c-44f0-99dd-1a31eb19dbe0';
  $display->content['new-b3febb88-e61c-44f0-99dd-1a31eb19dbe0'] = $pane;
  $display->panels['middle'][15] = 'new-b3febb88-e61c-44f0-99dd-1a31eb19dbe0';
  $pane = new stdClass();
  $pane->pid = 'new-3881cb0c-4a6e-4ee5-97a2-9924c6193ecf';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'press_center';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
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
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-8 suffix-1',
  );
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '3881cb0c-4a6e-4ee5-97a2-9924c6193ecf';
  $display->content['new-3881cb0c-4a6e-4ee5-97a2-9924c6193ecf'] = $pane;
  $display->panels['middle'][16] = 'new-3881cb0c-4a6e-4ee5-97a2-9924c6193ecf';
  $pane = new stdClass();
  $pane->pid = 'new-c9e94f62-e049-4dff-bde5-edb75705dae2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-116';
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
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'c9e94f62-e049-4dff-bde5-edb75705dae2';
  $display->content['new-c9e94f62-e049-4dff-bde5-edb75705dae2'] = $pane;
  $display->panels['middle'][17] = 'new-c9e94f62-e049-4dff-bde5-edb75705dae2';
  $pane = new stdClass();
  $pane->pid = 'new-19e4c68f-afc7-4325-b5c9-8a80867b6552';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'facts_blocks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '19e4c68f-afc7-4325-b5c9-8a80867b6552';
  $display->content['new-19e4c68f-afc7-4325-b5c9-8a80867b6552'] = $pane;
  $display->panels['middle'][18] = 'new-19e4c68f-afc7-4325-b5c9-8a80867b6552';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-605b96c6-cd76-42cb-9e23-7094ef3bae05';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'geographies';
  $page->task = 'page';
  $page->admin_title = 'Geographies';
  $page->admin_description = '';
  $page->path = 'geographies';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_geographies_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'geographies';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Geographies',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_threerow_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'preface_first' => NULL,
      'preface_second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1fbf07ce-b0d2-4157-aeb8-1922e42c8746';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_geographies_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3b1d1519-80c8-407e-954c-7ff9701c193d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-18';
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
    'css_id' => '',
    'css_class' => 'map-wrap',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b1d1519-80c8-407e-954c-7ff9701c193d';
  $display->content['new-3b1d1519-80c8-407e-954c-7ff9701c193d'] = $pane;
  $display->panels['middle'][0] = 'new-3b1d1519-80c8-407e-954c-7ff9701c193d';
  $pane = new stdClass();
  $pane->pid = 'new-8d811312-a485-4e4e-9408-5d0646c6ca28';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8d811312-a485-4e4e-9408-5d0646c6ca28';
  $display->content['new-8d811312-a485-4e4e-9408-5d0646c6ca28'] = $pane;
  $display->panels['middle'][1] = 'new-8d811312-a485-4e4e-9408-5d0646c6ca28';
  $pane = new stdClass();
  $pane->pid = 'new-e2147435-2256-462a-982a-8542a7e0c2b9';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e2147435-2256-462a-982a-8542a7e0c2b9';
  $display->content['new-e2147435-2256-462a-982a-8542a7e0c2b9'] = $pane;
  $display->panels['middle'][2] = 'new-e2147435-2256-462a-982a-8542a7e0c2b9';
  $pane = new stdClass();
  $pane->pid = 'new-4e626c0c-d259-4341-80a5-db278cf29cfb';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->uuid = '4e626c0c-d259-4341-80a5-db278cf29cfb';
  $display->content['new-4e626c0c-d259-4341-80a5-db278cf29cfb'] = $pane;
  $display->panels['middle'][3] = 'new-4e626c0c-d259-4341-80a5-db278cf29cfb';
  $pane = new stdClass();
  $pane->pid = 'new-85e44186-68a3-48b3-9efb-0ce44f1610c1';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '85e44186-68a3-48b3-9efb-0ce44f1610c1';
  $display->content['new-85e44186-68a3-48b3-9efb-0ce44f1610c1'] = $pane;
  $display->panels['middle'][4] = 'new-85e44186-68a3-48b3-9efb-0ce44f1610c1';
  $pane = new stdClass();
  $pane->pid = 'new-12bf57ef-fc94-4a89-8d2e-0e70c945f77d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'print-print-links';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '12bf57ef-fc94-4a89-8d2e-0e70c945f77d';
  $display->content['new-12bf57ef-fc94-4a89-8d2e-0e70c945f77d'] = $pane;
  $display->panels['middle'][5] = 'new-12bf57ef-fc94-4a89-8d2e-0e70c945f77d';
  $pane = new stdClass();
  $pane->pid = 'new-9f843c2c-d606-4b6a-8cf3-db0c5dbdfad6';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-28';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Further Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'geographies-further-information',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '9f843c2c-d606-4b6a-8cf3-db0c5dbdfad6';
  $display->content['new-9f843c2c-d606-4b6a-8cf3-db0c5dbdfad6'] = $pane;
  $display->panels['middle'][6] = 'new-9f843c2c-d606-4b6a-8cf3-db0c5dbdfad6';
  $pane = new stdClass();
  $pane->pid = 'new-016a426d-08db-4ed5-ab11-4d9b0a34e147';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-24';
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
    'css_id' => 'geography-info-block',
    'css_class' => 'grid-18',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '016a426d-08db-4ed5-ab11-4d9b0a34e147';
  $display->content['new-016a426d-08db-4ed5-ab11-4d9b0a34e147'] = $pane;
  $display->panels['middle'][7] = 'new-016a426d-08db-4ed5-ab11-4d9b0a34e147';
  $pane = new stdClass();
  $pane->pid = 'new-90c53c77-b9b1-43ed-b36e-c3fa4bde4319';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-25';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-18',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '90c53c77-b9b1-43ed-b36e-c3fa4bde4319';
  $display->content['new-90c53c77-b9b1-43ed-b36e-c3fa4bde4319'] = $pane;
  $display->panels['middle'][8] = 'new-90c53c77-b9b1-43ed-b36e-c3fa4bde4319';
  $pane = new stdClass();
  $pane->pid = 'new-2f5b624a-d2c9-462c-ac60-2a83c520523b';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => 'Geographies',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f5b624a-d2c9-462c-ac60-2a83c520523b';
  $display->content['new-2f5b624a-d2c9-462c-ac60-2a83c520523b'] = $pane;
  $display->panels['top'][0] = 'new-2f5b624a-d2c9-462c-ac60-2a83c520523b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['geographies'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'press_centre';
  $page->task = 'page';
  $page->admin_title = 'Press Centre';
  $page->admin_description = '';
  $page->path = 'press-centre/!foo';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'foo' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_centre_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'press_centre';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_threecol_10_10_4_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Press Centre';
  $display->uuid = 'a9bb75d5-8c12-4a72-9c4f-40b0661ba767';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_press_centre_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3c699439-4bd4-40de-85e0-9cf5564c98eb';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_6',
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
  $pane->uuid = '3c699439-4bd4-40de-85e0-9cf5564c98eb';
  $display->content['new-3c699439-4bd4-40de-85e0-9cf5564c98eb'] = $pane;
  $display->panels['left'][0] = 'new-3c699439-4bd4-40de-85e0-9cf5564c98eb';
  $pane = new stdClass();
  $pane->pid = 'new-5cf5e83c-b00a-4ec5-be07-46f3a6e5eace';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
    'display' => 'block_2',
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
  $pane->uuid = '5cf5e83c-b00a-4ec5-be07-46f3a6e5eace';
  $display->content['new-5cf5e83c-b00a-4ec5-be07-46f3a6e5eace'] = $pane;
  $display->panels['middle'][0] = 'new-5cf5e83c-b00a-4ec5-be07-46f3a6e5eace';
  $pane = new stdClass();
  $pane->pid = 'new-c41405d4-fda8-4dc4-b0c4-4dd848caad42';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
    'display' => 'block_1',
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
  $pane->uuid = 'c41405d4-fda8-4dc4-b0c4-4dd848caad42';
  $display->content['new-c41405d4-fda8-4dc4-b0c4-4dd848caad42'] = $pane;
  $display->panels['middle'][1] = 'new-c41405d4-fda8-4dc4-b0c4-4dd848caad42';
  $pane = new stdClass();
  $pane->pid = 'new-2be94471-f2de-4384-a7ea-d37925e670c1';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2be94471-f2de-4384-a7ea-d37925e670c1';
  $display->content['new-2be94471-f2de-4384-a7ea-d37925e670c1'] = $pane;
  $display->panels['middle'][2] = 'new-2be94471-f2de-4384-a7ea-d37925e670c1';
  $pane = new stdClass();
  $pane->pid = 'new-cca1b720-b221-4358-81d3-180acf2f64c1';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
    'display' => 'block_3',
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
  $pane->uuid = 'cca1b720-b221-4358-81d3-180acf2f64c1';
  $display->content['new-cca1b720-b221-4358-81d3-180acf2f64c1'] = $pane;
  $display->panels['middle'][3] = 'new-cca1b720-b221-4358-81d3-180acf2f64c1';
  $pane = new stdClass();
  $pane->pid = 'new-d182c8d8-3d1a-49cf-9047-5fb71048c73e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'akdn_tweets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_2',
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
  $pane->uuid = 'd182c8d8-3d1a-49cf-9047-5fb71048c73e';
  $display->content['new-d182c8d8-3d1a-49cf-9047-5fb71048c73e'] = $pane;
  $display->panels['middle'][4] = 'new-d182c8d8-3d1a-49cf-9047-5fb71048c73e';
  $pane = new stdClass();
  $pane->pid = 'new-3dbb27b8-e554-4fc2-8464-e73d987d3312';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
    'display' => 'block_7',
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
  $pane->uuid = '3dbb27b8-e554-4fc2-8464-e73d987d3312';
  $display->content['new-3dbb27b8-e554-4fc2-8464-e73d987d3312'] = $pane;
  $display->panels['right'][0] = 'new-3dbb27b8-e554-4fc2-8464-e73d987d3312';
  $pane = new stdClass();
  $pane->pid = 'new-27507dad-167e-4ad4-a3ac-12239d11cad0';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
    'display' => 'block_8',
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
  $pane->uuid = '27507dad-167e-4ad4-a3ac-12239d11cad0';
  $display->content['new-27507dad-167e-4ad4-a3ac-12239d11cad0'] = $pane;
  $display->panels['right'][1] = 'new-27507dad-167e-4ad4-a3ac-12239d11cad0';
  $pane = new stdClass();
  $pane->pid = 'new-68c52e16-170a-4985-9362-b5299f0ea30b';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
    'display' => 'block_9',
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
  $pane->uuid = '68c52e16-170a-4985-9362-b5299f0ea30b';
  $display->content['new-68c52e16-170a-4985-9362-b5299f0ea30b'] = $pane;
  $display->panels['right'][2] = 'new-68c52e16-170a-4985-9362-b5299f0ea30b';
  $pane = new stdClass();
  $pane->pid = 'new-2b3e3efc-575d-47cb-865a-6c3e1967cb36';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'solr_press_center_landing_page';
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
    'display' => 'block_5',
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
  $pane->uuid = '2b3e3efc-575d-47cb-865a-6c3e1967cb36';
  $display->content['new-2b3e3efc-575d-47cb-865a-6c3e1967cb36'] = $pane;
  $display->panels['right'][3] = 'new-2b3e3efc-575d-47cb-865a-6c3e1967cb36';
  $pane = new stdClass();
  $pane->pid = 'new-40a8581d-7a10-42a9-bcc2-b8faebe04d3a';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => 'Press Centre',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-24',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40a8581d-7a10-42a9-bcc2-b8faebe04d3a';
  $display->content['new-40a8581d-7a10-42a9-bcc2-b8faebe04d3a'] = $pane;
  $display->panels['top'][0] = 'new-40a8581d-7a10-42a9-bcc2-b8faebe04d3a';
  $pane = new stdClass();
  $pane->pid = 'new-6ff66854-aa6d-4728-9799-7ff0e764d6a0';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'featured_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_6',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner-slideshow-views-no-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6ff66854-aa6d-4728-9799-7ff0e764d6a0';
  $display->content['new-6ff66854-aa6d-4728-9799-7ff0e764d6a0'] = $pane;
  $display->panels['top'][1] = 'new-6ff66854-aa6d-4728-9799-7ff0e764d6a0';
  $pane = new stdClass();
  $pane->pid = 'new-1343e7ff-874b-4509-806d-3b962492453b';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1343e7ff-874b-4509-806d-3b962492453b';
  $display->content['new-1343e7ff-874b-4509-806d-3b962492453b'] = $pane;
  $display->panels['top'][2] = 'new-1343e7ff-874b-4509-806d-3b962492453b';
  $pane = new stdClass();
  $pane->pid = 'new-11059d0e-146c-45fe-aa4c-584e2ad27c46';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->uuid = '11059d0e-146c-45fe-aa4c-584e2ad27c46';
  $display->content['new-11059d0e-146c-45fe-aa4c-584e2ad27c46'] = $pane;
  $display->panels['top'][3] = 'new-11059d0e-146c-45fe-aa4c-584e2ad27c46';
  $pane = new stdClass();
  $pane->pid = 'new-6fa2c4b3-743f-442c-a7e0-ead89a637f7c';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'print-print-links';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6fa2c4b3-743f-442c-a7e0-ead89a637f7c';
  $display->content['new-6fa2c4b3-743f-442c-a7e0-ead89a637f7c'] = $pane;
  $display->panels['top'][4] = 'new-6fa2c4b3-743f-442c-a7e0-ead89a637f7c';
  $pane = new stdClass();
  $pane->pid = 'new-a95f29d7-2cbc-43fb-a2d0-0a310a9dc1c0';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a95f29d7-2cbc-43fb-a2d0-0a310a9dc1c0';
  $display->content['new-a95f29d7-2cbc-43fb-a2d0-0a310a9dc1c0'] = $pane;
  $display->panels['top'][5] = 'new-a95f29d7-2cbc-43fb-a2d0-0a310a9dc1c0';
  $pane = new stdClass();
  $pane->pid = 'new-7224ea00-ae9c-4576-b6d3-324b9134a34e';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '7224ea00-ae9c-4576-b6d3-324b9134a34e';
  $display->content['new-7224ea00-ae9c-4576-b6d3-324b9134a34e'] = $pane;
  $display->panels['top'][6] = 'new-7224ea00-ae9c-4576-b6d3-324b9134a34e';
  $pane = new stdClass();
  $pane->pid = 'new-ab230ae8-d8c6-46b1-a8b5-6c18fa2e0336';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '4751',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'body_only',
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
    'css_class' => 'grid-23 prefix-1 about-block',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'ab230ae8-d8c6-46b1-a8b5-6c18fa2e0336';
  $display->content['new-ab230ae8-d8c6-46b1-a8b5-6c18fa2e0336'] = $pane;
  $display->panels['top'][7] = 'new-ab230ae8-d8c6-46b1-a8b5-6c18fa2e0336';
  $pane = new stdClass();
  $pane->pid = 'new-f6a4c0d2-c028-4ec4-92a3-c68ebf585103';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Latest Additions',
    'body' => 'Latest Additions',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-23 press-centre-views-title',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'f6a4c0d2-c028-4ec4-92a3-c68ebf585103';
  $display->content['new-f6a4c0d2-c028-4ec4-92a3-c68ebf585103'] = $pane;
  $display->panels['top'][8] = 'new-f6a4c0d2-c028-4ec4-92a3-c68ebf585103';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['press_centre'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'speeches_centre';
  $page->task = 'page';
  $page->admin_title = 'Speeches Centre';
  $page->admin_description = '';
  $page->path = 'speeches-centre';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_speeches_centre_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'speeches_centre';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Speeches Centre',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_24_threerow_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Speeches Centre';
  $display->uuid = 'f83741b7-befa-4069-85f3-06c3d350f531';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_speeches_centre_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1dfbd4a0-932a-4b06-a5ff-d6c908733165';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'speeches-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prefix-1 grid-16',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1dfbd4a0-932a-4b06-a5ff-d6c908733165';
  $display->content['new-1dfbd4a0-932a-4b06-a5ff-d6c908733165'] = $pane;
  $display->panels['bottom'][0] = 'new-1dfbd4a0-932a-4b06-a5ff-d6c908733165';
  $pane = new stdClass();
  $pane->pid = 'new-763a4174-e57a-4288-ac2c-01df4697f7b6';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-speeches-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-7',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '763a4174-e57a-4288-ac2c-01df4697f7b6';
  $display->content['new-763a4174-e57a-4288-ac2c-01df4697f7b6'] = $pane;
  $display->panels['bottom'][1] = 'new-763a4174-e57a-4288-ac2c-01df4697f7b6';
  $pane = new stdClass();
  $pane->pid = 'new-a6b15026-8658-4bf2-ac4f-d4d0297f9b3d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_custom-ac_lang_switch';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-locale-language-content',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a6b15026-8658-4bf2-ac4f-d4d0297f9b3d';
  $display->content['new-a6b15026-8658-4bf2-ac4f-d4d0297f9b3d'] = $pane;
  $display->panels['middle'][0] = 'new-a6b15026-8658-4bf2-ac4f-d4d0297f9b3d';
  $pane = new stdClass();
  $pane->pid = 'new-761c15aa-27c4-4990-b9e7-d598753ecdc8';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
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
  $pane->uuid = '761c15aa-27c4-4990-b9e7-d598753ecdc8';
  $display->content['new-761c15aa-27c4-4990-b9e7-d598753ecdc8'] = $pane;
  $display->panels['middle'][1] = 'new-761c15aa-27c4-4990-b9e7-d598753ecdc8';
  $pane = new stdClass();
  $pane->pid = 'new-891ccfb8-f91a-4960-8568-cdd6961f8b68';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = FALSE;
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '891ccfb8-f91a-4960-8568-cdd6961f8b68';
  $display->content['new-891ccfb8-f91a-4960-8568-cdd6961f8b68'] = $pane;
  $display->panels['middle'][2] = 'new-891ccfb8-f91a-4960-8568-cdd6961f8b68';
  $pane = new stdClass();
  $pane->pid = 'new-0994c099-a10b-4662-bbcb-1c2941a092ad';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'addthis-addthis';
  $pane->shown = FALSE;
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
  $pane->uuid = '0994c099-a10b-4662-bbcb-1c2941a092ad';
  $display->content['new-0994c099-a10b-4662-bbcb-1c2941a092ad'] = $pane;
  $display->panels['middle'][3] = 'new-0994c099-a10b-4662-bbcb-1c2941a092ad';
  $pane = new stdClass();
  $pane->pid = 'new-652aab11-51ea-4ef0-aebc-c7e10dd24974';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
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
  $pane->uuid = '652aab11-51ea-4ef0-aebc-c7e10dd24974';
  $display->content['new-652aab11-51ea-4ef0-aebc-c7e10dd24974'] = $pane;
  $display->panels['top'][0] = 'new-652aab11-51ea-4ef0-aebc-c7e10dd24974';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['speeches_centre'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'subscription';
  $page->task = 'page';
  $page->admin_title = 'Subscription';
  $page->admin_description = '';
  $page->path = 'subscribe';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_subscription_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'subscription';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'subscribe',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
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
  $display->title = 'Subscribe';
  $display->uuid = 'c83cf17d-4e51-46f1-940d-fb1cd612a351';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_subscription_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-374459a4-e567-4bbc-83c0-ac1c2448659c';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'akdn_mailchimp-subscribe_newsletter';
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
  $pane->uuid = '374459a4-e567-4bbc-83c0-ac1c2448659c';
  $display->content['new-374459a4-e567-4bbc-83c0-ac1c2448659c'] = $pane;
  $display->panels['middle'][0] = 'new-374459a4-e567-4bbc-83c0-ac1c2448659c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['subscription'] = $page;

  return $pages;
}
