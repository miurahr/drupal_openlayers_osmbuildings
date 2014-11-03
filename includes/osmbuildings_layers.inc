<?php 
/**
 * @file
 * Provides hooks for integration with OpenLayers (http://drupal.org/project/openlayers)
 */
function _osmbuildings_openlayers_layers() {
  $layers = array();

  $openlayers_layers = new stdClass;
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'osmbuildings';
  $openlayers_layers->title = 'OSMBuildings layer';
  $openlayers_layers->description = 'osmbuildings';
  $openlayers_layers->disabled = TRUE;
  $openlayers_layers->data = array(
    'layer_type' => 'openlayers_layer_type_osmbuildings',
    'url' => array(
      0 => 'http://data.osmbuildings.org/0.2/',
    ),
    'isBaseLayer' => FALSE,
    'opacity' => 1.0,
    'projection' => array('EPSG:900913'),
  );
  $layers["openlayers_osmbuildings"] = $openlayers_layers;

  return $layers;
}
