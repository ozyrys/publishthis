<?php

/**
 * @file
 * Sets up user settings during install.
 */

// Allow visitor account creation, but with administrative approval.
variable_set('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL);
