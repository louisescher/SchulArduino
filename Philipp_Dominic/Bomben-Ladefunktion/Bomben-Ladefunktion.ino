/*
Bomben-Ladefunktion
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

int LS = 2;
int Taster = 3;
int buttonpress;

int Zeit = 750;

int LED_gruen1 = 4;
int LED_gruen2 = 5;
int LED_gruen3 = 6;
int LED_gruen4 = 7;
int LED_gelb1 = 8;
int LED_gelb2 = 9;
int LED_gelb3 = 10;
int LED_rot1 = 11;
int LED_rot2 = 12;
int LED_rot3 = 13;

int count = 5;
int bomb;
int lol = 0;

//Voreinstellungsbereich

void setup()
{
  pinMode(LS,OUTPUT);
  pinMode(Taster,INPUT);
  
  pinMode(LED_gruen1,OUTPUT);
  pinMode(LED_gruen2,OUTPUT);
  pinMode(LED_gruen3,OUTPUT);
  pinMode(LED_gruen4,OUTPUT);
  pinMode(LED_gelb1,OUTPUT);
  pinMode(LED_gelb2,OUTPUT);
  pinMode(LED_gelb3,OUTPUT);
  pinMode(LED_rot1,OUTPUT);
  pinMode(LED_rot2,OUTPUT);
  pinMode(LED_rot3,OUTPUT);

  Serial.begin(9600);
}

void Check()
{
  digitalWrite(LED_gruen1,LOW);
  digitalWrite(LED_gruen2,LOW);
  digitalWrite(LED_gruen3,LOW);
  digitalWrite(LED_gruen4,LOW);
  digitalWrite(LED_gelb1,LOW);
  digitalWrite(LED_gelb2,LOW);
  digitalWrite(LED_gelb3,LOW);
  digitalWrite(LED_rot1,LOW);
  digitalWrite(LED_rot2,LOW);
  digitalWrite(LED_rot3,LOW);
  }

void loop()
{
  
}
