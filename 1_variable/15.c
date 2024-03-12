#include <stdio.h>

int main(void)
{
    // char byte1 = '0', byte2 = '0';
    long long var_lli;
    double var_d = 0;

    int res = scanf("%lld %10lf", &var_lli, &var_d);
    // printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);
    printf("res = %d: var_lli = %lld\nvar_d = %.2f", res, var_lli, var_d);
 
    return 0;
}