/*
Tyler Deck
Taster
11.1.2023
*/


int taster = 7;
int w;



void setup()
{
  Serial.begin(9600);
  pinMode(taster,INPUT);
}

void loop()
{
  w = digitalRead(taster);
  Serial.println(w);
  delay(1000);
}
