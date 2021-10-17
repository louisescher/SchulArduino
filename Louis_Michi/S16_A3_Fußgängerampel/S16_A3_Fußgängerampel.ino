/*
 * Fußgängeramepl
 * LEDs in Slot 13, 12 und 11 sollen als Ampel blinken. Wenn der Knopf gedrückt wird, schaltet der Arduino die Fußgängerampel ein, 
 * wartet 3 Sekunden, schaltet sie wieder aus und wechselt in den Normalbetrieb.
 * 12.10.2021
 * Louis Escher
 */
//Deklarationsbereich

int buttonPin = 2;

int buttonPushCounter = 0;
int buttonState = 0;

int carRED = 13;  
int carYELLOW = 12; 
int carGREEN = 11;
int pasRED = 10;
int pasGREEN = 9;

void setup() {
    Serial.begin(9600);
    
    pinMode(buttonPin, INPUT);
  
    pinMode(carRED, OUTPUT);
    pinMode(carYELLOW, OUTPUT);
    pinMode(carGREEN, OUTPUT);

    pinMode(pasRED, OUTPUT);
    pinMode(pasGREEN, OUTPUT);

    digitalWrite(carGREEN, HIGH);
    digitalWrite(pasRED, HIGH);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
      buttonPushCounter++;
      Serial.println("Ein Fussgaenger hat den Knopf gedrueckt!");
      digitalWrite(carGREEN, LOW);
      digitalWrite(carYELLOW, HIGH); 
      delay(1000);
      digitalWrite(carYELLOW, LOW);
      digitalWrite(carRED, HIGH);
      delay(1000);
      digitalWrite(pasRED, LOW);
      digitalWrite(pasGREEN, HIGH);
      delay(3000);
      digitalWrite(pasGREEN, LOW);
      digitalWrite(pasRED, HIGH);
      delay(1000);
      digitalWrite(carYELLOW, HIGH);
      delay(1000);
      digitalWrite(carRED, LOW);
      digitalWrite(carYELLOW, LOW); 
      digitalWrite(carGREEN, HIGH); 
  } else {
    delay(50);
  }
}