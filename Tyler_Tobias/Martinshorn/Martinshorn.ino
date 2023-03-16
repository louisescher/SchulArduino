/*Tyler Deck
 *Tonausgabe
 *25.1.2023
 */
 int ls = 8;
 int OwO;

  void High()
 {digitalWrite(ls,HIGH);
 delayMicroseconds(100);
 digitalWrite(ls,LOW);
 delayMicroseconds(100);}

  void Low()
 {digitalWrite(ls,HIGH);
 delay(1);
 digitalWrite(ls,LOW);
 delay(1);}
 
 void setup()
 {pinMode(ls,OUTPUT);
 Serial.begin(9600);}


 

 void loop()
{
  for(OwO = 0; OwO<100; OwO++)
 {
  Serial.println(OwO);
  High();
 }
  for(OwO = 0; OwO<150; OwO++)
 {
  Low();
 }
 }
