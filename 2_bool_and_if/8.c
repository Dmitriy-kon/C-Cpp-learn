#include <stdio.h>

int show_menu(void)
{
    char menu_item;

    printf("a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    scanf("%c", &menu_item);

    switch (menu_item)
    {
    case 'a':
    case 'A':
        menu_item = 1;
        return menu_item;
    case 'b':
    case 'B':
        menu_item = 2;
        return menu_item;
    case 'c':
    case 'C':
        menu_item = 3;
        return menu_item;
    case 'd':
    case 'D':
        menu_item = 4;
        return menu_item;
    default:
        return -1;
    }

    // здесь прописывайте функцию scanf() и оператор switch

    return -1;
}

int main(void)
{
    int item = show_menu();
    printf("%d", item);

    // здесь выводите значение переменной item
    return 0;
}