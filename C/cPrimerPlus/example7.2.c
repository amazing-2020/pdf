#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
void cypher1();
void cypher2();
int main(void)
{
    printf("Cypher1: \n");
    cypher1();
    printf("Cypher2: \n");
    cypher2();

    return 0;
}

void cypher1()
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

void cypher2()
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