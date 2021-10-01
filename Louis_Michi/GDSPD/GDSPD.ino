/*
 * Lauflist
 * 8 LEDs sollen nacheinander leuchten. Wenn die letzte LED aufgeleuchtet hat, sollen die LEDs rückwärts leuchten.
 * Louis Escher
 */
 

 int Port = 13; // Variable für den Port
 
 int delayMS = 25; // Delay

 
void setup() {
  Serial.begin(9600);
  
  pinMode(13, OUTPUT); // Outputs setzen
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  for(Port; Port > 6; Port--) { // Für Port: Bis Port kleiner als 6, Port -1. 
    digitalWrite(Port, HIGH);
    delay(delayMS);
    digitalWrite(Port, LOW);
  }
  for(Port; Port < 13; Port++) { // Für Port: Bis Port größer als 13, Port +1. 
    digitalWrite(Port, HIGH);
    delay(delayMS);
    digitalWrite(Port, LOW);
  }
}
