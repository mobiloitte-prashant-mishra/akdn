<?php

/**
 *  @implements hook_form()
 */

function scs_mailchimp_creation_form($form, &$form_state) {
  
  $form['template_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Template ID'),
    '#default_value' => variable_get('template_id'),
    '#size' => 100,
    '#maxlength' => 100,
    '#description' => t("The template ID"),
    '#required' => TRUE,
  );
  $form['mailchimp_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Name'),
    '#default_value' => variable_get('mailchimp_name'),
    '#size' => 100,
    '#maxlength' => 100,
    '#description' => t("The Name of the Mailchimp Account"),
    '#required' => TRUE,
  );
  $form['mailchimp_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Email'),
    '#default_value' => variable_get('mailchimp_email'),
    '#size' => 100,
    '#maxlength' => 100,
    '#description' => t("The Email of the Mailchimp Account"),
    '#required' => TRUE,
  );
  $form['list_id'] = array(
    '#type' => 'textfield',
    '#title' => t('List ID of the template'),
    '#default_value' => variable_get('list_id'),
    '#size' => 100,
    '#maxlength' => 100,
    '#description' => t("The List ID of the Mailchimp Account"),
    '#required' => TRUE,
  );
 return system_settings_form($form);
}