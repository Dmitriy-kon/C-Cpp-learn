#include <stdio.h>

int main(void)
{
    unsigned char h = 12, m = 3, s = 9;

    printf("%#04x:%#04x:%#04x", h, m, s);

    return 0;
}