<?php

/**
 * @file
 * Administration page callbacks for Ismaili Traffic Lights.
 */

/**
 * Form builder. Configure annotations.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function ismaili_traffic_lights_settings() {

  $form['ismaili_high'] = array(
    '#type' => 'textfield',
    '#title' => t('High'),
    '#description' => t('Enter the color code for high'),
    '#default_value' => variable_get('ismaili_high', '#FF0000'),
  );
  $form['ismaili_medium'] = array(
    '#type' => 'textfield',
    '#title' => t('Medium'),
    '#description' => t('Enter the color code for high'),
    '#default_value' => variable_get('ismaili_medium', '#FFBF00'),
  );
  $form['ismaili_low'] = array(
    '#type' => 'textfield',
    '#title' => t('Low'),
    '#description' => t('Enter the color code for high'),
    '#default_value' => variable_get('ismaili_low', '#00FF00'),
  );
  return system_settings_form($form);
}
