#include "mbed.h"

void Led3(DigitalOut &ledpin)
{
    for(int i = 0; i < 6; ++i)
    {
        ledpin = !ledpin;
        ThisThread::sleep_for(100ms);
    }
}
void Led2(DigitalOut &ledpin)
{
    for(int i = 0; i < 4; ++i)
    {
        ledpin = !ledpin;
        ThisThread::sleep_for(100ms);
    }
}
