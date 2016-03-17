<?php
/**
 * @file
 * institutional_space_permissions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function institutional_space_permissions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'registration-event_registration-field_user_name'
  $field_instances['registration-event_registration-field_user_name'] = array(
    'bundle' => 'event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'registration',
    'field_name' => 'field_user_name',
    'label' => 'User Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('User Name');

  return $field_instances;
}
