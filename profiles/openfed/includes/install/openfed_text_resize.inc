<?php

/**
 * @file
 * Sets up Text Resize during install.
 */

variable_set('text_resize_line_height_allow', TRUE);
variable_set('text_resize_line_height_max', '36');
variable_set('text_resize_line_height_min', '16');
variable_set('text_resize_maximum', '25');
variable_set('text_resize_minimum', '12');
variable_set('text_resize_reset_button', TRUE);
variable_set('text_resize_scope', 'content-to-resize');
