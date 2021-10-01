/*
 * Blinkprogramm als Ampel.
 * LEDs in Slot 13, 12 und 11 sollen als Ampel blinken.
 * 27.09.2021
 * Louis Escher
 */
//Deklarationsbereich
 int ledRED = 13;  
 int ledYELLOW = 12; 
 int ledGREEN = 11;
 
 int delayMS = 1000; // Variable für Delay

// Voreinstellungsbereich
 
void setup() {
  pinMode(ledRED, OUTPUT);
  pinMode(ledYELLOW, OUTPUT);
  pinMode(ledGREEN, OUTPUT);
}

//Hauptprogramm = Endlosschleife

void loop() {
  digitalWrite(ledRED, HIGH);
  delay(3000); // Warten auf Gelbe LED
  digitalWrite(ledYELLOW, HIGH);
  delay(1000); // Warten während beide LEDs an sind
  digitalWrite(ledRED, LOW);
  digitalWrite(ledYELLOW, LOW); 
  //Rot und Gelb aus, Grün an
  digitalWrite(ledGREEN, HIGH); 
  delay(2500);  // Warten für Grün
  digitalWrite(ledGREEN, LOW); 
  digitalWrite(ledYELLOW, HIGH); 
  delay(1000); // Warten für Gelb
  digitalWrite(ledYELLOW, LOW); 
}
