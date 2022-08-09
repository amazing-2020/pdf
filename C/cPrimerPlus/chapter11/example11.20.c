#include <stdio.h>
#include <string.h>
#include "getinput.h"
#define ANSWER "Grant"
#define SIZE 40
void nogo(void);
void compare(void);
int main(void)
{
    //nogo();
    compare();

    return 0;
}

void nogo(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (try != ANSWER)
    {
        puts("No, that's wrong. Try again!");
        s_gets(try, SIZE);
    }
}

void compare(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER))
    {
        puts("No, that's wrong. Try again!");
        s_gets(try, SIZE);
    }
}