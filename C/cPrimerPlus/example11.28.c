#include <stdio.h>
#include <string.h>
#include "getinput.h"
#define MAX 20
#define SIZE 81
#define LIM 20
#define HALT ""
void format(void);

void sort_str(void);
void stsrt(char *strings[], int num);

int main(void)
{
    format();
    getchar();
    sort_str();

    return 0;
}

void format(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("Enter your first name: ");
    s_gets(first, MAX);
    puts("Enter youtr last name: ");
    s_gets(last, MAX);
    puts("Enter your orize money: ");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2lf \n", last, first, prize);
    puts(formal);
}

void sort_str(void)
{
    char input[LIM][SIZE];
    char * ptstr[LIM];
    int ct = 0;
    int k;

    printf("Input up to %d lines, and I will sort them. \n", LIM);
    printf("To stop, press the Enter at a line's start. \n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }
    stsrt(ptstr, ct);
    puts("\nHere's the sorted list: \n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);
}

void stsrt(char *strings[], int num)
{
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
        if (strcmp(strings[top], strings[seek]) > 0)
        {
            temp = strings[top];
            strings[top] = strings[seek];
            strings[seek] = temp;
        }
}