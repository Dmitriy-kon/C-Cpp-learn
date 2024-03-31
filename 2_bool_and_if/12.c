#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int range = 10;

    int a = rand() % 10 -5;
    int b = rand() % 10 -5 ;

    double range_float = (double)rand() / (double)RAND_MAX * range;

    printf("a=%d, b=%d, %d %d\n", a, b, rand(), rand());
    printf("%.2f", range_float);
}