#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int c;

    // while((c = getchar()) != EOF) // ctrl + z
    //     putchar(c);

    while(1)
    {
        c = getchar();
        printf("%d\n", c);
        if (c == EOF)
            break;
    }

    return 0;
}