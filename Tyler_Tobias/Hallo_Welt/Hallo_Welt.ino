//Tyler Deck
//Hallo Welt
//7.12.2022


int a = 10;
int b = 2;

void setup ()
{
Serial.begin(9600);

Serial.println("Addieren");
Serial.print(a);
Serial.println(" = a");
Serial.print(b);
Serial.println(" = b");
Serial.print("a + b = ");
Serial.println( a + b );
Serial.println();

Serial.println("Subtrahieren");
Serial.print(a);
Serial.println(" = a");
Serial.print(b);
Serial.println(" = b");
Serial.print("a - b = ");
Serial.println( a - b );
Serial.println();

Serial.println("Multiplizieren");
Serial.print(a);
Serial.println(" = a");
Serial.print(b);
Serial.println(" = b");
Serial.print("a * b = ");
Serial.println( a * b );
Serial.println();

Serial.println("Dividieren");
Serial.print(a);
Serial.println(" = a");
Serial.print(b);
Serial.println(" = b");
Serial.print("a / b = ");
Serial.println( a / b );

}
void loop()
{
}
