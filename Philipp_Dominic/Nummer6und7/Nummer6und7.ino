/*
 * Rechnung a*b / 10*8
 * Dominic Brauer + Philipp Klimaschewski
 * Release: 20.09.2021
 */

//Deklarationsbereich

int a = 10;
int b = 8;

//Voreinstellungsbereich

void setup()                  
{
 Serial.begin(9600);
 Serial.print("a = ");
 Serial.println(a);
 Serial.print("b = ");
 Serial.println(b);
 Serial.print("Rechnung = ");
 Serial.println("a * b");
 Serial.print("Ergebnis = ");
 Serial.println(a*b);
 Serial.print("Der Arduino kann ");
 Serial.print(a);
 Serial.print(" * ");
 Serial.print(b);
 Serial.print(" mutiplizieren");
 
}

void loop() 
{
}
