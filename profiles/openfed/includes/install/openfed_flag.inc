<?php

/**
 * @file
 * Sets up Flag during install.
 */

/**
 * Disable default bookmark flag views.
 */
$status = variable_get('views_defaults', array());
$status['flag_bookmarks'] = TRUE;
$status['flag_bookmarks_tab'] = TRUE;
variable_set('views_defaults', $status);
