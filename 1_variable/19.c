#include <stdio.h>

int main(void)
{
    int time = 60 * 60 * 7 + 57*60 + 55;

    int second = time % 60;
    int minut = (time / 60) % 60;
    int hour = (time / 60) / 60;

    printf("%02d:%02d:%02d", hour, minut, second);

    return 0;
}