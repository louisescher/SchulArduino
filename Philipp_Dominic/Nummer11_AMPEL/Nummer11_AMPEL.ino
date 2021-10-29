/*
if-Bedingung
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

  int LED_red = 13;
  int LED_yellow = 10;
  int LED_green = 6;
  int Helligkeit;
  int LDR = 1;

  int sec = 1000;
  int five_sec = 5000;

//Voreinstellungsbereich

void setup()
{
  Serial.begin(9600);
  pinMode(LED_red,OUTPUT);
  pinMode(LED_yellow,OUTPUT);
  pinMode(LED_green,OUTPUT);
}

void loop()
{
 Helligkeit = analogRead(LDR);
 Serial.println(Helligkeit);
 
 if (Helligkeit<1000)
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
 else
  {
   digitalWrite(LED_red,LOW);
   digitalWrite(LED_green,LOW);
   digitalWrite(LED_yellow,HIGH);
   delay(sec);
   digitalWrite(LED_yellow,LOW);
   delay(sec);
  }
}
