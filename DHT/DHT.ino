#include "DHT.h"

#define DHTPIN    2
#define DHTTYPE   DHT11

DHT dht(DHTPIN, DHTTYPE);   // Initialize DHT sensor.

void setup() {
  Serial.begin(9600);       // setup serial
  dht.begin();              // setup DHT
}

void loop() {
  float Humi = dht.readHumidity();
  float Temp_C = dht.readTemperature();
  float Temp_F = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(Humi) || isnan(Temp_C) || isnan(Temp_F)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  float HeatIndex_F = dht.computeHeatIndex(Temp_F, Humi);
  float HeatIndex_C = dht.computeHeatIndex(Temp_C, Humi, false);

  Serial.println(Humi);
}