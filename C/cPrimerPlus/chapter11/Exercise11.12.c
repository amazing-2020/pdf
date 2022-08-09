#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 40
#define ANSWER "Grant"
#include "getinput.h"
char *  str(char * st);
int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    str(try);
    while (strcmp(try, ANSWER))
    {
        puts("No, that's wrong. Try again!");
        s_gets(try, SIZE);
        str(try);
    }

    return 0;
}

char * str(char * st)
{
    int i = 0;
    if (islower(st[i]))
        st[i] -= 32;
    i += 1;
    while (st[i] != '\0' && st[i] != '\n')
    {
        if (isupper(st[i])) st[i] += 32;
        i++;
    }

    return st;
}