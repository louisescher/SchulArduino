/*
Strobo
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

int LED_2 = 3;
int LED_3 = 4;
int LED_4 = 5;
int LED_5 = 6;
int LED_6 = 7;
int LED_7 = 8;
int LED_8 = 9;
int LED_9 = 10;
int LED_10 = 11;
int LED_11 = 12;
int LED_12 = 13;

int Poti = 1;
int hz;

//Voreinstellungsbereich

void setup()
{
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);
  pinMode(LED_6,OUTPUT);
  pinMode(LED_7,OUTPUT);
  pinMode(LED_8,OUTPUT);
  pinMode(LED_9,OUTPUT);
  pinMode(LED_10,OUTPUT);
  pinMode(LED_11,OUTPUT);
  pinMode(LED_12,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  hz = analogRead(Poti);
  digitalWrite(LED_2,HIGH);
  digitalWrite(LED_3,HIGH);
  digitalWrite(LED_4,HIGH);
  digitalWrite(LED_5,HIGH);
  digitalWrite(LED_6,HIGH);
  digitalWrite(LED_7,HIGH);
  digitalWrite(LED_8,HIGH);
  digitalWrite(LED_9,HIGH);
  digitalWrite(LED_10,HIGH);
  digitalWrite(LED_11,HIGH);
  digitalWrite(LED_12,HIGH);
  delay(hz);
  digitalWrite(LED_2,LOW);
  digitalWrite(LED_3,LOW);
  digitalWrite(LED_4,LOW);
  digitalWrite(LED_5,LOW);
  digitalWrite(LED_6,LOW);
  digitalWrite(LED_7,LOW);
  digitalWrite(LED_8,LOW);
  digitalWrite(LED_9,LOW);
  digitalWrite(LED_10,LOW);
  digitalWrite(LED_11,LOW);
  digitalWrite(LED_12,LOW);
  delay(hz);
  Serial.println(hz);
}
