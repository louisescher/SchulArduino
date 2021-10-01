/*
 * Lauflist
 * 8 LEDs sollen nacheinander leuchten. Wenn die letzte LED aufgeleuchtet hat, soll es von vorne starten.
 * Louis Escher
 */
 

 int Port = 13; // Variable für den Port
 
 int delayMS = 1000; // Delay

 
void setup() {
  Serial.begin(9600);
  
  pinMode(Port, OUTPUT); // Jeden benötigten Port als Output setzen
}

void loop() {
  for(Port; Port > 5; Port--) { // Für Port: Bis Port kleiner als 5, Port -1. 
    digitalWrite(Port, HIGH);
    Serial.print("LED in Port ");
    Serial.print(Port);
    Serial.println(" leuchtet jetzt.");
    delay(delayMS);
    digitalWrite(Port, LOW);
    delay(delayMS);
  }
  for(Port; Port < 13; Port++) {
    // Keine Angaben hier, Port springt direkt wieder auf 13
  }
}
