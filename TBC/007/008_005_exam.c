#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '.'

int main()
{
    char c;
    int n_chars = 0;
    int n_lines = 0;
    int n_words = 0;

    bool word_flag = false;
    bool line_flag = false;

    printf("Enter text : \n");

    while ((c = getchar()) != STOP)
    {
        if (!isspace(c))
            n_chars++;

        if (isspace(c) && !word_flag)
        {
            n_words++;
            word_flag = false;
        }

        if (!isspace(c) && !line_flag)
        {
            n_lines++;
            line_flag = true;
        }

        if (c == '\n')
            line_flag = false;
    }

    printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);

    return 0;
}