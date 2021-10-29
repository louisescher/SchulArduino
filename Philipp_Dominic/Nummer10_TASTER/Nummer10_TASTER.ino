/*
 * Widerstände (Taster)
 * Dominic Brauer + Philipp Klimaschewski
 * Release: 20.09.2021
 */

//Deklarationsbereich

int Taster = 1;
int Status;
int Zeit = 200;

//Voreinstellungsbereich

void setup()
{
  pinMode(Taster,INPUT);
  Serial.begin(9600);
}

void loop()
{
  Status = digitalRead(Taster);
  Serial.println(Status);
  delay(Zeit);
}

/*
BEI NICHT GEDRÜCKTEM TASTER WIRD EINE 0 ANGEZEIGT. BEI GEDRÜCKTEM TASTER EINE 1.
*/
