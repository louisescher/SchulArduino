/*
 * Dimmen einer LED
 * Louis Escher
 * 01.10.21
 */

int LED = 11;

void setup() {
  Serial.begin(9600);
}

void loop() {
  analogWrite(LED, 1);
}
