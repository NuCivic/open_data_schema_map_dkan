<?php
/**
 * @file
 * open_data_schema_map_dkan.features.inc
 */

/**
 * Implements hook_open_data_schema_apis_defaults().
 */
function open_data_schema_map_dkan_open_data_schema_apis_defaults() {
  $open_data_schema_apis = array();

  // Exported Open Data API Map: Data.json
  $open_data_schema_apis['data_json'] = array(
    'name' => 'Data.json',
    'enabled' => 1,
    'machine_name' => 'data_json',
    'api_schema' => 'pod',
    'description' => NULL,
    'type' => 'node',
    'bundle' => 'dataset',
    'mapping' => array(
      'accessLevel' => array(
        'value' => '[node:field_public_access_level]',
        'type' => 'string',
      ),
      'accessLevelComment' => array(
        'value' => '',
        'type' => 'string',
      ),
      'accessURL' => array(
        'value' => '',
        'type' => 'string',
      ),
      'accrualPeriodicity' => array(
        'value' => '[node:field-frequency]',
        'type' => 'string',
      ),
      'bureauCode' => array(
        'value' => '',
        'type' => 'array',
      ),
      'contactPoint' => array(
        'value' => '',
        'type' => 'string',
      ),
      'dataDictionary' => array(
        'value' => '[node:field-data-dictionary]',
        'type' => 'string',
      ),
      'dataQuality' => array(
        'value' => '',
        'type' => 'boolean',
      ),
      'description' => array(
        'value' => '[node:body]',
        'type' => 'string',
      ),
      'distribution' => array(
        'odsm_entity_reference' => array(
          'value' => 'field_resources',
          'type' => '',
        ),
        'accessURL' => array(
          'value' => '[node:field-resources:Nth:field-link-api:url] || [node:field-resources:Nth:field_link_remote_file] || [node:field-resources:Nth:field-upload:url]',
          'type' => '',
        ),
        'format' => array(
          'value' => '[node:field-resources:Nth:field-format:name]',
          'type' => '',
        ),
      ),
      'format' => array(
        'value' => '',
        'type' => 'string',
      ),
      'identifier' => array(
        'value' => '[node:uuid]',
        'type' => 'string',
      ),
      'issued' => array(
        'value' => '',
        'type' => 'string',
      ),
      'keyword' => array(
        'value' => '[node:field-tags]',
        'type' => 'array',
      ),
      'landingPage' => array(
        'value' => '',
        'type' => 'string',
      ),
      'language' => array(
        'value' => 'en',
        'type' => 'array',
      ),
      'license' => array(
        'value' => '[node:field_license]',
        'type' => 'string',
      ),
      'mbox' => array(
        'value' => '[node:field-contact-email]',
        'type' => 'string',
      ),
      'modified' => array(
        'value' => '[node:changed]',
        'type' => 'string',
      ),
      'PrimaryITInvestmentUII' => array(
        'value' => '',
        'type' => 'string',
      ),
      'programCode' => array(
        'value' => '',
        'type' => 'array',
      ),
      'publisher' => array(
        'value' => '[node:og_group_ref]',
        'type' => 'string',
      ),
      'references' => array(
        'value' => '[node:field_related_content]',
        'type' => 'array',
      ),
      'spatial' => array(
        'value' => '[node:field_spatial]',
        'type' => 'string',
      ),
      'systemOfRecords' => array(
        'value' => '',
        'type' => 'string',
      ),
      'temporal' => array(
        'value' => '[node:field_temporal_coverage]',
        'type' => 'string',
      ),
      'theme' => array(
        'value' => '',
        'type' => 'array',
      ),
      'title' => array(
        'value' => '[node:title]',
        'type' => 'string',
      ),
      'webService' => array(
        'value' => '',
        'type' => 'string',
      ),
    ),
    'endpoint' => 'data.json',
    'arguments' => array(),
  );
  return $open_data_schema_apis;
}
