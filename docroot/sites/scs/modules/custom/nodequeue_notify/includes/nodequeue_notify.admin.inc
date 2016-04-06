<?php

/**
 * @file
 * Administer nodequeue notify.
 */

function nodequeue_notify_administration($form, &$form_state) {
  $form = array();

  $form['nodequeue_notify_recipient_akdn'] = array(
    '#type' => 'textarea',
    '#title' => t('Recipients (for AKDN nodequeue)'),
    '#description' => t('Enter recipient email addresses (comma separated) who will get notification when content is added to nodequeue'),
    '#default_value' => variable_get('nodequeue_notify_recipient_akdn', ''),
  );

  $form['nodequeue_notify_recipient_iis'] = array(
    '#type' => 'textarea',
    '#title' => t('Recipients (for IIS nodequeue)'),
    '#description' => t('Enter recipient email addresses (comma separated) who will get notification when content is added to nodequeue'),
    '#default_value' => variable_get('nodequeue_notify_recipient_iis', ''),
  );

  $form['nodequeue_notify_recipient_ismaili'] = array(
    '#type' => 'textarea',
    '#title' => t('Recipients (for Ismaili nodequeue)'),
    '#description' => t('Enter recipient email addresses (comma separated) who will get notification when content is added to nodequeue'),
    '#default_value' => variable_get('nodequeue_notify_recipient_ismaili', ''),
  );

  return system_settings_form($form);
}
