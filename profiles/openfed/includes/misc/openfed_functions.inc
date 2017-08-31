<?php

/**
 * @file
 * Contains helper functions for Openfed distribution.
 */

/**
 * Gets the name of the theme frontend.
 */
function _openfed_get_theme_frontend() {
  return 'nerra';
}
/**
 * Gets the name of the theme backend.
 */
function _openfed_get_theme_backend() {
  return 'ofed_cms_adminimal';
}
/**
 * Gets the name of the theme maintenance.
 */
function _openfed_get_theme_maintenance() {
  return 'maintenance';
}

/**
 * Shows a block for a language.
 * @param string $module The module to add the block for.
 * @param string $delta The delta to use.
 * @param string $language The language to add the block for.
 */
function _openfed_show_block_for_language($module, $delta, $language) {
  $query = db_insert('i18n_block_language')->fields(array('language', 'module', 'delta'));
  $query->values(array('language' => $language, 'module' => $module, 'delta' => $delta));
  $query->execute();
}

/**
 * Create menu entry for home.
 *
 * @param string $menu_name The machine name of the menu for the link.
 * @param string $title Title to appear in menu for the link.
 */
function _openfed_create_front_menu_link($menu_name, $title) {
  // Create a Home link
  $item = array(
    'link_title' => $title,
    'link_path' => '<front>',
    'menu_name' => $menu_name,
    'weight' => -50,
  );
  menu_link_save($item);
}

/**
 * Create a custom menu.
 *
 * @param string $menu_name The unique name of the custom menu.
 * @param string $title The human readable menu title.
 * @param string $description The custom menu description.
 * @param int $i18n_mode Multilingual options for the menu item.
 * @param string $language The language code for the menu item.
 */
function _openfed_create_custom_menu($menu_name, $title, $description = '', $i18n_mode = '2', $language = 'en') {
  $menu = array();
  $menu['menu_name'] = $menu_name;
  $menu['title'] = $title;
  $menu['description'] = $description;
  $menu['i18n_mode'] = $i18n_mode;
  $menu['language'] = $language;
  menu_save($menu);
}

/**
 * Sets menu block into a region.
 *
 * @param string $module_name Which module is being configured.
 * @param string $delta_name Which block is being configured.
 * @param string $region_name Which region is being configured.
 */
function _openfed_set_block_into_region($module_name, $delta_name, $region_name) {
  $block = array(
    'module' => $module_name,
    'delta' => $delta_name,
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 0,
    'region' => $region_name,
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $exist = db_select('block', 'b')
    ->fields('b')
    ->condition('module', $block['module'])
    ->condition('delta', $block['delta'])
    ->condition('theme', $block['theme'])
    ->execute()
    ->fetchObject();

  if (empty($exist)) {
    $query = db_insert('block')
      ->fields($block);
  }
  else {
    $query = db_update('block')
      ->fields($block)
      ->condition('module', $block['module'], '=')
      ->condition('delta', $block['delta'], '=')
      ->condition('theme', $block['theme'], '=');
  }
  $query->execute();
}

/**
 * Gets the list of potential languages.
 *
 * @return array
 *  The language list.
 */
function _openfed_get_languages_list() {
  // Set the language list.
  $tr = get_t();
  $languages_list = array(
    'fr' => $tr('French (Français)'),
    'nl' => $tr('Dutch (Nederlands)'),
    'de' => $tr('German (Deutsch)'),
  );

  // Return.
  return $languages_list;
}

/**
 * Gets the list of potential menus to enable.
 *
 * @return array
 *   The menus list.
 */
function _openfed_get_menus_list() {
  $tr = get_t();
  $menu_list = array(
    'menu-tools-menu' => $tr('Tools Menu: placed at the very top of the screen.'),
    'menu-footer-menu' => $tr('Footer Menu: placed at the very bottom of the screen.')
  );
  return $menu_list;
}

/**
 * Gets the list of all potential roles to enable.
 *
 * @return array
 *   The roles list.
 */
function _openfed_get_roles_list() {
  $tr = get_t();
  $role_list = array(
    'configurator' => $tr('Configurator: Experienced Drupal user, can configure modules.'),
    'content_manager' => $tr('Content Manager: Can create and edit content items.'),
    'user_manager' => $tr('User Manager: Can create new users and manage their permissions.'),
    'authenticated_visitor' => $tr('Authenticated Visitor.'),
  );
  return $role_list;
}

/**
 * Gets the name of all roles available or created by default.
 *
 * Used to be called after install.
 */
function _openfed_get_roles_list_default() {
  // Set roles.
  $role_key = array(
    'Administrator',
    'Builder',
    'Configurator',
    'Content Manager',
    'User Manager',
    'Authenticated Visitor',
    'authenticated user',
    'anonymous user',
  );

  // Return.
  return $role_key;
}

/**
 * Gets the list of all taxonomie.
 *
 * @return array
 *  The taxonomy list.
 */
function _openfed_get_taxonomy_list() {
  $taxonomy_list = array(
    'categories' => st('Categories.'),
  );
  return $taxonomy_list;
}

/**
 * Gets the list of all content types/"functionalities".
 *
 * @return array
 *  The content type list.
 */
function _openfed_get_functionalities_list() {
  $tr = get_t();

  $functionalities = array(
    'ofed_address' => $tr('Address'),
    'ofed_banner' => $tr('Banner'),
    'blog' => $tr('Blog'),
    'ofed_event' => $tr('Event'),
    'ofed_faq' => $tr('FAQ'),
    'forum' => $tr('Forum'),
    'ofed_job' => $tr('Job'),
    'lexicon' => $tr('Lexicon'),
    'ofed_meeting' => $tr('Meeting'),
    'ofed_news' => $tr('News'),
    'ofed_photogallery' => $tr('Photo galleries'),
    'poll' => $tr('Poll'),
    'ofed_press' => $tr('Press'),
    'ofed_slider' => $tr('Slider'),
    'ofed_slideshow' => $tr('Slideshow'),
    'ofed_team' => $tr('Team member'),
    'ofed_video' => $tr('Video'),
  );

  // Sort by 'title' sub key alphabeticaly and preserve array keys.
  natsort($functionalities);

  // Return.
  return $functionalities;
}

/**
 * Returns default permissions.
 *
 * @return array
 *  Associative array with as key the permission and as value the array of
 *  roles this permission applies to.
 */
function _openfed_get_default_permissions() {
  $permissions = array(
    // addanother
    'administer add another' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'use add another' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
      'Authenticated Visitor',
      'authenticated user',
    ),

    // addemar_subscription
    'access addemar_subscription content' => array(
      'authenticated user',
      'anonymous user',
    ),

    // admin_language
    'display admin pages in another language' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
      'Authenticated Visitor',
      'authenticated user',
    ),

    // admin_menu
    'access administration menu' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
    ),
    'flush caches' => array(
      'Builder',
      'Configurator',
    ),

    // block
    'administer blocks' => array(
      'Builder',
      'Configurator',
    ),

    // ckeditor
    'administer ckeditor' => array(
      'Builder',
      'Configurator',
    ),
    'customize ckeditor' => array(
      'Builder',
      'Configurator',
    ),

    // ckeditor_link
    'access ckeditor link' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'administer ckeditor link' => array(
      'Builder',
      'Configurator',
    ),

    // contextual
    'access contextual links' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
    ),

    // ds
    'admin_display_suite' => array(
      'Builder',
      'Configurator',
    ),

    // ds_extras
    'ds_switch ofed_download' => array(
      'Builder',
      'Configurator',
    ),
    'ds_switch ofed_page' => array(
      'Builder',
      'Configurator',
    ),
    'ds_switch webform' => array(
      'Builder',
      'Configurator',
    ),
    'view ds_flag_bookmarks on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view title on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view links on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view node_link on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view author on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view post_date on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view submitted_by on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view search_snippet on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view search_info on node' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view title on taxonomy_term' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view more_link on taxonomy_term' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view name on user' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view title on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view header on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view exposed on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view attachment_before on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view rows on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view empty on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view pager on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view attachment_after on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view more on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view footer on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),
    'view feed_icon on ds_views' => array(
      'authenticated user',
      'anonymous user',
    ),

    // features
    'administer features' => array(
      'Builder',
      'Configurator',
    ),
    'manage features' => array(
      'Builder',
      'Configurator',
    ),

    // field_group
    'administer fieldgroups' => array(
      'Builder',
      'Configurator',
    ),

    // filter
    'administer filters' => array(
      'Builder',
      'Configurator',
    ),
    'use text format filtered_html' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'use text format full_html' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // flag
    'administer flags' => array(
      'Builder',
      'Configurator',
    ),
    'use flag import' => array(
      'Builder',
    ),

    // i18n_node
    'administer content translations' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // i18n_string
    'translate user-defined strings' => array(
      'Builder',
      'Configurator',
    ),
    'translate admin strings' => array(
      'Builder',
      'Configurator',
    ),

    // image
    'administer image styles' => array(
      'Builder',
      'Configurator',
    ),

    // imce
    'administer imce' => array(
      'Builder',
    ),

    // locale
    'administer languages' => array(
      'Builder',
      'Configurator',
    ),
    'translate interface' => array(
      'Builder',
    ),

    // media
    'administer media' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'import media' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'view media' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'edit media' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // media_internet
    'add media from remote sources' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // menu
    'administer menu' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // menu_attributes
    'administer menu attributes' => array(
      'Builder',
      'Configurator',
    ),

    // menu_position
    'administer menu positions' => array(
      'Builder',
      'Configurator',
    ),

    // metatag
    'administer meta tags' => array(
      'Builder',
      'Configurator',
    ),
    'edit meta tags' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // node
    'administer content types' => array(
      'Builder',
      'Configurator',
    ),
    'access content overview' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'access content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
      'Authenticated Visitor',
      'authenticated user',
      'anonymous user',
    ),
    'view own unpublished content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
      'Authenticated Visitor',
      'authenticated user',
    ),
    'view revisions' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'revert revisions' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'create webform content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'edit own webform content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'edit any webform content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'delete own webform content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'bypass node access' => array(
      'Configurator',
    ),
    'administer nodes' => array(
      'Configurator',
    ),

    // ofed_switcher
    'access ofed_switcher content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // ofed_switcher
    'access ofed_switcher content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
    ),

    // ofed_vmcd
    'administer views multi-column display' => array(
      'Builder',
      'Configurator',
    ),
    'use views multi-column display' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // override_node_options
    'override webform published option' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'override webform promote to front page option' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'override webform sticky option' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'override webform revision option' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'enter webform revision log entry' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'override webform authored on option' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'override webform authored by option' => array(
      'Builder',
      'Configurator',
    ),

    // path
    'administer url aliases' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'create url aliases' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // path_breadcrumbs_ui
    'administer path breadcrumbs' => array(
      'Builder',
      'Configurator',
    ),

    // pathauto
    'administer pathauto' => array(
      'Builder',
      'Configurator',
    ),
    'notify of path changes' => array(
      'Builder',
      'Configurator',
    ),

    // print
    'administer print' => array(
      'Builder',
      'Configurator',
    ),
    'node-specific print configuration' => array(
      'Builder',
      'Configurator',
    ),
    'access print' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
      'Authenticated Visitor',
      'authenticated user',
      'anonymous user',
    ),

    // redirect
    'administer redirects' => array(
      'Builder',
      'Configurator',
    ),

    // rules
    'administer rules' => array(
      'Builder',
      'Configurator',
    ),
    'bypass rules access' => array(
      'Builder',
      'Configurator',
    ),
    'access rules debug' => array(
      'Builder',
      'Configurator',
    ),

    // scheduler
    'administer scheduler' => array(
      'Builder',
      'Configurator',
    ),
    'schedule (un)publishing of nodes' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // search
    'administer search' => array(
      'Builder',
      'Configurator',
    ),
    'search content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
      'Authenticated Visitor',
      'authenticated user',
      'anonymous user',
    ),
    'use advanced search' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
     ),

    // seckit
    'administer seckit' => array(
      'Builder',
      'Configurator',
    ),

    // security_review
    'access security review list' => array(
      'Builder',
      'Configurator',
    ),
    'run security checks' => array(
      'Builder',
      'Configurator',
    ),

    // site_map
    'access site map' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
      'Authenticated Visitor',
      'authenticated user',
      'anonymous user',
    ),

    // system
    'administer actions' => array(
      'Builder',
      'Configurator',
    ),
    'access administration pages' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
    ),
    'access site in maintenance mode' => array(
      'Builder',
    ),
    'view the administration theme' => array(
      'Builder',
      'Configurator',
      'Content Manager',
      'User Manager',
    ),
    'access site reports' => array(
      'Builder',
    ),
    'block IP addresses' => array(
      'Builder',
    ),

    // taxonomy
    'administer taxonomy' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // translation
    'translate content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // translation_overview
    'view translation overview assigments' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // user
    'administer users' => array(
      'Builder',
      'User Manager',
    ),
    'access user profiles' => array(
      'Builder',
      'Configurator',
      'User Manager',
    ),

    // view_unpublished
    'view any unpublished content' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // views
    'administer views' => array(
      'Builder',
    ),
    'access all views' => array(
      'Builder',
    ),

    // webform
    'access all webform results' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'access own webform results' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'edit all webform submissions' => array(
      'Builder',
      'Configurator',
    ),
    'delete all webform submissions' => array(
      'Builder',
      'Configurator',
    ),
    'access own webform submissions' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'edit own webform submissions' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),
    'delete own webform submissions' => array(
      'Builder',
      'Configurator',
      'Content Manager',
    ),

    // workbench_moderation
    'view all unpublished content' => array(
       'Content Manager',
    ),
    'view moderation history' => array(
       'Content Manager',
    ),
    'view moderation messages' => array(
       'Content Manager',
    ),
    'use workbench_moderation my drafts tab' => array(
       'Content Manager',
    ),
    'moderate content from published to draft' => array(
       'Content Manager',
    ),
    'moderate content from draft to published' => array(
       'Content Manager',
    ),

    // xmlsitemap
    'administer xmlsitemap' => array(
      'Builder',
    ),
  );
  return $permissions;
}

/**
 * Gets the permissions list for a specified role.
 *
 * @param type $role_name
 *   The role name
 * @return array
 *   Associative array with key the permission name and value TRUE if the role
 *   name has this permission.
 */
function _openfed_get_permissions_for_role($role_name) {
  // Initialize permissions.
  $permissions = _openfed_get_default_permissions();

  // Get all available permissions.
  $available = array_keys(module_invoke_all('permission'));

  // Return the permissions that apply to this role.
  $permissions_for_role = array();
  foreach ($permissions as $permission_name => $roles) {
    if (in_array($permission_name, $available) && in_array($role_name, $permissions[$permission_name])) {
      $permissions_for_role[$permission_name] = TRUE;
    }
  }

  return $permissions_for_role;
}

/**
 * Set up Workbench Moderation.
 *
 * Used in installation and in update hooks.
 */
function _openfed_workbench_moderation_setup() {
  module_enable(array('workbench_moderation'));

  // Set up states (Published/Unpublished).
  db_delete('workbench_moderation_states')
    ->execute();
  db_delete('workbench_moderation_transitions')
    ->execute();
  $states = array(
    array(
      'name' => 'draft',
      'label' => 'Unpublished',
      'description' => 'Work in progress',
      'weight' => -99,
    ),
    array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => 99,
    ),
  );
  $query = db_insert('workbench_moderation_states')
    ->fields(array('name', 'label', 'description', 'weight'));
  foreach ($states as $state) {
    $query->values($state);
  }
  $query->execute();

  // Default transitions.
  $transitions = array(
    array(
      'name' => 'Publish',
      'from_name' => 'draft',
      'to_name' => 'published',
    ),
    array(
      'name' => 'Unpublish',
      'from_name' => 'published',
      'to_name' => 'draft',
    ),
  );
  $query = db_insert('workbench_moderation_transitions')
    ->fields(array('name', 'from_name', 'to_name'));
  foreach ($transitions as $transition) {
    $query->values($transition);
  }
  $query->execute();
  drupal_static_reset('workbench_moderation_transitions');

  // Loop through all content types.
  foreach (array_keys(node_type_get_names()) as $content_type) {
    // Enable revisioning and moderation.
    $settings = variable_get('node_options_' . $content_type, array());
    variable_set('node_options_' . $content_type, array_unique(array_merge($settings, array('moderation', 'revision'))));

    // Set the default state based on the default published/unpublished setting.
    if (in_array('status', $settings)) {
      variable_set('workbench_moderation_default_state_' . $content_type, 'published');
    }
    else {
      variable_set('workbench_moderation_default_state_' . $content_type, 'draft');
    }
  }

  // Set up permissions.
  $web_role = user_role_load_by_name('Content Manager');
  if (!empty($web_role)) {
    $permissions = array(
      'view all unpublished content' => TRUE,
      'view moderation history' => TRUE,
      'view moderation messages' => TRUE,
      'use workbench_moderation my drafts tab' => TRUE,
      'moderate content from published to draft' => TRUE,
      'moderate content from draft to published' => TRUE,
    );
    if (module_exists('override_node_options')) {
      $perms = array_keys(override_node_options_permission());
      foreach ($perms as $perm) {
        if (strpos($perm, 'published' !== FALSE)) {
          // Allow "override published option" for all content types.
          $permissions[$perm] = TRUE;
        }
      } 
    }
    user_role_change_permissions($web_role->rid, $permissions);
  }
}
