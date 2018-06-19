mer 20 giu 2018 01:02:53 CEST 
 
#ifndef LM35_h
#define LM35_h

#include <Arduino.h>

class LM35
{
   public:
          
        LM35(int pin,float vPin int risBit);
        float getTemp(void);

  private:

        int _pin;
        int _risBit;
        float _val; 
	float _vPin;	     
};

#endif

