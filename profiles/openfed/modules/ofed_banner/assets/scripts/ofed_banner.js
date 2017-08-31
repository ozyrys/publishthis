(function($) {
  $(document).ready(function() {
    // Banner counter.
    $('.banner-count-click').each(function() {
      $(this).click(function() {
        // Get the node id.
        var nid = $(this).attr('nid');
        // Ajax request.
        $.ajax({
          type: 'POST',
          url: Drupal.settings.basePath + 'banner-counter/' + nid,
          data: {nid: nid,},
        });
      });
    });
  });
})(jQuery);