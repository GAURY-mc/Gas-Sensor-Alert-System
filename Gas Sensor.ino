const int gasSensor = A0;   // MQ sensor output
const int buzzer = 8;       // Buzzer pin
const int led = 9;          // LED pin

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(gasSensor); // Read sensor value

  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  if (gasLevel > 20) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);      // 🔥 LED ON: gas sensed
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);       // 💡 LED OFF: no gas
  }

  delay(1000);
}
