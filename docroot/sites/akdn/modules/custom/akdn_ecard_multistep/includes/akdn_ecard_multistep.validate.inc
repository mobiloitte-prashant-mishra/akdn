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
      return akdn_ecard_multistep_step3_validate($form, $form_state);
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
  $no_import_recipients = TRUE;
  if (!empty($form_state['values']['import'])) {
    $err = array();
    $import = explode(',', $form_state['values']['import']);
    foreach ($import as $row) {
      $row = trim($row);
      $parts = explode('<', $row);
      if (count($parts) < 2) {
        $err[] = t('Please correct the syntax for %line. It should be NAME &lt;EMAIL&gt;.', array('%line' => $row));
      }
      else if (count($parts) > 2) {
        $err[] = t('Please seperate recipients with a comma: %line.', array('%line' => $row));
      }
      else {
        if (empty($parts[0])) {
          $err[] = t('Please add a name for this entry: %line.', array('%line' => $row));
        }
        if (empty($parts[1]) || !valid_email_address(trim($parts[1], "<>"))){
          $err[] = t('Please provide a valid email address for this entry: %line.', array('%line' => $row));
        }
      }
    }
    if(!empty($err)){
      form_set_error('import', theme('item_list', array('items' => $err)));
    }
    $no_import_recipients = FALSE;
  }
  else {
    $vals = $form_state['values']['recipients'];
    $no_recipients = TRUE;
    while($recipient = current($vals)) {
      if (empty($recipient['name']) && empty($recipient['email'])) {
        unset($form_state['values']['recipients'][key($vals)]);
        next($vals);
        continue;
      }
      if (empty($recipient['name'])) {
        form_set_error('recipients][' . key($vals) . '][name', 'The name of the recipient cannot be empty.');
      }
      if (empty($recipient['email']) || !valid_email_address($recipient['email'])) {
        form_set_error('recipients][' . key($vals) . '][email', 'Please enter a valid email address');
      }
      $no_recipients = FALSE;
      next($vals);
    }
  }
  if ($no_recipients && $no_import_recipients) {
    if ($form_state['values']['input_type'] == 'import') {
      form_set_error('import', 'You must enter at least one recipient.');
    }
    else {
      form_set_error('recipients', 'You must enter at least one recipient.');
    }
  }
}


/**
 * Validation for step3.
 *
 * @param type $form
 * @param type $form_state
 */
function akdn_ecard_multistep_step3_validate($form, &$form_state) {
}
