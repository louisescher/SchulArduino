/*
 * Ampelprogramm
 * LED soll leuchten wenn Heligkeit < 300
 * Louis Escher, 11.10.21
 */

int LDR = 1;
int Helligkeit;
int ledRED = 13;  
int ledYELLOW = 12; 
int ledGREEN = 11;

void setup() {
  Serial.begin(9600);
  pinMode(ledRED, OUTPUT);
  pinMode(ledYELLOW, OUTPUT);
  pinMode(ledGREEN, OUTPUT);
}

void loop() {
  Helligkeit = analogRead(LDR);
  Serial.println(Helligkeit);
  delay(1000);
  if(Helligkeit>1000){
    digitalWrite(ledYELLOW, HIGH); 
    delay(1000); // Warten für Gelb
    digitalWrite(ledYELLOW, LOW); 
  } else {
    digitalWrite(ledRED, HIGH);
    delay(3000); // Warten auf Gelbe LED
    digitalWrite(ledYELLOW, HIGH);
    delay(1000); // Warten während beide LEDs an sind
    digitalWrite(ledRED, LOW);
    digitalWrite(ledYELLOW, LOW); 
    // Rot und Gelb aus, Grün an
    digitalWrite(ledGREEN, HIGH); 
    delay(2500);  // Warten für Grün
    digitalWrite(ledGREEN, LOW); 
    digitalWrite(ledYELLOW, HIGH); 
    delay(1000); // Warten für Gelb
    digitalWrite(ledYELLOW, LOW); 
  }
}
