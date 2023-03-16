/*
Tyler Deck
LDR
14.12.2022
*/


int sensor = 1;
int sensorwert;
int LED = 10;
int MS = 200;


void setup()
{
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorwert = analogRead(sensor);
  Serial.println(sensorwert);
delay(2000);
}
