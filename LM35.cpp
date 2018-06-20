mer 20 giu 2018 01:01:06 CEST  

#include <Arduino.h>
#include <LM35.h>

LM35::LM35(int pin,float vPin, int risBit )
{
   	_val = analogRead(pin);
   	_risBit = risBit;
	_vPin = vPin
}

float LM35::getTemp(void)
{
   return (0,01 * _vPin * _val / pow(2,_risBit));
}
