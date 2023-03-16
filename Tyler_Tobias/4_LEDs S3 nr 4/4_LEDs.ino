
  //Tyler Deck
  //Blinkprogramm.
  //Die eingebauten 4 LEDs sollen blinken

  int LED = 13; //LED wird variable 13 zugeteilt
  int LED2 = 12; 
  int LED3 = 11;
  int LED4 = 10;
  
void setup() 

{
 pinMode(LED,OUTPUT); //Pin wird auf output gestellt
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
 pinMode(LED4,OUTPUT);
}

void loop() 

{
digitalWrite(LED,HIGH); //geht an
delay(1000);            //Pause (1 sekunde)
digitalWrite(LED,LOW);  //geht aus
digitalWrite(LED2,HIGH);
delay(1000);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
delay(1000);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(1000);
digitalWrite(LED4,LOW);
}
