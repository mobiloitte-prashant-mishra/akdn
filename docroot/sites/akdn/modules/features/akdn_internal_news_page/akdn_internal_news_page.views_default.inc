<?php

/**
 * @file
 * akdn_internal_news_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function akdn_internal_news_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'akdn_internal_news_page_announcement';
  $view->description = 'AKDN internal News page Announcement block';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AKDN internal News page Announcement';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AKDN internal News page Announcement';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'announcement-content';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'social_sharing_image',
    'image_link' => '',
  );
  /* Field: Entity translation: Announcement title: translated */
  $handler->display->display_options['fields']['field_announcement_title_et']['id'] = 'field_announcement_title_et';
  $handler->display->display_options['fields']['field_announcement_title_et']['table'] = 'field_data_field_announcement_title';
  $handler->display->display_options['fields']['field_announcement_title_et']['field'] = 'field_announcement_title_et';
  $handler->display->display_options['fields']['field_announcement_title_et']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_title_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_title_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_announcement_title_et']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Entity translation: Short Title: translated */
  $handler->display->display_options['fields']['field_short_title_et']['id'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_et']['field'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['label'] = '';
  $handler->display->display_options['fields']['field_short_title_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_short_title_et']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Entity translation: Body: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = '';
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et']['hide_empty'] = TRUE;
  /* Field: Content: Find out more link */
  $handler->display->display_options['fields']['field_find_out_more_link']['id'] = 'field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['table'] = 'field_data_field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['field'] = 'field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['text'] = '[ FIND OUT MORE ]';
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['path'] = '[field_find_out_more_link-url]';
  $handler->display->display_options['fields']['field_find_out_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_find_out_more_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_find_out_more_link']['type'] = 'link_url';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'config_block' => 'config_block',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Block Type (field_block_type) */
  $handler->display->display_options['filters']['field_block_type_value']['id'] = 'field_block_type_value';
  $handler->display->display_options['filters']['field_block_type_value']['table'] = 'field_data_field_block_type';
  $handler->display->display_options['filters']['field_block_type_value']['field'] = 'field_block_type_value';
  $handler->display->display_options['filters']['field_block_type_value']['value'] = array(
    'Announcement' => 'Announcement',
  );
  /* Filter criterion: Content: Show Block (field_show_block) */
  $handler->display->display_options['filters']['field_show_block_value']['id'] = 'field_show_block_value';
  $handler->display->display_options['filters']['field_show_block_value']['table'] = 'field_data_field_show_block';
  $handler->display->display_options['filters']['field_show_block_value']['field'] = 'field_show_block_value';
  $handler->display->display_options['filters']['field_show_block_value']['value'] = array(
    1 => '1',
  );

  /* Display: Announcement */
  $handler = $view->new_display('block', 'Announcement', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'announcement-block clearfix';
  $handler->display->display_options['display_description'] = 'Announcement Block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'announcement-image';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'social_sharing_image',
    'image_link' => '',
  );
  /* Field: Entity translation: Announcement title: translated */
  $handler->display->display_options['fields']['field_announcement_title_et']['id'] = 'field_announcement_title_et';
  $handler->display->display_options['fields']['field_announcement_title_et']['table'] = 'field_data_field_announcement_title';
  $handler->display->display_options['fields']['field_announcement_title_et']['field'] = 'field_announcement_title_et';
  $handler->display->display_options['fields']['field_announcement_title_et']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_title_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_title_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_announcement_title_et']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Entity translation: Short Title: translated */
  $handler->display->display_options['fields']['field_short_title_et']['id'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_et']['field'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['label'] = '';
  $handler->display->display_options['fields']['field_short_title_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_short_title_et']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Entity translation: Body: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = '';
  $handler->display->display_options['fields']['body_et']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_et']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et']['hide_empty'] = TRUE;
  /* Field: Content: Find out more link */
  $handler->display->display_options['fields']['field_find_out_more_link']['id'] = 'field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['table'] = 'field_data_field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['field'] = 'field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['text'] = '[ FIND OUT MORE ]';
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['path'] = '[field_find_out_more_link-url]';
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_find_out_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_find_out_more_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_find_out_more_link']['type'] = 'link_url';
  $handler->display->display_options['block_description'] = 'AKDN internal News page Announcement';

  /* Display: AKDN Internal Page Title */
  $handler = $view->new_display('block', 'AKDN Internal Page Title', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '/';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
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
    'akdn_internal_news_page' => 'akdn_internal_news_page',
  );
  $handler->display->display_options['block_description'] = 'AKDN Internal Page Title';
  $export['akdn_internal_news_page_announcement'] = $view;

  $view = new view();
  $view->name = 'akdn_internal_news_pages_blocks';
  $view->description = 'AKDN internal News page blocks';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AKDN Internal News Pages Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-block';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = 'Machine name';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['label'] = '';
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
    'image_style' => 'social_sharing_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_speech_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_speech_image']['delta_offset'] = '0';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => 'social_sharing_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_article_img']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_article_img']['delta_offset'] = '0';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_gallery_images']['id'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['table'] = 'field_data_field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['field'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_images']['settings'] = array(
    'image_style' => 'social_sharing_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_gallery_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_images']['delta_offset'] = '0';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'social_sharing_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_event_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_image']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = '[type_1] ';
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['label'] = '';
  $handler->display->display_options['fields']['field_article_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_cat']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_article_cat']['element_wrapper_class'] = '[type_1] ';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entity translation: Short Title: translated */
  $handler->display->display_options['fields']['field_short_title_et']['id'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_et']['field'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['label'] = '';
  $handler->display->display_options['fields']['field_short_title_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_short_title_et']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Entity translation: Body: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = '';
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_et']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_et']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '`Read More';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
    switch($row->type_1){
      case \'article\':
         $article_node = node_load($row->nid);
         $node_wrapper = entity_metadata_wrapper(\'node\', $article_node);
         $article_type = $node_wrapper->field_article_cat->value();
         $url_name = str_replace(\' \',\'-\',strtolower($article_type->name));
         $url = \'/press-centre/\'.$url_name.\'s\';
         $display_name = \'All \'.$article_type->name.\'s\';
         if($article_type->name == \'In the media\'){
            $url = \'/press-centre/\'.$url_name;
            $display_name = \'All \'$article_type->name;
          }
          if($article_type->name == \'News\'){
            $url = \'/press-centre/\'.$url_name;
            $display_name = \'All Our stories\';
          }
         if($article_type->name == \'Spotlight\'){
            $url = \'/press-centre/projects\';
          }
         print \'<a href="\'.$url.\'">\'.$display_name.\'</a>\';
         break;
     case \'gallery\':
         $url = \'/press-centre/galleries\';
         print \'<a href="\'.$url.\'">All Photographs</a>\';
         break;
     case \'default\':
         $url_name = str_replace(\'_\',\'-\',$row->type_1);
         $display_name = str_replace(\'_\',\' \',strtoupper($row->type_1));
         $url = \'/press-centre/\'.$url_name.\'s\';
         print \'<a href="\'.$url.\'">All \'.$display_name.\'s</a>\';
         break;
    }

    ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
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
    'event' => 'event',
    'gallery' => 'gallery',
    'publication' => 'publication',
    'speech' => 'speech',
  );

  /* Display: New on akdn.org */
  $handler = $view->new_display('block', 'New on akdn.org', 'new_akdn_org');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news-block';
  $handler->display->display_options['display_description'] = 'new on akdn.org';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-block-content';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = 'Machine name';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['label'] = '';
  $handler->display->display_options['fields']['field_speech_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speech_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_speech_image']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['field_speech_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_speech_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
    'image_style' => 'standard_listing_aspect_switcher',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_speech_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_speech_image']['delta_offset'] = '0';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_article_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_img']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['field_article_img']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_article_img']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => 'standard_listing_aspect_switcher',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_article_img']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_article_img']['delta_offset'] = '0';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_gallery_images']['id'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['table'] = 'field_data_field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['field'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_images']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_images']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['field_gallery_images']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_images']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_gallery_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_images']['settings'] = array(
    'image_style' => 'standard_listing_aspect_switcher',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_images']['delta_offset'] = '0';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['field_event_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'standard_listing_aspect_switcher',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_event_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_event_image']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['field_publication_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'standard_listing_aspect_switcher',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = '';
  $handler->display->display_options['fields']['field_media_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_absolute';
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat_1']['id'] = 'field_article_cat_1';
  $handler->display->display_options['fields']['field_article_cat_1']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat_1']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat_1']['label'] = '';
  $handler->display->display_options['fields']['field_article_cat_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_cat_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_cat_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'inthemedia image';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_article_img]';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = '[field_media_source]';
  $handler->display->display_options['fields']['nothing_3']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['target'] = '_blank';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_publication_image]
    [field_speech_image] 
  <div class="all-read-more [field_article_cat_1]"><a href="/node/[nid]" target="_blank">[field_article_img]</a></div><div class="inthemedia-read-more [field_article_cat_1]">[nothing_3]</div> 
    [field_gallery_images]
    [field_event_image]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'news-image';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'article-type [type_1]-text';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['label'] = '';
  $handler->display->display_options['fields']['field_article_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_cat']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_article_cat']['element_wrapper_class'] = 'article-type';
  $handler->display->display_options['fields']['field_article_cat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Entity translation: Short Title: translated */
  $handler->display->display_options['fields']['field_short_title_et']['id'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_et']['field'] = 'field_short_title_et';
  $handler->display->display_options['fields']['field_short_title_et']['label'] = '';
  $handler->display->display_options['fields']['field_short_title_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_et']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['field_short_title_et']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_et']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_short_title_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title_et']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_short_title_et']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="all-read-more [field_article_cat_1]">
  <h4><a href="/node/[nid]" target="_blank">[field_short_title_et]</a></h4>
  </div>
  <div class="inthemedia-read-more [field_article_cat_1]">
  <h4><a href="[field_media_source]" target="_blank">[field_short_title_et]</a></h4>
  </div>';
  $handler->display->display_options['fields']['nothing_4']['alter']['path'] = '[field_media_source]';
  $handler->display->display_options['fields']['nothing_4']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_publish_date']['element_wrapper_class'] = 'news-date';
  $handler->display->display_options['fields']['field_publish_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entity translation: Body: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = '';
  $handler->display->display_options['fields']['body_et']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_et']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body_et']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_et']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body_et']['element_wrapper_class'] = 'news-body';
  $handler->display->display_options['fields']['body_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_et']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_et']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'in the media read more';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Read More';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_media_source]';
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
    switch($row->type_1){
      case \'article\':
         $article_node = node_load($row->nid);
         $node_wrapper = entity_metadata_wrapper(\'node\', $article_node);
         $article_type = $node_wrapper->field_article_cat->value();
         $url_name = str_replace(\' \',\'-\',strtolower($article_type->name));
         $url = \'/press-centre/\'.$url_name.\'s\';
         $display_name = \'All \'.$article_type->name.\'s\';
         if($article_type->name == \'In the media\'){
            $url = \'/press-centre/\'.$url_name;
            $display_name = \'All \'.$article_type->name;
          }
          if($article_type->name == \'News\'){
            $url = \'/press-centre/\'.$url_name;
            $display_name = \'All Our stories\';
          }
         if($article_type->name == \'Spotlight\'){
            $url = \'/press-centre/projects\';
          }
         print \'<a href="\'.$url.\'" target="_blank">\'.$display_name.\'</a>\';
         break;
     case \'gallery\':
         $url = \'/press-centre/galleries\';
         print \'<a href="\'.$url.\'" target="_blank">All Photographs</a>\';
         break;
    case \'speech\':
         $url = \'/press-centre/speeches\';
         print \'<a href="\'.$url.\'" target="_blank">All Speeches</a>\';
         break;
     default:
         $url_name = str_replace(\'_\',\'-\',$row->type_1);
         $display_name = str_replace(\'_\',\' \',$row->type_1);
         $url = \'/press-centre/\'.$url_name.\'s\';
         print \'<a href="\'.$url.\'" target="_blank">All \'.$display_name.\'s</a>\';
         break;
    }

    ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="all-read-more [field_article_cat_1]">[ [view_node]</div><div class="inthemedia-read-more [field_article_cat_1]">[ [nothing_2]</div> | [php] ]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'readmore-text';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'AKDN new on akdn.org';

  /* Display: Multimedia */
  $handler = $view->new_display('block', 'Multimedia', 'multimedia_block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: External id */
  $handler->display->display_options['fields']['field_youtube_external_id']['id'] = 'field_youtube_external_id';
  $handler->display->display_options['fields']['field_youtube_external_id']['table'] = 'field_data_field_youtube_external_id';
  $handler->display->display_options['fields']['field_youtube_external_id']['field'] = 'field_youtube_external_id';
  $handler->display->display_options['fields']['field_youtube_external_id']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_external_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_external_id']['element_label_colon'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_youtube_picture']['id'] = 'field_youtube_picture';
  $handler->display->display_options['fields']['field_youtube_picture']['table'] = 'field_data_field_youtube_picture';
  $handler->display->display_options['fields']['field_youtube_picture']['field'] = 'field_youtube_picture';
  $handler->display->display_options['fields']['field_youtube_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube_picture']['settings'] = array(
    'image_style' => 'standard_listing_aspect_switcher',
    'image_link' => '',
  );
  /* Field: Content: Youtube Video Embed */
  $handler->display->display_options['fields']['field_youtube_embed']['id'] = 'field_youtube_embed';
  $handler->display->display_options['fields']['field_youtube_embed']['table'] = 'field_data_field_youtube_embed';
  $handler->display->display_options['fields']['field_youtube_embed']['field'] = 'field_youtube_embed';
  $handler->display->display_options['fields']['field_youtube_embed']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_embed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_embed']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_youtube_embed']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_youtube_embed']['settings'] = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  /* Field: Content: Youtube link */
  $handler->display->display_options['fields']['field_youtube_link']['id'] = 'field_youtube_link';
  $handler->display->display_options['fields']['field_youtube_link']['table'] = 'field_data_field_youtube_link';
  $handler->display->display_options['fields']['field_youtube_link']['field'] = 'field_youtube_link';
  $handler->display->display_options['fields']['field_youtube_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_youtube_link']['type'] = 'mediaelement_video';
  $handler->display->display_options['fields']['field_youtube_link']['settings'] = array(
    'controls' => 1,
    'width' => '640',
    'height' => '385',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="social_sharing">
      <span class="play-video" id="[field_youtube_external_id]"><a class="colorbox-inline" href="https://www.youtube.com/embed/[field_youtube_external_id]?autoplay=1&fs=1&amp;width=640&amp;height=360&amp;hl=en_US1&amp;iframe=true&amp;rel=0">[field_youtube_picture]</a></span>
      </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Entity translation: Body: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = '';
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_et']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_et']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'youtube' => 'youtube',
  );
  $handler->display->display_options['block_description'] = 'Multimedia Block 1';
  $translatables['akdn_internal_news_pages_blocks'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Machine name'),
    t('`Read More'),
    t('New on akdn.org'),
    t('new on akdn.org'),
    t('inthemedia image'),
    t('[field_article_img]'),
    t('[field_publication_image]
    [field_speech_image] 
  <div class="all-read-more [field_article_cat_1]"><a href="/node/[nid]" target="_blank">[field_article_img]</a></div><div class="inthemedia-read-more [field_article_cat_1]">[nothing_3]</div> 
    [field_gallery_images]
    [field_event_image]'),
    t('<div class="all-read-more [field_article_cat_1]">
  <h4><a href="/node/[nid]" target="_blank">[field_short_title_et]</a></h4>
  </div>
  <div class="inthemedia-read-more [field_article_cat_1]">
  <h4><a href="[field_media_source]" target="_blank">[field_short_title_et]</a></h4>
  </div>'),
    t('Read More'),
    t('in the media read more'),
    t('<div class="all-read-more [field_article_cat_1]">[ [view_node]</div><div class="inthemedia-read-more [field_article_cat_1]">[ [nothing_2]</div> | [php] ]'),
    t('AKDN new on akdn.org'),
    t('Multimedia'),
    t('Picture'),
    t('Youtube link'),
    t('<div class="social_sharing">
      <span class="play-video" id="[field_youtube_external_id]"><a class="colorbox-inline" href="https://www.youtube.com/embed/[field_youtube_external_id]?autoplay=1&fs=1&amp;width=640&amp;height=360&amp;hl=en_US1&amp;iframe=true&amp;rel=0">[field_youtube_picture]</a></span>
      </div>'),
    t('Multimedia Block 1'),
  );
  $export['akdn_internal_news_pages_blocks'] = $view;

  return $export;
}
