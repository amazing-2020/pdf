#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
void lethead1(void);
void starbar(void);
void lethead2(void);
void show_n_char(char ch, int num);

int main(void)
{
    lethead1();
    lethead2();

    return 0;
}

void lethead1(void)
{
    starbar();
    printf("%s \n", NAME);
    printf("%s \n", ADDRESS);
    printf("%s \n", PLACE);
    starbar();
}

void starbar(void)
{
    int count;

    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}

void lethead2(void)
{
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 12);
    printf("%s \n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;

    show_n_char(SPACE, spaces);
    printf("%s \n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);

    printf("%s \n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
}

void show_n_char(char ch, int num)
{
    int count;

    for (count = 1; count <= num; count++)
        putchar(ch);
}