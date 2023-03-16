/*
Tyler Deck
LDR
14.12.2022
*/


int LDR = 1;
int Helligkeit;
int LED = 10;
int MS = 200;


void setup()
{
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Helligkeit = analogRead(LDR);
  Serial.println(Helligkeit);
  digitalWrite(LED,HIGH);
  delay(Helligkeit);
  digitalWrite(LED,LOW);
  delay(Helligkeit);
}
