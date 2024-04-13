#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    if ((num * num) % 24 == 1)
    {
        printf("yes");
        return 0;
    }

    printf("no");
    return 0;

}