#include "pitches.h"
void setup() 
{
Serial.begin(9600);
pinMode(11,OUTPUT);
}

void loop() 
{



tone (NOTE_D4);
delay(125);
tone(3,294,125);//D4
delay(125);
tone(3,587,250);//D5
delay(250);
tone(3,440,250);//A4
delay(375);
tone(3,415,125);//Ab4
delay(250);
tone(3,392,250);//G4
delay(250);
tone(3,349,250);//F4
delay(250);
tone(3,294,125);//D4
delay(125);
tone(3,349,125);//F4
delay(125);
tone(3,392,125);//G4
delay(125);
tone(3,261,125);//C4(middle)     
delay(62);
tone(3,261,125);//C4(middle)     
delay(62);
tone(3,261,125);//C4(middle)     
delay(62);
tone(3,261,125);//C4(middle)     
delay(62);
tone(3,587,250);//D5
delay(250);
tone(3,440,375);//A4
delay(375);
tone(3,415,125);//Ab4
delay(250);
tone(3,392,250);//G4
delay(250);
tone(3,349,250);//F4
delay(250);
tone(3,294,125);//D4
delay(125);
tone(3,349,125);//F4
delay(125);
tone(3,392,125);//G4
}
