#include <stdio.h>

#define MAX_WIDTH 256
#define MAX_HEIGHT 500

int main(void)
{
    double width, height;
    if (scanf("%lf %lf", &width, &height) != 2)
    {
        printf("Invalid input");
        return 0;
    }

    width = width < MAX_WIDTH ? width : MAX_WIDTH;
    height = height < MAX_HEIGHT ? height : MAX_HEIGHT;
    printf("%.1lf %.1lf", width, height);

    return 0;
}