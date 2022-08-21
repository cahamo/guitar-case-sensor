/*
 * Arduino sketch used to test various combinations of resistors for the
 * Case Detection Circuit of the Guitar Case Sensor project.
 *
 * See https://cahamo.delphidabbler.com/projects/guitar-case-sensor/
 *
 * Takes a specified number readings from a specified Arduino analogue pin and
 * displays the minimum and maximum readings read.
 *
 * <<< All the work of this sketch takes place in the setup() function >>>
 */

#include <Arduino.h>

void setup() {

  // Parameters - modify to change analogue pin & number of readings taken

  const uint8_t inputPin = A1;
  const int readingCount = 200;

  // Initialise

  pinMode(inputPin, INPUT);
  Serial.begin(9600);

  // Take readingCount readings, recording min and max

  int minReading = 2000;
  int maxReading = 0;

  for (int i = 0; i < readingCount; i++ ) {
    int reading = analogRead(inputPin);
    if (reading > maxReading) maxReading = reading;
    if (reading < minReading) minReading = reading;
  }

  // Output results

  Serial.print(F("Minimum: "));
  Serial.println(minReading);
  Serial.print(F("Maximum: "));
  Serial.println(maxReading);
}

// loop() is unused
void loop() {
}
