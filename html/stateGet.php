<?php
$fp = fopen("stateLog.txt", "r");
while ($line = fgets($fp)) {
  // 取得した値を送信する
  print($line);
}
fclose($fp);
?>