/*
 * Zählen
 * Michael Flach
 * 27.09.2021
 */
 
int a = 1000; // Nummer 1
int b = 2000; // Nummer 2
int X = a + b; // Rechnung
int delayMS = 1000;

void setup() {
  Serial.begin(9600); // Kommunikationsrate mit Arduino
  Serial.print("Zahl 1 (a): "); // Print vom Ergebnis der Rechnung (Variable X)
  Serial.println(a); // Print vom Ergebnis der Rechnung (Variable X)
  delay(delayMS);
  Serial.print("Zahl 2 (b): "); // Print vom Ergebnis der Rechnung (Variable X)
  Serial.println(b); // Print vom Ergebnis der Rechnung (Variable X)
  delay(delayMS);
  Serial.print("Rechne "); // Print vom Ergebnis der Rechnung (Variable X)
  Serial.println(a); // Print vom Ergebnis der Rechnung (Variable X)
  Serial.println(" und "); // Print vom Ergebnis der Rechnung (Variable X)
  Serial.println(b); // Print vom Ergebnis der Rechnung (Variable X)
  Serial.println(" zusammen."); // Print vom Ergebnis der Rechnung (Variable X)
  delay(delayMS);
  Serial.print("Ergebnis: "); // Print vom Ergebnis der Rechnung (Variable X)
  Serial.println(X); // Print vom Ergebnis der Rechnung (Variable X)
  delay(delayMS);
}
void loop() {
  
}
