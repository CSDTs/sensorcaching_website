<?php

/**
* Implementation of hook_views_data
*/

function  sensorcache_views_views_data() {
   error_log("Loading views");
	/* sensors Table */
   $data['sensors']['table']['group'] = t('Sensors');
	/* sensors_data Table */
   $data['sensors_data']['table']['group'] = t('Sensors Data');

	/* sensors table fields */
   $data['sensors']['table']['base'] = array(
      'field' => 'sensor_id',
      'title' => t('Sensors List'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'sensordata',
      'weight' => -10,
   );

  $data['sensors']['sensor_id'] = array(
    'title' => t('Sensor ID'),
    'help' => t('Sensor ID'), 
    'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
   );

   $data['sensors']['owner_id'] = array(
      'title' => t('Owner ID of a sensor'),
      'help' => t('Owner ID of a sensor'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

    $data['sensors']['sensor_name'] = array(
      'title' => t('Sensor Name'),
      'help' => t('Sensor Name'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['sensors']['latitude'] = array(
      'title' => t('Sensors Latitude'),
      'help' => t('Sensors Latitude'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'date_views_filter_handler',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['sensors']['longitude'] = array(
      'title' => t('Sensors Longitude'),
      'help' => t('Sensors Longitude'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['sensors']['type'] = array(
      'title' => t('Sensor Type'),
      'help' => t('Sensor Type'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'date_views_filter_handler',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

	/* sensors_data table fields */
   $data['sensors_data']['table']['base'] = array(
      'field' => 'sensor_id',
      'title' => t('Data ID'),
      'help' => t('Autoincremented ID field, to enable views integration'),
      'database' => 'sensordata',
      'weight' => -10,
   );

   $data['sensors_data']['data_id'] = array(
      'title' => t('Data ID'),
      'help' => t('Data ID'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

  $data['sensors_data']['sensor_id'] = array(
    'title' => t('Sensor ID'),
    'help' => t('Sensor ID'), 
    'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
  );

   $data['sensors_data']['value'] = array(
      'title' => t('Value'),
      'help' => t('Value'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   $data['sensors_data']['date_time'] = array(
      'title' => t('Date Time'),
      'help' => t('Date Time'),
      'field' => array(
         'handler' => 'views_handler_field',
         ' click sortable' => TRUE,
      ),
      'sort' => array(
         'handler' => 'views_handler_sort',
      ),
      'filter' => array(
         'handler' => 'date_views_filter_handler',
      ),
      'argument' => array(
         'handler' => 'views_handler_argument_string',
      ),
    );

   return $data;
}
