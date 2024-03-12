#include <stdio.h>

int main(void)
{   
    int speed;
    scanf("%d", &speed);

    float res = (speed * 3600) / 1000.0;
    printf("%.1f", res);


    return 0;
}