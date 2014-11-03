/**
 * OpenLayers OSMBuildings Handler
 */
Drupal.openlayers.layer.osmbuildings = function(title, map, options) {
  return new OSMBuildings(map).load();
};
