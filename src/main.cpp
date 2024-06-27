/*
Create a application that monitors the temperature and pressure from a sensor and sends that information to a server.
- The application is using a ESP8266 microcontroller.
- The application is using a BMP280 sensor
- The application should use the Adafuit_BMP280 library to read the temperature and pressure from the sensor.
- The application should use the ESP8266WiFi library to connect to a WiFi network.
- The application should use MQTT to connect to and send the temperature and pressure to a server.
- The application should use the PubSubClient library to connect to the MQTT server.
- The application should use the TicketScheduler library to schedule the reading and sending of the temperature and pressure.
- The application should use the include file #file:include/config.h to define the following information
  1. The WiFi SSID
  2. The WiFi password
  3. The MQTT server
  4. The MQTT client ID
  5. The MQTT username
  6. The MQTT password
  7. The MQTT topic root
- The application should generate an MQTT topic based on the MQTT topic root and the client ID 
*/
