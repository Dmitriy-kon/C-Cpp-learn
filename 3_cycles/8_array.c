#include <stdio.h>

#define TOTAL_MARKS 5

int main(void)
{
    int marks[TOTAL_MARKS];

    for (int i = 0; i < TOTAL_MARKS; i++)
    {
        marks[i] = i + 1;
    }
    
    for(int i = 0; i < TOTAL_MARKS; i++) {
        printf("%d ", marks[i]);
    }
    return 0;
}