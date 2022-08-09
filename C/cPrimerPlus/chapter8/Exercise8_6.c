#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch >32)
        {
            putchar(ch);
            break;
        }
    }
    printf("\n");

    return 0;
}