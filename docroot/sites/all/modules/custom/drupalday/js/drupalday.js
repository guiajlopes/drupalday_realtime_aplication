(function ($) {
  /**
   * Drupal.Nodejs.callback on drupalday.
   */
  Drupal.Nodejs.callbacks.drupalday = {
    callback: function (message) {
      if (message.channel == 'drupalday_form') {
        $('#mensages-drupalday-form').append('<p>' + message.data.append_content + '</p>');
      }
    }
  };
}(jQuery));
