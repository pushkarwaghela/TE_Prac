#include <msp430.h>

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;
    P1DIR |= 0x40;
    P1REN |= 0x08;
    P1OUT |= 0x08;
    P1DIR |= Ox00;
    P1IN | = 0X08;
    while (1) {
        if (P1IN & BIT3)
            P1OUT |= BIT6;
        else
            P1OUT &= ~BIT6;
    }

    return 0;
}
