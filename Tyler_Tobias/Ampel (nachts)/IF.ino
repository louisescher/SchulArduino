/*
Tyler Deck
if
11.1.2023
*/


int LDR = 1;
int Helligkeit;
int LED = 13;
int LED2 = 12;
int LED3 = 11;
int MS = 500;


void setup()
{
  pinMode(LED,OUTPUT);
   pinMode(LED2,OUTPUT);
    pinMode(LED3,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Helligkeit = analogRead(LDR);
  Serial.println(Helligkeit);
if (Helligkeit<500){
digitalWrite(LED,HIGH); //geht an
delay(1000);            //Pause (1 sekunde)
digitalWrite(LED2,HIGH);
delay(1000);
digitalWrite(LED,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH); 
delay(1000);            
digitalWrite(LED3,LOW);  
digitalWrite(LED2,HIGH);
delay(1000);
digitalWrite(LED2,LOW);
}

else{
 digitalWrite(LED2,HIGH);
 delay(MS);
 digitalWrite(LED2,LOW);
 delay(MS);
}
}
