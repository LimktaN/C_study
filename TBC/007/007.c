#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>

#define PERIOD '.'

int main()
{
    bool test1 = 3 > 2 || 5 > 6;
    bool test2 = 3 > 2 && 5 > 6;
    bool test3 = !(5 > 6);

    printf("%d %d %d\n", test1, test2, test3);


    char ch;
    int count = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if(ch != '\n' && ch != ' ')
            count++;
    }

    printf("%d", count);


    int a = 1, b = 2, c = 3, d = 4;

    a > b && b > c || b > d;
    ((a > b) && (b > c) || (b > d));


    int temp = (1 + 2) * (3 + 4);

    printf("Before : %d\n", temp);

    if (temp == 0 && (++temp == 1024))
    {

    };

    printf("After : %d\n", temp);

    int x = 1, y = 2;
    if (x++ > 0 && x + y == 4)
        printf("%d %d\n", x, y);


    for (int i = 0; i < 100; ++i)
        if (i >= 10 && i <= 20)
            printf("%d ", i);

    printf("\n");

    for (int i = 0; i < 100; ++i)
        if (10 <= i <= 20)
            printf("%d ", i);

    
    for (char c = -128; c < 127; ++c)
        if (c >= 'a' && c <= 'z')
            printf("%c ", c);

    printf("\n");

    for (char c = 0; c < 127; ++c)
        if (islower(c))
            printf("%c", c);

    return 0;
}