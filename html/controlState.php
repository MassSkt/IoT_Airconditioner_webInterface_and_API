<?php
// CORS for Ajax
header('Access-Control-Allow-Origin: *');
header('Access-Control-Allow-Methods: GET, POST, PUT');
header('Access-Control-Max-Age: 3600');
header('Access-Control-Allow-Headers: Origin, X-Requested-With, Content-Type, Accept');

header("Content-type: text/plain; charset=UTF-8");
if (isset($_POST['state']))
{
  $state = $_POST['state'];
  // stateLog.txtにデータを保存
  $fp = fopen("stateLog.txt", "w");
  fwrite($fp, $state);
  fclose($fp);
}
?>