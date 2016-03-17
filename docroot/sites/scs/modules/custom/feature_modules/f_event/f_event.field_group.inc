<?php
/**
 * @file
 * f_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|event|full';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body Wrapper Div',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-body-wrapper field-group-div',
      ),
    ),
  );
  $export['group_body_wrapper|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_categories|node|event|form';
  $field_group->group_name = 'group_event_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Categories',
    'weight' => '45',
    'children' => array(
      0 => 'field_agency',
      1 => 'field_country',
      2 => 'field_cycle_year',
      3 => 'field_focus_area',
      4 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_categories|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '43',
    'children' => array(
      0 => 'body',
      1 => 'field_event_date',
      2 => 'field_event_image',
      3 => 'field_event_location',
      4 => 'field_short_title',
      5 => 'title_field',
      6 => 'field_event_type',
      7 => 'field_long_summary',
      8 => 'field_youtube_vimeo_video',
      9 => 'field_brightcove_id',
      10 => 'field_brightcove_video',
      11 => 'field_archive',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|event|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '0',
    'children' => array(
      0 => 'group_event_details',
      1 => 'group_featured_content',
      2 => 'group_event_categories',
      3 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event field-group-tabs',
      ),
    ),
  );
  $export['group_event|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|event|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '44',
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
        'classes' => 'group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|event|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_event_location',
      2 => 'field_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-meta-info field-group-div',
      ),
    ),
  );
  $export['group_meta_info|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|event|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '46',
    'children' => array(
      0 => 'field_akmi_pages',
      1 => 'field_enable_project_slider',
      2 => 'field_event_links',
      3 => 'field_events_reference',
      4 => 'field_photos_reference',
      5 => 'field_podcasts_reference',
      6 => 'field_press_reference',
      7 => 'field_related_in_the_media',
      8 => 'field_related_news',
      9 => 'field_related_project',
      10 => 'field_related_publications',
      11 => 'field_speeches_reference',
      12 => 'field_album_ref',
      13 => 'field_jubilee_related',
      14 => 'field_other_participants',
      15 => 'field_participants',
      16 => 'field_dms',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_review|node|event|form';
  $field_group->group_name = 'group_review';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Select Reviewer',
    'weight' => '25',
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
  $export['group_review|node|event|form'] = $field_group;

  return $export;
}
