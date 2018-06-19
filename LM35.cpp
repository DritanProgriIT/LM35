//ven 20 mar 2015 23:35:36 CET 

#include <Arduino.h>
#include <LM35.h>

LM35::LM35(int pin, int risBit )
{
   _val = analogRead(pin);
   _risBit = risBit;
}

float LM35::getTemp(void)
{
   return 10/1000*5 * _val / pow(2,_risBit);
}
