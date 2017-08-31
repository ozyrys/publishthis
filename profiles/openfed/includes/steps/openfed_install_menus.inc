<?php

/**
 * @file
 * "Menus" step in installer.
 */

/**
 * Form for menu set-up.
 */
function openfed_install_menu_form() {
  // Set title.
  drupal_set_title(st('Set up menus'));

  // Set form.
  $form = array();

  $form['menu_list'] = array(
    '#type' => 'checkboxes',
    '#title' => st('Menus'),
    '#options' => _openfed_get_menus_list(),
    '#description' => st('By checking these options, the menus will automatically be created in the menus list of the website and shown in the corresponding region (either the tools or the footer region).<br><br>
      If no menus are checked, they can still be created after the installation, but they will need to be created and added to the correct region manually.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );

  // Return form.
  return $form;
}

/**
 * Form submission handler for openfed_install_menus_form().
 */
function openfed_install_menus_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  $blocks = array();
  if (!empty($values['menu_list'])) {
    $ck_link = variable_get('ckeditor_link_autocomplete_menus');
    foreach ($values['menu_list'] as $menu_key => $menu_identity) {
      if ($menu_key === $menu_identity) {
        foreach (language_list() as $lang) {
          $menu_name = substr($menu_identity, 0, strlen($menu_identity) - 4);
          $menu_name .= $lang->name;
          $menu_title = str_replace('-', ' ', $menu_name);
          $menu_name .= '-menu';
          $menu_name = strtolower($menu_name);

          // Create the tools menu.
          _openfed_create_custom_menu($menu_name, ucwords($menu_title), '', '2', $lang->language);

          // Set block in region.
          switch ($menu_identity) {
            case 'menu-tools-menu':
            case 'menu-tools-' . $lang->name . '-menu':
              _openfed_set_block_into_region('menu', $menu_name, 'tools');
              break;
            case 'menu-footer-menu':
            case 'menu-footer-' . $lang->name . '-menu':
              _openfed_set_block_into_region('menu', $menu_name, 'footer');
              break;
          }

          // Show block for language only.
          _openfed_show_block_for_language('menu', $menu_name, $lang->language);

          // Add custom menu into ckeditor link for autocomplete menu.
          $ck_link[$menu_name] = $menu_name;
        }
      }
    }

    // Set variable.
    variable_set('ckeditor_link_autocomplete_menus', $ck_link);

    // Rebuild menu.
    menu_rebuild();
  }
}
