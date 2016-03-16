<?php

/**
 * @file
 * Administer nodequeue notify.
 */

function nodequeue_notify_administration($form, &$form_state) {
  $form = array();

  $form['nodequeue_notify_recipient_kc'] = array(
    '#type' => 'textarea',
    '#title' => t('Recipients (for KC nodequeue)'),
    '#description' => t('Enter recipient email addresses (comma separated) who will get notification when content is added to nodequeue'),
    '#default_value' => variable_get('nodequeue_notify_recipient_kc', ''),
  );

  return system_settings_form($form);
}
