<?php

/**
 * @file
 * "Regional" step in installer.
 */

/**
 * Form for regional set-up.
 */
function openfed_install_regional_form() {
  // Set title.
  drupal_set_title(st('Set up regional'));

  // Set form.
  $form = array();

  $form['regional_list'] = array(
    '#type' => 'checkboxes',
    '#title' => st('Regional languages'),
    '#options' => _openfed_get_languages_list(),
    '#description' => '<p>' . st('When checking a language, a main menu will automatically be created in the menus list for that language, and the menu will be located in the corresponding Navigation area.<br><br>
      If no languages are selected, only the English language will be enabled.<br>Consequently, the main menu will be created for the English language only and will be located in the Navigation area.<br><br>
      Additional languages can be enabled after the installation, but the main menu will then have to be created manually for each language and located in the corresponding area.'
    ) . '</p>',
  );
  $form['cookie_and_language_selection'] = array(
    '#type' => 'checkbox',
    '#title' => st('Language cookie and language selection page'),
    '#description' => '<p>' . st('When checking this option, the language cookie
      and language selection page modules will be automatically configured. This
      means that for determining the language of a page, the following order will
      be used: 1. URL prefix, 2. Language cookie, 3. Language selection page.') . '</p><p>'.
      st('Note this option is only relevant for sites using multiple languages.') . '</p>',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );

  // Return form.
  return $form;
}

/**
 * Form validation handler for openfed_install_regional_form().
 */
function openfed_install_regional_form_validate($form, &$form_state) {
  $values = $form_state['values'];
  $regional_enabled = array_filter($values['regional_list']);
  if (empty($regional_enabled) && !empty($values['cookie_and_language_selection'])) {
    form_set_error('regional_list', st('You chose to enable the language cookie
      and language but did not select a regional language. Please choose at
      least one regional language.'));
  }
}

/**
 * Form submission handler for openfed_install_regional_form().
 */
function openfed_install_regional_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  if (!empty($values['regional_list'])) {
    $lang = array();
    foreach ($values['regional_list'] as $key => $value) {
      if ($key === $value) {
        $lang[] = $key;
      }
    }

    if (!empty($values['cookie_and_language_selection'])) {
      variable_set('openfed_regional_batch_cookie_and_language_selection', TRUE);
    }
    // Set variables.
    if (!empty($values['cookie_and_language_selection'])) {
      variable_set('openfed_regional_batch_cookie_and_language_selection', TRUE);
    }
    variable_set('openfed_regional_batch_run', TRUE);
    variable_set('openfed_regional_batch_lang', $lang);
  }
}

/**
 * Batch function to activate language.
 */
function openfed_install_regional_batch() {
  $values = variable_get('openfed_regional_batch_lang', array());
  $values[] = 'en';

  if (!empty($values)) {
    include_once DRUPAL_ROOT . '/includes/iso.inc';
    $predefined = _locale_get_predefined_list();

    foreach ($values as $key => $lang) {
      if ($lang != 'en') {
        locale_add_language($lang);
        drupal_set_message(t('The language %language has been created and can now be used.', array('%language' => t($predefined[$lang][0]))));
      }

      // Create basic content in each language.
      _openfed_install_regional_set_content_for_language($lang);
    }

    if (variable_get('openfed_regional_batch_cookie_and_language_selection') === TRUE) {
      // Enable language cookie and language seleciton page cookies.
      module_enable(array('language_cookie', 'language_selection_page'));

      // Disable language selection screen on the installer.
      variable_set('language_selection_page_blacklisted_paths', '*install.php*');

      // Negotiation hooks & constants are defined here:
      require_once DRUPAL_ROOT . '/includes/language.inc';
      require_once DRUPAL_ROOT . '/includes/locale.inc';
      require_once DRUPAL_ROOT . '/modules/locale/locale.module';

      // Negotiation providers to use, in this order:
      $negotiation = array(
        LOCALE_LANGUAGE_NEGOTIATION_URL,
        LANGUAGE_COOKIE_NEGOTIATION,
        LANGUAGE_NEGOTIATION_SELECTION_PAGE,
        LANGUAGE_NEGOTIATION_DEFAULT,
      );

      // Save the new language negotiation options.
      language_negotiation_set(LANGUAGE_TYPE_INTERFACE, array_flip($negotiation));

      // Save admininstration UI settings.
      $type = LANGUAGE_TYPE_INTERFACE;
      $provider_weights = array_flip($negotiation);
      variable_set("locale_language_providers_weight_$type", $provider_weights);

      // Unset the old language negotiation system variable.
      variable_del('language_negotiation');

      drupal_set_message(t('The language cookie and the language selection page have been set up.'));
    }

    // Delete variables.
    variable_del('openfed_regional_batch_run');
    variable_del('openfed_regional_batch_lang');
    variable_del('openfed_regional_batch_cookie_and_language_selection');

    // Set language block.
    _openfed_set_block_into_region('locale', 'language', 'tools');

    // Enable translation overview module.
    module_enable(array(
      'translation_overview',
    ), TRUE);
  }
}

/**
 * Create a list of content type for a language.

 * @param string $lang
 *  The language ISO code.
 */
function _openfed_install_regional_set_content_for_language($lang) {
  // Check if variable $lang is known in languages_list.
  if (array_key_exists($lang, _openfed_get_languages_list()) || $lang == 'en') {
    $ck_link = variable_get('ckeditor_link_autocomplete_menus');

    // Switch on language.
    switch ($lang) {
      // English.
      case 'en':
        // Store main link source variable for a language.
        variable_store_set('language', $lang, 'menu_main_links_source', 'main-menu');

        // Show block for english language only.
        _openfed_show_block_for_language('system', 'main-menu', $lang);

        // Add date format.
        $date_format = array();
        $date_format[] = array(
          'format' => 'd/m/Y',
          'type' =>
          'date_only',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'c',
          'type' => 'html5_tools_iso8601',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'l, j F, Y - H:i',
          'type' => 'long',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'D, d/m/Y - H:i',
          'type' => 'medium',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'd/m/Y - H:i',
          'type' => 'short',
          'language' => $lang,
        );
        _openfed_install_regional_localize_date_format($date_format);

        // Add prefix for english language, and update native name that is used
        // in language switcher.
        $query = db_update('languages')
          ->fields(array(
            'native' => 'en',
            'prefix' => 'en',
          ))
          ->condition('language', 'en', '=')
          ->execute();

        // Create webform contact page.
        _openfed_install_regional_make_contact_webform($lang, 'main-menu');

        // Create a menu block for submenu.
        _openfed_install_regional_make_submenu($lang, 'main-menu');
        break;

      // French.
      case 'fr':
        // Set the main french menu key.
        $menu_name = 'main-french-menu';

        // Create the french menu.
        _openfed_create_custom_menu($menu_name, 'Main French Menu', '', '2', $lang);

        // Add custom menu into ckeditor link for autocomplete menu.
        $ck_link[$menu_name] = $menu_name;

        // Store main link source variable for a language.
        variable_store_set('language', $lang, 'menu_main_links_source', $menu_name);

        // Show block for french language only.
        _openfed_show_block_for_language('menu', $menu_name, $lang);

        // Add date format.
        $date_format = array();
        $date_format[] = array(
          'format' => 'd/m/Y',
          'type' => 'date_only',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'c',
          'type' => 'html5_tools_iso8601',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'l, j. F Y - G:i',
          'type' => 'long',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'D, d/m/Y - H:i',
          'type' => 'medium',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'd/m/Y - H:i',
          'type' => 'short',
          'language' => $lang,
        );
        _openfed_install_regional_localize_date_format($date_format);

        // Create webform contact page.
        _openfed_install_regional_make_contact_webform($lang, $menu_name);

        // Create a menu block for submenu.
        _openfed_install_regional_make_submenu($lang, $menu_name);

        // Set the menu in the navigation region.
        _openfed_set_block_into_region('menu', $menu_name, 'navigation');

        // Update native name that is used in language switcher.
        $query = db_update('languages')
          ->fields(array(
            'native' => 'fr',
          ))
          ->condition('language', 'fr', '=')
          ->execute();

        break;

      // Dutch.
      case 'nl':
        // Set the main dutch menu key.
        $menu_name = 'main-dutch-menu';

        // Create the Dutch menu.
        _openfed_create_custom_menu($menu_name, 'Main Dutch Menu', '', '2', $lang);

        // Add custom menu into ckeditor link for autocomplete menu.
        $ck_link[$menu_name] = $menu_name;

        // Store variable for a language.
        variable_store_set('language', $lang, 'menu_main_links_source', $menu_name);

        // Show block for dutch language only.
        _openfed_show_block_for_language('menu', $menu_name, $lang);

        // Add date format.
        $date_format = array();
        $date_format[] = array(
          'format' => 'd/m/Y',
          'type' => 'date_only',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'c',
          'type' => 'html5_tools_iso8601',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'l, j. F Y - G:i',
          'type' => 'long',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'D, d/m/Y - H:i',
          'type' => 'medium',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'd/m/Y - H:i',
          'type' => 'short',
          'language' => $lang,
        );
        _openfed_install_regional_localize_date_format($date_format);

        // Create webform contact page.
        _openfed_install_regional_make_contact_webform($lang, $menu_name);

        // Create a menu block for submenu.
        _openfed_install_regional_make_submenu($lang, $menu_name);

        // Set the menu in the navigation region.
        _openfed_set_block_into_region('menu', $menu_name, 'navigation');

        // Update native name that is used in language switcher.
        $query = db_update('languages')
          ->fields(array(
            'native' => 'nl',
          ))
          ->condition('language', 'nl', '=')
          ->execute();

        break;

      // German.
      case 'de':
        // Set the main dutch menu key.
        $menu_name = 'main-german-menu';

        // Create the German menu.
        _openfed_create_custom_menu($menu_name, 'Main German Menu', '', '2', $lang);

        // Add custom menu into ckeditor link for autocomplete menu.
        $ck_link[$menu_name] = $menu_name;

        // Store variable for a language.
        variable_store_set('language', $lang, 'menu_main_links_source', $menu_name);

        // Show block for dutch language only.
        _openfed_show_block_for_language('menu', $menu_name, $lang);

        // Add date format.
        $date_format = array();
        $date_format[] = array(
          'format' => 'd/m/Y',
          'type' => 'date_only',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'c',
          'type' => 'html5_tools_iso8601',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'l, j. F Y - G:i',
          'type' => 'long',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'D, d/m/Y - H:i',
          'type' => 'medium',
          'language' => $lang,
        );
        $date_format[] = array(
          'format' => 'd/m/Y - H:i',
          'type' => 'short',
          'language' => $lang,
        );
        _openfed_install_regional_localize_date_format($date_format);

        // Create webform contact page.
        _openfed_install_regional_make_contact_webform($lang, $menu_name);

        // Create a menu block for submenu.
        _openfed_install_regional_make_submenu($lang, $menu_name);

        // Set the menu in the navigation region.
        _openfed_set_block_into_region('menu', $menu_name, 'navigation');

        // Update native name that is used in language switcher.
        $query = db_update('languages')
          ->fields(array(
            'native' => 'de',
          ))
          ->condition('language', 'de', '=')
          ->execute();

        break;
    }

    // Set variable.
    variable_set('ckeditor_link_autocomplete_menus', $ck_link);
  }
}

/**
 * Create the contact webform.
 *
 * @param type $lang
 *   The language ISO code.
 * @param type $menu_name.
 *   The menu name.
 */
function _openfed_install_regional_make_contact_webform($lang, $menu_name = 'main-menu') {
  // Switch on language.
  switch ($lang) {
    // English.
    case 'en':
      $node_title = 'Contact';
      $field_name = 'Name';
      $field_subject = 'Subject';
      $field_email = 'Email';
      $field_message = 'Message';
      break;

    // French.
    case 'fr':
      $node_title = 'Contact';
      $field_name = 'Nom';
      $field_subject = 'Sujet';
      $field_email = 'Email';
      $field_message = 'Message';
      break;

    // Dutch.
    case 'nl':
      $node_title = 'Contact';
      $field_name = 'Naam';
      $field_subject = 'Onderwerp';
      $field_email = 'Email';
      $field_message = 'Bericht';
      break;

    // German.
    case'de':
      $node_title = 'Kontakt';
      $field_name = 'Name';
      $field_subject = 'Gegenstand';
      $field_email = 'Email';
      $field_message = 'Nachricht';
      break;
  }

  // Creating webform node.
  $node = new stdClass();
  $node->type = 'webform';
  $node->title = $node_title;
  $node->language = $lang;
  $node->status = 1;
  $node->tnid = 1;
  node_object_prepare($node);

  $node->menu = array(
    'enabled' => 1,
    'mlid' => 0,
    'module' => 'menu',
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
    'options' => array(),
    'expanded' => 0,
    'parent_depth_limit' => 8,
    'link_title' => $node->title,
    'description' => '',
    'parent' => $menu_name . ':0',
    'weight' => 10,
    'plid' => 0,
    'menu_name' => $menu_name,
  );
  node_save($node);

  // Assign components to webform.
  $components = array(
    0 => array(
      'name' => $field_name,
      'form_key' => strtolower($field_name),
      'type' => 'textfield',
      'mandatory' => 1,
      'weight' => 0,
      'pid' => 0,
    ),
    1 => array(
      'name' => $field_email,
      'form_key' => strtolower($field_email),
      'type' => 'email',
      'mandatory' => 1,
      'weight' => 1,
      'pid' => 0,
    ),
    2 => array(
      'name' => $field_subject,
      'form_key' => strtolower($field_subject),
      'type' => 'textfield',
      'mandatory' => 1,
      'weight' => 2,
      'pid' => 0,
    ),
    3 => array(
      'name' => $field_message,
      'form_key' => strtolower($field_message),
      'type' => 'textarea',
      'mandatory' => 1,
      'weight' => 3,
      'pid' => 0,
    ),
  );

  foreach ($components as $component) {
    $component['nid'] = $node->nid;
    $component['extra']['title_display'] = 'inline';
    $node->webform['components'][] = $component;
    webform_component_insert($component);
  }
}

/**
 * Create a menu block for submenu.
 *
 * @param type $lang
 *   The language ISO code.
 * @param type $menu_name.
 *   The menu name.
 */
function _openfed_install_regional_make_submenu($lang, $menu_name = 'main-menu') {
  // Switch on language.
  switch ($lang) {
    // English.
    case 'en':
      variable_set('menu_block_1_title_link', FALSE);
      variable_set('menu_block_1_admin_title', 'Main menu(2+)');
      variable_set('menu_block_1_parent', 'main-menu:0');
      variable_set('menu_block_1_level', '2');
      variable_set('menu_block_1_follow', FALSE);
      variable_set('menu_block_1_depth', '0');
      variable_set('menu_block_1_expanded', FALSE);
      variable_set('menu_block_1_sort', FALSE);
      variable_set('menu_block_ids', array(
        '1',
        '2',
        '3',
        '4',
      ));

      break;

    // French.
    case 'fr':
      variable_set('menu_block_2_title_link', FALSE);
      variable_set('menu_block_2_admin_title', 'Main french menu(2+)');
      variable_set('menu_block_2_parent', 'main-french-menu:0');
      variable_set('menu_block_2_level', '2');
      variable_set('menu_block_2_follow', FALSE);
      variable_set('menu_block_2_depth', '0');
      variable_set('menu_block_2_expanded', FALSE);
      variable_set('menu_block_2_sort', FALSE);
      variable_set('menu_block_ids', array(
        '1',
        '2',
        '3',
        '4',
      ));
      $query = db_insert('block')->fields(array(
        'visibility',
        'pages',
        'custom',
        'title',
        'module',
        'theme',
        'region',
        'status',
        'weight',
        'delta',
        'cache',
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_frontend(),
        'region' => 'sidebar_first',
        'status' => 1,
        'weight' => 0,
        'delta' => 2,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_backend(),
        'region' => '',
        'status' => 0,
        'weight' => 0,
        'delta' => 2,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_maintenance(),
        'region' => '',
        'status' => 0,
        'weight' => 0,
        'delta' => 2,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->execute();
      break;

    // Dutch.
    case 'nl':
      variable_set('menu_block_3_title_link', FALSE);
      variable_set('menu_block_3_admin_title', 'Main dutch menu(2+)');
      variable_set('menu_block_3_parent', 'main-dutch-menu:0');
      variable_set('menu_block_3_level', '2');
      variable_set('menu_block_3_follow', FALSE);
      variable_set('menu_block_3_depth', '0');
      variable_set('menu_block_3_expanded', FALSE);
      variable_set('menu_block_3_sort', FALSE);
      variable_set('menu_block_ids', array(
        '1',
        '2',
        '3',
        '4',
      ));
      $query = db_insert('block')->fields(array(
        'visibility',
        'pages',
        'custom',
        'title',
        'module',
        'theme',
        'region',
        'status',
        'weight',
        'delta',
        'cache',
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_frontend(),
        'region' => 'sidebar_first',
        'status' => 1,
        'weight' => 0,
        'delta' => 3,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_backend(),
        'region' => '',
        'status' => 0,
        'weight' => 0,
        'delta' => 3,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_maintenance(),
        'region' => '',
        'status' => 0,
        'weight' => 0,
        'delta' => 3,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->execute();
      break;

    // German.
    case 'de':
      variable_set('menu_block_4_title_link', FALSE);
      variable_set('menu_block_4_admin_title', 'Main german menu(2+)');
      variable_set('menu_block_4_parent', 'main-german-menu:0');
      variable_set('menu_block_4_level', '2');
      variable_set('menu_block_4_follow', FALSE);
      variable_set('menu_block_4_depth', '0');
      variable_set('menu_block_4_expanded', FALSE);
      variable_set('menu_block_4_sort', FALSE);
      variable_set('menu_block_ids', array(
        '1',
        '2',
        '3',
        '4',
      ));
      $query = db_insert('block')->fields(array(
        'visibility',
        'pages',
        'custom',
        'title',
        'module',
        'theme',
        'region',
        'status',
        'weight',
        'delta',
        'cache',
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_frontend(),
        'region' => 'sidebar_first',
        'status' => 1,
        'weight' => 0,
        'delta' => 4,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_backend(),
        'region' => '',
        'status' => 0,
        'weight' => 0,
        'delta' => 4,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->values(array(
        'visibility' => 0,
        'pages' => '<front>',
        'custom' => 0,
        'title' => '<none>',
        'module' => 'menu_block',
        'theme' => _openfed_get_theme_maintenance(),
        'region' => '',
        'status' => 0,
        'weight' => 0,
        'delta' => 4,
        'cache' => DRUPAL_NO_CACHE,
      ));
      $query->execute();
      break;
  }
}

/**
 * Add a date format in database.
 * @param array $date_format
 *  The date format.
 */
function _openfed_install_regional_localize_date_format($date_format) {
  foreach ($date_format as $key => $date_format_locale) {
    drupal_write_record('date_format_locale', $date_format_locale);
  }
}
