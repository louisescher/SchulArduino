/*
 * Hellichkeitsanzeige am Display
 * Michael Flach 
 * 22.10.2021
 */


 // Die Bibliothek LiquidCrystal einbinden:
 #include <LiquidCrystal.h>

 // Die Bibliothek initialisieren und festlegen, welcher
 // Pin des Displays mit welchem Pin auf dem Board verbunden ist:
 const int rs = 11, en = 12, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
 LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
 int LDR = 1;
 int Helligkeit;
 
 void setup() {
  Serial.begin(9600);
   // Festlegen, wie viele Zeichen und Reihen das Display hat:
   lcd.begin(16, 2);
 }

 void loop() {
  
   lcd.print("Helligkeit:");
  Helligkeit = analogRead(LDR);
   // Den Cursor in Spalte 0, Reihe 1 setzen:
   // (Wichtig: Reihe 1 ist die 2. Reihe, da ab 0 gezählt wird):
   lcd.setCursor(0, 1);
   // Den Counter jede Sekunde eins hoch zählen lassen:
   lcd.print(Helligkeit);
   delay(500);
   lcd.clear();
 }
