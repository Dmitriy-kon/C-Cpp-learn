#include <stdio.h>

int main(void)
{
    short var;
    short *ptr_var = &var;

    char *ptr_ch;
    ptr_ch = (char *)ptr_var;


    scanf("%hd", &var);
    *ptr_ch = 2;

    printf("%d", *ptr_ch);


    // здесь продолжайте программу

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}