<?php

/**
 * @file
 * Handles the form submission of the ecard multistep form
 */


/**
 * Handles what to do with the submitted form depending on what stage has been
 * completed.
 *
 * @see akdn_ecard_multistep_form()
 * @see akdn_ecard_multistep_form_validate()
 *
 * @param type $form
 * @param type $form_state
 */
function akdn_ecard_multistep_form_submit($form, &$form_state) {

  switch ($form_state['stage']) {

    case 'step3':
      $form_state['multistep_values'][$form_state['stage']] = $form_state['values'];
      if ($form_state['triggering_element']['#value'] != 'Back') {
        akdn_ecard_multistep_step3_submit($form, $form_state);
        $form_state['complete'] = TRUE;
      }
     break;

    default:
      $form_state['multistep_values'][$form_state['stage']] = $form_state['values'];
      $form_state['new_stage'] = akdn_ecard_multistep_move_to_next_stage($form, $form_state);
     break;

  }

  if (isset($form_state['complete'])) drupal_goto('complete-page');

  if ($form_state['triggering_element']['#value'] == 'Back') {
    //    print '<pre>';print_r($form_state);die();

    $form_state['new_stage'] = akdn_ecard_multistep_move_to_previous_stage($form, $form_state);
  }

  if (isset($form_state['multistep_values']['form_build_id'])) {
    $form_state['values']['form_build_id'] = $form_state['multistep_values']['form_build_id'];
  }
  $form_state['multistep_values']['form_build_id'] = $form_state['values']['form_build_id'];
  $form_state['stage'] = $form_state['new_stage'];
  $form_state['rebuild'] = TRUE;
}

 /**
  * Handles the submission of the final stage
  *
  * Sends an email to the user confirming their entry
  *
  * @param type $form
  * @param type $form_state
  */
function akdn_ecard_multistep_step3_submit($form, &$form_state) {
  $multstep_values = $form_state['multistep_values'];

}

/**
 * Returns what to show on the completion page.
 *
 * @return type
 */
function akdn_ecard_complete_page() {
  return 'Your eCard has been created successfully.';
}
