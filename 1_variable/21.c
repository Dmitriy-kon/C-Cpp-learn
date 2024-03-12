#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    int res1, res2;
    res1 = rect_width / w;
    res2 = rect_height / h;
    
    printf("%d", res1 * res2);

    return 0;
}