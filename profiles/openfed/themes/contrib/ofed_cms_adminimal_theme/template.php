<?php

/**
 * @file
 * Theme-specific hooks.
 */

/**
 * Implements hook_preprocess_html().
 */
function ofed_cms_adminimal_preprocess_html(&$vars) {
  // Get adminimal folder path.
  $adminimal_path = drupal_get_path('theme', 'ofed_cms_adminimal');
  drupal_add_css($adminimal_path . '/css/ofed_cms_adminimal.css', array('group' => CSS_THEME, 'media' => 'all', 'weight' => 1));

  $vars['classes_array'][] = 'ofed-cms-adminimal-theme';
}

/**
 * Implements hook_preprocess_page().
 */
function ofed_cms_adminimal_preprocess_page(&$vars) {
  if (variable_get('ofed_cms_adminimal_show_version', TRUE)) {
    $profile = drupal_get_profile();
    if ($profile != 'standard') {
      $info = system_get_info('module', $profile);
    }
    $distribution_version = !empty($info) ? check_plain($info['name'] . ' ' . $info['version']) : '';
    $user_manual_link = '<a href="' . theme_get_setting('ofed_cms_adminimal_user_manual_link') . '">User manual</a>';
    $vars['feed_icons'] = '<div class="footer-copyright">&copy; Copyright ' . date('Y') . ' - OpenFed</div><div class="footer-version">' . $distribution_version . ' | ' . $user_manual_link . '</div>';
  }
}

/**
 * Overrides THEME_breadcrumb().
 */
function ofed_cms_adminimal_breadcrumb(&$variables) {
  if (module_exists('easy_breadcrumb') && variable_get('easy_breadcrumb-disable_drupal_breadcrumb', TRUE)) {
    // Show easy_breadcrumb block where Breadcrumb would usually appear.
    $data = module_invoke('easy_breadcrumb', 'block_view', 'easy_breadcrumb');
    ofed_cms_adminimal_block_view_easy_breadcrumb_easy_breadcrumb_alter($data, NULL);

    // To retain styling, wrap in div with class "breadcrumb".
    return '<div class="breadcrumb">' . drupal_render($data['content']) . '</div>';
  }
  else {
    $breadcrumb = $variables['breadcrumb'];
    if (!empty($breadcrumb)) {
      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users. Make the heading invisible with .element-invisible.
      $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

      $output .= '<div class="breadcrumb">' . implode(' / ', $breadcrumb) . '</div>';
      return $output;
    }
  }
}

/**
 * Replace the breadcrumb root link to the CMS' startpage instead of the home.
 */
function ofed_cms_adminimal_block_view_easy_breadcrumb_easy_breadcrumb_alter(&$data, $block) {
  $arg_0 = arg(0);

  // Replace HOME by START PAGE.
  if ($arg_0 == 'admin' || $arg_0 == 'cms' || path_is_admin(current_path())) {
    $breadcrumb = $data['content']['easy_breadcrumb']['#breadcrumb'];
    $breadcrumb[0]['content'] = t('Start Page');
    $breadcrumb[0]['url'] = 'cms/startpage';

    if ($arg_0 == 'cms') {
      $arg_1 = arg(1);
      // Save 'START PAGE' for later.
      $start = array_shift($breadcrumb);
      // Remove 'CMS' from breadcrumb.
      array_shift($breadcrumb);

      if (!empty($arg_1) && $arg_1 == 'startpage') {
        // Remove trailing 'START PAGE' from breadcrumb.
        array_shift($breadcrumb);
      }
      array_unshift($breadcrumb, $start);
    }
    else if ($arg_0 == 'node') {
      $arg_1 = arg(1);

      if (!empty($arg_1) && $arg_1 == 'add') {
        // Save 'START PAGE' for later.
        $start = array_shift($breadcrumb);
        // Remove 'node' from breadcrumb.
        array_shift($breadcrumb);
        array_unshift($breadcrumb, $start);
      }
    }
    $data['content']['easy_breadcrumb']['#breadcrumb'] = $breadcrumb;
    $data['content']['easy_breadcrumb']['#segments_quantity'] = count($breadcrumb);
  }
}

/**
 * Add a js to the exposed form.
 */
function ofed_cms_adminimal_preprocess_views_exposed_form(&$vars) {
  drupal_add_js(drupal_get_path('theme', $GLOBALS['theme_key']) . "/assets/scripts/cms-views.js", "theme");
}


/**
 * Alters hook_field_extra_fields().
 *
 * Makes sure Language field appears above Title field by default in node forms.
 *
 * Default values before altering are respectively 0 (from i18n) and -5 (from
 * node module). After altering, Language will precede Title instead.
 */
function ofed_cms_adminimal_field_extra_fields_alter(&$extra) {
  if (!empty($extra['node'])) {
    foreach ($extra['node'] as $module => &$fields) {
      if (isset($fields['form']['language']['weight']) && isset($fields['form']['title']['weight']) && ($fields['form']['language']['weight'] > $fields['form']['title']['weight'])) {
        $fields['form']['language']['weight'] = $fields['form']['title']['weight'] - 1;
      }
    }
  }
}

/**
 * Implements hook_form_alter().
 *
 * @see ofed_cms_adminimal_node_validate_menu_link()
 */
function ofed_cms_adminimal_form_alter(&$form, &$form_state, $form_id) {
  // Add a new default value if this is the node add form or the node edit form
  // and the menu link option had not been checked.
  // @todo Make this work for Hierarchical Select.
  if (substr($form_id, -10) == '_node_form' && !empty($form['menu']['link']['parent']['#options']) && ($form['nid']['#value'] == NULL || $form['menu']['enabled']['#default_value'] == 0)) {
    // Add an empty value to the beginning of the options array.
    $form['menu']['link']['parent']['#options'] = array_reverse($form['menu']['link']['parent']['#options'], TRUE);
    $form['menu']['link']['parent']['#options'][''] = t('Select a parent item...');
    $form['menu']['link']['parent']['#options'] = array_reverse($form['menu']['link']['parent']['#options'], TRUE);
    $form['menu']['link']['parent']['#default_value'] = '';
    $form['#validate'][] = 'ofed_cms_adminimal_node_validate_menu_link';
  }
}

/**
 * Validate handler for default menu link option.
 *
 * @see ofed_cms_adminimal_form_alter()
 */
function ofed_cms_adminimal_node_validate_menu_link($form, &$form_state) {
  if ($form_state['values']['menu']['enabled'] == 1 && $form_state['values']['menu']['parent'] == '') {
    form_set_error('menu][parent', t('Please select a Parent item for the menu link.'));
  }
}

