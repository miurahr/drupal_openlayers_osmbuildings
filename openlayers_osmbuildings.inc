<?php

/**
 * @file
 * Provides hooks for integration with OpenLayers (http://drupal.org/project/openlayers)
 */

/**
 * Implements hook_openlayers_maps().
 */
function olob_openlayers_maps() {


  $map = new stdClass();
  $map->api_version = 1;
  $map->name = 'osmbuildings_map';
  $map->title = t('OSMBuildings Example Map');
  $map->description = t('A 3D Map.');
  $map->disabled = TRUE;
  $map->data = array(
    'width' => '100%',
    'height' => '600px',
    'image_path' => drupal_get_path('module', 'openlayers') . '/themes/default_dark/img/',
    'css_path' => drupal_get_path('module', 'openlayers') . '/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '1',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => 
        array('mapnik' => 'osm_mapnik_layer', 'osmbuildings' => 'osmbuildings_layer'),
    'behaviors' => array(
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
    'map_name' => 'osmbuildings_map',
  );

  return array(
    'osmbuildings_map' => $map,
  );
}


/**
 * Formatter layers
 */
function olob_openlayers_layers() {
  $layers = array();

  $openlayers_layers = new stdClass;
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'osmbuildings_layer';
  $openlayers_layers->title = 'OSMBuildings layer';
  $openlayers_layers->description = 'osmbuildings';
  $openlayers_layers->disabled = TRUE;
  $openlayers_layers->data = array(
    'layer_type' => 'openlayers_layer_type_vector',
    'url' => array(
      0 => '<please add URL>',
    ),
    'isBaseLayer' => FALSE,
    'opacity' => 1.0,
    'projection' => array('EPSG:900913'),
  );
  $layers[$key] = $openlayers_layers;

  return $layers;
}
