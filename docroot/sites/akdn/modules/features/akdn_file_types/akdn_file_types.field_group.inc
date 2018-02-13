<?php
/**
 * @file
 * akdn_file_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function akdn_file_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_non_display|file|image|form';
  $field_group->group_name = 'group_details_non_display';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_image';
  $field_group->data = array(
    'label' => 'Image Details (non-display)',
    'weight' => '19',
    'children' => array(
      0 => 'field_image_author',
      1 => 'field_image_source',
      2 => 'field_image_description',
      3 => 'field_image_external_url',
      4 => 'field_image_date_taken',
      5 => 'field_image_rough_caption',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-details-non-display field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_details_non_display|file|image|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Details (non-display)');

  return $field_groups;
}
