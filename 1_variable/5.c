#include <stdio.h>

// Пример функции
int main(void)
{
    int dec, hex, oct;

    dec = 100UL;
    hex = 0x1FA;
    oct = 0123;
    
    printf("dec=%d\nhex=%d\noct=%o", dec, hex, oct);

    return 0;
}