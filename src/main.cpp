/*
Create a application that monitors the temperature and pressure from a sensor and sends that information to a server.
- The application is using a ESP8266 microcontroller.
- The application is using a BMP280 sensor
- The application should use the Adafuit_BMP280 library to read the temperature and pressure from the sensor.
- The application should use the ESP8266WiFi library to connect to a WiFi network.
- The application should use MQTT to connect to and send the temperature and pressure to a server.
- The application should only use client methods from the PubSubClient_imroy_ library that are defined in .pio/libdeps/esp12e/PubSubClient_imroy_/src/PubSubClient.h.  That library does not define a method named setServer.
- The application use the client.set_server method defined in .pio/libdeps/esp12e/PubSubClient_imroy_/src/PubSubClient.h which is defined as `set_server(String hostname, uint16_t port = 1883);` where the hostname is the server value from the include file include/config.h.
- The application should use the client.connect method defined in .pio/libdeps/esp12e/PubSubClient_imroy_/src/PubSubClient.h which is defined as `bool connect(String id);` where the id comes from set_server
- The application should use the TickerScheduler library to schedule the reading and sending of the temperature and pressure.
- The application should make sure that when it calls the TickerScheduler.add method defined in .pio/libdeps/esp12e/TickerScheduler/src/TickerScheduler.h that it is using the correct version of the method.  The correct version of the method is defined as `bool add(uint8_t i, uint32_t period, tscallback_t, void *, boolean shouldFireNow = false);` where the period is the number of milliseconds between calls to the callback function.
- The application should use the include file include/config.h to define the following information
  1. The WiFi SSID
  2. The WiFi password
  3. The MQTT server
  4. The MQTT client ID
  5. The MQTT username
  6. The MQTT password
  7. The MQTT topic root
- The application should generate an MQTT topic based on the MQTT topic root and the client ID 
*/
