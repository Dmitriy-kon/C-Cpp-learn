#include <stdio.h>

int main(void)
{
    unsigned int flags, mask;
    scanf("%d %d", &flags, &mask);


    printf("%s", (flags & mask) != 0 ? "yes" : "no");
    return 0;
}