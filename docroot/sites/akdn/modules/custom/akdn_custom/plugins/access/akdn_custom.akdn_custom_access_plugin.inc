<?php

/**
 * @file
 * Plugin to check if the title has configured string.
 */
$plugin = array(
  'title' => t('Banner Item Area: Automatically/Manual'),
  'description' => t('Checks if Banner Item Area is Automatically select banner items.'),
  'callback' => 'banner_item_area_ctools_access_check',
  'default' => array('negate' => 0),
  'summary' => 'banner_item_area_ctools_access_summary',
  'settings form' => 'banner_item_area_ctools_access_settings',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Settings form for the 'Banner Item Area: Automatically/Manual' access plugin.
 */
function banner_item_area_ctools_access_settings($form, &$form_state, $conf) {
  return $form;
}

/**
 * Provide a summary description.
 */
function banner_item_area_ctools_access_summary($conf, $context) {
  return t('Checks if Banner Item Area is Automatically select banner items.');
}

/**
 * Check for access.
 */
function banner_item_area_ctools_access_check($conf, $context) {
  // Return false if context is not set.
  if (empty($context) || empty($context->data)) {
    return FALSE;
  }

  $node = $context->data;
  if (!empty($node->field_featured_content_area) && $node->field_featured_content_area['und'][0]['value']) {
    //Automatically select banner items for this page
    return FALSE;
  }
  else {
    //Manually select banner items for this page
    return TRUE;
  }
}
