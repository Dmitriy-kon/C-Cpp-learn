#include <stdio.h>

int main(void)
{
    int dig;
    scanf("%d", &dig);
    printf("%s", dig / 1000 == 3 ? "yes" : "no");

    return 0;
}