/*
 * Zählen
 * Michael Flach
 * 27.09.2021
 */
 
int a = 1000; // Nummer 1
int b = 2000; // Nummer 2
int X = a * b; // Rechnung
int delayMS = 1000;

void setup() {
  Serial.begin(9600); // Kommunikationsrate mit Arduino
  
  Serial.print("Zahl 1 (a): "); // String
  Serial.println(a); // einfügen der Variable "a"
  delay(delayMS);
  Serial.print("Zahl 2 (b): "); // String
  Serial.println(b); // einfügen der Variable "b"
  delay(delayMS);
  Serial.print("Rechne "); // String
  Serial.print(a); // einfügen der Variable "a"
  Serial.print(" und "); // String
  Serial.print(b); // einfügen der Variable "b"
  Serial.println(" zusammen."); // String
  delay(delayMS);
  Serial.print("Ergebnis: "); // String
  Serial.print(X); // Print vom Ergebnis der Rechnung (Variable X)
  delay(delayMS);
}
void loop() {
  
}
