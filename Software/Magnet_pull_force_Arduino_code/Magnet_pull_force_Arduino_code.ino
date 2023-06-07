#include "HX711.h"
#define CALIBRATION_FACTOR -114370.00
byte pinData = 4;
byte pinClk = 5;
int Reset = 6;
float currentValue = 0;
float minValue = 0;

// define HX711
HX711 scale;

void setup() {
  Serial.begin(2000000);
  pinMode(Reset, INPUT);
  scale.begin(pinData, pinClk);
  scale.set_scale(CALIBRATION_FACTOR);
  scale.tare();
}

void loop() {
  int ResetValue = digitalRead(Reset);
  /*Serial.print("Reading: ");*/
  currentValue = -scale.get_units();

  if (currentValue > minValue) {
    minValue = currentValue;
  }
    Serial.println(minValue);
  if (ResetValue == 0) {
    minValue = 0;
  }
}
