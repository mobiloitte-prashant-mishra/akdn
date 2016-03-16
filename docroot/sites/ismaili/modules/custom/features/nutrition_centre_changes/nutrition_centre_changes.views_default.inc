<?php
/**
 * @file
 * nutrition_centre_changes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nutrition_centre_changes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'articles_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_images_for_carousal' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_images_for_carousal' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Images for Carousel (field_images_for_carousal) */
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['id'] = 'field_images_for_carousal_value';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['table'] = 'field_data_field_images_for_carousal';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['field'] = 'field_images_for_carousal_value';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['delta'] = '-1';
  /* Field: Field collection item: Carousel Image  */
  $handler->display->display_options['fields']['field_carousal_image']['id'] = 'field_carousal_image';
  $handler->display->display_options['fields']['field_carousal_image']['table'] = 'field_data_field_carousal_image';
  $handler->display->display_options['fields']['field_carousal_image']['field'] = 'field_carousal_image';
  $handler->display->display_options['fields']['field_carousal_image']['relationship'] = 'field_images_for_carousal_value';
  $handler->display->display_options['fields']['field_carousal_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousal_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousal_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousal_image']['settings'] = array(
    'image_style' => 'banner',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'events' => 'events',
    'photo_gallery' => 'photo_gallery',
    'parent_compound_articles' => 'parent_compound_articles',
    'video' => 'video',
  );

  /* Display: Slideshow */
  $handler = $view->new_display('block', 'Slideshow', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images for Carousel (field_images_for_carousal) */
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['id'] = 'field_images_for_carousal_value';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['table'] = 'field_data_field_images_for_carousal';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['field'] = 'field_images_for_carousal_value';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['delta'] = '-1';
  /* Relationship: Field collection item: Carousel Image  (field_carousal_image:fid) */
  $handler->display->display_options['relationships']['field_carousal_image_fid']['id'] = 'field_carousal_image_fid';
  $handler->display->display_options['relationships']['field_carousal_image_fid']['table'] = 'field_data_field_carousal_image';
  $handler->display->display_options['relationships']['field_carousal_image_fid']['field'] = 'field_carousal_image_fid';
  $handler->display->display_options['relationships']['field_carousal_image_fid']['relationship'] = 'field_images_for_carousal_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: image Source */
  $handler->display->display_options['fields']['field_image_source']['id'] = 'field_image_source';
  $handler->display->display_options['fields']['field_image_source']['table'] = 'field_data_field_image_source';
  $handler->display->display_options['fields']['field_image_source']['field'] = 'field_image_source';
  $handler->display->display_options['fields']['field_image_source']['relationship'] = 'field_images_for_carousal_value';
  $handler->display->display_options['fields']['field_image_source']['label'] = '(Source)';
  $handler->display->display_options['fields']['field_image_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_source']['alter']['text'] = '(Source)';
  $handler->display->display_options['fields']['field_image_source']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_source']['alter']['path'] = '[field_image_source-url]';
  $handler->display->display_options['fields']['field_image_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_image_source']['type'] = 'link_label';
  /* Field: Field collection item: image Source */
  $handler->display->display_options['fields']['field_image_source_1']['id'] = 'field_image_source_1';
  $handler->display->display_options['fields']['field_image_source_1']['table'] = 'field_data_field_image_source';
  $handler->display->display_options['fields']['field_image_source_1']['field'] = 'field_image_source';
  $handler->display->display_options['fields']['field_image_source_1']['relationship'] = 'field_images_for_carousal_value';
  $handler->display->display_options['fields']['field_image_source_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_image_source_1']['type'] = 'link_url';
  /* Field: Field collection item: Carousel Image  */
  $handler->display->display_options['fields']['field_carousal_image']['id'] = 'field_carousal_image';
  $handler->display->display_options['fields']['field_carousal_image']['table'] = 'field_data_field_carousal_image';
  $handler->display->display_options['fields']['field_carousal_image']['field'] = 'field_carousal_image';
  $handler->display->display_options['fields']['field_carousal_image']['relationship'] = 'field_images_for_carousal_value';
  $handler->display->display_options['fields']['field_carousal_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousal_image']['alter']['text'] = '<a href = \'[field_image_source]\'>[field_carousal_image]</a>';
  $handler->display->display_options['fields']['field_carousal_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_carousal_image']['alter']['path'] = '[field_image_source_1]';
  $handler->display->display_options['fields']['field_carousal_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousal_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousal_image']['settings'] = array(
    'image_style' => 'recipe_main_image',
    'image_link' => '',
  );
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_carousal_image_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['alter']['text'] = '[field_file_image_title_text][field_image_source]';
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_title_text']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Field: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_carousal_image_fid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['alter']['text'] = '<div class="image-caption-credits">
[field_file_image_title_text]
<span class="img-tag">[field_credit]</span>
</div>';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'child_compound_articles' => 'child_compound_articles',
    'events' => 'events',
    'photo_gallery' => 'photo_gallery',
    'parent_compound_articles' => 'parent_compound_articles',
    'recipe' => 'recipe',
  );

  /* Display: Related Articles */
  $handler = $view->new_display('block', 'Related Articles', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Articles';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_link_image' => 0,
    'field_related_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_link_image' => 0,
    'field_related_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_link_image' => 'field_link_image',
    'field_related_link' => 'field_related_link',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Related Articles (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_value']['id'] = 'field_related_articles_value';
  $handler->display->display_options['relationships']['field_related_articles_value']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_value']['field'] = 'field_related_articles_value';
  $handler->display->display_options['relationships']['field_related_articles_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_related_articles_value']['delta'] = '-1';
  /* Relationship: Field collection item: Entity with the Related Articles (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_node']['id'] = 'field_related_articles_node';
  $handler->display->display_options['relationships']['field_related_articles_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_related_articles_node']['field'] = 'field_related_articles_node';
  $handler->display->display_options['relationships']['field_related_articles_node']['relationship'] = 'field_related_articles_value';
  $handler->display->display_options['relationships']['field_related_articles_node']['required'] = TRUE;
  /* Relationship: Field collection item: Link Image (field_link_image:fid) */
  $handler->display->display_options['relationships']['field_link_image_fid']['id'] = 'field_link_image_fid';
  $handler->display->display_options['relationships']['field_link_image_fid']['table'] = 'field_data_field_link_image';
  $handler->display->display_options['relationships']['field_link_image_fid']['field'] = 'field_link_image_fid';
  $handler->display->display_options['relationships']['field_link_image_fid']['relationship'] = 'field_related_articles_value';
  $handler->display->display_options['relationships']['field_link_image_fid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Redirect Links */
  $handler->display->display_options['fields']['field_related_link']['id'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['table'] = 'field_data_field_related_link';
  $handler->display->display_options['fields']['field_related_link']['field'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['relationship'] = 'field_related_articles_value';
  $handler->display->display_options['fields']['field_related_link']['label'] = '';
  $handler->display->display_options['fields']['field_related_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_link']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_related_link']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_related_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_link']['click_sort_column'] = 'url';
  /* Field: Field: Redirect Links */
  $handler->display->display_options['fields']['field_related_link_1']['id'] = 'field_related_link_1';
  $handler->display->display_options['fields']['field_related_link_1']['table'] = 'field_data_field_related_link';
  $handler->display->display_options['fields']['field_related_link_1']['field'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link_1']['relationship'] = 'field_related_articles_value';
  $handler->display->display_options['fields']['field_related_link_1']['label'] = 'Link';
  $handler->display->display_options['fields']['field_related_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_link_1']['type'] = 'link_url';
  /* Field: Field collection item: Link Image */
  $handler->display->display_options['fields']['field_link_image']['id'] = 'field_link_image';
  $handler->display->display_options['fields']['field_link_image']['table'] = 'field_data_field_link_image';
  $handler->display->display_options['fields']['field_link_image']['field'] = 'field_link_image';
  $handler->display->display_options['fields']['field_link_image']['relationship'] = 'field_related_articles_value';
  $handler->display->display_options['fields']['field_link_image']['label'] = '';
  $handler->display->display_options['fields']['field_link_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_image']['alter']['path'] = '[field_related_link_1]';
  $handler->display->display_options['fields']['field_link_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_link_image']['settings'] = array(
    'image_style' => 'ic_gallery',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-field-field-main-image">[field_link_image]</div>
<div class="views-field-title">[field_related_link]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'child_compound_articles' => 'child_compound_articles',
    'events' => 'events',
    'parent_compound_articles' => 'parent_compound_articles',
    'recipe' => 'recipe',
    'video' => 'video',
  );
  /* Filter criterion: Content: Hide Page Blocks (field_hide_page_blocks) */
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['id'] = 'field_hide_page_blocks_value';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['table'] = 'field_data_field_hide_page_blocks';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['field'] = 'field_hide_page_blocks_value';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['value'] = array(
    'Related Articles' => 'Related Articles',
  );

  /* Display: Related Topics */
  $handler = $view->new_display('block', 'Related Topics', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Topics';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'geographies_' => 'geographies_',
    'primary_category' => 'primary_category',
    'tags' => 'tags',
    'administration_tags' => 0,
    'article_types' => 0,
    'authors' => 0,
    'ismaili_centres' => 0,
    'microsite' => 0,
    'newsletter' => 0,
    'recipe_attribution' => 0,
    'recipe_type' => 0,
    'speech_themes' => 0,
    'type_of_people' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'tags/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'child_compound_articles' => 'child_compound_articles',
    'events' => 'events',
    'photo_gallery' => 'photo_gallery',
    'parent_compound_articles' => 'parent_compound_articles',
    'recipe' => 'recipe',
    'speech' => 'speech',
    'speech_quote' => 'speech_quote',
    'video' => 'video',
  );
  /* Filter criterion: Taxonomy term: Hide Topic (field_hide_topic) */
  $handler->display->display_options['filters']['field_hide_topic_value']['id'] = 'field_hide_topic_value';
  $handler->display->display_options['filters']['field_hide_topic_value']['table'] = 'field_data_field_hide_topic';
  $handler->display->display_options['filters']['field_hide_topic_value']['field'] = 'field_hide_topic_value';
  $handler->display->display_options['filters']['field_hide_topic_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_hide_topic_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_hide_topic_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Hide Page Blocks (field_hide_page_blocks) */
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['id'] = 'field_hide_page_blocks_value';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['table'] = 'field_data_field_hide_page_blocks';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['field'] = 'field_hide_page_blocks_value';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['value'] = array(
    'Related Topics' => 'Related Topics',
  );

  /* Display: Articles pages */
  $handler = $view->new_display('block', 'Articles pages', 'block_4');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_body' => 0,
    'field_callout' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_body' => 0,
    'field_callout' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['relationship'] = 'field_pages_value';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['block_description'] = 'Articles pages';

  /* Display: Other Stories of Interest */
  $handler = $view->new_display('block', 'Other Stories of Interest', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other Stories of Interest';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'events' => 'events',
    'recipe' => 'recipe',
    'speech_quote' => 'speech_quote',
    'video' => 'video',
  );
  /* Filter criterion: Content: Hide Page Blocks (field_hide_page_blocks) */
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['id'] = 'field_hide_page_blocks_value';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['table'] = 'field_data_field_hide_page_blocks';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['field'] = 'field_hide_page_blocks_value';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_hide_page_blocks_value']['value'] = array(
    'Other Stories' => 'Other Stories',
  );
  $handler->display->display_options['block_description'] = 'Other Stories of Interest';

  /* Display: Articles Body */
  $handler = $view->new_display('block', 'Articles Body', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Articles Body';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['tags']['previous'] = '«';
  $handler->display->display_options['pager']['options']['tags']['next'] = '»';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['group_columns'] = array(
    'format' => 'format',
  );
  $handler->display->display_options['fields']['field_body']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'child_compound_articles' => 'child_compound_articles',
    'events' => 'events',
    'photo_gallery' => 'photo_gallery',
    'parent_compound_articles' => 'parent_compound_articles',
    'video' => 'video',
  );
  $handler->display->display_options['block_description'] = 'Articles Body';

  /* Display: Block 7 */
  $handler = $view->new_display('block', 'Block 7', 'block_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Internal Page (field_internal_page) */
  $handler->display->display_options['relationships']['field_internal_page_nid']['id'] = 'field_internal_page_nid';
  $handler->display->display_options['relationships']['field_internal_page_nid']['table'] = 'field_data_field_internal_page';
  $handler->display->display_options['relationships']['field_internal_page_nid']['field'] = 'field_internal_page_nid';
  $handler->display->display_options['relationships']['field_internal_page_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_internal_page_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
  );

  /* Display: Related Recipe */
  $handler = $view->new_display('block', 'Related Recipe', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Recipe';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'related-recipe-bottom';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Related Recipes (field_related_recipes) */
  $handler->display->display_options['relationships']['field_related_recipes_nid']['id'] = 'field_related_recipes_nid';
  $handler->display->display_options['relationships']['field_related_recipes_nid']['table'] = 'field_data_field_related_recipes';
  $handler->display->display_options['relationships']['field_related_recipes_nid']['field'] = 'field_related_recipes_nid';
  $handler->display->display_options['relationships']['field_related_recipes_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_related_recipes_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_related_recipes_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'field_related_recipes_nid';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'archive_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_related_recipes_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['relationship'] = 'field_related_recipes_nid';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'events' => 'events',
    'photo_gallery' => 'photo_gallery',
    'parent_compound_articles' => 'parent_compound_articles',
    'recipe' => 'recipe',
    'video' => 'video',
  );
  $handler->display->display_options['block_description'] = 'Related Recipe';

  /* Display: Block 3 */
  $handler = $view->new_display('block', 'Block 3', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'events' => 'events',
    'photo_gallery' => 'photo_gallery',
    'parent_compound_articles' => 'parent_compound_articles',
    'video' => 'video',
  );
  /* Filter criterion: Content: Introduction (field_introduction) */
  $handler->display->display_options['filters']['field_introduction_value']['id'] = 'field_introduction_value';
  $handler->display->display_options['filters']['field_introduction_value']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['filters']['field_introduction_value']['field'] = 'field_introduction_value';
  $handler->display->display_options['filters']['field_introduction_value']['operator'] = 'empty';
  /* Filter criterion: Content: Omit Introduction (field_omit_introduction) */
  $handler->display->display_options['filters']['field_omit_introduction_value']['id'] = 'field_omit_introduction_value';
  $handler->display->display_options['filters']['field_omit_introduction_value']['table'] = 'field_data_field_omit_introduction';
  $handler->display->display_options['filters']['field_omit_introduction_value']['field'] = 'field_omit_introduction_value';
  $handler->display->display_options['filters']['field_omit_introduction_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_omit_introduction_value']['value'] = array(
    1 => '1',
  );
  $translatables['articles_slideshow'] = array(
    t('Master'),
    t('Articles Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_images_for_carousal'),
    t('All'),
    t('Slideshow'),
    t('image from field_carousal_image'),
    t('(Source)'),
    t('image Source'),
    t('<a href = \'[field_image_source]\'>[field_carousal_image]</a>'),
    t('[field_file_image_title_text][field_image_source]'),
    t('<div class="image-caption-credits">
[field_file_image_title_text]
<span class="img-tag">[field_credit]</span>
</div>'),
    t('Related Articles'),
    t('field collection item from field_related_articles'),
    t('field_related_articles'),
    t('image from field_link_image'),
    t('Link'),
    t('<div class="views-field-field-main-image">[field_link_image]</div>
<div class="views-field-title">[field_related_link]</div>'),
    t('Related Topics'),
    t('term'),
    t('Articles pages'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Other Stories of Interest'),
    t('Articles Body'),
    t('«'),
    t('»'),
    t('Block 7'),
    t('field_internal_page'),
    t('Related Recipe'),
    t('field_related_recipes'),
    t('Block 3'),
  );
  $export['articles_slideshow'] = $view;

  $view = new view();
  $view->name = 'nutrition_centre';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ismaili_index';
  $view->human_name = 'Nutrition Centre';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recipe Box';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Recipe Box */
  $handler = $view->new_display('block', 'Recipe Box', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="#">See All Recipes</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'recipe_box',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Publish date */
  $handler->display->display_options['sorts']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Recipes */
  $handler = $view->new_display('page', 'Recipes', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recipes';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-search';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'feature_tiles',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'query';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'node_title' => 'node_title',
    'field_short_title' => 'field_short_title',
    'field_publication_author' => 'field_publication_author',
    'field_introductory_text' => 'field_introductory_text',
    'field_summary:value' => 'field_summary:value',
    'field_urgent_health_info:value' => 'field_urgent_health_info:value',
    'field_healthy_hints:value' => 'field_healthy_hints:value',
    'field_nutrient_data:field_nutrient_element:title' => 'field_nutrient_data:field_nutrient_element:title',
    'field_nutrient_data:field_nutrient_element:nutrient_machine_name' => 'field_nutrient_data:field_nutrient_element:nutrient_machine_name',
    'field_nutrient_data:field_nutrient_element:field_imperial_unit' => 'field_nutrient_data:field_nutrient_element:field_imperial_unit',
  );
  $handler->display->display_options['path'] = 'nutrition/recipes';

  /* Display: Five Ways To */
  $handler = $view->new_display('block', 'Five Ways To', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Five Ways To';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_main_image' => 0,
    'field_short_title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_main_image' => 0,
    'field_short_title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'five_ways_to_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Indexed Content: Tags */
  $handler->display->display_options['filters']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['filters']['field_tags']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['filters']['field_tags']['value'] = array(
    0 => '6706',
  );

  /* Display: Recipe  Nutrient  Values */
  $handler = $view->new_display('block', 'Recipe  Nutrient  Values', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recipe  Nutrient  Values';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Nutrient Values */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Nutrient Values';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if (function_exists(\'ismaili_traffic_lights_calculate_nutrient_value\')) {
  print ismaili_traffic_lights_calculate_nutrient_value($data->{\'_entity_properties\'});
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Weight */
  $handler->display->display_options['sorts']['field_weight']['id'] = 'field_weight';
  $handler->display->display_options['sorts']['field_weight']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['field_weight']['field'] = 'field_weight';
  $handler->display->display_options['sorts']['field_weight']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Recipe Details */
  $handler = $view->new_display('block', 'Recipe Details', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recipe Details';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Author */
  $handler->display->display_options['fields']['field_attribution']['id'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_attribution']['field'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['label'] = '';
  $handler->display->display_options['fields']['field_attribution']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attribution']['alter']['text'] = '[field_attribution]';
  $handler->display->display_options['fields']['field_attribution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attribution']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attribution']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_attribution']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_attribution']['bypass_access'] = 0;
  /* Field: Indexed Content: Source link */
  $handler->display->display_options['fields']['field_source_link']['id'] = 'field_source_link';
  $handler->display->display_options['fields']['field_source_link']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_source_link']['field'] = 'field_source_link';
  $handler->display->display_options['fields']['field_source_link']['label'] = '';
  $handler->display->display_options['fields']['field_source_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_link']['click_sort_column'] = 'url';
  /* Field: Indexed Content: Publish date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Preparation Time */
  $handler->display->display_options['fields']['field_preparation_time']['id'] = 'field_preparation_time';
  $handler->display->display_options['fields']['field_preparation_time']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_preparation_time']['field'] = 'field_preparation_time';
  $handler->display->display_options['fields']['field_preparation_time']['label'] = '';
  $handler->display->display_options['fields']['field_preparation_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_preparation_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_preparation_time']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Cooking Time */
  $handler->display->display_options['fields']['field_cooking_time']['id'] = 'field_cooking_time';
  $handler->display->display_options['fields']['field_cooking_time']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_cooking_time']['field'] = 'field_cooking_time';
  $handler->display->display_options['fields']['field_cooking_time']['label'] = '';
  $handler->display->display_options['fields']['field_cooking_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cooking_time']['alter']['text'] = '<div class="recipe-inforbar">
<span class="prep-time"><span class="recipe-inforbar-time">[field_preparation_time]</span> <span class="recipe-inforbar-text">Preparation</span></span>
<span class="recipe-quantity"><span class="recipe-inforbar-text">Serves</span> [field_quantity]</span>
<span class="recipe-cook-time"><span class="recipe-inforbar-time">[field_cooking_time]</span> <span class="recipe-inforbar-text">Cooking time</span></span>
</div>';
  $handler->display->display_options['fields']['field_cooking_time']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Quantity */
  $handler->display->display_options['fields']['field_quantity']['id'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_quantity']['field'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['label'] = 'Serves';
  $handler->display->display_options['fields']['field_quantity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_quantity']['alter']['text'] = '<div class="recipe-inforbar">
<span class="prep-time"><span class="recipe-inforbar-time">[field_preparation_time]</span> <span class="recipe-inforbar-text">Preparation</span></span>
<span class="recipe-quantity"><span class="recipe-inforbar-text">Serves</span> [field_quantity]</span>
<span class="recipe-cook-time"><span class="recipe-inforbar-time">[field_cooking_time]</span> <span class="recipe-inforbar-text">Cooking time</span></span>
</div>';
  $handler->display->display_options['fields']['field_quantity']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['text'] = '<span class="summary">[field_summary]</span>';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Urgent Health Info */
  $handler->display->display_options['fields']['field_urgent_health_info']['id'] = 'field_urgent_health_info';
  $handler->display->display_options['fields']['field_urgent_health_info']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_urgent_health_info']['field'] = 'field_urgent_health_info';
  $handler->display->display_options['fields']['field_urgent_health_info']['label'] = 'Warning';
  $handler->display->display_options['fields']['field_urgent_health_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_urgent_health_info']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_urgent_health_info']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_urgent_health_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_urgent_health_info']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_urgent_health_info']['hide_alter_empty'] = FALSE;
  /* Field: Indexed Content: Healthy Hints */
  $handler->display->display_options['fields']['field_healthy_hints']['id'] = 'field_healthy_hints';
  $handler->display->display_options['fields']['field_healthy_hints']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_healthy_hints']['field'] = 'field_healthy_hints';
  $handler->display->display_options['fields']['field_healthy_hints']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_healthy_hints']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_healthy_hints']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_healthy_hints']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_healthy_hints']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Serving weight */
  $handler->display->display_options['fields']['field_serving_weight']['id'] = 'field_serving_weight';
  $handler->display->display_options['fields']['field_serving_weight']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_serving_weight']['field'] = 'field_serving_weight';
  $handler->display->display_options['fields']['field_serving_weight']['label'] = '';
  $handler->display->display_options['fields']['field_serving_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_serving_weight']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients']['id'] = 'field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_ingredients']['field'] = 'field_ingredients';
  $handler->display->display_options['fields']['field_ingredients']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ingredients']['element_label_type'] = 'h1';
  $handler->display->display_options['fields']['field_ingredients']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ingredients']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ingredients']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ingredients']['multi_type'] = 'ul';
  /* Field: Indexed Content: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = 'Cooking Guide';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['delta_offset'] = '0';
  /* Field: Indexed Content: Cooking Guide */
  $handler->display->display_options['fields']['field_cooking_guide']['id'] = 'field_cooking_guide';
  $handler->display->display_options['fields']['field_cooking_guide']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_cooking_guide']['field'] = 'field_cooking_guide';
  $handler->display->display_options['fields']['field_cooking_guide']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cooking_guide']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_cooking_guide']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_cooking_guide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cooking_guide']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_tags']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_tags']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Recipe  Traffic Lights */
  $handler = $view->new_display('block', 'Recipe  Traffic Lights', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recipe  Traffic Lights';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>(<em>per serving</em>)</p>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Traffic Light */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Traffic Light';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if (function_exists(\'ismaili_traffic_lights_calculate_color\')) {
  print ismaili_traffic_lights_calculate_color($data->{\'_entity_properties\'}, \'list\');
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display:  Nutritional Composition Table */
  $handler = $view->new_display('page', ' Nutritional Composition Table', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nutrient content of recipes';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Nutrient content of recipes</h2>
<div><span>Recipe</span><span>Fat (g)</span><span>Saturated Fat (g)</span><span>Sugar (g)</span><span>Salt (g)</span></div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: String title */
  $handler->display->display_options['fields']['string_title']['id'] = 'string_title';
  $handler->display->display_options['fields']['string_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['string_title']['field'] = 'string_title';
  $handler->display->display_options['fields']['string_title']['label'] = '';
  $handler->display->display_options['fields']['string_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['string_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['string_title']['link_to_entity'] = 1;
  /* Field: Nutritional Value */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Nutritional Value';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if (function_exists(\'ismaili_traffic_lights_calculate_color\')) {
  print ismaili_traffic_lights_calculate_color($data->{\'_entity_properties\'}, \'table\');
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Template */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Template';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[php]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: String title */
  $handler->display->display_options['sorts']['string_title']['id'] = 'string_title';
  $handler->display->display_options['sorts']['string_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['string_title']['field'] = 'string_title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  $handler->display->display_options['path'] = 'nutrition-centre/nutritional-table';

  /* Display:  Nutritional Composition Table */
  $handler = $view->new_display('page', ' Nutritional Composition Table', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nutrient content of recipes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_short_title' => 'field_short_title',
    'fat_light' => 'fat_light',
    'sfat_light' => 'sfat_light',
    'salt_light' => 'salt_light',
    'sugar_light' => 'sugar_light',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'fat_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'sfat_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'salt_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'sugar_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Nutrient Content of Recipes';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = 'Recipe Title';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['hide_empty'] = TRUE;
  /* Field: Indexed Content:  Fat [Traffic Light] */
  $handler->display->display_options['fields']['fat_light']['id'] = 'fat_light';
  $handler->display->display_options['fields']['fat_light']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['fat_light']['field'] = 'fat_light';
  $handler->display->display_options['fields']['fat_light']['label'] = ' Fat';
  $handler->display->display_options['fields']['fat_light']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fat_light']['alter']['text'] = '<div class="recipe-color-[fat_light]">[fat_light]<div>';
  $handler->display->display_options['fields']['fat_light']['link_to_entity'] = 0;
  /* Field: Indexed Content: Saturated Fat [Traffic Light] */
  $handler->display->display_options['fields']['sfat_light']['id'] = 'sfat_light';
  $handler->display->display_options['fields']['sfat_light']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sfat_light']['field'] = 'sfat_light';
  $handler->display->display_options['fields']['sfat_light']['label'] = 'Saturated Fat';
  $handler->display->display_options['fields']['sfat_light']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sfat_light']['alter']['text'] = '<div class="recipe-color-[sfat_light]">[sfat_light]<div>';
  $handler->display->display_options['fields']['sfat_light']['link_to_entity'] = 0;
  /* Field: Indexed Content: Salt [Traffic Light] */
  $handler->display->display_options['fields']['salt_light']['id'] = 'salt_light';
  $handler->display->display_options['fields']['salt_light']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['salt_light']['field'] = 'salt_light';
  $handler->display->display_options['fields']['salt_light']['label'] = 'Salt';
  $handler->display->display_options['fields']['salt_light']['exclude'] = TRUE;
  $handler->display->display_options['fields']['salt_light']['alter']['text'] = '<div class="recipe-color-[salt_light] ">[salt_light] <div>';
  $handler->display->display_options['fields']['salt_light']['link_to_entity'] = 0;
  /* Field: Indexed Content: Sugar [Traffic Light] */
  $handler->display->display_options['fields']['sugar_light']['id'] = 'sugar_light';
  $handler->display->display_options['fields']['sugar_light']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sugar_light']['field'] = 'sugar_light';
  $handler->display->display_options['fields']['sugar_light']['label'] = 'Sugar';
  $handler->display->display_options['fields']['sugar_light']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sugar_light']['alter']['text'] = '<div class="recipe-color-[sugar_light]">[sugar_light]</div>';
  $handler->display->display_options['fields']['sugar_light']['link_to_entity'] = 0;
  /* Field: Indexed Content:  Fat [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['fat_nutrient']['id'] = 'fat_nutrient';
  $handler->display->display_options['fields']['fat_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['fat_nutrient']['field'] = 'fat_nutrient';
  $handler->display->display_options['fields']['fat_nutrient']['label'] = ' Fat';
  $handler->display->display_options['fields']['fat_nutrient']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fat_nutrient']['alter']['text'] = '<div class=\'recipe-color-[fat_light]\'>[fat_nutrient]</div>';
  $handler->display->display_options['fields']['fat_nutrient']['link_to_entity'] = 0;
  /* Field: Indexed Content: Saturated Fat [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['sfat_nutrient']['id'] = 'sfat_nutrient';
  $handler->display->display_options['fields']['sfat_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sfat_nutrient']['field'] = 'sfat_nutrient';
  $handler->display->display_options['fields']['sfat_nutrient']['label'] = 'Saturated Fat';
  $handler->display->display_options['fields']['sfat_nutrient']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sfat_nutrient']['alter']['text'] = '<div class=\'recipe-color-[sfat_light]\'>[sfat_nutrient]</div>';
  $handler->display->display_options['fields']['sfat_nutrient']['link_to_entity'] = 0;
  /* Field: Indexed Content: Salt [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['salt_nutrient']['id'] = 'salt_nutrient';
  $handler->display->display_options['fields']['salt_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['salt_nutrient']['field'] = 'salt_nutrient';
  $handler->display->display_options['fields']['salt_nutrient']['label'] = 'Salt';
  $handler->display->display_options['fields']['salt_nutrient']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['salt_nutrient']['alter']['text'] = '<div class=\'recipe-color-[salt_light]\'>[salt_nutrient]</div>';
  $handler->display->display_options['fields']['salt_nutrient']['link_to_entity'] = 0;
  /* Field: Indexed Content: Sugar [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['sugar_nutrient']['id'] = 'sugar_nutrient';
  $handler->display->display_options['fields']['sugar_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sugar_nutrient']['field'] = 'sugar_nutrient';
  $handler->display->display_options['fields']['sugar_nutrient']['label'] = 'Sugar';
  $handler->display->display_options['fields']['sugar_nutrient']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sugar_nutrient']['alter']['text'] = '<div class=\'recipe-color-[sugar_light]\'>[sugar_nutrient]</div>';
  $handler->display->display_options['fields']['sugar_nutrient']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: String title */
  $handler->display->display_options['sorts']['string_title']['id'] = 'string_title';
  $handler->display->display_options['sorts']['string_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['string_title']['field'] = 'string_title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  $handler->display->display_options['path'] = 'nutrition/nutritional-table';

  /* Display:  Nutritional Composition Table */
  $handler = $view->new_display('page', ' Nutritional Composition Table', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nutrient content of recipes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_short_title' => 'field_short_title',
    'fat_light' => 'fat_light',
    'sfat_light' => 'sfat_light',
    'salt_light' => 'salt_light',
    'sugar_light' => 'sugar_light',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'fat_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'sfat_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'salt_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'sugar_light' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = 'Recipe Title';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['hide_empty'] = TRUE;
  /* Field: Indexed Content:  Fat [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['fat_nutrient']['id'] = 'fat_nutrient';
  $handler->display->display_options['fields']['fat_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['fat_nutrient']['field'] = 'fat_nutrient';
  $handler->display->display_options['fields']['fat_nutrient']['label'] = ' Fat';
  $handler->display->display_options['fields']['fat_nutrient']['link_to_entity'] = 0;
  /* Field: Indexed Content: Salt [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['salt_nutrient']['id'] = 'salt_nutrient';
  $handler->display->display_options['fields']['salt_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['salt_nutrient']['field'] = 'salt_nutrient';
  $handler->display->display_options['fields']['salt_nutrient']['label'] = 'Salt';
  $handler->display->display_options['fields']['salt_nutrient']['link_to_entity'] = 0;
  /* Field: Indexed Content: Saturated Fat [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['sfat_nutrient']['id'] = 'sfat_nutrient';
  $handler->display->display_options['fields']['sfat_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sfat_nutrient']['field'] = 'sfat_nutrient';
  $handler->display->display_options['fields']['sfat_nutrient']['label'] = 'Saturated Fat';
  $handler->display->display_options['fields']['sfat_nutrient']['link_to_entity'] = 0;
  /* Field: Indexed Content: Sugar [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['sugar_nutrient']['id'] = 'sugar_nutrient';
  $handler->display->display_options['fields']['sugar_nutrient']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sugar_nutrient']['field'] = 'sugar_nutrient';
  $handler->display->display_options['fields']['sugar_nutrient']['label'] = 'Sugar';
  $handler->display->display_options['fields']['sugar_nutrient']['link_to_entity'] = 0;
  /* Field: Indexed Content:  Fat [Traffic Light] */
  $handler->display->display_options['fields']['fat_light']['id'] = 'fat_light';
  $handler->display->display_options['fields']['fat_light']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['fat_light']['field'] = 'fat_light';
  $handler->display->display_options['fields']['fat_light']['link_to_entity'] = 0;
  /* Field: Indexed Content: Salt [Traffic Light] */
  $handler->display->display_options['fields']['salt_light']['id'] = 'salt_light';
  $handler->display->display_options['fields']['salt_light']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['salt_light']['field'] = 'salt_light';
  $handler->display->display_options['fields']['salt_light']['link_to_entity'] = 0;
  /* Field: Indexed Content: Saturated Fat [Traffic Light] */
  $handler->display->display_options['fields']['sfat_light']['id'] = 'sfat_light';
  $handler->display->display_options['fields']['sfat_light']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sfat_light']['field'] = 'sfat_light';
  /* Field: Indexed Content: Sugar [Traffic Light Nutrient] */
  $handler->display->display_options['fields']['sugar_nutrient_1']['id'] = 'sugar_nutrient_1';
  $handler->display->display_options['fields']['sugar_nutrient_1']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['sugar_nutrient_1']['field'] = 'sugar_nutrient';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: String title */
  $handler->display->display_options['sorts']['string_title']['id'] = 'string_title';
  $handler->display->display_options['sorts']['string_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['string_title']['field'] = 'string_title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  $handler->display->display_options['path'] = 'nutrition/nutritional-table-per-100';
  $translatables['nutrition_centre'] = array(
    t('Master'),
    t('Recipe Box'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Node ID'),
    t('.'),
    t(','),
    t('<a href="#">See All Recipes</a>'),
    t('Recipes'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Search'),
    t('Five Ways To'),
    t('Recipe  Nutrient  Values'),
    t('All'),
    t('Recipe Details'),
    t('[field_attribution]'),
    t('<div class="recipe-inforbar">
<span class="prep-time"><span class="recipe-inforbar-time">[field_preparation_time]</span> <span class="recipe-inforbar-text">Preparation</span></span>
<span class="recipe-quantity"><span class="recipe-inforbar-text">Serves</span> [field_quantity]</span>
<span class="recipe-cook-time"><span class="recipe-inforbar-time">[field_cooking_time]</span> <span class="recipe-inforbar-text">Cooking time</span></span>
</div>'),
    t('Serves'),
    t('<span class="summary">[field_summary]</span>'),
    t('Warning'),
    t('Healthy Hints'),
    t('Ingredients'),
    t('Cooking Guide'),
    t('Recipe  Traffic Lights'),
    t('<p>(<em>per serving</em>)</p>'),
    t(' Nutritional Composition Table'),
    t('Nutrient content of recipes'),
    t('<h2>Nutrient content of recipes</h2>
<div><span>Recipe</span><span>Fat (g)</span><span>Saturated Fat (g)</span><span>Sugar (g)</span><span>Salt (g)</span></div>'),
    t('[php]'),
    t('Nutrient Content of Recipes'),
    t('Recipe Title'),
    t(' Fat'),
    t('<div class="recipe-color-[fat_light]">[fat_light]<div>'),
    t('Saturated Fat'),
    t('<div class="recipe-color-[sfat_light]">[sfat_light]<div>'),
    t('Salt'),
    t('<div class="recipe-color-[salt_light] ">[salt_light] <div>'),
    t('Sugar'),
    t('<div class="recipe-color-[sugar_light]">[sugar_light]</div>'),
    t('<div class=\'recipe-color-[fat_light]\'>[fat_nutrient]</div>'),
    t('<div class=\'recipe-color-[sfat_light]\'>[sfat_nutrient]</div>'),
    t('<div class=\'recipe-color-[salt_light]\'>[salt_nutrient]</div>'),
    t('<div class=\'recipe-color-[sugar_light]\'>[sugar_nutrient]</div>'),
    t(' Fat [Traffic Light]'),
    t('Salt [Traffic Light]'),
    t('Saturated Fat [Traffic Light]'),
    t('Sugar [Traffic Light Nutrient]'),
  );
  $export['nutrition_centre'] = $view;

  $view = new view();
  $view->name = 'today_s_hot_tip';
  $view->description = 'Today\'s Hot Tip block, Video Tour and Related Recipes for nutrition centre';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Today\'s Hot Tip, Video Tour and Related Recipes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Recipes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tips' => 'tips',
  );

  /* Display: Today's hot tip */
  $handler = $view->new_display('block', 'Today\'s hot tip', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_summary' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_summary' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollRight';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '86400000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'nutrition_centre_today_s_hot_tip' => 'nutrition_centre_today_s_hot_tip',
    'ismaili_centre_banner_items' => 0,
    'home_page_quote_of_the_day' => 0,
    'home_page_banner' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';

  /* Display: Video Tour */
  $handler = $view->new_display('block', 'Video Tour', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video Tour';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'nutrition_centre_video_tour' => 'nutrition_centre_video_tour',
    'ismaili_centre_banner_items' => 0,
    'home_page_quote_of_the_day' => 0,
    'home_page_banner' => 0,
    'nutrition_centre_today_s_hot_tip' => 0,
    'nutrition_centre_banner' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '20',
    'trim_type' => 'words',
    'trim_suffix' => '',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'video_tour',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Related Recipes */
  $handler = $view->new_display('block', 'Related Recipes', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'related-recipe-section';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'archive_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'title';
  $handler->display->display_options['fields']['field_main_image']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );

  /* Display: Five Ways too */
  $handler = $view->new_display('block', 'Five Ways too', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Five ways too';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'five_ways_too' => 'five_ways_too',
    'ismaili_centre_banner_items' => 0,
    'home_page_quote_of_the_day' => 0,
    'home_page_banner' => 0,
    'nutrition_centre_today_s_hot_tip' => 0,
    'nutrition_centre_banner' => 0,
    'nutrition_centre_video_tour' => 0,
    'golden_jubilee_' => 0,
    'ismaili_centre_quote_of_the_day' => 0,
    'home_page_tiles' => 0,
    'ismaili_centre_feature_tiles' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'five_ways_to_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_short_title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['today_s_hot_tip'] = array(
    t('Master'),
    t('Related Recipes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Today\'s hot tip'),
    t('queue'),
    t('Video Tour'),
    t('All'),
    t('Five Ways too'),
    t('Five ways too'),
  );
  $export['today_s_hot_tip'] = $view;

  return $export;
}
