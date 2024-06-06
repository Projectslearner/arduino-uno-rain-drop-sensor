/*
    Code by : Projects_learner
    Project name : Rain Sensor using Ardino UNO
    Modified Date : 06-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-rain-drop-sensor
*/

#include <LiquidCrystal.h>

// Define the LCD pin connections
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define the LED and sensor pins
#define ledPin 6         // LED connected to pin 6
#define sensorPin A0     // Raindrop sensor connected to analog pin A0

// Define the threshold for detecting rain
#define RAIN_THRESHOLD 500  // Adjust this value based on your sensor and testing

void setup() 
{
  Serial.begin(9600);    // Initialize serial communication at 9600 baud
  
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
  digitalWrite(ledPin, LOW); // Ensure the LED is initially off

  lcd.begin(16, 2);     // Initialize the LCD, 16 columns and 2 rows
  lcd.print("Raindrop Sensor"); // Display a static message
}

void loop()
{
  int sensorValue = analogRead(sensorPin);  // Read the analog value from the raindrop sensor

  // Determine if it's raining based on the threshold
  bool isRaining = sensorValue < RAIN_THRESHOLD;
  
  // Control the LED based on whether it's raining
  digitalWrite(ledPin, isRaining ? HIGH : LOW);

  // Print the sensor value to the Serial Monitor
  Serial.print("Analog output: ");
  Serial.print(sensorValue);
  Serial.print(" - Status: ");
  Serial.println(isRaining ? "Raining" : "Clear");

  // Display the sensor value and status on the LCD
  lcd.setCursor(0, 1);          // Move to the beginning of the second row
  lcd.print("Value: ");
  lcd.print(sensorValue);       // Display the sensor value
  lcd.print("      ");          // Clear any remaining characters

  // Display the status based on the threshold
  lcd.setCursor(10, 1);         // Move to a suitable position on the second row
  lcd.print(isRaining ? "Rain" : "Clear");

  delay(500); // Delay for stability
}
