# Gas Sensor Alert System 🔥

This project uses an **MQ gas sensor** with an **Arduino Uno** to detect the presence of gases like LPG, smoke, or alcohol. When the gas level crosses a certain threshold, it triggers a **buzzer** and **LED** alarm.

## 🚀 Features
- Real-time gas detection using analog readings
- Buzzer and LED alert
- Simple, beginner-friendly Arduino code

## 🛠️ Components Used
- Arduino Uno
- MQ-2 Gas Sensor
- LED
- Buzzer
- Jumper Wires
- Breadboard

## 🔌 Circuit Diagram


| Arduino | MQ Sensor |
|---------|-----------|
| A0      | A0        |
| 5V      | VCC       |
| GND     | GND       |

## 📟 Code

```cpp
const int gasSensor = A0;
const int buzzer = 8;
const int led = 9;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(gasSensor);
  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  if (gasLevel > 20) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }

  delay(1000);
}
