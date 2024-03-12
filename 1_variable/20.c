#include <stdio.h>

int main(void)
{
    int count = 0, size = 5;

    int current = count++;
    int width = ++size;

    int x = 3;
    int p = 2 * --x;

    printf("count = %d, size = %d,\ncurrent = %d, width = %d", count, size, current, width);

    printf("\nx = %d, p = %d", x, p);

    return 0;
}