
//Tyler Deck
//Ampelschaltung
//5.12.2022

 int LED = 13;
 int LED2 = 12;
 int LED3 = 11;


void setup() 
{
 pinMode(LED,OUTPUT); //Pin wird auf output gestellt
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
}

void loop() {
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
