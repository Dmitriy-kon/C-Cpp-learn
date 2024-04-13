#include <stdio.h>

int main(void)
{
    int num;
    int flag = 0;
    int sum1 = 0, sum2 = 0;

    scanf("%d", &num);

    while (num > 0)
    {
        if (flag >= 3)
        {   
            sum2 += num % 10;
            num /= 10;
            continue;
        }
        flag++;

        sum1 += num % 10;
        num /= 10;
    }

    if (sum1 == sum2)
    {
        printf("yes");
        return 0;
    }
    printf("no");
    return 0;
}
