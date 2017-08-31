<?php

/**
 * @file
 * Sets up Secure Login during install.
 */

variable_set('securelogin_secure_forms', FALSE);
variable_set('securelogin_all_forms', TRUE);
variable_set('securelogin_form_user_login', TRUE);
variable_set('securelogin_form_user_login_block', TRUE);
variable_set('securelogin_form_user_pass_reset', TRUE);
variable_set('securelogin_form_user_profile_form', TRUE);
variable_set('securelogin_form_user_register_form', TRUE);
variable_set('securelogin_form_user_pass', TRUE);
variable_set('securelogin_form_webform_client_form', TRUE);
variable_set('securelogin_form_node_form', TRUE);
variable_set('securelogin_other_forms', '');
