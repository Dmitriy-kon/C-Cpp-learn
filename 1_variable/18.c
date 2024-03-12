#include <stdio.h>

int main(void)
{
    int a, b, h;
    scanf("%d, %d, %d", &a, &b, &h);

    float res = (a + b) * h / 2.0;
    printf("%.1f", res);
}