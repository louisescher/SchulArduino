/*
 * Fußgängeramepl
 * LEDs in Slot 13, 12 und 11 sollen als Ampel blinken. Wenn der Knopf gedrückt wird, schaltet der Arduino die Fußgängerampel ein, 
 * wartet 3 Sekunden, schaltet sie wieder aus und wechselt in den Normalbetrieb.
 * 12.10.2021
 * Louis Escher
 */
//Deklarationsbereich
int carRED = 13;  
int carYELLOW = 12; 
int carGREEN = 11;
int pasRED = 10;
int pasGREEN = 9;

int pasButton = 1;
int pressedCheck;
 
int delayMS = 1000; // Variable für Delay

// Voreinstellungsbereich
 
void setup() {
    Serial.begin(9600);

    pinMode(carRED, OUTPUT);
    pinMode(carYELLOW, OUTPUT);
    pinMode(carGREEN, OUTPUT);

    pinMode(pasRED, OUTPUT);
    pinMode(pasGREEN, OUTPUT);
}

//Hauptprogramm = Endlosschleife

void loop() {
    pressedCheck = analogRead(pasButton);
    Serial.println(pressedCheck);
    digitalWrite(pasRED, HIGH);

    if(pressedCheck>1000) {
        digitalWrite(carRED, HIGH);
        delay(3000); // Warten auf Gelbe LED
        digitalWrite(carYELLOW, HIGH);
        delay(1000); // Warten während beide LEDs an sind
        digitalWrite(carRED, LOW);
        digitalWrite(carYELLOW, LOW); 
        //Rot und Gelb aus, Grün an
        digitalWrite(carGREEN, HIGH); 
        delay(2500);  // Warten für Grün
        digitalWrite(carGREEN, LOW); 
        digitalWrite(carYELLOW, HIGH); 
        delay(1000); // Warten für Gelb
        digitalWrite(carYELLOW, LOW);
    } else {
        digitalWrite(carRED, HIGH);
        delay(1000);
        digitalWrite(pasRED, LOW);
        digitalWrite(pasGREEN, HIGH);
        delay(3000);
        digitalWrite(pasGREEN, LOW);
        digitalWrite(pasRED, HIGH);
    }
}