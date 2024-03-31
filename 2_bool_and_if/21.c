#include <stdio.h>
#include <math.h>

#define MAX_BUFF_SIZE 1024

int main(void)
{
    unsigned int buff_size;

    if (scanf("%d", &buff_size) != 1)
    {
        printf("Invalid input");
        return 0;
    }

    buff_size = buff_size < MAX_BUFF_SIZE ? buff_size : MAX_BUFF_SIZE;
    printf("%d", buff_size);

    return 0;
}