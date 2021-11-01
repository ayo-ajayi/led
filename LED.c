#include <reg52.h> // special function register declarations
// for the intended 8051 derivative

//#define LED       (*((volatile unsigned long *)0x80))
#define GPIO_PORTF_DATA_R (*((volatile unsigned long *)0x400253FC))
sbit LED = P2 ^ 1; // Defining LED pin
void Delay(void);  // Function prototype declaration
void main(void)
{
    while (1) // infinite loop
    {
        LED = 0; // LED ON
        Delay();
        LED = 1; // LED OFF
        Delay();
    }
}
void Delay(void)
{
    int j;
    int i;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 10000; j++)
        {
        }
    }
}
