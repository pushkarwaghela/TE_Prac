#include <reg51.h>

void delay();

void main() {
    unsigned char arr[10] = {0x11, 0x07, 0x82, 0xD4, 0x89, 0x18, 0xD8, 0x10, 0x90, 0x56};
    P0 = 0x00;
    while (1) {
        unsigned char i;
        for (i = 0; i < 10; i++) {
            P1 = arr[i];
            delay();
        }
    }
}

void delay() {
    unsigned int a, b;
    for (a = 0; a < 1000; a++)
        for (b = 0; b < 1000; b++);
}
