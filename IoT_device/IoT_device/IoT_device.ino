#include <WiFi.h>

const char* ssid = "SPWN_H36_984C2A"; //ご自分のルーターのSSIDに書き換えてください。
const char* password = "j5t56gyh1ff8yg5"; //ご自分のルーターのパスワードに書き換えてください。

//int data_on[] = {316, 163, 34, 46, 41, 118, 44, 35, 34, 46, 33, 126, 34, 45, 42, 118, 34, 45, 44, 35, 34, 125, 42, 118, 34, 125, 41, 38, 34, 125, 42, 38, 34, 126, 41, 118, 34, 125, 34, 46, 33, 46, 42, 38, 34, 46, 34, 125, 42, 118, 34, 45, 34, 126, 34, 45, 42, 117, 34, 125, 34, 45, 34, 46, 44, 35, 34, 126, 34, 45, 34, 125, 35, 44, 34, 46, 33, 125, 34, 126, 34, 125, 41, 118, 34, 125, 41, 38, 34, 45, 42, 118, 34, 125, 34, 125, 34, 125, 41, 38, 34, 45, 34, 126, 34, 126, 41, 38, 34, 46, 33, 46, 34, 45, 34, 125, 42, 118, 43, 116, 42, 38, 34, 126, 34, 125, 34, 125, 34, 126, 34, 45, 34, 46, 41, 38, 34, 125, 34, 45, 42, 38, 41, 38, 42, 38, 34, 125, 34, 45, 42, 118, 34, 124, 34, 126, 34, 125, 34, 125, 34, 126, 41, 38, 34, 125, 34, 45, 34, 46, 34, 46, 41, 38, 34, 46, 34, 46, 34, 126, 40, 118, 42, 118, 44, 114, 34, 125, 34, 126, 41, 118, 41, 118, 41, 38, 42, 38, 36, 44, 41, 38, 34, 45, 34, 45, 42, 38, 34, 46, 33, 126, 41, 118, 34, 124, 34, 46, 41, 118, 44, 114, 34, 125, 41, 118, 41, 38, 34, 45, 34, 46, 41, 118, 41, 38, 35, 48, 42, 35, 33, 45, 34, 126, 34, 125, 34, 128, 31, 126, 34, 125, 41, 118, 34, 45, 34, 125, 34, 45, 41, 38, 44, 35, 34, 46, 34, 46, 34, 45, 34, 125, 41, 38, 35, 125, 41, 118, 42, 38, 34, 125, 42, 118, 34, 125, 41, 118, 41, 38, 34, 46, 41, 38, 42, 118, 34, 45, 42, 38, 34, 46, 33, 46, 34, 126, 41};
//int data_on[] = {316,165,34,43,36,125,34,45,34,43,36,125,34,45,45,114,34,45,34,45,34,125,34,125,34,125,34,45,34,125,34,45,34,125,34,125,34,125,34,43,36,45,34,43,36,45,34,125,34,125,34,43,37,125,34,45,34,125,34,125,34,45,34,43,36,45,34,125,34,45,34,125,34,45,34,45,34,125,34,125,34,125,34,125,34,125,34,45,34,45,34,125,34,125,34,125,34,125,34,45,34,45,34,125,34,125,34,45,34,43,36,45,34,45,34,125,34,125,34,125,34,43,36,125,34,125,34,125,34,125,34,45,34,43,36,45,34,125,34,45,34,43,36,45,34,45,34,125,34,45,39,120,34,125,34,125,34,125,34,125,34,125,34,45,34,125,34,45,34,45,34,43,36,45,34,45,34,45,34,125,34,125,34,125,34,125,34,125,34,125,34,125,34,125,34,45,34,45,34,45,34,45,34,45,34,45,34,45,34,45,34,125,34,125,34,125,34,45,34,125,34,125,34,125,34,125,34,45,34,43,36,43,36,125,34,43,36,45,34,43,36,45,34,125,34,125,34,125,34,125,34,125,34,125,34,45,34,125,34,43,36,45,34,45,34,45,34,45,34,45,34,125,34,45,34,125,34,125,34,45,34,125,34,125,34,125,34,125,34,45,34,45,34,43,36,125,34,45,34,45,34,45,34,45,34,125,34};
int data_on[] = {336, 144, 56, 21, 59, 103, 57, 21, 59, 21, 59, 103, 57, 21, 59, 103, 56, 21, 59, 21, 59, 103, 56, 103, 57, 102, 57, 21, 59, 103, 56, 21, 59, 103, 56, 103, 57, 103, 57, 21, 59, 21, 59, 21, 58, 21, 58, 103, 56, 103, 57, 21, 59, 103, 57, 21, 59, 103, 56, 103, 56, 21, 59, 21, 59, 21, 58, 103, 57, 20, 59, 103, 56, 21, 59, 21, 58, 103, 56, 103, 57, 103, 57, 103, 57, 103, 57, 21, 59, 21, 59, 103, 56, 103, 56, 103, 56, 103, 56, 21, 59, 21, 58, 103, 57, 103, 56, 21, 59, 21, 59, 21, 58, 21, 58, 103, 56, 103, 56, 103, 57, 21, 59, 103, 56, 103, 56, 103, 57, 103, 56, 21, 59, 21, 59, 21, 59, 103, 56, 21, 59, 21, 59, 21, 59, 21, 58, 103, 56, 21, 58, 103, 56, 103, 56, 103, 56, 103, 56, 103, 57, 103, 56, 21, 59, 103, 56, 21, 59, 21, 58, 21, 58, 21, 58, 21, 58, 21, 58, 103, 56, 103, 56, 103, 56, 103, 56, 103, 56, 103, 56, 103, 56, 103, 56, 21, 58, 21, 58, 21, 58, 21, 58, 21, 58, 21, 58, 22, 58, 21, 58, 103, 56, 103, 56, 103, 56, 21, 58, 103, 56, 103, 56, 103, 56, 103, 56, 21, 58, 21, 58, 21, 58, 103, 56, 21, 58, 21, 59, 20, 58, 21, 58, 103, 56, 103, 56, 103, 56, 103, 57, 103, 56, 103, 56, 21, 59, 103, 56, 21, 58, 21, 58, 21, 58, 21, 58, 21, 58, 21, 58, 103, 56, 21, 58, 103, 56, 103, 56, 21, 58, 103, 56, 103, 56, 103, 56, 103, 56, 21, 58, 21, 58, 21, 1, 1, 55, 103, 56, 21, 58, 21, 1, 1, 55, 21, 1, 1, 55, 21, 1, 1, 55, 103, 56};

int data_off[] = {314, 166, 34, 45, 34, 125, 34, 45, 34, 46, 34, 125, 34, 45, 34, 125, 34, 45, 34, 46, 34, 125, 34, 125, 34, 126, 34, 45, 34, 125, 34, 45, 34, 125, 34, 126, 34, 125, 34, 45, 34, 45, 34, 45, 34, 45, 34, 125, 34, 125, 34, 45, 34, 125, 34, 45, 34, 125, 34, 126, 34, 45, 34, 46, 33, 45, 34, 126, 34, 45, 34, 125, 34, 45, 34, 45, 34, 125, 34, 126, 34, 126, 34, 125, 34, 126, 34, 45, 34, 125, 34, 125, 34, 126, 34, 126, 34, 125, 34, 45, 34, 46, 33, 126, 34, 45, 34, 46, 34, 45, 34, 46, 33, 45, 34, 126, 34, 126, 34, 126, 34, 45, 33, 125, 35, 124, 34, 125, 34, 125, 34, 46, 33, 46, 33, 45, 34, 125, 34, 45, 34, 45, 34, 45, 34, 45, 34, 125, 34, 45, 34, 126, 34, 126, 34, 125, 34, 125, 34, 125, 34, 128, 31, 45, 34, 126, 34, 45, 34, 46, 33, 46, 33, 46, 33, 46, 33, 46, 34, 125, 34, 125, 34, 125, 34, 124, 34, 125, 34, 125, 34, 125, 34, 125, 34, 45, 34, 45, 34, 45, 34, 45, 34, 46, 34, 46, 34, 45, 34, 45, 34, 125, 34, 125, 34, 125, 34, 46, 34, 125, 34, 125, 34, 125, 34, 125, 34, 45, 34, 45, 34, 46, 33, 125, 34, 45, 34, 46, 34, 45, 34, 45, 34, 125, 34, 125, 34, 127, 32, 125, 34, 126, 34, 124, 34, 46, 41, 118, 34, 46, 34, 46, 33, 46, 34, 45, 34, 45, 34, 46, 34, 125, 34, 46, 34, 125, 34, 125, 34, 45, 34, 125, 34, 126, 34, 126, 34, 125, 34, 45, 34, 46, 34, 45, 34, 125, 34, 45, 34, 45, 34, 46, 33, 45, 34, 126, 34};

int IR_SEND_PIN = 27; // 赤外線LEDのピン

const char* host = "iotinterface.php.xdomain.jp";
//const char* host = "iotdevice.php.xdomain.jp";

int on_off_flag = 2;

void setup() {
  Serial.begin(115200);
  delay(10);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  // 出力に設定
  pinMode(IR_SEND_PIN, OUTPUT);
}

void loop() {
  delay(100);

  Serial.print("connecting to ");
  Serial.println(host);

  // Use WiFiClient class to create TCP connections
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }

  // We now create a URL for the request
  String url = "/stateGet.php";

  Serial.print("Requesting URL: ");
  Serial.println(url);

  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" +
               "Connection: close\r\n\r\n");
  int timeout = millis() + 5000;
  while (client.available() == 0) {
    if (timeout - millis() < 0) {
      Serial.println(">>> Client Timeout !");
      client.stop();
      return;
    }
  }

  // Read all the lines of the reply from server and print them to Serial
  int i = 0;
  int flag_temp = on_off_flag;
  while (client.available()) {
    String line = client.readStringUntil('\r');
    if (i == 8) {
      if (line.lastIndexOf("OFF") == -1) {
        Serial.println("on");
        on_off_flag = 0;
      } else {
        Serial.println("off");
        on_off_flag = 1;
      }
      break;
    }
    i++;
  }
  if (flag_temp != on_off_flag) {
    if (on_off_flag == 0) {
      sendSignal(data_on, sizeof(data_on) / sizeof(data_on[0]));
    } else {
      sendSignal(data_off, sizeof(data_off) / sizeof(data_off[0]));
    }
  }

  Serial.println();
  Serial.println("closing connection");
}

void sendSignal(int data1[], int num) {
  int dataSize = num;
  int j = 0;
  for (int cnt = 0; cnt < dataSize; cnt++) {
    unsigned long len = data1[cnt] * 10;
    unsigned long us = micros();
    //Serial.println(len);
    do {
      digitalWrite(IR_SEND_PIN, 1 - (cnt & 1));
      delayMicroseconds(8.8);
      digitalWrite(IR_SEND_PIN, 0);
      delayMicroseconds(17.5);
      //Serial.println(j);
    } while (long(us + len - micros()) > 0); // 送信時間に達するまでループ
    //digitalWrite(IR_SEND_PIN, 0);
  }
}
