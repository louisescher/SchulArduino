  //Tyler Deck
  //Blinkprogramm.
  //Die eingebauten 4 LEDs sollen blinken

  int LED = 13; //LED wird variable 13 zugeteilt
  int LED2 = 12; 
  
void setup() 

{
 pinMode(LED,OUTPUT); //Pin wird auf output gestellt
 pinMode(LED2,OUTPUT);
}

void loop() 

{
digitalWrite(LED,HIGH); //geht an
delay(1000);            //Pause (1 sekunde)
digitalWrite(LED,LOW);  //geht aus
digitalWrite(LED2,HIGH);
delay(1000);
digitalWrite(LED2,LOW);
}
