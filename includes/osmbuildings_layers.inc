<?php 
/**
 * @file
 * Provides hooks for integration with OpenLayers (http://drupal.org/project/openlayers)
 */
function _osmbuildings_openlayers_layers() {
  $layers = array();

  $layer = new stdClass;
  $layer->api_version = 1;
  $layer->name = 'osmbuildings';
  $layer->title = 'OSMBuildings layer';
  $layer->description = 'osmbuildings';
  $layer->disabled = TRUE;
  $layer->data = array(
    'layer_type' => 'openlayers_layer_type_osmbuildings',
    'url' => array(
      0 => 'http://data.osmbuildings.org/0.2/',
    ),
    'isBaseLayer' => FALSE,
    'opacity' => 1.0,
    'projection' => array('EPSG:900913'),
  );
  $layers[$layer->name] = $layer;

  return $layers;
}
