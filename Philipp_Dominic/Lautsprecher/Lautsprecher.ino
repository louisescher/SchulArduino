/*
Lautsprecher (Twinkle Stars)
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

int LS = 4;
int Delay = 2;

//Voreinstellungsbereich

void setup()
{
  pinMode(LS,OUTPUT);
}

void loop()
{
  digitalWrite(LS,HIGH);
  delay(Delay);
  digitalWrite(LS,LOW);
  delay(Delay);
}
