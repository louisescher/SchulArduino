/*
 * Lauflicht-Programm
 * Dominic Brauer + Philipp Klimaschewski
 * Release: 20.09.2021
 */

//Deklarationsbereich

int Zeit = 250;
int LED = 2;

//Voreinstellungsbereich

void setup()                  
{
 Serial.begin(9600);
}

void loop() 
{
for (LED=2; LED<9; LED++)
{
 pinMode(LED,OUTPUT);
 digitalWrite(LED,HIGH);
 delay(Zeit);
 digitalWrite(LED,LOW);
 }
 for (LED=9; LED>2; LED--)
{
 pinMode(LED,OUTPUT);
 digitalWrite(LED,HIGH);
 delay(Zeit);
 digitalWrite(LED,LOW);
 }
}
