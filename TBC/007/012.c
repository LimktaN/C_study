#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != '.')
    {
        printf("You love ");

        switch (c)
        {
            case 'a': case 'A':
                printf("apple");
                break;
            case 'b': case 'B':
                printf("baseball");
                break;
            case 'c': case 'C':
                printf("cake");
                break;
            default:
                printf("nothing");
        }

        printf(".\n");

        while (getchar() != "\n")
            continue;
    }

    return 0;
}