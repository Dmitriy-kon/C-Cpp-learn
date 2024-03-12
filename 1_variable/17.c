#include <stdio.h>

int main(void)
{
    short a, b, temp;

    scanf("%hd %hd", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("%hd %hd", a, b);

    return 0;
}