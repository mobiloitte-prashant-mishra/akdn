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
    '#value' => t('Next')
  );

  $form['actions']['cancel'] = array(
    '#type'   => 'submit',
    '#value'  => t('Cancel'),
    '#submit' => array('_akdn_ecard_cancel_button'),
    '#limit_validation_errors' => array(),
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
    '#type' => 'textfield',
    '#default_value' => ' ',
  );


  $form['step2']['#attached']['library'][] = array('system', 'ui.button');
  $form['step2']['#attached']['js'] = array(
    'https://api.cloudsponge.com/address_books.js' => array('type' => 'external'),
    'var csPageOptions = { domain_key:"Z542YNNQPKDUZEBRYGZD", textarea_id:"edit-import", beforeLaunch:' . $before_launch_js . ', beforeClosing:' . $before_close_js . ', afterSubmitContacts:' . $after_contact_js . '}' => array('type' => 'inline'),
    '(function ($) { $(document).ready(function(){ $("#ecard-admin-create .form-radios").buttonset(); }); })(jQuery);' => array('type' => 'inline'),
  );


  $form['step2']['input_type'] = array(
    '#type' => 'radios',
    '#options' => array(
      'manual' => t('Enter recipients manually'),
      'import' => t('Import recipients from your address book'),
    ),
    '#default_value' => isset($values['input_type']) ? $values['input_type'] : 'manual',
  );

  $form['step2']['import'] = array(
    '#title' => t('Import'),
    '#type' => 'textarea',
    '#default_value' => isset($values['import']) ? $values['import'] : '',
    '#description' => '<a class="cs_import btn btn-small">Add from Address Book</a> <p>Please use this button to start the import process. After you have imported the contacts from your address book you can add additional contacts in this field. Please separate contacts by using a comma and use the following syntax: John Doe &lt;email@example.com&gt;</p>',
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
    '#value' => t('Add another recipient'),
    '#submit' => array('ecard_admin_add_recipient'),
    '#ajax' => array(
      'callback' => 'ecard_admin_recipient_callback',
      'wrapper' => 'recipient-container',
    ),
    '#prefix' => '<div id="add-recipient-btn">',
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
    '#value' => t('Next')
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
    'ecard-send/preview/' . $form_state['ecard_campaign']->nid . '/' . $form_state['ecard_template']->nid,
    array(
      'attributes' => array(
        'class' => 'colorbox-load btn',
      ),
      'query' => array(
        'width' => '800',
        'height' => '600',
        'iframe' => 'true'
      )
    )
  );
  $form['preview'] = array(
    '#markup' => $link,
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

  $form['actions']['cancel'] = array(
    '#type'   => 'submit',
    '#value'  => t('Cancel'),
    '#submit' => array('callback_for_cancel_button'),
    '#limit_validation_errors' => array(),
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

function ecard_admin_add_recipient($form, &$form_state) {
  if($form_state['rec_count'] < 49) {
    $form_state['rec_count']++;
  }
  $form_state['rebuild'] = TRUE;
}

function ecard_admin_recipient_callback($form, &$form_state) {
  return $form['step2']['recipients'];
}






