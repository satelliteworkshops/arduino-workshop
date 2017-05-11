#include "sensor.h"
#include <DHT.h>  // DHT sensor library

// data pin definition for sensor
#define DHT_DATA       7
#define DHT_TYPE       DHT22
#define DHT_FAHRENHEIT true

namespace Sensor {
  DHT dht = DHT(DHT_DATA, DHT_TYPE);

  void setup() {
    // initalize the sensor
    dht.begin();
  }

  int readTemp() {
    return dht.readTemperature(DHT_FAHRENHEIT);
  }
}
