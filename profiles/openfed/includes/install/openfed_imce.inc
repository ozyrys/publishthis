<?php

/**
 * @file
 * Sets up IMCE during installer.
 */

variable_set('imce_roles_profiles', array(
  '3' => array(
    'weight' => 0,
    'module_pid' => 1,
    'public_pid' => 1,
  ),
  '4' => array(
    'weight' => 1,
    'module_pid' => 1,
    'public_pid' => 1,
  ),
  '5' => array(
    'weight' => 2,
    'module_pid' => 1,
    'public_pid' => 1,
   ),
  '6' => array(
    'weight' => 3,
    'module_pid' => 1,
    'public_pid' => 1,
  ),
  '7' => array(
    'weight' => 4,
    'module_pid' => 0,
    'public_pid' => 0,
  ),
  '2' => array(
    'weight' => 11,
    'module_pid' => 0,
    'public_pid' => 0,
  ),
  '1' => array(
    'weight' => 12,
    'module_pid' => 0,
    'public_pid' => 0,
  ),
));

variable_set('imce_profiles', array(
  '1' => array(
    'name' => 'Generic',
    'usertab' => 1,
    'filesize' => 0,
    'quota' => 0,
    'tuquota' => 0,
    'extensions' => 'txt doc docx xls xlsx pdf odt ppt pptx ods odp pps ppsx zip rar jpg jpeg png gif',
    'dimensions' => '500x500',
    'filenum' => 10,
    'directories' => array(
      '0' => array(
        'name' => 'content',
        'subnav' => 1,
        'browse' => 1,
        'upload' => 1,
        'thumb' => 1,
        'delete' => 1,
        'resize' => 1,
        'mkdir' => 1,
        'rmdir' => 1,
      ),
    ),
    'thumbnails' => array(
      '0' => array(
        'name' => 'Thumb(60x60)',
        'dimensions' => '60x60',
        'prefix' => 'thumb_',
        'suffix' => '',
      ),
      '1' => array(
        'name' => 'Small(100x100)',
        'dimensions' => '100x100',
        'prefix' => 'small_',
        'suffix' => '',
      ),
      '2' => array(
        'name' => 'Medium(150x150)',
        'dimensions' => '150x150',
        'prefix' => 'medium_',
        'suffix' => '',
      ),
      '3' => array(
        'name' => 'Large(200x200)',
        'dimensions' => '200x200',
        'prefix' => 'large_',
        'suffix' => '',
      ),
      '4' => array(
        'name' => 'Extra(300x300)',
        'dimensions' => '300x300',
        'prefix' => 'extra_',
        'suffix' => '',
      ),
      '5' => array(
        'name' => 'Full(400x400)',
        'dimensions' => '400x400',
        'prefix' => 'full_',
        'suffix' => '',
      ),
    ),
    'mkdirnum' => 0
  ),
));
