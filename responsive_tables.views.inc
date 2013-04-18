<?php
/**
 * @file responsive_tables.views.inc
 * Contains the responsive table style plugin.
 */

/**
 * Implementation of hook_views_plugins().
 */
function responsive_tables_views_plugins() {
  return array(
    'style' => array(
      'responsive' => array(
        'title' => t('Responsive tables'),
        'help' => t('Displays a table that uses Zurbs responsive technique'),
        'handler' => 'responsive_tables_plugin_style_responsive_table',
        'parent' => 'table',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'theme' => 'views_view_table',
        'even empty' => TRUE,
      ),
    ),
  );
}