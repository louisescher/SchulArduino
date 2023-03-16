//  Lauflist
//  Lauflicht Beide richtungen
//  Tyler Deck
// 8.12.2022 

 int Start = 13; // Variable für 13
 int sec = 120; // Delay

 void setup() 
 {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() 
{
  for(Start; Start > 6; Start--) 
  { // Für Start: Bis größer als 5, -1. 
    digitalWrite(Start, HIGH);
    delay(sec);
    digitalWrite(Start, LOW);
 }
  for(Start; Start < 13; Start++)
 {// Für Start: Bis kleiner als 14, +1. 
    digitalWrite(Start, HIGH);
    delay(sec);
    digitalWrite(Start, LOW);
 }
 }   
