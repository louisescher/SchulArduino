/*
Tyler Deck
27.2.2023
Ultraschall
*/

#include <LiquidCrystal.h> //LCD-Bibliothek laden

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //In dieser Zeile wird festgelegt, welche Pins des Mikrocontrollerboards für das LCD verwendet wird (Am besten erstmal nicht verändern).
//(b) als Zahlenwert mit Einheit in einem LCD-Display + (c) als Balken im LCD-Display (je größer der Abstand, desto länger der Balken)
int val;
int Fortnite;
int trigger=7; //Trigger-Pin an Pin 7
int echo=6; // Echo-Pim an Pin 6
int LED=9; //als Helligkeit einer roten LED (je kleiner der Abstand, desto größer die Helligkeit)
int ls=13; //als Ton mit Dauer von 1000 Perioden (je kleiner der Abstand, desto höher die frequenz; Frequenzen im Bereich 250Hz ... 2kHz)
long dauer=0; // Es wird eine Variable dem Wert der dauer von Senden bis empfang zugeschrieben und gespeichert. Startwert = 0.
long entfernung=0; // Es wird eine Variable der Entfernung zugeschrieben und gespeichert
void setup()
{
Serial.begin (9600); //Ausgabe am Serial Monitor
pinMode(LED,OUTPUT);
lcd.begin(16, 2); //Im Setup wird angegeben, wie viele Zeichen und Zeilen verwendet werden. Hier: 16 Zeichen in 2 Zeilen.
pinMode(trigger, OUTPUT); // Trigger-Pin ist ein Ausgang
pinMode(echo, INPUT); // Echo-Pin ist ein Eingang
}
void loop()
{
digitalWrite(trigger, LOW); //Spannung wird kurz 0 um nacher rauschfreies Geräusch zu erhalten
delay(5); //Dauer: 5 Millisekunden
digitalWrite(trigger, HIGH); //Jetzt sendet man eine Ultraschallwelle los
delay(10); //Dieser „Ton“ erklingt für 10 Millisekunden.
digitalWrite(trigger, LOW);//Dann wird der „Ton“ abgeschaltet.
dauer = pulseIn(echo, HIGH); //Mit dem Befehl „pulseIn“ zählt der Mikrokontroller die Zeit in Mikrosekunden, bis der Schall zum Ultraschallsensor zurückkehrt
entfernung = Fortnite;
entfernung = (dauer/2) * 0.03432; // Entfernung = Die dauer geteilt durch 2 (Da sonst hin und zurück gemessen wird) multipliziert mit der Schallgeschwindigkeit
if (entfernung >= 200 || entfernung <= 0) //Wenn die gemessene Entfernung über 200cm oder unter 0cm liegt, soll ...
{
Serial.println(entfernung); //der serial monitor „Fehler“ ausgeben , weil Messwerte in diesen Bereichen Falsch oder ungenau sind
lcd.setCursor(0, 0);
lcd.print("Fehler           ");
}
else //  Ansonsten…
{
Serial.print(entfernung); //der Wert der Entfernung an den serial monitor hier ausgegeben werden.
Serial.println(" cm"); // Hinter dem Wert der Entfernung soll die Einheit "cm" angegeben werden.
entfernung = map(entfernung,0,200,0,255);
analogWrite(LED,(255 - entfernung));
lcd.setCursor(0, 0); //Startposition der Darstellung auf dem LCD festlegen. lcd.setCursor(0,0) bedeutet: Erstes Zeichen in der ersten Zeile.
lcd.print("Entfernung:");
lcd.print(entfernung); //Dort soll der Text „www.funduino.de“ erscheinen. Der Befehl lcd.setCursor ist dem Mikrocontrollerboard durch das Aufrufen der Bibliothek bekannt.
lcd.print("cm  ");
entfernung = map(val,0,200,0,16);
lcd.setCursor(0, 1);
lcd.print(val);
}
delay(1000); //Das delay von einer Sekunde sorgt in ca. jeder neuen Sekunde für einen neuen Messwert
}
