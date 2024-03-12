#include <stdio.h>

// Пример функции
int main(void)
{
    signed char some_byte;
    some_byte = '+';

    char a;
    a = some_byte;
    printf("%d\n%c", a, some_byte);
    return 0;
}