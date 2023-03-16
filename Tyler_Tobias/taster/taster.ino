
int sensor = 8;
int sensorwert;
int MS = 200;


void setup()
{
  pinMode(sensor,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorwert = digitalRead(sensor);
  Serial.println(sensorwert);
delay(2000);
}
