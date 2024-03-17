#include <stdio.h>

int main(void)
{
    float a, b, c;
    if (scanf("%f, %f, %f", &a, &b, &c) != 3)
    {
        printf("Invalid input\n");
        return 0;
    }

    if ((a < b + c) && (b < c + a) && (c < b + a))
        printf("yes");
    else
        printf("no");
}