#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
    char c;
    int rows, cols;

    printf("Input another character and two integers:\n");
    while((c = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        while(getchar() != '\n')
            continue;
        
        display(c, rows, cols);
        printf("Input another character and two integers:\n");
        printf("Press Enter to quit.\n");
    }
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }    
}