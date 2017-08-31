(function($) {
  Drupal.behaviors.sharethis = {
    attach: function(context) {
      $('.sharethis-wrapper span').keyup(function (e) {
        // The enter key code (13).
        if (e.which == 13 || e.which == 32) {

          // Find innermost span
          var $target = $(this).children('span');
          while ($target.length) {
            $target = $target.children('span');
          }
          var button = $target.end()[0];

          if (typeof button !== 'undefined') {
            button.click();
          }

          return false;
        }
      });
    }
  }
})(jQuery);
