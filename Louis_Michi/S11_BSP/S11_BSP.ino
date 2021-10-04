/*
 * Dimmen einer LED
 * Louis Escher
 * 01.10.21
 */

int LED = 11;
int Dimm = 1; 
int delayMS = 100; 

void setup() {
  Serial.begin(9600);
  for(Dimm; Dimm<256; Dimm++) {
    analogWrite(LED, Dimm);
    Serial.print("LED auf Helligkeitsstufe ");
    Serial.print(Dimm);
    Serial.println(" / 255");
    delay(delayMS);
  }
  for(Dimm; Dimm>0; Dimm--) {
    analogWrite(LED, Dimm);
    Serial.print("LED auf Helligkeitsstufe ");
    Serial.print(Dimm);
    Serial.println(" / 255");
    delay(delayMS);
  }
  Serial.println("Fertig");
}

void loop() {
}
