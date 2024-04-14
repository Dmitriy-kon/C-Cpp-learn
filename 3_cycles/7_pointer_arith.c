#include <stdio.h>

int main(void)
{
    int a, b;
    int count = 0;

    scanf("%d; %d", &a, &b);

    void *p1 = (void *)a;
    void *p2 = (void *)b;

    for (int i = 0; p1 < p2;)
    {

        p1 += sizeof(double);

        count++;
    }
    printf("%d", count);

    // здесь продолжайте программу

    return 0;
}