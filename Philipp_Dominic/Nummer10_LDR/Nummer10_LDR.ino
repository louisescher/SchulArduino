/*
 * Widerstände (LDR)
 * Dominic Brauer + Philipp Klimaschewski
 * Release: 20.09.2021
 */

//Deklarationsbereich

int LDR = 1;
int Helligkeit;
int LED = 10;

//Voreinstellungsbereich

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Helligkeit = analogRead(LDR);
  Helligkeit = map(Helligkeit, 0, 1023, 100, 500);
  digitalWrite(LED,HIGH);
  delay(Helligkeit);
  digitalWrite(LED,LOW);
  delay(Helligkeit);
  Serial.println(Helligkeit);
}
