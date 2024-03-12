#include <stdio.h>

int main(void)
{
    int x;
    if (scanf("%d", &x) != 1)
    {
        printf("Invalid input\n");
        return 0;
    }

    if (x > 0)
        printf("x is even and x = %d", x);
    else if (x == 0)
        printf("x = 0");
    else
        printf("x < 0 x = %d", x);

    return 0;
}