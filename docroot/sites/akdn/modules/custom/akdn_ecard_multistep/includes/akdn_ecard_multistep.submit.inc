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

  if (isset($form_state['complete'])) drupal_goto('ecards');

  if ($form_state['triggering_element']['#value'] == 'Back') {
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
  $step_details = $form_state['multistep_values'];

  $template_data = _get_template_details(arg(1));
  
  if ($step_details['step1']['greetings'] === 'custom') {
    $greetings = $step_details['step1']['custom_gretting_message'];
  }
  else {
    $greetings = $step_details['step1']['greetings'];
  }

  $html = theme('ecard_template', array('main_image' => $template_data['main_image'], 'proj_info' => $template_data['proj_info'], 'fact_image' => $template_data['fact_image'], 'fact_desc' => $template_data['fact_desc'], 'link_title' => $template_data['link_title'], 'link_url' => $template_data['link_url'], 'greetings' => $greetings, 'sender_name' => $step_details['step1']['sender_name'], 'message' => $step_details['step1']['default_message']));

  $to_reci = array();
  $rec_details = array();
  if ($step_details['step2']['input_type'] === 'import') {
    $rec_list = array();
    $rec = array();
    $recipients = '';
    $rec_list = explode(',', $step_details['step2']['import']);
    $count = 0;
    foreach ($rec_list as $r) {
      if ($r != ''){
         $recipients = trim($r);
        $split = explode('<', $recipients);
        $name = $split[0];
        $email = rtrim($split[1], '>');
        $rec_details['name'] = $name;
        $rec_details['email'] = $email;
        $to_reci[] = $rec_details;
      }
    }
  }
  else {
    foreach($step_details['step2']['recipients'] as $values) {
      $rec_details['name'] = $values['name'];
      $rec_details['email'] = $values['email'];
      $to_reci[] = $rec_details;
    }
  }

  send_ecard_emails_mandrill($html, $step_details['step1']['sender_email'], $step_details['step1']['sender_name'],$to_reci);

  drupal_goto('ecard/thank-you');

}

/**
 * Returns what to show on the completion page.
 *
 * @return type
 */
function akdn_ecard_complete_page() {
  return 'Your eCard has been Queued successfully.';
}

/**
 *  Queued email addresses in mandrill for sending
 */
function send_ecard_emails_mandrill($html, $from_email, $from_name,$to, $subject) {
  try{
    $message = array(
      'html' => $html,
      'subject' => 'AKDN Ecards',
      'from_email' => 'noreply@akdn.org',
      'from_name' => $from_name,
      'to'=> $to,
      'headers' => array('Reply-To' => $from_email),
      'track_opens' => true,
      'track_clicks' => true,
      'inline_css' => true,
      'preserve_recipients' => true,
    );
    $args=array('async' => true,'ip_pool' => 'Main Pool');
    $result = mandrill_mailsend($message,'mandrill_sender_plain',$args);
  }
  catch(Mandrill_Error $e) {
    echo 'A mandrill error occurred: ' . get_class($e) . ' - ' .$e->getMessage();
    throw $e;
  }
}




