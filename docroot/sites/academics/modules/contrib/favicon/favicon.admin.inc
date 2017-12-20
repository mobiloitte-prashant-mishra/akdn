<?php

/**
 * Form callback; favicon module settings form.
 */
function favicon_settings_form($form) {
  $form['favicon_delivery_callback'] = array(
    '#type' => 'radios',
    '#title' => t('How to transfer the favicon file'),
    '#options' => array(
      'DrupalFavicon::deliverFileTransfer' => t('Inline (will store the output in page cache if enabled or file is smaller than @size)', array('@size' => format_size(variable_get('favicon_page_cache_maximum_size', DRUPAL_KILOBYTE * DRUPAL_KILOBYTE)))),
      'DrupalFavicon::deliverFileRedirect' => t('Redirect'),
    ),
    '#default_value' => variable_get('favicon_delivery_callback', 'DrupalFavicon::deliverFileTransfer'),
  );

  if (module_exists('redirect')) {
    $form['favicon_delivery_callback']['#options']['DrupalFavicon::deliverFileRedirect'] .= ' ' . t('(using Redirect module)');
  }

  $form['#submit'][] = 'favicon_settings_form_submit';
  return system_settings_form($form);
}

/**
 * Form submit callback for favicon_settings_form.
 */
function favicon_settings_form_submit($form, $form_state) {
  favicon_cache_clear();
}
