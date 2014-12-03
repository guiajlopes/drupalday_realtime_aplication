(function ($) {
  /**
   * Drupal.Nodejs.callback on views update.
   */
  Drupal.Nodejs.callbacks.drupalday = {
    callback: function (message) {
      if (message.channel == 'drupalday_form') {
        console.log(message);
        console.log(message.data.append_content);
        $('#mensages-drupalday-form').append('<p>' + message.data.append_content + '</p>');
      }
    }
  };
}(jQuery));
