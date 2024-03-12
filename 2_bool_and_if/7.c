#include <stdio.h>

void print_day(int x)
{
    switch (x)
    {
    case 1:
        printf("today is monday");
        return;
    case 2:
        printf("today is tuesday");
        return;
    case 3:
        printf("today is wednesday");
        return;
    case 4:
        printf("today is thursday");
        return;
    case 5:
        printf("today is friday");
        return;
    case 6:
        printf("today is saturday");
        return;
    case 7:
        printf("today is sunday");
        return;
    default:
        printf("%d is not a day", x);
        return;
    }
}

void print_day_by_char(char x)
{
    switch (x)
    {
    case 'm':
    case 'M':
        printf("today is monday");
        return;
    case 'u':
    case 'U':
        printf("today is tuesday");
        return;
    case 'w':
    case 'W':
        printf("today is wednesday");
        return;
    case 't':
    case 'T':
        printf("today is thursday");
        return;
    case 'f':
    case 'F':
        printf("today is friday");
        return;
    case 'a':
    case 'A':
        printf("today is saturday");
        return;
    case 's':
    case 'S':
        printf("today is sunday");
        return;
    default:
        printf("%c is not a day", x);
        return;
    }
}

int main(void)
{
    int x;
    char m;

    // scanf("%d", &x);
    scanf("%c", &m);
    printf("%c\n", m);

    // print_day(x);
    print_day_by_char(m);
    return 0;
}