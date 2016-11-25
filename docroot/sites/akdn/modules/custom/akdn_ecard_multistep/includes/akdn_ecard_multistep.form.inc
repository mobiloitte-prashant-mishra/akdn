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

  $form['step1']['label'] = array(
    '#markup' => '<h2>' . t('Step 1: Add Your Message') . '</h2>',
  );

  $form['step1']['sender_name'] = array(
    '#type' => 'textfield',
    '#title' => 'Your Name',
    '#default_value' => isset($values['sender_name']) ? $values['sender_name'] : NULL,
    '#required' => TRUE,
    '#attributes' => array(
      'title' => t("Please enter your name."),
    )
  );

  $form['step1']['sender_email'] = array(
    '#type' => 'textfield',
    '#title' => 'Your Email',
    '#default_value' => isset($values['sender_email']) ? $values['sender_email'] : NULL,
    '#required' => TRUE,
    '#attributes' => array(
      'title' => t("Please enter your email address."),
    )
  );

  $form['step1']['greetings'] = array(
    '#type' => 'select',
    '#title' => 'Greetings',
    '#options' => _get_ecard_grettings_list(),
    '#default_value' => isset($values['greetings']) ? $values['greetings'] : NULL,
    '#attributes' => array(
      'title' => t("Please select one greetings."),
    )
  );

  $form['step1']['custom_gretting_message'] = array(
    '#type' => 'textfield',
    '#title' => 'Your own Greeting Message',
    '#default_value' => isset($values['custom_gretting_message']) ? $values['custom_gretting_message'] : NULL,
    '#size' => 60,
    '#maxlength' => 128,
    '#states' =>array(
      'visible' => array(
        ':input[name=greetings]' => array('value' => 'custom'),
      )
    ),
    '#attributes' => array(
      'title' => t("Please enter your own greeting message."),
    )
  );

  $form['step1']['default_message'] = array(
    '#type' => 'textarea',
    '#title' => 'Your Message',
    '#default_value' => isset($values['default_message']) ? $values['default_message'] : 'This is the Default Message',
    '#attributes' => array(
      'title' => t("Please enter your personal message."),
    )
  );

  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Next'),
    '#prefix' => '<div class="ecard-submit-wrapper">',
  );

  $form['actions']['cancel'] = array(
    '#type'   => 'submit',
    '#value'  => t('Cancel'),
    '#submit' => array('_akdn_ecard_cancel_button'),
    '#limit_validation_errors' => array(),
    '#suffix' => '</div>',
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
  $form['step2']['header'] = array(
    '#markup' => '<h2>' . t('Step 2: Add Recipients') . '</h2>',
  );

  if (empty($form_state['rec_count'])) {
    $form_state['rec_count'] = 0;
  }

  $after_contact_js = '
    function(array_of_contacts) {
      var contact_display_string = [],
          textarea = null,
          contact = null,
          returnMe = null,
          email = null,
          strpos = null,
          fname = null,
          lname = null,
          currentValue = null;

      textarea = window.document.getElementById("edit-import");

      if (textarea) {

        for (var i = 0; i < array_of_contacts.length; i++) {
          contact = array_of_contacts[i];
          returnMe = contact.fullName()+" ";

          //  Three cases:
          //  1. No name. get the front of the email address and set as name.
          //  2. First and last names reversed ("comma case"). swap, remove comma.
          //  3. Normal. Do nothing.
          if (!contact.first_name && !contact.last_name) {
            email = contact.selectedEmail();
            fname = email.split("@");
            returnMe = fname[0]+" ";
          } else if ((strpos = returnMe.indexOf(",")) >= 0) {
            lname = returnMe.split(",");
            returnMe = "";
            for (var x = 1; x < lname.length; x++) {
              returnMe += lname[x];
            }
            returnMe += lname[0]+" ";
          }
          var mail_string = "<" + contact.selectedEmail() + ">";
          returnMe += mail_string;
          contact_display_string.push(returnMe);
        }
        textarea.value = contact_display_string.join(", ");
      }
    }
  ';
  $before_launch_js = '
    function() {
      var textarea = window.document.getElementById("edit-import");
      var hidden = window.document.getElementsByName("contacts_hidden");
      if (hidden[0]) {
        hidden[0].value = textarea.value;
      }
    }
  ';

  $before_close_js = '
    function() {
      var tt = window.document.getElementById("edit-import");
      var hidden = window.document.getElementsByName("contacts_hidden");
      if (hidden[0].value.match(/\S/)) {
        tt.value += ", ";
        tt.value += hidden[0].value;
      }
    }
  ';

  $form['step2']['contacts_hidden'] = array(
    '#type' => 'hidden',
    '#default_value' => ' ',
  );


  $form['step2']['#attached']['library'][] = array('system', 'ui.button');
  $form['step2']['#attached']['js'] = array(
    'https://api.cloudsponge.com/address_books.js' => array('type' => 'external'),
    'var csPageOptions = { domain_key:"'.variable_get("cloud_sponge_key").'", textarea_id:"edit-import", beforeLaunch:' . $before_launch_js . ', beforeClosing:' . $before_close_js . ', afterSubmitContacts:' . $after_contact_js . '}' => array('type' => 'inline'),
    '(function ($) { $(document).ready(function(){ $("#ecard-admin-create .form-radios").buttonset(); }); })(jQuery);' => array('type' => 'inline'),
  );


  $form['step2']['input_type'] = array(
    '#type' => 'radios',
    '#options' => array(
      'manual' => t('Enter recipients manually'),
      'import' => t('Import recipients from your address book'),
    ),
    '#default_value' => isset($values['input_type']) ? $values['input_type'] : 'manual',
    '#prefix' => '<div class="ecard-radio-btn">',
    '#suffix' => '</div>',
  );

  $form['step2']['import'] = array(
    '#title' => t('Import'),
    '#type' => 'textarea',
    '#default_value' => isset($values['import']) ? $values['import'] : '',
    '#description' => '<a class="cs_import btn btn-small ecard-import-wrapper">Add from Address Book</a> <p>Please use this button to start the import process. After you have imported the contacts from your address book you can add additional contacts in this field. Please separate contacts by using a comma and use the following syntax: John Doe &lt;email@example.com&gt;</p>',
    '#states' => array(
      'visible' => array(
        ':input[name="input_type"]' => array('value' => 'import'),
      ),
    ),
  );

  $form['step2']['recipients'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="recipient-container">',
    '#suffix' => '</div>',
    '#collapsible' => FALSE,
    '#tree' => TRUE,
    '#states' => array(
      'visible' => array(
        ':input[name="input_type"]' => array('value' => 'manual'),
      ),
    ),
  );

  for ($i = 0; $i <= $form_state['rec_count']; $i++) {
    $form['step2']['recipients']['recipient_' . $i] = array(
      '#type' => 'fieldset',
      '#collapsible' => FALSE,
      '#attributes' => array(
        'class' => array(
          'recipient-row',
          'rounded-box',
        ),
        'id' => array(
          'recipient-id-' . $i,
        ),
      ),
    );

    $form['step2']['recipients']['recipient_' . $i]['name'] = array(
      '#type' => 'textfield',
      '#title' => t('Name'),
      '#default_value' => isset($values['recipients']['recipient_' . $i]['name']) ? $values['recipients']['recipient_' . $i]['name'] : '',
    );
    $form['step2']['recipients']['recipient_' . $i]['email'] = array(
      '#type' => 'textfield',
      '#title' => t('Email'),
      '#default_value' => isset($values['recipients']['recipient_' . $i]['name']) ? $values['recipients']['recipient_' . $i]['email'] : '',
    );
  }


  $form['step2']['add_rec'] = array(
    '#type' => 'submit',
    '#value' => t('+ Add'),
    '#submit' => array('ecard_admin_add_recipient'),
    '#ajax' => array(
      'callback' => 'ecard_admin_recipient_callback',
      'wrapper' => 'recipient-container',
    ),
    '#prefix' => '<div id="add-recipient-btn " class="recipient-btn-submit-wrapper">',
    '#suffix' => '</div>',
    '#attributes' => array('class' => array('btn', 'btn-small')),
    '#states' => array(
      'visible' => array(
        ':input[name="input_type"]' => array('value' => 'manual'),
      ),
    ),
  );

  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Next'),
        '#prefix' => '<div class="ecard-submit-wrapper">',

  );
  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('Back')
  );
  $form['actions']['cancel'] = array(
    '#type'   => 'submit',
    '#value'  => t('Cancel'),
    '#submit' => array('_akdn_ecard_cancel_button'),
    '#limit_validation_errors' => array(),

  );

  $link = l(
    t('Preview'),
    '',
    array(
      'attributes' => array(
        'class' => 'colorbox-inline btn ecard-submit-preview-wrapper',
      ),
      'query' => array(
        'inline' => 'true#ecard_template',
      )
    )
  );
  
  $form['preview'] = array(
    '#markup' => urldecode($link),
    '#suffix' => '</div>',
  );

  $template_data = _get_template_details(arg(1));

  $step1_details = $form_state['multistep_values']['step1'];
  
  if ($step1_details['greetings'] === 'custom') {
    $greetings = $step1_details['custom_gretting_message'];
  }
  else{
    $greetings = $step1_details['greetings'];
  }

  $html = theme('ecard_template', array('main_image' => $template_data['main_image'], 'proj_info' => $template_data['proj_info'], 'fact_image' => $template_data['fact_image'], 'fact_desc' => $template_data['fact_desc'], 'link_title' => $template_data['link_title'], 'link_url' => $template_data['link_url'], 'greetings' => $greetings, 'sender_name' => $step1_details['sender_name'], 'message' => $step1_details['default_message']));
 
  $form['ecard_template'] = array(
    '#markup' => '<div class = "element-hidden"><div id="ecard_template">' . $html . '</div></div>',
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

  $form['step3']['header'] = array(
    '#markup' => '<h2>' . t('Step 3: Confirm eCard') . '</h2>',
  );

  $rec_list = array();
  $rec = array();
  $recipients = '';
  $rec_list = explode(',', $form_state['multistep_values']['step2']['import']);
  $count = 0;
  if ($form_state['multistep_values']['step2']['input_type'] === 'import') {
    foreach ($rec_list as $r) {
      if ($r != ''){
        $recipients .= htmlentities(trim($r)) . '<br/>';
      }
    }
  }
  else {
    $rec_list = $form_state['multistep_values']['step2']['recipients'];
    foreach($rec_list as $r) {
      $rec[] = $r['name'] . " &lt;" . $r['email'] . "&gt;";
    }
  }
  $recipients .= implode("<br/>", $rec);

  ecard_admin_recipient_remove_duplicates($recipients, "\r\n", "<");

  $form['step3']['to'] = array(
    '#markup' => '<div id="ecard-preview-to"><span class="label-head">To:</span><br/>' . $recipients . '</div>',
  );
  $form['step3']['from'] = array(
    '#markup' => '<div id="ecard-preview-from"><span class="label-head">From:</span><br/>' . $$form_state['multistep_values']['step1']['sender_name'] . " &lt;" . $form_state['multistep_values']['step1']['sender_email'] . "&gt;</div>",
  );

   $form['step3']['from_summary'] = array(
    '#markup' => '<div id="ecard-preview-text"><span class="label-head">Message:</span><br/>' . filter_xss(nl2br($form_state['multistep_values']['step1']['default_message']), array('br')) . '</div>',
  );

  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('Back'),
    '#prefix' => '<div class="ecard-submit-wrapper">',

  );

  $form['next'] = array(
    '#type' => 'submit',
    '#value' => t('Send Ecard')
  );

  $form['actions']['cancel'] = array(
    '#type'   => 'submit',
    '#value'  => t('Cancel'),
    '#submit' => array('_akdn_ecard_cancel_button'),
    '#limit_validation_errors' => array(),
  );
  $link = l(
    t('Preview'),
    '',
    array(
      'attributes' => array(
        'class' => 'colorbox-inline btn ecard-submit-preview-wrapper',
      ),
      'query' => array(
        'inline' => 'true#ecard_template_step3',
      )
    )
  );

  $form['preview'] = array(
    '#markup' => urldecode($link),
    '#suffix' => '</div>',
  );

  $template_data = _get_template_details(arg(1));

  $step1_details = $form_state['multistep_values']['step1'];
  
  if ($step1_details['greetings'] === 'custom') {
    $greetings = $step1_details['custom_gretting_message'];
  }
  else{
    $greetings = $step1_details['greetings'];
  }

  $html = theme('ecard_template', array('main_image' => $template_data['main_image'], 'proj_info' => $template_data['proj_info'], 'fact_image' => $template_data['fact_image'], 'fact_desc' => $template_data['fact_desc'], 'link_title' => $template_data['link_title'], 'link_url' => $template_data['link_url'], 'greetings' => $greetings, 'sender_name' => $step1_details['sender_name'], 'message' => $step1_details['default_message']));
 
  $form['ecard_template_step3'] = array(
    '#markup' => '<div class = "element-hidden"><div id="ecard_template_step3">' . $html . '</div></div>',
  );

  return $form;
}

/**
 *  @Returns List of Ecards greetings
 */

function _get_ecard_grettings_list() {
  $vocabulary = taxonomy_vocabulary_machine_name_load('ecard_greetings');
  $tree = taxonomy_get_tree($vocabulary->vid);
  if (!empty($vocabulary->vid)) {
    $options = array();
    foreach($tree as $value) {
      $string  = clean_string($value->name);
      $options[strtolower($string)] = $value->name;
    }
  }
  return $options;
}

/**
 *  @returns Clean strings - replace space and special characters
 */

function clean_string($string) {
  $string = str_replace(' ', '-', $string); // Replaces all spaces with hyphens.
  return preg_replace('/[^A-Za-z0-9\-]/', '', $string); // Removes special chars.
}

/**
 *  @Callback redirect to Ecards Listing page
 */

function _akdn_ecard_cancel_button() {
  drupal_goto('ecards/template');
}

/**
 *  @Add recipients 
 */
function ecard_admin_add_recipient($form, &$form_state) {
  if($form_state['rec_count'] < 49) {
    $form_state['rec_count']++;
  }
  $form_state['rebuild'] = TRUE;
}

/**
 *  @return Recipients
 */

function ecard_admin_recipient_callback($form, &$form_state) {
  return $form['step2']['recipients'];
}

/*
 * @callback for removing duplicate recipients
 */

function ecard_admin_recipient_remove_duplicates(&$recipients, $explode_string, $explode2) {
  $import = explode($explode_string, $recipients);

  $rec_array = array();
  foreach ($import as $row) {
    if (!empty($row)) {
      $rec_array[] = explode($explode2, $row);
    }
  }

  $length = count($rec_array);
  while($rec = current($rec_array)) {
    if ($length > 1) {
      for($i = key($rec_array)+1; $i < $length; $i++) {
        if (isset($rec_array[$i][1])) {
          if (strcasecmp($rec[1], $rec_array[$i][1])===0) {
            unset($rec_array[$i]);
          }
        }
      }
    }
    $rec_array[key($rec_array)] = implode($explode2, $rec);
    next($rec_array);
  }
  $recipients = implode($explode_string, $rec_array);
  return $recipients;
}

/**
 * return Tempate Details
 */

function _get_template_details($nid) {
  $data = array();
  if (!empty($nid)) {
    $node = node_load($nid);
    $node_wrapper = entity_metadata_wrapper('node', $node);
    $data['image_uri'] = file_create_url($node_wrapper->field_image_upload->value()['uri']);
    $data['proj_info'] = $node_wrapper->field_project_country_descript->value()['value'];
    $data['fact_desc'] = $node_wrapper->field_fact_description->value()['value'];
    $data['fact_uri'] = file_create_url($node_wrapper->field_fact_image->value()['uri']);
    $data['link_title'] = $node_wrapper->field_more_information_link->value()['title'];
    $data['link_url'] = $node_wrapper->field_more_information_link->value()['url'];
  }
  return $data;
}






