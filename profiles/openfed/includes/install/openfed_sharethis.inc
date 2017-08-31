<?php

/**
 * @file
 * Sets up Share This during install.
 */

variable_set('sharethis_button_option', 'stbc_hcount');
variable_set('sharethis_comments', 'b:0');
variable_set('sharethis_late_load', FALSE);
variable_set('sharethis_location', 'block');
variable_set('sharethis_node_option', 'ofed_download,ofed_page');
variable_set('sharethis_option_extras', array(
  'Google Plus One:plusone' => 'Google Plus One:plusone',
  'Facebook Like:fblike' => 'Facebook Like:fblike',
));
variable_set('sharethis_service_option', '"Tweet:twitter","LinkedIn:linkedin","Facebook:facebook"');
variable_set('sharethis_teaser_option', FALSE);
variable_set('sharethis_twitter_handle', '');
variable_set('sharethis_twitter_suffix', '');
variable_set('sharethis_weight', '10');
variable_set('sharethis_widget_option', 'st_direct');
