<?php /**
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

    input.form-submit {
        height: 30px;
        padding: 0 25px 0 0;
        float: right;
        text-transform: uppercase;
        border: 0 none !important;
        margin-left: 0 !important;
        cursor: pointer;
        color: #b5995a;
        font-size: 25px;
        overflow: visible;
        box-sizing: border-box;
        vertical-align: middle;
        background: url(/sites/akdn/themes/akdn/images/subscribe_arrow.png) 0 0 no-repeat;
        background-position: right center;
        box-shadow: none;
        font-weight: 500;
        margin-top:15px !important;
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
            <h1 class = "title" id = "page-title"> <?php echo t("Subscribe to our Newsletter"); ?> </h1>

            <div class = "custom-subscribe subs-contact-info">
                <div class = "subs-left"><?php echo t("Contact Information"); ?></div>
                <div class = "subs-right">
                    <div class = "mc-field-group">
                        <label for = "mce-EMAIL"><?php echo t("Your Email"); ?> <span class = "asterisk">*</span>
                        </label>
                        <input type = "email" value = "" name = "EMAIL" class = "required email elements" id = "mce-EMAIL">
                    </div>
                    <div class = "mc-field-group">
                        <label for = "mce-FNAME"><?php echo t("First Name"); ?> </label>
                        <input type = "text" value = "" name = "FNAME" class = "elements" id = "mce-FNAME">
                    </div>
                    <div class = "mc-field-group">
                        <label for = "mce-LNAME"><?php echo t("Last Name"); ?> </label>
                        <input type = "text" value = "" name = "LNAME" class = "elements" id = "mce-LNAME">
                    </div>
                    <div class = "mc-field-group">
                        <label for = "mce-GENDER"><?php echo t("Gender"); ?> </label>
                        <select name = "GENDER" class = "elements" id = "mce-GENDER">
                            <option value = ""><?php echo t("- Please Select -"); ?></option>
                            <option value = "Male"><?php echo t("Male"); ?></option>
                            <option value = "Female"><?php echo t("Female"); ?></option>
                            <option value = "Prefer not to say"><?php echo t("Prefer not to say"); ?></option>
                        </select>
                    </div>
                    <div class = "mc-field-group">
                        <label for = "mce-YOB"><?php echo t("Year of Birth "); ?></label>
                        <select name = "number" name = "YOB" class = "elements" value = "" id = "mce-YOB">
                            <option value = ""><?php echo t("- Please Select -"); ?></option>
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
                        <label for = "mce-COUNTRY"><?php echo t("Country of residence"); ?> </label>
                        <select name = "COUNTRY" class = "elements" id = "mce-COUNTRY">
                            <option value = ""><?php echo t("- Please Select -"); ?></option>
                            <option value="Afghanistan"><?php echo t("Afghanistan"); ?></option>
                            <option value="Albania"><?php echo t("Albania"); ?></option>
                            <option value="Algeria"><?php echo t("Algeria"); ?></option>
                            <option value="American Samoa"><?php echo t("American Samoa"); ?></option>
                            <option value="Andorra"><?php echo t("Andorra"); ?></option>
                            <option value="Angola"><?php echo t("Angola"); ?></option>
                            <option value="Anguilla"><?php echo t("Anguilla"); ?></option>
                            <option value="Antarctica"><?php echo t("Antarctica"); ?></option>
                            <option value="Antigua And Barbuda"><?php echo t("Antigua And Barbuda"); ?></option>
                            <option value="Argentina"><?php echo t("Argentina"); ?></option>
                            <option value="Armenia"><?php echo t("Armenia"); ?></option>
                            <option value="Aruba"><?php echo t("Aruba"); ?></option>
                            <option value="Australia"><?php echo t("Australia"); ?></option>
                            <option value="Austria"><?php echo t("Austria"); ?></option>
                            <option value="Azerbaijan"><?php echo t("Azerbaijan"); ?></option>
                            <option value="Bahamas"><?php echo t("Bahamas"); ?></option>
                            <option value="Bahrain"><?php echo t("Bahrain"); ?></option>
                            <option value="Bangladesh"><?php echo t("Bangladesh"); ?></option>
                            <option value="Barbados"><?php echo t("Barbados"); ?></option>
                            <option value="Belarus"><?php echo t("Belarus"); ?></option>
                            <option value="Belgium"><?php echo t("Belgium"); ?></option>
                            <option value="Belize"><?php echo t("Belize"); ?></option>
                            <option value="Benin"><?php echo t("Benin"); ?></option>
                            <option value="Bermuda"><?php echo t("Bermuda"); ?></option>
                            <option value="Bhutan"><?php echo t("Bhutan"); ?></option>
                            <option value="Bolivia"><?php echo t("Bolivia"); ?></option>
                            <option value="Bosnia and Herzegovina"><?php echo t("Bosnia and Herzegovina"); ?></option>
                            <option value="Botswana"><?php echo t("Botswana"); ?></option>
                            <option value="Bouvet Island"><?php echo t("Bouvet Island"); ?></option>
                            <option value="Brazil"><?php echo t("Brazil"); ?></option>
                            <option value="British Antarctic Territory"><?php echo t("British Antarctic Territory"); ?></option>
                            <option value="British Indian Ocean Territory"><?php echo t("British Indian Ocean Territory"); ?></option>
                            <option value="British Virgin Islands"><?php echo t("British Virgin Islands"); ?></option>
                            <option value="Brunei"><?php echo t("Brunei"); ?></option>
                            <option value="Bulgaria"><?php echo t("Bulgaria"); ?></option>
                            <option value="Burkina Faso"><?php echo t("Burkina Faso"); ?></option>
                            <option value="Burundi"><?php echo t("Burundi"); ?></option>
                            <option value="Cambodia"><?php echo t("Cambodia"); ?></option>
                            <option value="Cameroon"><?php echo t("Cameroon"); ?></option>
                            <option value="Canada"><?php echo t("Canada"); ?></option>
                            <option value="Canton and Enderbury Islands"><?php echo t("Canton and Enderbury Islands"); ?></option>
                            <option value="Cape Verde"><?php echo t("Cape Verde"); ?></option>
                            <option value="Cayman Islands"><?php echo t("Cayman Islands"); ?></option>
                            <option value="Central African Republic"><?php echo t("Central African Republic"); ?></option>
                            <option value="Chad"><?php echo t("Chad"); ?></option>
                            <option value="Chile"><?php echo t("Chile"); ?></option>
                            <option value="China"><?php echo t("China"); ?></option>
                            <option value="Christmas Island"><?php echo t("Christmas Island"); ?></option>
                            <option value="Cocos (Keeling) Islands"><?php echo t("Cocos (Keeling) Islands"); ?></option>
                            <option value="Colombia"><?php echo t("Colombia"); ?></option>
                            <option value="Comoros"><?php echo t("Comoros"); ?></option>
                            <option value="Congo - Brazzaville"><?php echo t("Congo - Brazzaville"); ?></option>
                            <option value="Congo - Kinshasa"><?php echo t("Congo - Kinshasa"); ?></option>
                            <option value="Cook Islands"><?php echo t("Cook Islands"); ?></option>
                            <option value="Costa Rica"><?php echo t("Costa Rica"); ?></option>
                            <option value="Croatia"><?php echo t("Croatia"); ?></option>
                            <option value="Cuba"><?php echo t("Cuba"); ?></option>
                            <option value="Curacao"><?php echo t("Curacao"); ?></option>
                            <option value="Cyprus"><?php echo t("Cyprus"); ?></option>
                            <option value="Czech Republic"><?php echo t("Czech Republic"); ?></option>
                            <option value="Côte d’Ivoire"><?php echo t("Côte d’Ivoire"); ?></option>
                            <option value="Denmark"><?php echo t("Denmark"); ?></option>
                            <option value="Djibouti"><?php echo t("Djibouti"); ?></option>
                            <option value="Dominica"><?php echo t("Dominica"); ?></option>
                            <option value="Dominican Republic"><?php echo t("Dominican Republic"); ?></option>
                            <option value="Dronning Maud Land"><?php echo t("Dronning Maud Land"); ?></option>
                            <option value="East Germany"><?php echo t("East Germany"); ?></option>
                            <option value="Ecuador"><?php echo t("Ecuador"); ?></option>
                            <option value="Egypt"><?php echo t("Egypt"); ?></option>
                            <option value="El Salvador"><?php echo t("El Salvador"); ?></option>
                            <option value="Equatorial Guinea"><?php echo t("Equatorial Guinea"); ?></option>
                            <option value="Eritrea"><?php echo t("Eritrea"); ?></option>
                            <option value="Estonia"><?php echo t("Estonia"); ?></option>
                            <option value="Ethiopia"><?php echo t("Ethiopia"); ?></option>
                            <option value="Falkland Islands"><?php echo t("Falkland Islands"); ?></option>
                            <option value="Faroe Islands"><?php echo t("Faroe Islands"); ?></option>
                            <option value="Fiji"><?php echo t("Fiji"); ?></option>
                            <option value="Finland"><?php echo t("Finland"); ?></option>
                            <option value="France"><?php echo t("France"); ?></option>
                            <option value="French Guiana"><?php echo t("French Guiana"); ?></option>
                            <option value="French Polynesia"><?php echo t("French Polynesia"); ?></option>
                            <option value="French Southern Territories"><?php echo t("French Southern Territories"); ?></option>
                            <option value="French Southern and Antarctic Territories"><?php echo t("French Southern and Antarctic Territories"); ?></option>
                            <option value="Gabon"><?php echo t("Gabon"); ?></option>
                            <option value="Gambia"><?php echo t("Gambia"); ?></option>
                            <option value="Georgia"><?php echo t("Georgia"); ?></option>
                            <option value="Germany"><?php echo t("Germany"); ?></option>
                            <option value="Ghana"><?php echo t("Ghana"); ?></option>
                            <option value="Gibraltar"><?php echo t("Gibraltar"); ?></option>
                            <option value="Greece"><?php echo t("Greece"); ?></option>
                            <option value="Greenland"><?php echo t("Greenland"); ?></option>
                            <option value="Grenada"><?php echo t("Grenada"); ?></option>
                            <option value="Guadeloupe"><?php echo t("Guadeloupe"); ?></option>
                            <option value="Guam"><?php echo t("Guam"); ?></option>
                            <option value="Guatemala"><?php echo t("Guatemala"); ?></option>
                            <option value="Guernsey"><?php echo t("Guernsey"); ?></option>
                            <option value="Guinea"><?php echo t("Guinea"); ?></option>
                            <option value="Guinea-Bissau"><?php echo t("Guinea-Bissau"); ?></option>
                            <option value="Guyana"><?php echo t("Guyana"); ?></option>
                            <option value="Haiti"><?php echo t("Haiti"); ?></option>
                            <option value="Heard Island and McDonald Islands"><?php echo t("Heard Island and McDonald Islands"); ?></option>
                            <option value="Honduras"><?php echo t("Honduras"); ?></option>
                            <option value="Hong Kong SAR China"><?php echo t("Hong Kong SAR China"); ?></option>
                            <option value="Hungary"><?php echo t("Hungary"); ?></option>
                            <option value="Iceland"><?php echo t("Iceland"); ?></option>
                            <option value="India"><?php echo t("India"); ?></option>
                            <option value="Indonesia"><?php echo t("Indonesia"); ?></option>
                            <option value="Iran"><?php echo t("Iran"); ?></option>
                            <option value="Iraq"><?php echo t("Iraq"); ?></option>
                            <option value="Ireland"><?php echo t("Ireland"); ?></option>
                            <option value="Isle of Man"><?php echo t("Isle of Man"); ?></option>
                            <option value="Israel"><?php echo t("Israel"); ?></option>
                            <option value="Italy"><?php echo t("Italy"); ?></option>
                            <option value="Jamaica"><?php echo t("Jamaica"); ?></option>
                            <option value="Japan"><?php echo t("Japan"); ?></option>
                            <option value="Jersey"><?php echo t("Jersey"); ?></option>
                            <option value="Johnston Island"><?php echo t("Johnston Island"); ?></option>
                            <option value="Jordan"><?php echo t("Jordan"); ?></option>
                            <option value="Kazakhstan"><?php echo t("Kazakhstan"); ?></option>
                            <option value="Kenya"><?php echo t("Kenya"); ?></option>
                            <option value="Kiribati"><?php echo t("Kiribati"); ?></option>
                            <option value="Kuwait"><?php echo t("Kuwait"); ?></option>
                            <option value="Kyrgyzstan"><?php echo t("Kyrgyzstan"); ?></option>
                            <option value="Laos"><?php echo t("Laos"); ?></option>
                            <option value="Latvia"><?php echo t("Latvia"); ?></option>
                            <option value="Lebanon"><?php echo t("Lebanon"); ?></option>
                            <option value="Lesotho"><?php echo t("Lesotho"); ?></option>
                            <option value="Liberia"><?php echo t("Liberia"); ?></option>
                            <option value="Libya"><?php echo t("Libya"); ?></option>
                            <option value="Liechtenstein"><?php echo t("Liechtenstein"); ?></option>
                            <option value="Lithuania"><?php echo t("Lithuania"); ?></option>
                            <option value="Luxembourg"><?php echo t("Luxembourg"); ?></option>
                            <option value="Macau SAR China"><?php echo t("Macau SAR China"); ?></option>
                            <option value="Macedonia"><?php echo t("Macedonia"); ?></option>
                            <option value="Madagascar"><?php echo t("Madagascar"); ?></option>
                            <option value="Malawi"><?php echo t("Malawi"); ?></option>
                            <option value="Malaysia"><?php echo t("Malaysia"); ?></option>
                            <option value="Maldives"><?php echo t("Maldives"); ?></option>
                            <option value="Mali"><?php echo t("Mali"); ?></option>
                            <option value="Malta"><?php echo t("Malta"); ?></option>
                            <option value="Marshall Islands"><?php echo t("Marshall Islands"); ?></option>
                            <option value="Martinique"><?php echo t("Martinique"); ?></option>
                            <option value="Mauritania"><?php echo t("Mauritania"); ?></option>
                            <option value="Mauritius"><?php echo t("Mauritius"); ?></option>
                            <option value="Mayotte"><?php echo t("Mayotte"); ?></option>
                            <option value="Micronesia"><?php echo t("Micronesia"); ?></option>
                            <option value="Midway Islands"><?php echo t("Midway Islands"); ?></option>
                            <option value="Moldova"><?php echo t("Moldova"); ?></option>
                            <option value="Monaco"><?php echo t("Monaco"); ?></option>
                            <option value="Mongolia"><?php echo t("Mongolia"); ?></option>
                            <option value="Montenegro"><?php echo t("Montenegro"); ?></option>
                            <option value="Montserrat"><?php echo t("Montserrat"); ?></option>
                            <option value="Morocco"><?php echo t("Morocco"); ?></option>
                            <option value="Mozambique"><?php echo t("Mozambique"); ?></option>
                            <option value="Myanmar [Burma]"><?php echo t("Myanmar [Burma]"); ?></option>
                            <option value="Namibia"><?php echo t("Namibia"); ?></option>
                            <option value="Nauru"><?php echo t("Nauru"); ?></option>
                            <option value="Nepal"><?php echo t("Nepal"); ?></option>
                            <option value="Netherlands"><?php echo t("Netherlands"); ?></option>
                            <option value="Netherlands Antilles"><?php echo t("Netherlands Antilles"); ?></option>
                            <option value="New Caledonia"><?php echo t("New Caledonia"); ?></option>
                            <option value="New Zealand"><?php echo t("New Zealand"); ?></option>
                            <option value="Nicaragua"><?php echo t("Nicaragua"); ?></option>
                            <option value="Niger"><?php echo t("Niger"); ?></option>
                            <option value="Nigeria"><?php echo t("Nigeria"); ?></option>
                            <option value="Niue"><?php echo t("Niue"); ?></option>
                            <option value="Norfolk Island"><?php echo t("Norfolk Island"); ?></option>
                            <option value="North Korea"><?php echo t("North Korea"); ?></option>
                            <option value="Northern Mariana Islands"><?php echo t("Northern Mariana Islands"); ?></option>
                            <option value="Norway"><?php echo t("Norway"); ?></option>
                            <option value="Oman"><?php echo t("Oman"); ?></option>
                            <option value="Pacific Islands Trust Territory"><?php echo t("Pacific Islands Trust Territory"); ?></option>
                            <option value="Pakistan"><?php echo t("Pakistan"); ?></option>
                            <option value="Palau"><?php echo t("Palau"); ?></option>
                            <option value="Palestinian Territories"><?php echo t("Palestine"); ?></option>
                            <option value="Panama"><?php echo t("Panama"); ?></option>
                            <option value="Panama Canal Zone"><?php echo t("Panama Canal Zone"); ?></option>
                            <option value="Papua New Guinea"><?php echo t("Papua New Guinea"); ?></option>
                            <option value="Paraguay"><?php echo t("Paraguay"); ?></option>
                            <option value="People's Democratic Republic of Yemen"><?php echo t("People's Democratic Republic of Yemen"); ?></option>
                            <option value="Peru"><?php echo t("Peru"); ?></option>
                            <option value="Philippines"><?php echo t("Philippines"); ?></option>
                            <option value="Pitcairn Islands"><?php echo t("Pitcairn Islands"); ?></option>
                            <option value="Poland"><?php echo t("Poland"); ?></option>
                            <option value="Portugal"><?php echo t("Portugal"); ?></option>
                            <option value="Puerto Rico"><?php echo t("Puerto Rico"); ?></option>
                            <option value="Qatar"><?php echo t("Qatar"); ?></option>
                            <option value="Romania"><?php echo t("Romania"); ?></option>
                            <option value="Russia"><?php echo t("Russia"); ?></option>
                            <option value="Rwanda"><?php echo t("Rwanda"); ?></option>
                            <option value="Réunion"><?php echo t("Réunion"); ?></option>
                            <option value="Saint Barthélemy"><?php echo t("Saint Barthélemy"); ?></option>
                            <option value="Saint Helena"><?php echo t("Saint Helena"); ?></option>
                            <option value="Saint Kitts and Nevis"><?php echo t("Saint Kitts and Nevis"); ?></option>
                            <option value="Saint Lucia"><?php echo t("Saint Lucia"); ?></option>
                            <option value="Saint Martin"><?php echo t("Saint Martin"); ?></option>
                            <option value="Saint Pierre and Miquelon"><?php echo t("Saint Pierre and Miquelon"); ?></option>
                            <option value="Saint Vincent and the Grenadines"><?php echo t("Saint Vincent and the Grenadines"); ?></option>
                            <option value="Samoa"><?php echo t("Samoa"); ?></option>
                            <option value="San Marino"><?php echo t("San Marino"); ?></option>
                            <option value="Saudi Arabia"><?php echo t("Saudi Arabia"); ?></option>
                            <option value="Senegal"><?php echo t("Senegal"); ?></option>
                            <option value="Serbia"><?php echo t("Serbia"); ?></option>
                            <option value="Serbia and Montenegro"><?php echo t("Serbia and Montenegro"); ?></option>
                            <option value="Seychelles"><?php echo t("Seychelles"); ?></option>
                            <option value="Sierra Leone"><?php echo t("Sierra Leone"); ?></option>
                            <option value="Singapore"><?php echo t("Singapore"); ?></option>
                            <option value="Sint Maarten"><?php echo t("Sint Maarten"); ?></option>
                            <option value="Slovakia"><?php echo t("Slovakia"); ?></option>
                            <option value="Solomon Islands"><?php echo t("Solomon Islands"); ?></option>
                            <option value="Somalia"><?php echo t("Somalia"); ?></option>
                            <option value="South Africa"><?php echo t("South Africa"); ?></option>
                            <option value="South Georgia and the South Sandwich Islands"><?php echo t("South Georgia and the South Sandwich Islands"); ?></option>
                            <option value="South Korea"><?php echo t("South Korea"); ?></option>
                            <option value="South Sudan"><?php echo t("South Sudan"); ?></option>
                            <option value="Spain"><?php echo t("Spain"); ?></option>
                            <option value="Sri Lanka"><?php echo t("Sri Lanka"); ?></option>
                            <option value="Sudan"><?php echo t("Sudan"); ?></option>
                            <option value="Suriname"><?php echo t("Suriname"); ?></option>
                            <option value="Svalbard and Jan Mayen"><?php echo t("Svalbard and Jan Mayen"); ?></option>
                            <option value="Swaziland"><?php echo t("Swaziland"); ?></option>
                            <option value="Sweden"><?php echo t("Sweden"); ?></option>
                            <option value="Switzerland"><?php echo t("Switzerland"); ?></option>
                            <option value="Syria"><?php echo t("Syria"); ?></option>
                            <option value="Taiwan"><?php echo t("Taiwan"); ?></option>
                            <option value="Tajikistan"><?php echo t("Tajikistan"); ?></option>
                            <option value="Tanzania"><?php echo t("Tanzania"); ?></option>
                            <option value="Thailand"><?php echo t("Thailand"); ?></option>
                            <option value="Timor-Leste"><?php echo t("Timor-Leste"); ?></option>
                            <option value="Togo"><?php echo t("Togo"); ?></option>
                            <option value="Tokelau"><?php echo t("Tokelau"); ?></option>
                            <option value="Tonga"><?php echo t("Tonga"); ?></option>
                            <option value="Trinidad and Tobago"><?php echo t("Trinidad and Tobago"); ?></option>
                            <option value="Tunisia"><?php echo t("Tunisia"); ?></option>
                            <option value="Turkey"><?php echo t("Turkey"); ?></option>
                            <option value="Turkmenistan"><?php echo t("Turkmenistan"); ?></option>
                            <option value="Turks and Caicos Islands"><?php echo t("Turks and Caicos Islands"); ?></option>
                            <option value="Tuvalu"><?php echo t("Tuvalu"); ?></option>
                            <option value="U.S. Minor Outlying Islands"><?php echo t("U.S. Minor Outlying Islands"); ?></option>
                            <option value="U.S. Miscellaneous Pacific Islands"><?php echo t("U.S. Miscellaneous Pacific Islands"); ?></option>
                            <option value="U.S. Virgin Islands"><?php echo t("U.S. Virgin Islands"); ?></option>
                            <option value="Uganda"><?php echo t("Uganda"); ?></option>
                            <option value="Ukraine"><?php echo t("Ukraine"); ?></option>
                            <option value="Union of Soviet Socialist Republics"><?php echo t("Union of Soviet Socialist Republics"); ?></option>
                            <option value="United Arab Emirates"><?php echo t("United Arab Emirates"); ?></option>
                            <option value="United Kingdom"><?php echo t("United Kingdom"); ?></option>
                            <option value="United States"><?php echo t("United States"); ?></option>
                            <option value="Uruguay"><?php echo t("Uruguay"); ?></option>
                            <option value="Uzbekistan"><?php echo t("Uzbekistan"); ?></option>
                            <option value="Vanuatu"><?php echo t("Vanuatu"); ?></option>
                            <option value="Vatican City"><?php echo t("Vatican City"); ?></option>
                            <option value="Venezuela"><?php echo t("Venezuela"); ?></option>
                            <option value="Vietnam"><?php echo t("Vietnam"); ?></option>
                            <option value="Wake Island"><?php echo t("Wake Island"); ?></option>
                            <option value="Wallis and Futuna"><?php echo t("Wallis and Futuna"); ?></option>
                            <option value="Western Sahara"><?php echo t("Western Sahara"); ?></option>
                            <option value="Yemen"><?php echo t("Yemen"); ?></option>
                            <option value="Zambia"><?php echo t("Zambia"); ?></option>
                            <option value="Zimbabwe"><?php echo t("Zimbabwe"); ?></option>
                            <option value="Åland Islands"><?php echo t("Åland Islands"); ?></option>
                        </select>
                    </div>
                    <div class = "mc-field-group">
                        <label for = "mce-CAUSE"><?php echo t("What caused you to be interested in this website?"); ?><span class = "asterisk">*</span>
                        </label>
                        <select name = "CAUSE" class = "required elements" id = "mce-CAUSE">
                            <option value = ""><?php echo t("- Please Select -"); ?></option>
                            <option value = "I work for the AKDN"><?php echo t("I work for the AKDN"); ?></option>
                            <option value = "I work with entities that work with the AKDN"><?php echo t("I work with entities that work with the AKDN"); ?></option>
                            <option value = "I work in Development"><?php echo t("I work in Development"); ?></option>
                            <option value = "I work in Academia"><?php echo t("I work in Academia"); ?></option>
                            <option value = "I work in Government / Diplomatic community"><?php echo t("I work in Government / Diplomatic community"); ?></option>
                            <option value = "I work in the media"><?php echo t("I work in the media"); ?></option>
                            <option value = "I am just generally interested"><?php echo t("I am just generally interested"); ?></option>
                            <option value = "I was recommended by a friend"><?php echo t("I was recommended by a friend"); ?></option>
                            <option value = "I am a member of the Ismaili Community"><?php echo t("I am a member of the Ismaili Community"); ?></option>
                            <option value = "Other"><?php echo t("Other"); ?></option>
                        </select>
                    </div>
                </div>
            </div>
            <div class = "custom-subscribe subs-subscriptions">
                <div class = "subs-left"><?php echo t("Subscriptions"); ?><span class = "asterisk">*</span></div>
                <div class = "subs-right">
                    <div class = "mc-field-group input-group">
                        <ul><li><input type = "checkbox" value = "1" name = "group[5853][1]" id = "mce-group[5853]-5853-0" class = "form-checkbox" ><label for = "mce-group[5853]-5853-0" class = "checkbox">&nbsp;<?php echo t("AKDN Newsletter"); ?></label></li>
                            <li><input type = "checkbox" value = "2" name = "group[5853][2]" id = "mce-group[5853]-5853-1" class = "form-checkbox"><label for = "mce-group[5853]-5853-1" class = "checkbox">&nbsp;<?php echo t("AKDN Monthly Digest"); ?></label></li>
                        </ul>
                    </div>
                </div>
            </div>

            <div class = "custom-subscribe subs-acceptance">
                <div class = "subs-left"><?php echo t("Acceptance"); ?><span class = "asterisk">*</span></div>
                <div class = "subs-right">
                    <div class = "mc-field-group input-group">
                        <ul><li><input type = "checkbox" value = "1" name = "testacceptancec" id = "acceptance" required = "required" class = "form-checkbox"><label for = "testacceptancec" class = "checkbox">&nbsp;<?php echo t("I have read and accepted the"); ?> <a href = "/terms-conditions" target = "_blank"><?php echo t("terms and conditions"); ?></a> <?php echo t("and the"); ?> <a href = "/privacy-policy" target = "_blank"><?php echo t("privacy policy"); ?></a> <?php echo t("of this website"); ?>. </label>
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
                <p><i><?php echo t("Items marked with an asterisk"); ?> (<span class = "form-required">*</span>) <?php echo t("are required in order to complete your subscription."); ?></i></p>
            </div>
            <div class = "subs_btn_wrap"><input type = "submit" value = "<?php echo t('Subscribe') ?>" name = "subscribe" id = "mc-embedded-subscribe" class = "form-submit" ></div>
        </div>
    </form>
</div>

<script type="text/javascript">
  $(document).ready(function () {
      $('#mc-embedded-subscribe').on('click', function (e) {
          var atLeastOneIsChecked = $(".subs-subscriptions input[type='checkbox']:checked").length > 0;

          if (atLeastOneIsChecked === false) {
              e.preventDefault();
              alert(Drupal.t("Please Subscribe to One of the Newsletters"));
              return;
          }
      });
  });
</script>

<script type='text/javascript' src='//s3.amazonaws.com/downloads.mailchimp.com/js/mc-validate.js'></script><script type='text/javascript'>(function ($) {
    window.fnames = new Array(); window.ftypes = new Array();
    fnames[0] = 'EMAIL';
    ftypes[0] = 'email';
    fnames[1] = 'FNAME';
    ftypes[1] = 'text';
    fnames[2] = 'LNAME';
    ftypes[2] = 'text';
    fnames[3] = 'GENDER';
    ftypes[3] = 'dropdown';
    fnames[7] = 'YOB';
    ftypes[7] = 'number';
    fnames[6] = 'COUNTRY';
    ftypes[6] = 'dropdown';
    fnames[4] = 'CAUSE';
    ftypes[4] = 'dropdown';
  }(jQuery));
  var $mcj = jQuery.noConflict(true);</script>
<!--End mc_embed_signup-->
