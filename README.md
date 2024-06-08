# Raindrop Sensor with LED and LCD Display

## Description

This project demonstrates the use of a raindrop sensor with an Arduino to detect rain and display the sensor readings on an LCD display. Additionally, an LED is controlled based on the rain status. The Arduino reads the analog value from the raindrop sensor, compares it to a threshold, and determines if it's raining or not. This information is displayed on both the Serial Monitor and the LCD display, providing real-time feedback.

## Components Needed

1. **Arduino UNO**
2. **Raindrop Sensor**
3. **LED**
4. **16x2 LCD Display**
5. **Resistors**
6. **Jumper Wires**
7. **Breadboard**

## Circuit Wiring

1. **Raindrop Sensor:**
   - Connect the raindrop sensor to analog pin **A0** on the Arduino.
   - Connect the sensor's VCC pin to 5V and GND pin to GND on the Arduino.

2. **LED:**
   - Connect the LED's anode (longer leg) to digital pin **6** on the Arduino.
   - Connect the LED's cathode (shorter leg) to GND on the Arduino via a current-limiting resistor.

3. **LCD Display:**
   - Connect the LCD display's RS, EN, D4, D5, D6, and D7 pins to digital pins **7, 8, 9, 10, 11,** and **12** on the Arduino.
   - Connect the LCD display's VCC pin to 5V and GND pin to GND on the Arduino.

## Instructions

1. **Upload the Code:**
   - Copy and paste the provided code into the Arduino IDE.
   - Verify and upload the code to the Arduino board.

2. **Monitor the Output:**
   - Open the Serial Monitor to view the sensor readings and rain status.
   - Observe the LCD display for real-time updates on the rain status and sensor values.

## Project Operation

- **Initialization:**
  - The Arduino initializes the Serial Monitor, LED pin, and LCD display.
  - The LCD displays a static message indicating the Raindrop Sensor.

- **Rain Detection:**
  - The Arduino reads the analog value from the raindrop sensor.
  - It compares the value to a threshold to determine if it's raining or not.
  - The LED is controlled accordingly, turning on when it's raining and off when it's clear.

- **Feedback Display:**
  - The sensor value and rain status are printed to the Serial Monitor.
  - The LCD displays the sensor value and whether it's raining or clear.

## Applications

1. **Weather Monitoring:** Detecting rain for weather stations or IoT projects.
2. **Garden Automation:** Automatically controlling sprinkler systems based on rain detection.
3. **Smart Home Systems:** Integrating rain detection into home automation for closing windows or triggering alerts.

---

### Whether you're working on electronics projects, IoT applications, or robotics innovations, Projects Learner is your go-to platform for guidance and expertise.

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Made for you with ❣️ from ProjectsLearner