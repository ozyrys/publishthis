<?php

/**
 * @file
 * Sets up Security Kit during install.
 */

// Get Security Kit options.
$options = _seckit_get_options();
// Disable autocomplete.
$options['seckit_various']['disable_autocomplete'] = 1;
variable_set('seckit_various', $options['seckit_various']);
