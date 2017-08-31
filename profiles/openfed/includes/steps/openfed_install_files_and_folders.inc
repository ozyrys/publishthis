<?php

/**
 * @file
 * Needs to be documented.
 */

/**
 * Set the files directories.
 */
function openfed_install_files_and_folders(){
  // Define paths.
  $path_files = conf_path(FALSE) . '/files';
  $path_public = $path_files . '/public';
  $path_private = $path_files . '/private';
  $path_temporary = '/tmp';

  // Set the variables.
  variable_set('file_public_path', $path_public);
  variable_set('file_private_path', $path_private);
  variable_set('file_temporary_path', $path_temporary);

  // Create the folders.
  // Create files folder.
  if(!is_dir($path_files)) {
    mkdir($path_files);
  }

  // Create public folder.
  if(!is_dir($path_public)) {
    mkdir($path_public);
  }

  // Create private folder.
  if(!is_dir($path_private)) {
    mkdir($path_private);
  }

  // Create temporary folder.
  if(!is_dir($path_temporary)) {
    mkdir($path_temporary);
  }

  // Set the file mode used.
  variable_set('file_default_scheme', 'public');

  // Set as done.
  variable_set('openfed_install_files_and_folders_done', TRUE);
}
