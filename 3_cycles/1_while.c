#include <stdio.h>

int main(void)
{
    int a, b;
    int temp;

    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input");
        return 0;
    }

    if (a > b)
    {
        a, b = b, a;
    }

    while (b > 0)
    {
        printf("%d %d\n", a, b);
        temp = a;
        a = b;
        b = temp % b;
    }

    printf("%d", a);

    return 0;
}
