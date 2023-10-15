// LED Blinking Using PIC16F877A
#define _XTAL_FREQ 20000000
#include <xc.h>

void main()
{
    TRISB0 = 0; // D0 pin is output
    while(1)
    {
        RB0 = 1; // D0 pin is HIGH
        __delay_ms(1000);
        RB0 = 0; //D0 pin is LOW
        __delay_ms(1000);
    }
}

