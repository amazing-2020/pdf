#include <stdio.h>
#include <string.h>
#include "getinput.h"
#define SIZE 40
#define LIM 5
#define WORDS "beast"
#define TARGSIZE 7
void copy1(void);
void copy2(void);
void copy3(void);
int main(void)
{
    //copy1();
    //copy2();
    copy3();

    return 0;
}

void copy1(void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q: \n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q! \n", temp);
        else
        {
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted: ");
    for (i = 0; i < LIM; i++)
        puts(qwords[i]);
}

void copy2(void)
{
    const char * orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);
}

void copy3(void)
{
    char qwords[LIM][TARGSIZE];
    char temp[TARGSIZE];
    int i = 0;

    printf("Enter %d words beginning with q: \n", LIM);
    while (i < LIM && s_gets(temp, TARGSIZE))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q! \n", temp);
        else
        {
            strncpy(qwords[i], temp, TARGSIZE - 1);
            qwords[i][TARGSIZE - 1] = '\0';
            i++;
        }
    }
    puts("Here are the words accepted: ");
    for (i = 0; i < LIM; i++)
        puts(qwords[i]);   
}