<?php
header("Content-type: text/plain; charset=UTF-8");
if (isset($_GET['temperature']))
{
    $temp = $_GET['temperature'];
    // tempLog.txtにデータを保存
    $fp = fopen("tempLog.txt", "w");
    fwrite($fp, $temp);
    fclose($fp);
}
?>