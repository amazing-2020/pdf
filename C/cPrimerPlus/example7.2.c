#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
void cyper1();
void cyper2();
int main(void)
{
    printf("Cyper1: \n");
    cyper1();
    printf("Cyper2: \n");
    cyper2();

    return 0;
}

void cyper1()
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);
}

void cyper2()
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            putchar(ch+1);
        else
            putchar(ch);
    }
    putchar(ch);
}