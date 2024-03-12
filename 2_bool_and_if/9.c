#include <stdio.h>

int main(void)
{
    int dig;
    scanf("%d", &dig);
    printf("%s", dig % 10 == 3 ? "yes" : "no");

    return 0;
}