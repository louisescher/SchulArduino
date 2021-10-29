/*
 * Dimmen von LED's
 * Dominic Brauer + Philipp Klimaschewski
 * Release: 20.09.2021
 */

//Deklarationsbereich

int LED = 9;
int Zeit = 10;
int Helligkeit = 255;

//Voreinstellungsbereich

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (Helligkeit=255; Helligkeit>0; Helligkeit--)
{
  Serial.println(Helligkeit);
  analogWrite(LED,Helligkeit);
  delay(Zeit);
}
  for (Helligkeit=0; Helligkeit<255; Helligkeit++)
{
  Serial.println(Helligkeit);
  analogWrite(LED,Helligkeit);
  delay(Zeit);
  }
}
