//Tyler Deck
//Hallo Welt wiederholt
//7.12.2022




void setup()                      //Setupcode
{
Serial.begin(9600);               //Startet Kommunikation zwischen arduino und Serieller Monitor
}

void loop()                       // Wiederholt Code 
{
  Serial.println("Hallo Welt!");//Text wird wiedergeben
  delay(1000);
}
