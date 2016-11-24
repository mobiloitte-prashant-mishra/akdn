<?php
/**
 * @callback for ecards settings form
 */

function akdn_ecard_settings_form($form, &$form_state) {
  $form['cloud_sponge_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Cloud Sponge Domain Key'),
    '#default_value' => variable_get('cloud_sponge_key'),
    '#size' => 100,
    '#maxlength' => 100,
    '#description' => t("Cloud Sponge Domain Key"),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}




