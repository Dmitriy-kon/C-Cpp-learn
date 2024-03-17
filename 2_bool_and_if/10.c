#include <stdio.h>

int main(void)
{
    int x = -40;

    x >>= 1;
    printf("x = %d\n", x);
    x >>= 1;
    printf("x = %d\n", x);
    x <<= 1;

    printf("x = %d\n", x);
    return 0;
}
