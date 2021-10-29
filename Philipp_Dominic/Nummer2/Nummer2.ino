/*
Blinken
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

int LED_one = 13;
int LED_two = 12;
int LED_three = 11;
int LED_four = 10;

int sec = 1000;

//Voreinstellungsbereich

void setup()
{
  pinMode(LED_one,OUTPUT);
  pinMode(LED_two,OUTPUT);
  pinMode(LED_three,OUTPUT);
  pinMode(LED_four,OUTPUT);
}

void loop()
{
  digitalWrite(LED_one,HIGH);
  delay(sec);
  digitalWrite(LED_one,LOW);
  digitalWrite(LED_two,HIGH);
  delay(sec);
  digitalWrite(LED_two,LOW);
  digitalWrite(LED_three,HIGH);
  delay(sec);
  digitalWrite(LED_three,LOW);
  digitalWrite(LED_four,HIGH);
  delay(sec);
  digitalWrite(LED_four,LOW);
}
