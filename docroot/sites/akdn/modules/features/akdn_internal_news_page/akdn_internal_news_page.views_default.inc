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
  $handler->display->display_options['fields']['field_announcement_title_et']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_short_title_et']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['body_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_et']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_et']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body_et']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et']['hide_empty'] = TRUE;
  /* Field: Content: Find out more link */
  $handler->display->display_options['fields']['field_find_out_more_link']['id'] = 'field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['table'] = 'field_data_field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['field'] = 'field_find_out_more_link';
  $handler->display->display_options['fields']['field_find_out_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_find_out_more_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['text'] = '[ FIND OUT MORE ]';
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['alter']['path'] = '[field_find_out_more_link-url]';
  $handler->display->display_options['fields']['field_find_out_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_find_out_more_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_find_out_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_find_out_more_link']['type'] = 'link_url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_announcement_title_et]
[field_short_title_et]
[body_et]
[field_find_out_more_link]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'announcement-content';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'AKDN internal News page Announcement';
  $translatables['akdn_internal_news_page_announcement'] = array(
    t('Master'),
    t('AKDN internal News page Announcement'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[ FIND OUT MORE ]'),
    t('All'),
    t('Announcement'),
    t('Announcement Block'),
    t('[field_announcement_title_et]
[field_short_title_et]
[body_et]
[field_find_out_more_link]'),
  );
  $export['akdn_internal_news_page_announcement'] = $view;
  
  
  $view = new view();
  $view->name = 'akdn_internal_news_pages_blocks';
  $view->description = 'AKDN internal News page Announcement block';
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
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['display_description'] = 'new on akdn.org';
  $handler->display->display_options['block_description'] = 'AKDN new on akdn.org';
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
    t('AKDN new on akdn.org'),
  );
  $export['akdn_internal_news_pages_blocks'] = $view;

  return $export;
}
