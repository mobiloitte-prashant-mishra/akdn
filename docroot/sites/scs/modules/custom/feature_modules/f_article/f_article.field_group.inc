<?php
/**
 * @file
 * f_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_details_group|node|article|form';
  $field_group->group_name = 'group_article_details_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Article Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_agency',
      2 => 'field_country',
      3 => 'field_cycle_year',
      4 => 'field_focus_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-article-details-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_article_details_group|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_details|node|article|form';
  $field_group->group_name = 'group_article_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Article Details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_article_author',
      2 => 'field_article_cat',
      3 => 'field_article_img',
      4 => 'field_date_decade',
      5 => 'field_media_source',
      6 => 'field_publish_date',
      7 => 'field_short_title',
      8 => 'title_field',
      9 => 'field_article_url',
      10 => 'field_publication_source_link',
      11 => 'field_publication_source_title',
      12 => 'field_media_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Article Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-article-details field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_article_details|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article|node|article|form';
  $field_group->group_name = 'group_article';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Article',
    'weight' => '5',
    'children' => array(
      0 => 'group_article_details_group',
      1 => 'group_article_details',
      2 => 'group_featured_content',
      3 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-article field-group-tabs',
      ),
    ),
  );
  $export['group_article|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|article|full';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body Wrapper Div',
    'weight' => '4',
    'children' => array(
      0 => 'field_article_link',
      1 => 'field_events_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Body Wrapper Div',
      'instance_settings' => array(
        'classes' => 'group-body-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_body_wrapper|node|article|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|article|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '3',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_create_featured_content',
      2 => 'field_feature_image',
      3 => 'field_hub_page',
      4 => 'field_pages_to_exclude',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|article|default';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_publish_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Information',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|article|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|article|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '22',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_agency',
      2 => 'field_country',
      3 => 'field_focus_area',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta_info|node|article|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|article|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_article_link',
      1 => 'field_enable_project_slider',
      2 => 'field_events_reference',
      3 => 'field_photos_reference',
      4 => 'field_podcasts_reference',
      5 => 'field_press_reference',
      6 => 'field_related_in_the_media',
      7 => 'field_related_news',
      8 => 'field_related_project',
      9 => 'field_related_publications',
      10 => 'field_speeches_reference',
      11 => 'field_projects',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_review|node|article|form';
  $field_group->group_name = 'group_review';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Select Reviewer',
    'weight' => '14',
    'children' => array(
      0 => 'field_select_reviewer',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-review field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_review|node|article|form'] = $field_group;

  return $export;
}
