/**
 * OpenLayers OSMBuildings Handler
 */
Drupal.openlayers.layer.osmbuildings = function(title, map, options) {
  var layeroptions = {
    drupalID: options.drupalID
  }

  return new OpenLayers.Layer.Vector[options.type](title, layeroptions);
};
