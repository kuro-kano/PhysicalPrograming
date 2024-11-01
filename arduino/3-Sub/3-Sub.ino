/*
 *
 * This Arduino UNO R4 code is made available for public use without any restriction
 *
 */

#include <WiFiS3.h>
#include <MQTTClient.h>

const char WIFI_SSID[] = "realme 10T 5G";          // CHANGE TO YOUR WIFI SSID
const char WIFI_PASSWORD[] = "k9wvgpm4";  // CHANGE TO YOUR WIFI PASSWORD

const char MQTT_BROKER_ADRRESS[] = "phycom.it.kmitl.ac.th";  // CHANGE TO MQTT BROKER'S ADDRESS
const int MQTT_PORT = 1883;
const char MQTT_CLIENT_ID[] = "66070091";  // CHANGE IT AS YOU DESIRE
const char MQTT_USERNAME[] = "";                                            // CHANGE IT IF REQUIRED, empty if not required
const char MQTT_PASSWORD[] = "";                                            // CHANGE IT IF REQUIRED, empty if not required

// The MQTT topics that Arduino should publish/subscribe
const char PUBLISH_TOPIC[] = "66070091/sunray";    // CHANGE IT AS YOU DESIRE

const char SUBSCRIBE_PICK[] = "66070091/sunray_pckzy";  // CHANGE IT AS YOU DESIRE
const char SUBSCRIBE_SOM[] = "66070091/sunray_somchoon";  // CHANGE IT AS YOU DESIRE
const char SUBSCRIBE_ATARU[] = "66070091/sunray_ohm";  // CHANGE IT AS YOU DESIRE

const int PUBLISH_INTERVAL = 2000;  // 2 seconds

WiFiClient network;
MQTTClient mqtt = MQTTClient(256);

unsigned long lastPublishTime = 0;

int som = 0;
int pick = 0;
int ataru = 0;

void setup(){
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);

  int status = WL_IDLE_STATUS;
  while (status != WL_CONNECTED) {
    Serial.print("Arduino UNO R4 - Attempting to connect to SSID: ");
    Serial.println(WIFI_SSID);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    // wait 10 seconds for connection:
    delay(10000);
  }
  // print your board's IP address:
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  connectToMQTT();
}

void loop() {
  mqtt.loop();

  if (millis() - lastPublishTime > PUBLISH_INTERVAL) {
    sendToMQTT();
    lastPublishTime = millis();
  }
}

void connectToMQTT() {
  // Connect to the MQTT broker
  mqtt.begin(MQTT_BROKER_ADRRESS, MQTT_PORT, network);

  // Create a handler for incoming messages
  mqtt.onMessage(messageHandler);

  Serial.print("Arduino UNO R4 - Connecting to MQTT broker");

  while (!mqtt.connect(MQTT_CLIENT_ID, MQTT_USERNAME, MQTT_PASSWORD)) {
    Serial.print(".");
    delay(100);
  }
  Serial.println();

  if (!mqtt.connected()) {
    Serial.println("Arduino UNO R4 - MQTT broker Timeout!");
    return;
  }

  // Subscribe to a topic, the incoming messages are processed by messageHandler() function
  if (mqtt.subscribe(SUBSCRIBE_PICK)){
    Serial.print("Arduino UNO R4 - Subscribed to the topic: ");
    Serial.println(SUBSCRIBE_PICK);}
  else{
    Serial.print("Arduino UNO R4 - Failed to subscribe to the topic: ");
    Serial.println(SUBSCRIBE_PICK);}

  if (mqtt.subscribe(SUBSCRIBE_SOM)){
    Serial.print("Arduino UNO R4 - Subscribed to the topic: ");
    Serial.println(SUBSCRIBE_SOM);}
  else{
    Serial.print("Arduino UNO R4 - Failed to subscribe to the topic: ");
    Serial.println(SUBSCRIBE_SOM);}

  if (mqtt.subscribe(SUBSCRIBE_ATARU)){
    Serial.print("Arduino UNO R4 - Subscribed to the topic: ");
    Serial.println(SUBSCRIBE_ATARU);}
  else{
    Serial.print("Arduino UNO R4 - Failed to subscribe to the topic: ");
    Serial.println(SUBSCRIBE_ATARU);}
  Serial.println("Arduino UNO R4 - MQTT broker Connected!");
}

void sendToMQTT() {

  // digitalWrite(trigPin, LOW);
  // delayMicroseconds(2);
  
  // // Set the trigPin HIGH for 10 microseconds
  // digitalWrite(trigPin, HIGH);
  // delayMicroseconds(10);
  // digitalWrite(trigPin, LOW);
  
  // Read the echoPin, return the sound wave travel time in microseconds
  // duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in cm and inches
  // float distanceCm = duration * 0.034 / 2;
  // // distanceInch = duration * 0.0133 / 2;

  // String val_str;

  // if (distanceCm >= 20){
  //   val_str = "on";
  // } else {
  //   val_str = "off";
  // }

  // // int val = millis();
  // // int val = analogRead(A0);

  int val_str = 0;
  if (ataru >= som && ataru >= pick){
    val_str = ataru; 
  }
  else if (som >= ataru && som >= pick){
    val_str = som; 
  }
  else if (pick >= ataru && pick >= som){
    val_str = pick;
  }


  if (val_str >= 1000120)


  // Convert the string to a char array for MQTT publishing
  char messageBuffer[10];
  val_str.toCharArray(messageBuffer, 10);

  // Publish the message to the MQTT topic
  mqtt.publish(PUBLISH_TOPIC, messageBuffer);

  // Print debug information to the Serial Monitor in one line
  Serial.println("Arduino UNO R4 - sent to MQTT: topic: " + String(PUBLISH_TOPIC) + " | payload: " + String(messageBuffer));
}

// void sendToMQTT() {
//   // Check if there's data available to read from the Serial Monitor
//   if (Serial.available() > 0) {
//     // Read the input from the Serial Monitor as a string
//     String val_str = Serial.readStringUntil('\n');

//     // Convert the string to a char array for MQTT publishing
//     char messageBuffer[10];
//     val_str.toCharArray(messageBuffer, 10);

//     // Publish the message to the MQTT topic
//     mqtt.publish(PUBLISH_TOPIC, messageBuffer);

//     // Print debug information to the Serial Monitor in one line
//     Serial.println("Arduino UNO R4 - sent to MQTT: topic: " + String(PUBLISH_TOPIC) + " | payload: " + String(messageBuffer));
//   }
// }



void messageHandler(String &topic, String &payload) {
  Serial.println("Arduino UNO R4 - received from MQTT: topic: " + topic + " | payload: " + payload);

  if (topic == "66070091/sunray_pckzy"){ pick = payload; }
  else if (topic == "66070091/sunray_somchoon"){ som = payload; }
  else if (topic == "66070091/sunray_ohm"){ ataru = payload; }

}