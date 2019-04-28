# About
This application is web application and API for IoT module.
You can access to this application by uploading all these files to a certain web (PHP) server.

## interface
You can change ON/OFF state by clicking the button.
Templerature is updated every 1sec.

http://iotdevice.php.xdomain.jp/

## How does this work
By clicking the ON/OFF button, Ajax(javascript) POST method is sent to "controlState.php".The PHP writes the state to stateLog.txt.
Ajax excecutes scheduled GET method to "getTemp.php". The php reads current temperature written in tempLog.txt.(This log file is updated by your IoT device) 

# Connections to the IoT device
## how to access to the ON/OFF state
GET method to the following URL enables you to get current ON/OFF state.
http://iotdevice.php.xdomain.jp/stateGet.php

## How to register current temperature

GET method with temperature parameter registers the current temperature.

e.g.
http://iotdevice.php.xdomain.jp/writeTemp.php?temperature=40

PHP writeTemp dumps the current Temperature to tempLog.txt 