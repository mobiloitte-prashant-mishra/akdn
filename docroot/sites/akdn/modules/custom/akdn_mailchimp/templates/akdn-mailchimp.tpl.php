<?php
/**
 * @file
 * This template is been taken from Mailchimp Embedded Form.
 */ ?>
 <!-- Begin signup -->
 <script src="https://code.jquery.com/jquery-1.10.2.js"></script>
 <link href="//cdn-images.mailchimp.com/embedcode/classic-10_7.css" rel="stylesheet" type="text/css">
 <style type="text/css">
 /* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
  We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */

  #mc_embed_signup{
    background:#fff; clear:left; font:14px Helvetica,Arial,sans-serif;
  }

  input{
    outline: 0 !important;
  }

  input.form-submit{
    display: block;
    height: 30px;
    margin: 20px auto;
    padding: 0;
    float: right;
    font-size: 0;
    border-radius: 11px;
    text-transform: uppercase;
    border: 0 none !important;
    width: 180px !important;
    margin-left: 0 !important;
    cursor: pointer;
    color: #333;
    font: bold 12px/1.2 Arial,sans-serif;
    outline: 0;
    overflow: visible;
    box-sizing: border-box;
    vertical-align: middle;
    text-shadow: #fff 0 1px 1px;
    background: url(/sites/akdn/themes/akdn/images/subscribe.png?1458165161) 0 0 no-repeat;
  }

  h1.title{
    display: block;
    width: 100%;
    margin: 38px auto 65px;
    float: left;
    font-size: 24px;
    font-weight: normal;
    line-height: 1;
  }

  label{
    width: 330px !important;
    font-weight: normal;
    display: inline-block;
    float: left;
    margin: 0 auto;
    vertical-align: middle !important;
    line-height: 22px;
    height: 28px !important;
  }

  .elements {
    width: 340px !important;
    display: inline-block;
    float: left !important;
    margin: 0 auto;
    vertical-align: middle !important;
    padding: 2px 5px;
    height: 28px;
    line-height: 28px;
    background-clip: padding-box;
  }

  .asterisk{
    display: inline-block;
    color:red !important;
    box-sizing: border-box;
    font-size: 10px;
    font-weight: bold;
    font-family: "Helvetica Neue",Helvetica,Arial,sans-serif;
  }

  .mce_inline_error
  {
    display: inline-block !important;
    float: left;
    width: auto;
  }

  .response{
    width: 100% !important;
  }

  select{
    padding: 0px !important;
  }

  select:-moz-focusring {
    color: transparent;
    text-shadow: 0 0 0 #000;
  }

  input[type="text"],input[type="email"]{
    height: 28px !important;
    line-height: normal;
    font-size: 13px;
    outline: 0;
    padding: 0px !important;
    font-family: Arial,sans-serif;
  }

  label.checkbox{
    width: 100%;
    vertical-align: sub !important;
    display: inline;
    float: none;
    padding-right: 5px;
  }

  .form-note{
    display: inline-block;
    width: auto;
    clear: both;
    float: left !important;
    margin: 20px !important;
    box-sizing: border-box;
    line-height: 1;
  }

  .subs_btn_wrap{
    display: inline-block;
    margin: 0 0 20px;
    width: auto;
    float: right;
    clear: none !important;
  }

  .subs-left{
    margin-top: 10px !important;
    padding-top: 18px !important;
  }

  .subs-right{
    margin-top: 10px !important;
    padding-top: 15px !important;
  }
</style>

<div id = "mc_embed_signup">
  <form action="//akdn.us13.list-manage.com/subscribe/post?u=521d41d1e11da9ef6c6267182&amp;id=3a2a5c9a5a" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate webform-subscribe" target="_blank" novalidate>
    <div id = "mc_embed_signup_scroll">
      <h1 class = "title" id = "page-title"> Subscribe to our Newsletter</h1>

      <div class = "custom-subscribe subs-contact-info">
        <div class = "subs-left">Contact Information</div>
        <div class = "subs-right">
          <div class = "mc-field-group">
            <label for = "mce-EMAIL">Your Email <span class = "asterisk">*</span>
            </label>
            <input type = "email" value = "" name = "EMAIL" class = "required email elements" id = "mce-EMAIL">
          </div>
          <div class = "mc-field-group">
            <label for = "mce-FNAME">First Name </label>
            <input type = "text" value = "" name = "FNAME" class = "elements" id = "mce-FNAME">
          </div>
          <div class = "mc-field-group">
            <label for = "mce-LNAME">Last Name </label>
            <input type = "text" value = "" name = "LNAME" class = "elements" id = "mce-LNAME">
          </div>
          <div class = "mc-field-group">
            <label for = "mce-GENDER">Gender </label>
            <select name = "GENDER" class = "elements" id = "mce-GENDER">
              <option value = "">- Please Select -</option>
              <option value = "Male">Male</option>
              <option value = "Female">Female</option>
              <option value = "Prefer not to say">Prefer not to say</option>
            </select>
          </div>
          <div class = "mc-field-group">
            <label for = "mce-YOB">Year of Birth </label>
            <select name = "number" name = "YOB" class = "elements" value = "" id = "mce-YOB">
              <option value = "">- Please Select -</option>
              <?php
              $currently_selected = date('Y');
              $earliest_year = 1900;
              $latest_year = date('Y');
              foreach (range($latest_year, $earliest_year) as $i) {
                print '<option value = "' . $i . '"' . ($i === $currently_selected ? ' selected = "selected"' : '') . '>' . $i . '</option>';
              }
              ?>
            </select>
          </div>
          <div class = "mc-field-group">
            <label for = "mce-COUNTRY">Country of residence </label>
            <select name = "COUNTRY" class = "elements" id = "mce-COUNTRY">
                  <option value = "">- Please Select -</option>
                  <option value="Afghanistan">Afghanistan</option>
                  <option value="Albania">Albania</option>
                  <option value="Algeria">Algeria</option>
                  <option value="American Samoa">American Samoa</option>
                  <option value="Andorra">Andorra</option>
                  <option value="Angola">Angola</option>
                  <option value="Anguilla">Anguilla</option>
                  <option value="Antarctica">Antarctica</option>
                  <option value="Antigua And Barbuda">Antigua And Barbuda</option>
                  <option value="Argentina">Argentina</option>
                  <option value="Armenia">Armenia</option>
                  <option value="Aruba">Aruba</option>
                  <option value="Australia">Australia</option>
                  <option value="Austria">Austria</option>
                  <option value="Azerbaijan">Azerbaijan</option>
                  <option value="Bahamas">Bahamas</option>
                  <option value="Bahrain">Bahrain</option>
                  <option value="Bangladesh">Bangladesh</option>
                  <option value="Barbados">Barbados</option>
                  <option value="Belarus">Belarus</option>
                  <option value="Belgium">Belgium</option>
                  <option value="Belize">Belize</option>
                  <option value="Benin">Benin</option>
                  <option value="Bermuda">Bermuda</option>
                  <option value="Bhutan">Bhutan</option>
                  <option value="Bolivia">Bolivia</option>
                  <option value="Bosnia and Herzegovina">Bosnia and Herzegovina</option>
                  <option value="Botswana">Botswana</option>
                  <option value="Bouvet Island">Bouvet Island</option>
                  <option value="Brazil">Brazil</option>
                  <option value="British Antarctic Territory">British Antarctic Territory</option>
                  <option value="British Indian Ocean Territory">British Indian Ocean Territory</option>
                  <option value="British Virgin Islands">British Virgin Islands</option>
                  <option value="Brunei">Brunei</option>
                  <option value="Bulgaria">Bulgaria</option>
                  <option value="Burkina Faso">Burkina Faso</option>
                  <option value="Burundi">Burundi</option>
                  <option value="Cambodia">Cambodia</option>
                  <option value="Cameroon">Cameroon</option>
                  <option value="Canada">Canada</option>
                  <option value="Canton and Enderbury Islands">Canton and Enderbury Islands</option>
                  <option value="Cape Verde">Cape Verde</option>
                  <option value="Cayman Islands">Cayman Islands</option>
                  <option value="Central African Republic">Central African Republic</option>
                  <option value="Chad">Chad</option>
                  <option value="Chile">Chile</option>
                  <option value="China">China</option>
                  <option value="Christmas Island">Christmas Island</option>
                  <option value="Cocos (Keeling) Islands">Cocos (Keeling) Islands</option>
                  <option value="Colombia">Colombia</option>
                  <option value="Comoros">Comoros</option>
                  <option value="Congo - Brazzaville">Congo - Brazzaville</option>
                  <option value="Congo - Kinshasa">Congo - Kinshasa</option>
                  <option value="Cook Islands">Cook Islands</option>
                  <option value="Costa Rica">Costa Rica</option>
                  <option value="Croatia">Croatia</option>
                  <option value="Cuba">Cuba</option>
                  <option value="Curacao">Curacao</option>
                  <option value="Cyprus">Cyprus</option>
                  <option value="Czech Republic">Czech Republic</option>
                  <option value="Côte d’Ivoire">Côte d’Ivoire</option>
                  <option value="Denmark">Denmark</option>
                  <option value="Djibouti">Djibouti</option>
                  <option value="Dominica">Dominica</option>
                  <option value="Dominican Republic">Dominican Republic</option>
                  <option value="Dronning Maud Land">Dronning Maud Land</option>
                  <option value="East Germany">East Germany</option>
                  <option value="Ecuador">Ecuador</option>
                  <option value="Egypt">Egypt</option>
                  <option value="El Salvador">El Salvador</option>
                  <option value="Equatorial Guinea">Equatorial Guinea</option>
                  <option value="Eritrea">Eritrea</option>
                  <option value="Estonia">Estonia</option>
                  <option value="Ethiopia">Ethiopia</option>
                  <option value="Falkland Islands">Falkland Islands</option>
                  <option value="Faroe Islands">Faroe Islands</option>
                  <option value="Fiji">Fiji</option>
                  <option value="Finland">Finland</option>
                  <option value="France">France</option>
                  <option value="French Guiana">French Guiana</option>
                  <option value="French Polynesia">French Polynesia</option>
                  <option value="French Southern Territories">French Southern Territories</option>
                  <option value="French Southern and Antarctic Territories">French Southern and Antarctic Territories</option>
                  <option value="Gabon">Gabon</option>
                  <option value="Gambia">Gambia</option>
                  <option value="Georgia">Georgia</option>
                  <option value="Germany">Germany</option>
                  <option value="Ghana">Ghana</option>
                  <option value="Gibraltar">Gibraltar</option>
                  <option value="Greece">Greece</option>
                  <option value="Greenland">Greenland</option>
                  <option value="Grenada">Grenada</option>
                  <option value="Guadeloupe">Guadeloupe</option>
                  <option value="Guam">Guam</option>
                  <option value="Guatemala">Guatemala</option>
                  <option value="Guernsey">Guernsey</option>
                  <option value="Guinea">Guinea</option>
                  <option value="Guinea-Bissau">Guinea-Bissau</option>
                  <option value="Guyana">Guyana</option>
                  <option value="Haiti">Haiti</option>
                  <option value="Heard Island and McDonald Islands">Heard Island and McDonald Islands</option>
                  <option value="Honduras">Honduras</option>
                  <option value="Hong Kong SAR China">Hong Kong SAR China</option>
                  <option value="Hungary">Hungary</option>
                  <option value="Iceland">Iceland</option>
                  <option value="India">India</option>
                  <option value="Indonesia">Indonesia</option>
                  <option value="Iran">Iran</option>
                  <option value="Iraq">Iraq</option>
                  <option value="Ireland">Ireland</option>
                  <option value="Isle of Man">Isle of Man</option>
                  <option value="Israel">Israel</option>
                  <option value="Italy">Italy</option>
                  <option value="Jamaica">Jamaica</option>
                  <option value="Japan">Japan</option>
                  <option value="Jersey">Jersey</option>
                  <option value="Johnston Island">Johnston Island</option>
                  <option value="Jordan">Jordan</option>
                  <option value="Kazakhstan">Kazakhstan</option>
                  <option value="Kenya">Kenya</option>
                  <option value="Kiribati">Kiribati</option>
                  <option value="Kuwait">Kuwait</option>
                  <option value="Kyrgyzstan">Kyrgyzstan</option>
                  <option value="Laos">Laos</option>
                  <option value="Latvia">Latvia</option>
                  <option value="Lebanon">Lebanon</option>
                  <option value="Lesotho">Lesotho</option>
                  <option value="Liberia">Liberia</option>
                  <option value="Libya">Libya</option>
                  <option value="Liechtenstein">Liechtenstein</option>
                  <option value="Lithuania">Lithuania</option>
                  <option value="Luxembourg">Luxembourg</option>
                  <option value="Macau SAR China">Macau SAR China</option>
                  <option value="Macedonia">Macedonia</option>
                  <option value="Madagascar">Madagascar</option>
                  <option value="Malawi">Malawi</option>
                  <option value="Malaysia">Malaysia</option>
                  <option value="Maldives">Maldives</option>
                  <option value="Mali">Mali</option>
                  <option value="Malta">Malta</option>
                  <option value="Marshall Islands">Marshall Islands</option>
                  <option value="Martinique">Martinique</option>
                  <option value="Mauritania">Mauritania</option>
                  <option value="Mauritius">Mauritius</option>
                  <option value="Mayotte">Mayotte</option>
                  <option value="Micronesia">Micronesia</option>
                  <option value="Midway Islands">Midway Islands</option>
                  <option value="Moldova">Moldova</option>
                  <option value="Monaco">Monaco</option>
                  <option value="Mongolia">Mongolia</option>
                  <option value="Montenegro">Montenegro</option>
                  <option value="Montserrat">Montserrat</option>
                  <option value="Morocco">Morocco</option>
                  <option value="Mozambique">Mozambique</option>
                  <option value="Myanmar [Burma]">Myanmar [Burma]</option>
                  <option value="Namibia">Namibia</option>
                  <option value="Nauru">Nauru</option>
                  <option value="Nepal">Nepal</option>
                  <option value="Netherlands">Netherlands</option>
                  <option value="Netherlands Antilles">Netherlands Antilles</option>
                  <option value="New Caledonia">New Caledonia</option>
                  <option value="New Zealand">New Zealand</option>
                  <option value="Nicaragua">Nicaragua</option>
                  <option value="Niger">Niger</option>
                  <option value="Nigeria">Nigeria</option>
                  <option value="Niue">Niue</option>
                  <option value="Norfolk Island">Norfolk Island</option>
                  <option value="North Korea">North Korea</option>
                  <option value="Northern Mariana Islands">Northern Mariana Islands</option>
                  <option value="Norway">Norway</option>
                  <option value="Oman">Oman</option>
                  <option value="Pacific Islands Trust Territory">Pacific Islands Trust Territory</option>
                  <option value="Pakistan">Pakistan</option>
                  <option value="Palau">Palau</option>
                  <option value="Palestinian Territories">Palestine</option>
                  <option value="Panama">Panama</option>
                  <option value="Panama Canal Zone">Panama Canal Zone</option>
                  <option value="Papua New Guinea">Papua New Guinea</option>
                  <option value="Paraguay">Paraguay</option>
                  <option value="People's Democratic Republic of Yemen">People's Democratic Republic of Yemen</option>
                  <option value="Peru">Peru</option>
                  <option value="Philippines">Philippines</option>
                  <option value="Pitcairn Islands">Pitcairn Islands</option>
                  <option value="Poland">Poland</option>
                  <option value="Portugal">Portugal</option>
                  <option value="Puerto Rico">Puerto Rico</option>
                  <option value="Qatar">Qatar</option>
                  <option value="Romania">Romania</option>
                  <option value="Russia">Russia</option>
                  <option value="Rwanda">Rwanda</option>
                  <option value="Réunion">Réunion</option>
                  <option value="Saint Barthélemy">Saint Barthélemy</option>
                  <option value="Saint Helena">Saint Helena</option>
                  <option value="Saint Kitts and Nevis">Saint Kitts and Nevis</option>
                  <option value="Saint Lucia">Saint Lucia</option>
                  <option value="Saint Martin">Saint Martin</option>
                  <option value="Saint Pierre and Miquelon">Saint Pierre and Miquelon</option>
                  <option value="Saint Vincent and the Grenadines">Saint Vincent and the Grenadines</option>
                  <option value="Samoa">Samoa</option>
                  <option value="San Marino">San Marino</option>
                  <option value="Saudi Arabia">Saudi Arabia</option>
                  <option value="Senegal">Senegal</option>
                  <option value="Serbia">Serbia</option>
                  <option value="Serbia and Montenegro">Serbia and Montenegro</option>
                  <option value="Seychelles">Seychelles</option>
                  <option value="Sierra Leone">Sierra Leone</option>
                  <option value="Singapore">Singapore</option>
                  <option value="Sint Maarten">Sint Maarten</option>
                  <option value="Slovakia">Slovakia</option>
                  <option value="Solomon Islands">Solomon Islands</option>
                  <option value="Somalia">Somalia</option>
                  <option value="South Africa">South Africa</option>
                  <option value="South Georgia and the South Sandwich Islands">South Georgia and the South Sandwich Islands</option>
                  <option value="South Korea">South Korea</option>
                  <option value="South Sudan">South Sudan</option>
                  <option value="Spain">Spain</option>
                  <option value="Sri Lanka">Sri Lanka</option>
                  <option value="Sudan">Sudan</option>
                  <option value="Suriname">Suriname</option>
                  <option value="Svalbard and Jan Mayen">Svalbard and Jan Mayen</option>
                  <option value="Swaziland">Swaziland</option>
                  <option value="Sweden">Sweden</option>
                  <option value="Switzerland">Switzerland</option>
                  <option value="Syria">Syria</option>
                  <option value="Taiwan">Taiwan</option>
                  <option value="Tajikistan">Tajikistan</option>
                  <option value="Tanzania">Tanzania</option>
                  <option value="Thailand">Thailand</option>
                  <option value="Timor-Leste">Timor-Leste</option>
                  <option value="Togo">Togo</option>
                  <option value="Tokelau">Tokelau</option>
                  <option value="Tonga">Tonga</option>
                  <option value="Trinidad and Tobago">Trinidad and Tobago</option>
                  <option value="Tunisia">Tunisia</option>
                  <option value="Turkey">Turkey</option>
                  <option value="Turkmenistan">Turkmenistan</option>
                  <option value="Turks and Caicos Islands">Turks and Caicos Islands</option>
                  <option value="Tuvalu">Tuvalu</option>
                  <option value="U.S. Minor Outlying Islands">U.S. Minor Outlying Islands</option>
                  <option value="U.S. Miscellaneous Pacific Islands">U.S. Miscellaneous Pacific Islands</option>
                  <option value="U.S. Virgin Islands">U.S. Virgin Islands</option>
                  <option value="Uganda">Uganda</option>
                  <option value="Ukraine">Ukraine</option>
                  <option value="Union of Soviet Socialist Republics">Union of Soviet Socialist Republics</option>
                  <option value="United Arab Emirates">United Arab Emirates</option>
                  <option value="United Kingdom">United Kingdom</option>
                  <option value="United States">United States</option>
                  <option value="Uruguay">Uruguay</option>
                  <option value="Uzbekistan">Uzbekistan</option>
                  <option value="Vanuatu">Vanuatu</option>
                  <option value="Vatican City">Vatican City</option>
                  <option value="Venezuela">Venezuela</option>
                  <option value="Vietnam">Vietnam</option>
                  <option value="Wake Island">Wake Island</option>
                  <option value="Wallis and Futuna">Wallis and Futuna</option>
                  <option value="Western Sahara">Western Sahara</option>
                  <option value="Yemen">Yemen</option>
                  <option value="Zambia">Zambia</option>
                  <option value="Zimbabwe">Zimbabwe</option>
                  <option value="Åland Islands">Åland Islands</option>
            </select>
          </div>
          <div class = "mc-field-group">
            <label for = "mce-CAUSE">What caused you to be interested in this website?<span class = "asterisk">*</span>
            </label>
            <select name = "CAUSE" class = "required elements" id = "mce-CAUSE">
              <option value = "">- Please Select -</option>
              <option value = "I work for the AKDN">I work for the AKDN</option>
              <option value = "I work with entities that work with the AKDN">I work with entities that work with the AKDN</option>
              <option value = "I work in Development">I work in Development</option>
              <option value = "I work in Academia">I work in Academia</option>
              <option value = "I work in Government / Diplomatic community">I work in Government / Diplomatic community</option>
              <option value = "I work in the media">I work in the media</option>
              <option value = "I am just generally interested">I am just generally interested</option>
              <option value = "I was recommended by a friend">I was recommended by a friend</option>
              <option value = "I am a member of the Ismaili Community">I am a member of the Ismaili Community</option>
              <option value = "Other">Other</option>
            </select>
          </div>
        </div>
      </div>
      <div class = "custom-subscribe subs-subscriptions">
        <div class = "subs-left">Subscriptions<span class = "asterisk">*</span></div>
        <div class = "subs-right">
          <div class = "mc-field-group input-group">
            <ul><li><input type = "checkbox" value = "1" name = "group[5853][1]" id = "mce-group[5853]-5853-0" class = "form-checkbox" ><label for = "mce-group[5853]-5853-0" class = "checkbox">&nbsp;AKDN Newsletter</label></li>
              <li><input type = "checkbox" value = "2" name = "group[5853][2]" id = "mce-group[5853]-5853-1" class = "form-checkbox"><label for = "mce-group[5853]-5853-1" class = "checkbox">&nbsp;AKDN Monthly Digest</label></li>
            </ul>
          </div>
        </div>
      </div>

      <div class = "custom-subscribe subs-acceptance">
        <div class = "subs-left">Acceptance<span class = "asterisk">*</span></div>
        <div class = "subs-right">
          <div class = "mc-field-group input-group">
            <ul><li><input type = "checkbox" value = "1" name = "testacceptancec" id = "acceptance" required = "required" class = "form-checkbox"><label for = "testacceptancec" class = "checkbox">&nbsp;I have read and accepted the <a href = "/terms-conditions" target = "_blank">terms and conditions</a> and the <a href = "/privacy-policy" target = "_blank">privacy policy</a> of this website. </label>
            </li>
          </ul>
        </div>
      </div>
    </div>


    <div id = "mce-responses" class = "clear">
      <div class = "response" id = "mce-error-response" style = "display:none"></div>
      <div class = "response" id = "mce-success-response" style = "display:none"></div>
    </div>    <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
    <div style = "position: absolute; left: -5000px;" aria-hidden = "true"><input type = "text" name = "b_521d41d1e11da9ef6c6267182_3a2a5c9a5a" tabindex = "-1" value = ""></div>
    <div class = "form-note" id = "">
      <p><i>Items marked with an asterisk (<span class = "form-required">*</span>) are required in order to complete your subscription.</i></p>
    </div>
    <div class = "subs_btn_wrap"><input type = "submit" value = "" name = "subscribe" id = "mc-embedded-subscribe" class = "form-submit" ></div>
  </div>
</form>
</div>

<script type="text/javascript">
  $(document).ready(function(){
    $('#mc-embedded-subscribe').on('click',function(e){
     var atLeastOneIsChecked=$(".subs-subscriptions input[type='checkbox']:checked").length > 0;

     if (atLeastOneIsChecked === false){
        e.preventDefault();
        alert("Please Subscribe to One of the Newsletters");
        return;
      }
    });
  });
</script>

<script type='text/javascript' src='//s3.amazonaws.com/downloads.mailchimp.com/js/mc-validate.js'></script><script type='text/javascript'>(function($) {window.fnames=new Array(); window.ftypes=new Array();fnames[0]='EMAIL';ftypes[0]='email';fnames[1]='FNAME';ftypes[1]='text';fnames[2]='LNAME';ftypes[2]='text';fnames[3]='GENDER';ftypes[3]='dropdown';fnames[7]='YOB';ftypes[7]='number';fnames[6]='COUNTRY';ftypes[6]='dropdown';fnames[4]='CAUSE';ftypes[4]='dropdown';}(jQuery));var $mcj=jQuery.noConflict(true);</script>
<!--End mc_embed_signup-->
