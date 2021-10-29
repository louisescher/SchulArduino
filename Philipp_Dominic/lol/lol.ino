/*
 * Fußgängeramepl
 * 69.69.420
 * Dominic Brauer + Philipp Klimaschewski
 */
 
//Deklarationsbereich

int buttonPin = 2;
int buttonState = 0;

int carRED = 13;  
int carYELLOW = 12; 
int carGREEN = 11;
int pasRED = 10;
int pasGREEN = 9;

int Helligkeit;
int LDR = 1;

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
  Helligkeit = analogRead(LDR);

  if (buttonState == LOW && Helligkeit<950) {
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
      delay(1000);
  } else {
    delay(50);
    if (Helligkeit>950)
    {
      digitalWrite(pasRED,LOW);
      digitalWrite(pasGREEN,LOW);
      digitalWrite(carRED,LOW);
   digitalWrite(carGREEN,LOW);
   digitalWrite(carYELLOW,HIGH);
   delay(1000);
   digitalWrite(carYELLOW,LOW);
   delay(1000);
      }
      else
      {
        digitalWrite(pasRED,HIGH);
      digitalWrite(carGREEN,HIGH);
        }
  }
}
