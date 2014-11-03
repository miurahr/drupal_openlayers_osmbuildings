<?php
/**
 * @file
 * Image Layer Type
 * http://dev.openlayers.org/docs/files/OpenLayers/Layer/Image-js.html
 */

/**
 * OpenLayers Image Layer Type class
 */
class openlayers_layer_type_osmbuildings extends openlayers_layer_type {

  /**
   * Provide initial values for options.
   */
  function options_init() {
    return array(
      'type' => 'OSMBuildings',
      'layer_handler' => 'osmbuildings',
      'vector' => TRUE
    ) + parent::options_init();
  }

  /**
   * Options form which generates layers
   */
  function options_form($defaults = array()) {
    return array(
      'type' => array(
        '#type' => 'select',
        '#options' => array(
          'Args' => 'Arg',
        ),
        '#default_value' => isset($this->data['type']) ? $this->data['type'] : 'Arg',
      ),
    );
  }

 /**
  * hook_validate() of the form.
  */
  function options_form_validate($form, &$form_state) {
    parent::options_form_validate($form, $form_state);
  }

  /**
   * hook_submit() of the form.
   */
  function options_form_submit($form, &$form_state) {
    parent::options_form_submit($form, $form_state);
  }

  /**
   * Render.
   */
  function render(&$map) {
    libraries_load('osmbuildings');
    drupal_add_js(drupal_get_path('module', 'openlayers_osmbuildings') . '/includes/layer_types/openlayers_layer_type_osmbuildings.js');
  }
}
