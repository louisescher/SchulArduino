/*
 * For-Schleifen
 * Louis Escher
 * 27.09.2021
 */

int delayMS = 1000; // Delay
int Anfang = 0; // Zahl um Hoch zu zählen, startet bei 0

void setup() {
  Serial.begin(9600); // Kommunikationsrate
}

void loop() {
  for(Anfang; Anfang < 25; Anfang++) { // Für "Anfang": Wenn Anfang unter 11 
    Serial.println(Anfang);
    delay(delayMS);
  }
  Serial.println("Fertig");
}
