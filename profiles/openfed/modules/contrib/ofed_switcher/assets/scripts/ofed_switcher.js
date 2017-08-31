(function ($) {

Drupal.admin = Drupal.admin || {};
Drupal.admin.behaviors = Drupal.admin.behaviors || {};

/**
 * @ingroup admin_behaviors
 * @{
 */

/**
 * Show one of the hidden admin menu buttons depending on settings.
 */
Drupal.admin.behaviors.ofedSwitcher = function (context, settings, $adminMenu) {
 	if (Drupal.settings.ofed_switcher.go_to_front === true) {
 	  $('#admin-menu-gotofront').css('display', 'inline');
 	}
 	else if (Drupal.settings.ofed_switcher.go_to_cms === true) {
 	  $('#admin-menu-gotocms').css('display', 'inline');
 	}
};

/**
 * @} End of "ingroup admin_behaviors".
 */

})(jQuery);