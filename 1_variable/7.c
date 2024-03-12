#include <stdio.h>

// Пример функции
int main(void)
{
    double d1, d2, d3, d4;
    float var_f;

    d1 = 10.0;
    d2 = -7.;
    d3 = 1e2;
    d4 = 5e-3;
    var_f = 21.f;

    printf("d1=%f\nd2=%f\nd3=%f\nd4=%f", d1, d2, d3, d4);
    printf("\nvar_f=%f", var_f);
    return 0;
}