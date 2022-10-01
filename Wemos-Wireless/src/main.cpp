#include <Arduino.h>
 #include <ESP8266WiFi.h>
#include <espnow.h>

/**
 * @brief Settings for wireless Serial
 * These settings are compiled into the code.
 */
#define DEVICE_ROLE   ESP_NOW_ROLE_CONTROLLER     // Sets the role of this device
#define DEVICE_NAME   "CONTROLLER_NODE"           // Sets the name of this device
#define WIFI_CHANNEL  1                           // Sets the channel of this device
#define SERIAL_TX     3                           // Sets the serialpin TX
#define SERIAL_RX     4                           // Sets the serialpin RX

/**
 * @brief Setup function that is called first.
 * This function starts the serial and wifi with esp-now functionality
 */
void setup() {
  // Setting up wifi-adapter
  WiFi.mode(WIFI_STA);

  //Setting up esp-now
  if (esp_now_init() != 0) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
  esp_now_set_self_role(DEVICE_ROLE);




}

void loop() {
  // put your main code here, to run repeatedly:
}