#include <stdio.h>

int main(void)
{
    short a, b, res;
    short *ptr_a = &a;
    short *ptr_b = &b;

    scanf("%hd, %hd", &a, &b);
    res = *ptr_a * *ptr_b;
    printf("%hd", res);

    // здесь продолжайте программу

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}