#include <stdio.h>

#define FIVE 5
#define TEN 4 * FIVE
#undef TEN
#define TEN 10

int main(void)
{
    printf("%d", TEN);
    return 0;
}