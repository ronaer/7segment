//a little modified by ronaer and thanks to tawi :)

#include "DHT.h"
#define DHT22_PIN A0     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22
DHT dht(DHT22_PIN, DHTTYPE);
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 7;
int f = 8;
int g = 12;
int GND1 = 6;
int GND2 = 9;
int GND3 = 10;
int GND4 = 11;
int dig1;
int dig2;
int dig3;
int dig4;
int Temp;
int Humi;
void setup()
{

  dht.begin();
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(GND1, OUTPUT);
  pinMode(GND2, OUTPUT);
  pinMode(GND3, OUTPUT);
  pinMode(GND4, OUTPUT);
  pinMode(A0, INPUT); 
}

void loop()
{
  
  Temp = dht.readTemperature();
  Humi = dht.readHumidity();
    dig1 = Temp / 10;
    dig2 = Temp - (dig1 * 10);
    dig3 = Humi / 10;
    dig4 = Humi - (dig3 * 10);

    for (int i = 1; i <= 2000; i++)
    {
        digitalWrite( GND1, LOW);    //digit 1
        DisplayNumber(dig1);
        delay(4);
        digitalWrite( GND1, HIGH);

        digitalWrite( GND2, LOW);    //digit 2
        DisplayNumber(dig2);
        delay(4);
        digitalWrite( GND2, HIGH);

        digitalWrite( GND3, LOW);    //digit 3
        DisplayNumber(dig3);
        delay(4);
        digitalWrite( GND3, HIGH);

        digitalWrite( GND4, LOW);    //digit 4
        DisplayNumber(dig4);
        delay(4);
        digitalWrite( GND4, HIGH);
}
}
void DisplayNumber(int x) {
  switch (x) {
    case 0: zero(); break;
    case 1: one(); break;
    case 2: two(); break;
    case 3: three(); break;
    case 4: four(); break;
    case 5: five(); break;
    case 6: six(); break;
    case 7: seven(); break;
    case 8: eight(); break;
    case 9: nine(); break;
  }
}

void zero()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, LOW);
}

void one()
{
  digitalWrite( a, LOW);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void two()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, HIGH);
  digitalWrite( c, LOW);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, HIGH);
}

void three()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, HIGH);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, HIGH);
}

void four()
{
  digitalWrite( a, LOW);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}

void five()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, LOW);
  digitalWrite( c, HIGH);
  digitalWrite( d, HIGH);
  digitalWrite( e, LOW);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}

void six()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, LOW);
  digitalWrite( c, HIGH);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}

void seven()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void eight()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}

void nine()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, HIGH);
  digitalWrite( e, LOW);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}
