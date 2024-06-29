/*
    Project name : Arduino Uno Raindrop Sensor 
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-raindrop-sensor
*/

// Pin connected to the analog output of the raindrop sensor
const int raindropPin = A0;
const int rainThreshold = 500;  // Adjust this threshold based on sensor calibration

void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  int moistureLevel = analogRead(raindropPin);  // Read moisture level

  if (moistureLevel > rainThreshold) {
    Serial.println("It's raining!");
  } else {
    Serial.println("No rain detected");
  }

  delay(1000);  // Delay for readability
}
