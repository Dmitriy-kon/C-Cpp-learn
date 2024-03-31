#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    if (scanf("%d, %d", &a, &b) != 2)
    {
        printf("Invalid input");
        return 0;
    }

    double tangent_angle = (double)a / b;
    double tan_radians = atan(tangent_angle);
    printf("%.2lf %.2lf", tangent_angle, tan_radians);
    return 0;
}