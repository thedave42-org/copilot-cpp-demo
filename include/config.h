/*
This include file will be used for configuration at build time.
The application should use an include file to define the following information
  1. The WiFi SSID
  2. The WiFi password
  3. The MQTT server
  4. The MQTT client ID
  5. The MQTT username
  6. The MQTT password
  7. The MQTT topic root
  */
#ifndef CONFIG_H
#define CONFIG_H

#define WIFI_SSID "your_ssid"
#define WIFI_PASSWORD "your_password"

#define MQTT_SERVER "your_mqtt_server"
#define MQTT_CLIENT_ID "your_client_id"
#define MQTT_USERNAME "your_username"
#define MQTT_PASSWORD "your_password"
#define MQTT_TOPIC_ROOT "your_topic_root"

#endif
