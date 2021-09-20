/*
 * Blinkprogramm.
 * Die eingebaute gelbe LED an Pin 13 soll blinken.
 * 20.09.2021
 * Michael Flach
 */
//Deklarationsbereich
 int LED = 13;  //Variable, um den Port für die LED zu deklarieren. "int" steht für eine ganzstellige Zahl (-32.000 bis 32.000)
 int LED2 = 12; // Variable für Port 12
 
 int delayMS = 1000; // Variable für Delay

// Voreinstellungsbereich
 
void setup() {  //Initalisiert den Part des Codes, der nur einmal beim start läuft.
  pinMode(LED, OUTPUT);  //Setzt Port 13 (Deklariert durch Variable LED) als einen Output
  pinMode(LED2, OUTPUT);  //Setzt Port 12 (Deklariert durch Variable LED2) als einen Output
}

//Hauptprogramm = Endlosschleife

void loop() { //Aller Code, der in einem Loop wiederholt wird.
  digitalWrite(LED, HIGH); //Port 13 bekommt Strom, 5V (LED steht nur für Port 13 wegen unserer Variable)
  delay(delayMS);  //Warte 1000ms
  digitalWrite(LED, LOW); //Port 13 bekommt keinen Strom, 0V (LED2 steht nur für Port 12 wegen unserer Variable)
  digitalWrite(LED2, HIGH); //Port 12 bekommt Strom, 5V (LED2 steht nur für Port 12 wegen unserer Variable)
  delay(delayMS);  //Warte 1000ms
  digitalWrite(LED2, LOW); //Port 13 bekommt keinen Strom, 0V (LED steht nur für Port 13 wegen unserer Variable)
  
}
