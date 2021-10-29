/*
if-Bedingung
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

  int LED = 9;
  int Helligkeit;
  int LDR = 1;

//Voreinstellungsbereich

void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop()
{
Helligkeit = analogRead(LDR);

 if (Helligkeit>1000)
 {
   Serial.println(Helligkeit);
   digitalWrite(LED,HIGH);
 }
 else
  {
    Serial.println(Helligkeit);
    digitalWrite(LED,LOW);
  }
}
