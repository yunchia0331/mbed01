#include "mbed.h"

DigitalOut myLED3(LED3);
DigitalOut myLED1(LED1);

void Led3(DigitalOut &ledpin);
void Led2(DigitalOut &ledpin);

int main()
{
    myLED3 = 1;
    myLED1 = 1;
    while(true)
    {
        Led3(myLED3);
        Led2(myLED1);
    }
}