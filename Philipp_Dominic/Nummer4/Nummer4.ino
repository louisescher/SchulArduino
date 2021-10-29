/*
Ampelschaltung
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

int LED_red = 13;
int LED_yellow = 12;
int LED_green = 11;

int sec = 1000;
int five_sec = 5000;

//Voreinstellungsbereich

void setup()
{
  pinMode(LED_red,OUTPUT);
  pinMode(LED_yellow,OUTPUT);
  pinMode(LED_green,OUTPUT);
}

void loop()
{
  digitalWrite(LED_red,HIGH);
  delay(five_sec);
  digitalWrite(LED_yellow,HIGH);
  delay(sec);
  digitalWrite(LED_red,LOW);
  digitalWrite(LED_yellow,LOW);
  digitalWrite(LED_green,HIGH);
  delay(five_sec);
  digitalWrite(LED_green,LOW);
  digitalWrite(LED_yellow,HIGH);
  delay(sec);
  digitalWrite(LED_yellow,LOW);
}
