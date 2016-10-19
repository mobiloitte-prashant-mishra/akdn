<?php
/**
 * @file
 * newsletter_social_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function newsletter_social_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_details|node|simplenews|form';
  $field_group->group_name = 'group_social_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_newsletter_social_title',
      1 => 'field_newsletter_social_image',
      2 => 'field_newsletter_social_summary',
      3 => 'field_newsletter_social_type',
      4 => 'field_newsletter_social_url',
      5 => 'field_newsletter_default_value',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_social_details|node|simplenews|form'] = $field_group;

  return $export;
}
