<?php

/**
 * @file
 * Handles the form validation of the customer survey form
 * All hooks are in the .module file.
 */


/**
 * Master validation function for the customer survey form - uses per-stage
 * validation and calls functions for each one.
 *
 * @param type $form
 * @param type $form_state
 * @return type
 */
function akdn_ecard_multistep_form_validate($form, &$form_state) {

  if ($form_state['triggering_element']['#value'] == 'Back') {
    return;
  }

  switch ($form_state['stage']) {

    case 'step1':
      return akdn_ecard_multistep_step1_validate($form, $form_state);
     break;

    case 'step2':
      return akdn_ecard_multistep_step2_validate($form, $form_state);
     break;

    case 'step3':
      return akdn_ecard_multistep_step2_validate($form, $form_state);
     break;

  }
}


/**
 * Validation for step1.
 *
 * @param type $form
 * @param type $form_state
 */
function akdn_ecard_multistep_step1_validate($form, &$form_state) {
  if (filter_var($form_state['values']['sender_email'], FILTER_VALIDATE_EMAIL) === false) {
    form_set_error('sender_email', 'You must enter a valid email address.');
  }
}


/**
 * Validation for step2.
 *
 * @param type $form
 * @param type $form_state
 */
function akdn_ecard_multistep_step2_validate($form, &$form_state) {
}


/**
 * Validation for step3.
 *
 * @param type $form
 * @param type $form_state
 */
function akdn_ecard_multistep_step3_validate($form, &$form_state) {
}
