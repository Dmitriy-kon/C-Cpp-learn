#include <stdio.h>

#define MUL_VAR_NAME(A, B) mul_ ##A##_##B

int main(void)
{
    int var_1, var_2;

    if (scanf("%d %d", &var_1, &var_2) != 2)
    {
        printf("Invalid input");
        return 0;
    }

    int MUL_VAR_NAME(var_1, var_2) = var_1 * var_2;

    printf("%d", mul_var_1_var_2);

    return 0;
}