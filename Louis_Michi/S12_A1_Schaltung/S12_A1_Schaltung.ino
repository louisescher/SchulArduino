/*
 * Arduino als Messgerät
 * Michael Flach
 * 08.10.21
 */

int LDR = 1;
int Helligkeit;
int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Helligkeit = analogRead(LDR);
  Serial.println(Helligkeit);
  delay(200);
  if(Helligkeit<1000){
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
  } else {
    digitalWrite(LED, HIGH);
    delay(250);
    digitalWrite(LED, LOW);
  }
}
