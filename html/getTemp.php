<?php

// CORS for Ajax
header('Access-Control-Allow-Origin: *');
header('Access-Control-Allow-Methods: GET, POST, PUT');
header('Access-Control-Max-Age: 3600');
header('Access-Control-Allow-Headers: Origin, X-Requested-With, Content-Type, Accept');

$fp = fopen("tempLog.txt", "r");
while ($line = fgets($fp)) {
  // 取得した値を送信する
  print($line);
}
fclose($fp);
?>