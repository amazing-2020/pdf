#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int spaces = 0, newlines = 0, characters = 0;

    while ((ch = getchar()) != STOP)
    {
        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            newlines++;
        else
            characters++;
    }
    printf("There is %d spaces, %d newlines, %d characters. \n", spaces, newlines, characters);

    return 0;
}