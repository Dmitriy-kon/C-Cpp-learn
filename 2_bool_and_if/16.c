#include <stdio.h>

#define MENU_TRANSL 1
#define MENU_ADD 2
#define MENU_EXIT 3
#define MENU_FMT "You have selected menu item %d\n"
#define FIRST_LETTER 'a'

int main(void)
{
    int item;
    scanf("%d", &item);

    switch (item)
    {
    case MENU_TRANSL:
        printf("Translate word\n"); // printf
        break;
        
    case MENU_ADD:
        printf("Add word\n");
        break;

    case MENU_EXIT:
        printf("Exit\n");
        break;

    case FIRST_LETTER:
        printf("First letter\n");

    default:
        break;
    }
}