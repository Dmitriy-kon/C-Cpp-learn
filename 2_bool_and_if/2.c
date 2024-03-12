#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);


    bool w1 = rect_width % w > 0;
    bool h1 = rect_height % h > 0;
    int res = (rect_width/w)*h1 + (rect_height/h)*w1 + (w1 && h1);


    printf("%d", res);
    return 0;
}