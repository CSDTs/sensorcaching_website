<?php
require("phpsqlajax_dbinfo.php");

// Start XML file, create parent node

$dom = new DOMDocument("1.0");
$node = $dom->createElement("markers");
$parnode = $dom->appendChild($node);

// Connection to MySQL DB
// Opens a connection to a MySQL server
$connection=mysql_connect ('YOUR_HOST', $username, $password);
if (!$connection) {
  die('Not connected : ' . mysql_error());
}

// Set the active MySQL database
$db_selected = mysql_select_db($database, $connection);
if (!$db_selected) {
  die ('Can\'t use db : ' . mysql_error());
}

// Select all the rows in the markers table
$query = "SELECT sensor_id, sensor_name, latitude, longitude, type FROM sensors";
$result = mysql_query($query);
if (!$result) {
  die('Invalid query: ' . mysql_error());
}

header("Content-type: text/xml");


while ($row = @mysql_fetch_assoc($result)) {
$node = $dom->createElement("marker");  
  $newnode = $parnode->appendChild($node);   
  $newnode->setAttribute("id", $row['sensor_id']);
  $newnode->setAttribute("name", $row['sensor_name']);  
  $newnode->setAttribute("lat", $row['latitude']);  
  $newnode->setAttribute("lng", $row['longitude']);  
  $newnode->setAttribute("type", $row['type']);
}

echo $dom->saveXML();

?>
