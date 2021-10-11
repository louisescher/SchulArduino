/*
 * Arduino als Messgerät
 * Michael Flach
 * 08.10.21
 */

int Button = 1;
int Helligkeit;
int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Helligkeit = digitalRead(Button);
  Serial.println(Helligkeit);
  delay(200);
}
