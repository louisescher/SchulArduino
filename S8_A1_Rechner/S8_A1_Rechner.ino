/*
 * Zählen
 * Michael Flach
 * 27.09.2021
 */
 
int a = 1000; // Nummer 1
int b = 2000; // Nummer 2
int X = a + b; // Rechnung

void setup() {
  Serial.begin(9600); // Kommunikationsrate mit Arduino
  Serial.println(X); // Print vom Ergebnis der Rechnung (Variable X)
}
void loop() {
  
}
