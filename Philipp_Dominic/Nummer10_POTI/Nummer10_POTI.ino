/*
Widerstände (Poti)
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

int Poti = 1;
int Frequenz;
int Zeit = 200;
int LED = 10;

//Voreinstellungsbereich

void setup()
{
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Frequenz = analogRead(Poti);
  digitalWrite(LED,HIGH);
  delay(Frequenz);
  digitalWrite(LED,LOW);
  delay(Frequenz);
}
