<?php
/**
 * @file
 * iis_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iis_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|page|default';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address section',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address section',
      'instance_settings' => array(
        'classes' => 'group-address-section field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_address|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|page|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '4',
    'children' => array(
      0 => 'field_location',
      1 => 'field_address',
      2 => 'field_phone_number_int',
      3 => 'field_phone_number_national',
      4 => 'field_fax_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-address field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_address|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brightcove|node|video|form';
  $field_group->group_name = 'group_brightcove';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Brightcove',
    'weight' => '25',
    'children' => array(
      0 => 'field_brightcove',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Brightcove',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-brightcove field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_brightcove|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|event|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_image',
      1 => 'field_use_on_home_page',
      2 => 'field_news_and_events',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|graduate_studies|default';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'graduate_studies';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|graduate_studies|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|library|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image|node|library|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|page|default';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|page|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|research|default';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image|node|research|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|page|default';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'classes' => 'group-location field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_location|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|video|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '5',
    'children' => array(
      0 => 'field_link_to_video',
      1 => 'field_video_caption',
      2 => 'field_video_subtitle',
      3 => 'field_type_of_video',
      4 => 'group_brightcove',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|video|form'] = $field_group;

  return $export;
}
