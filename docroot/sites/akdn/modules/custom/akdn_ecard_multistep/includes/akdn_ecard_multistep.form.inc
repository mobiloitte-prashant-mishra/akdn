<?php

/**
 * @file
 * Handles the form elements of the multistep form
 * All hooks are in the .module file.
 */

/**
 * Master form which calls an individual form for each step.
 *
 * @param type $form
 * @param string $form_state
 * @return type
 */
function akdn_ecard_multistep_form($form, &$form_state) {
  if (!isset($form_state['stage'])) $form_state['stage'] = 'step1';

  $form = array();

  switch ($form_state['stage']) {

    case 'step1':
      return akdn_ecard_multistep_form_step1($form, $form_state);
     break;

    case 'step2':
      return akdn_ecard_multistep_form_step2($form, $form_state);
     break;

    case 'step3':
      return akdn_ecard_multistep_form_step3($form, $form_state);
     break;

    default:
      return akdn_ecard_multistep_form_step1($form, $form_state);
     break;
  }

  return $form;

}


/**
 * Form for the rate_the_room step.
 *
 * @see akdn_ecard_multistep_form().
 *
 * @param type $form
 * @param type $form_state
 * @return type
 */
function akdn_ecard_multistep_form_step1($form, &$form_state) {

  $values = isset($form_state['multistep_values']['step1']) ? $form_state['multistep_values']['step1'] : array();

  $form['step1']['step1_label'] = array(
    '#markup' => t('Add Your Message')
    );

  $form['step1']['sender_name'] = array(
    '#type' => 'textfield',
    '#title' => 'Sender Name',
    '#default_value' => isset($values['sender_name']) ? $values['sender_name'] : NULL,
    '#required' => TRUE,
  );

  $form['step1']['sender_email'] = array(
    '#type' => 'textfield',
    '#title' => 'Sender Email',
    '#default_value' => isset($values['sender_email']) ? $values['sender_email'] : NULL,
    '#required' => TRUE,
  );

  $options = array(
    'season_greetings' => t('Season’s Greeting'),
    'happy_new_year' => t('Happy New Year'),
    'eid_mubarak' => t('Eid Mubarak'),
    'navroz_mubarak' => t('Navroz Mubarak'),
    'thank_you' => t('Thank you'),
    'custom' => t('Custom'),
    );

  $form['step1']['greetings'] = array(
    '#type' => 'select',
    '#title' => 'Greetings',
    '#options' => $options,
    '#default_value' => isset($values['greetings']) ? $values['greetings'] : NULL,
  );

  $form['step1']['custom_gretting_message'] = array(
    '#type' => 'textarea',
    '#title' => 'Custom Greeting Message',
    '#default_value' => isset($values['custom_gretting_message']) ? $values['custom_gretting_message'] : NULL,
    '#states' =>array(
      'visible' => array(
        ':input[name=greetings]' => array('value' => 'custom'),
        )
      )
  );

  $form['step1']['default_message'] = array(
    '#type' => 'textarea',
    '#title' => 'Default Message',
    '#default_value' => isset($values['default_message']) ? $values['default_message'] : NULL,
  );

  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Next')
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel')
  );

  return $form;
}


/**
 * Form for the rate_the_service step.
 *
 * @see akdn_ecard_multistep_form().
 *
 * @param type $form
 * @param type $form_state
 * @return type
 */
function akdn_ecard_multistep_form_step2($form, &$form_state) {

  $values = isset($form_state['multistep_values']['step2']) ? $form_state['multistep_values']['step2'] : array();

  $form['step2']['field2'] = array(
    '#type' => 'textfield',
    '#title' => 'Step2 field',
    '#default_value' => isset($values['field2']) ? $values['field2'] : NULL,
  );

  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('Back')
  );

  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Next')
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel')
  );

  return $form;
}


/**
 * Form for the personal_details step.
 *
 * @see akdn_ecard_multistep_form().
 *
 * @param type $form
 * @param type $form_state
 * @return type
 */
function akdn_ecard_multistep_form_step3($form, &$form_state) {

  $values = isset($form_state['multistep_values']['step3']) ? $form_state['multistep_values']['step3'] : array();

  $form['step3']['field3'] = array(
    '#type' => 'textfield',
    '#title' => 'Step3 field',
    '#default_value' => isset($values['field3']) ? $values['field3'] : NULL,
  );

  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('Back')
  );

  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Submit')
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel')
  );

  return $form;
}
