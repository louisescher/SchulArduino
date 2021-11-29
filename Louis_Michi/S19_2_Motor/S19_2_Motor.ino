/*
 * Haha, Motor go weeee
 * 6.9.420
 * Shreck
 */

int analog = 9;
int in1 = 12;
int in2 = 13;

int sec = 1000;

void setup() {
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  analogWrite(analog, 200);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(sec);
}
