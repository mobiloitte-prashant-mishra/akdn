<?php

/**
 * @file
 * Handles the navigation of the multistep form
 * All hooks are in the .module file.
 */

/**
 * Given the current stage the user is on, calculate what the next step would be
 *
 * @param type $form_state
 * @return string
 */
function akdn_ecard_multistep_move_to_next_stage($form, &$form_state) {

  switch ($form_state['stage']) {
    case 'step1':
      return 'step2';
     break;

    case 'step2':
      return 'step3';
     break;
  }

}


/**
 * Given the current stage the user is on, calculate what the previous step
 * would be
 *
 * @param type $form_state
 * @return string
 */

function akdn_ecard_multistep_move_to_previous_stage($form, &$form_state) {
  switch ($form_state['stage']) {
    case 'step2':
      return 'step1';
     break;

    case 'step3':
      return 'step2';
     break;
  }

}
