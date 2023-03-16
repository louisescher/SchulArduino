//Tyler Deck
//For-Schleife
//7.12.2022

int Zeit = 1000;  //Zähltakt
int Anfang = 0;   //Anfang wird auf den Wert Null gesetzt 


void setup() 
{
 Serial.begin(9600);
}

void loop() 
{
 for (Anfang; Anfang<11; Anfang++)
{
 Serial.println(Anfang);
 delay(Zeit);
}
 Serial.println("Fertig");
}
