<?php

/**
 * @file
 * Sets up Logintoboggan during install.
 */

variable_set('logintoboggan_confirm_email_at_registration', 0);
variable_set('logintoboggan_immediate_login_on_register', FALSE);
variable_set('logintoboggan_login_successful_message', 1);
variable_set('logintoboggan_login_with_email', 1);
variable_set('logintoboggan_minimum_password_length', 8);
variable_set('logintoboggan_override_destination_parameter', TRUE);
variable_set('logintoboggan_pre_auth_role', 2);
variable_set('logintoboggan_purge_unvalidated_user_interval', 0);
variable_set('logintoboggan_redirect_on_confirm', '<front>');
variable_set('logintoboggan_redirect_on_register', '<front>');
variable_set('logintoboggan_unified_login', TRUE);
variable_set('logintoboggan_site_403', TRUE);
