//mer 20 giu 2018 01:01:06 CEST  

#include <Arduino.h>
#include <LM35.h>

LM35::LM35(int pin,float vPin, int risBit )
{
	_pin = pin;
   	_risBit = risBit;
	_vPin = vPin;
}

double LM35::getTemp(void)
{
   return ( _vPin / 0.01 * analogRead(_pin) / pow(2,_risBit));
 
}
