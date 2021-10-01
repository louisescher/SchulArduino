/*
 * Lauflist
 * 8 LEDs sollen nacheinander leuchten. Wenn die letzte LED aufgeleuchtet hat, sollen die LEDs rückwärts leuchten..
 * Louis Escher
 */
 

 int Port = 13; // Variable für den Port
 
 int delayMS = 1000; // Delay

 
void setup() {
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  for(Port; Port > 6; Port--) { // Für Port: Bis Port kleiner als 5, Port -1. 
    digitalWrite(Port, HIGH);
    Serial.print("LED in Port ");
    Serial.print(Port);
    Serial.println(" leuchtet jetzt.");
    delay(delayMS);
    digitalWrite(Port, LOW);
    delay(delayMS);
  }
  for(Port; Port < 13; Port++) { // Für Port: Bis Port kleiner als 5, Port -1. 
    digitalWrite(Port, HIGH);
    Serial.print("LED in Port ");
    Serial.print(Port);
    Serial.println(" leuchtet jetzt.");
    delay(delayMS);
    digitalWrite(Port, LOW);
    delay(delayMS);
  }
}
