//ven 20 mar 2015 23:13:58 CET
 
#ifndef LM35_h
#define LM35_h

#include <Arduino.h>

class LM35
{
   public:
          
        LM35(int pin, int risBit);
        float getTemp(void);

  private:

        int _pin;
        int _risBit;
        float _val;      
};

#endif

