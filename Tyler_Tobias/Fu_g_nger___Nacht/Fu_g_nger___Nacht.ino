/*
  Tyler Deck
  if
  16.1.2023
*/


int LDR = 1;
int Helligkeit;
int LED = 13;
int LED2 = 12;
int LED3 = 11;
int MS = 500;
int sensor = 7;
int sensorwert;


void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);
}

void ampel ()
{
  digitalWrite(LED, HIGH); //geht an
  delay(1000);            //Pause (1 sekunde)
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
}

void nacht () {
  digitalWrite(LED2, HIGH);
  delay(MS);
  digitalWrite(LED2, LOW);
  delay(MS);
}





















void loop()
{ Helligkeit = analogRead(LDR);
  Serial.println(Helligkeit);
    sensorwert = digitalRead(sensor);
  Serial.println(sensorwert);
  if (Helligkeit < 500) {
    ampel;
  }

  else {
    nacht;
  }
}
