/*
 * Sensoren Vorlage
 * Dominic Brauer + Philipp Klimaschewski
 * Release: 20.09.2021
 */

//Deklarationsbereich

int Sensor = 1;
int WERT;
int Zeit = 200;
int LED = 9;

//Voreinstellungsbereich

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  WERT = analogRead(Sensor);
  Serial.begin(WERT);
  analogWrite(LED,WERT);
  delay(Zeit);
}
