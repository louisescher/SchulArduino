#include <LiquidCrystal.h> //LCD-Bibliothek laden

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //In dieser Zeile wird festgelegt, welche Pins des Mikrocontrollerboards für das LCD verwendet wird (Am besten erstmal nicht verändern).

void setup() 
{
lcd.begin(16, 2); //Im Setup wird angegeben, wie viele Zeichen und Zeilen verwendet werden. Hier: 16 Zeichen in 2 Zeilen.
}

void loop() 
{
lcd.setCursor(0, 0); //Startposition der Darstellung auf dem LCD festlegen. lcd.setCursor(0,0) bedeutet: Erstes Zeichen in der ersten Zeile.
lcd.print("www.funduino.de"); //Dort soll der Text „www.funduino.de“ erscheinen. Der Befehl lcd.setCursor ist dem Mikrocontrollerboard durch das Aufrufen der Bibliothek bekannt.
lcd.setCursor(0, 1); // lcd.setCursor(0,1) bedeutet: Erstes Zeichen in der zweiten Zeile.
lcd.print("Viel Erfolg"); //Dort soll dann der Text „Viel Erfolg!!!“ auftauchen.
}