/*
BLACKPINK DDU-DU-DDU-DU Light Show directed by Phil.a.klima and coded by Dominic Brauer
Dominic Brauer + Philipp Klimaschewski
Release: 20.09.2021
*/

//Deklarationsbereich

int Zeit;

//Voreinstellungsbereich

void fast_wave_lr(int Zeit)
{
  digitalWrite(9,HIGH);
  delay(Zeit);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(Zeit);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(Zeit);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(Zeit);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(Zeit);
  digitalWrite(13,LOW);     
}

void fast_wave_rl(int Zeit)
{
 digitalWrite(13,HIGH);
  delay(Zeit);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(Zeit);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(Zeit);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(Zeit);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(Zeit);
  digitalWrite(9,LOW); 
}
void wave_lr(int Zeit)
{
  digitalWrite(9,HIGH);
  delay(Zeit);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(Zeit);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(Zeit);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(Zeit);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(Zeit);
  digitalWrite(13,LOW);     
}

void wave_rl(int Zeit)
{
 digitalWrite(13,HIGH);
  delay(Zeit);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(Zeit);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(Zeit);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(Zeit);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(Zeit);
  digitalWrite(9,LOW); 
}

void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  fast_wave_lr(53.5714285714286);
  delay(589.2857142857142);
  fast_wave_rl(53.5714285714286);
  delay(589.2857142857142);
  wave_lr(214.2857142857143);
  delay(642.8571428571429);
  fast_wave_rl(53.5714285714286);
  delay(589.2857142857142);
  fast_wave_lr(53.5714285714286);
  delay(589.2857142857142);
  wave_rl(214.2857142857143);
  delay(642.8571428571429);
}
