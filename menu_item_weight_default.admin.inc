<?php
/**
 * @file
 * This file provides admin functionality for the disable node menu item module
 */

/**
 * Admin settings form callback
 */
function menu_item_weight_default_settings($form, &$form_state) {
  
  $form['menu_item_weight_default'] = array(
    '#type' => 'weight', 
    '#title' => t('Weight'), 
    '#default_value' => variable_get('menu_item_weight_default',''), 
    '#delta' => 50, 
    '#description' => t('In the menu, the heavier items will sink and the lighter items will be positioned nearer the top.'),
  );

  return system_settings_form($form);
}
