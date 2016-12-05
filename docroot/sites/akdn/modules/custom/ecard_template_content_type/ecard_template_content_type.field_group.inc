<?php
/**
 * @file
 * ecard_template_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecard_template_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecard_categories|node|ecard_template|form';
  $field_group->group_name = 'group_ecard_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecard_template';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ecard';
  $field_group->data = array(
    'label' => 'Ecard Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_agency',
      1 => 'field_country',
      2 => 'field_focus_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ecard-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ecard_categories|node|ecard_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecard_details|node|ecard_template|form';
  $field_group->group_name = 'group_ecard_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecard_template';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ecard';
  $field_group->data = array(
    'label' => 'Ecard Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_ecard_image_caption',
      1 => 'field_fact_description',
      2 => 'field_fact_image',
      3 => 'field_image_upload',
      4 => 'field_more_information_link',
      5 => 'field_project_country_descript',
      6 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ecard-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ecard_details|node|ecard_template|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecard|node|ecard_template|form';
  $field_group->group_name = 'group_ecard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecard_template';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ecard',
    'weight' => '0',
    'children' => array(
      0 => 'group_ecard_categories',
      1 => 'group_ecard_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-ecard field-group-tabs',
      ),
    ),
  );
  $export['group_ecard|node|ecard_template|form'] = $field_group;

  return $export;
}
