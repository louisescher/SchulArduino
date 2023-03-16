int LDR = 1;
int Helligkeit;
int LED = 13;
int LED2 = 12;
int LED3 = 11;
int LEDfus = 9;
int LEDfus2 = 8;
int MS = 500;
int sensor = 7;
int sensorwert;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LEDfus, OUTPUT);
  pinMode(LEDfus2, OUTPUT);
  Serial.begin(9600);}

  void ampel(){
  digitalWrite(LED, HIGH); //geht an
  delay(1000);            //Pause (1 sekunde)
  digitalWrite(LED2, HIGH);
  sensorwert = digitalRead(sensor);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  sensorwert = digitalRead(sensor);
  delay(1000);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  sensorwert = digitalRead(sensor);
  delay(1000);
  digitalWrite(LED2, LOW);}

  void nacht() 
  {digitalWrite(LED,LOW);
  digitalWrite(LED2, HIGH);
  delay(MS);
  digitalWrite(LED2, LOW);
  delay(MS);}

void fussgaenger() 
{ digitalWrite(LEDfus2,HIGH);
  digitalWrite(LEDfus,LOW);
  digitalWrite(LED,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(3000);
  digitalWrite(LEDfus2,LOW);}

void loop()
{ Helligkeit = analogRead(LDR);
  Serial.println(Helligkeit);
  sensorwert = digitalRead(sensor);
  Serial.println(sensorwert);
  digitalWrite(LEDfus,HIGH); 
  if(Helligkeit <800){ // ampel
    ampel();}
    else {
    nacht();}
  if(sensorwert < 1) { // fußgänger grün
    fussgaenger();}}
