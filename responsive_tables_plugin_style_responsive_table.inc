<?php
/**
 * @file
 * Contains the flipped table style plugin.
 */

/**
 * Style plugin to render each item as a column in a table.
 *
 * @ingroup views_style_plugins
 */
class responsive_tables_plugin_style_responsive_table extends views_plugin_style_table {
  function option_definition() {
    $options = parent::option_definition();

    $options['responsive_tables_add_awesomesauce'] = array('default' => TRUE);

    return $options;
  }

  /**
   * Render the given style.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['responsive_tables_add_awesomesauce'] = array(
      '#type' => 'checkbox',
      '#title' => t("Add awesomesauce?"),
      '#default_value' => $this->options['responsive_tables_add_awesomesauce'],
      '#description' => t("A demo of a checkbox that can be used in a views plugin form."),
    );
  }
}
