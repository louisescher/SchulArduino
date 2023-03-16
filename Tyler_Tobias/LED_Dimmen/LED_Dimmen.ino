// Tyler Deck
// Dimmen einer LED
//14.12.2022

int LED = 9;
int MS = 25; 
int Hell = 0;
  
void setup() 
{
  Serial.begin(9600);
}

void loop()
{   for(Hell; Hell <256; Hell=Hell+5)
  {
    analogWrite(LED, Hell);
    Serial.println(Hell);
    delay(MS);
  }
  for(Hell; Hell>0; Hell=Hell-5) 
  {
    analogWrite(LED, Hell);
    Serial.println(Hell);
    delay(MS);
  }
  Serial.print("Fertig");
  
}
