#include <stdio.h>

int main(void)
{
    double a, b, h;

    if (scanf("%d, %d, %d", &a, &b, &h) != 3)
    {
        printf("Input error.");
        return 0;
    }

    double res = (a + b) * h / 2.0;
    printf("%.1f", res);
    return 0;
}