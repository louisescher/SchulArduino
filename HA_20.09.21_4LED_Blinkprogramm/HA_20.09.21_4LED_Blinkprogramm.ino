/*
 * Blinkprogramm für 4 LEDs.
 * LEDs in Slot 13 (Built-in), 12, 11 und 10 sollen nacheinander blinken.
 * 21.09.2021
 * Louis Escher
 */

 int LED1 = 13;
 int LED2 = 12;
 int LED3 = 11;
 int LED4 = 10;

 int delayMS = 1000;

 
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(delayMS);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(delayMS);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(delayMS);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  delay(delayMS);
  digitalWrite(LED4, LOW);
}