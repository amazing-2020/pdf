#include <stdio.h>
#include <string.h>
#include "getinput.h"
#define SIZE 80
#define LIM 10
#define STOP "quit"
#define LISTAIZE 6
void compback(void);
void quit_chk(void);
void starsch(void);
int main(void)
{
    compback();
    quit_chk();
    starsch();

    return 0;
}

void compback(void)
{
    printf("strcmp(\"A\", \"A\") is: ");
    printf("%d \n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is: ");
    printf("%d \n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is: ");
    printf("%d \n", strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is: ");
    printf("%d \n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"A\") is: ");
    printf("%d \n", strcmp("Z", "A"));

    printf("strcmp(\"apples\", \"apple\") is: ");
    printf("%d \n", strcmp("apples", "apple"));
}

void quit_chk(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit): \n", LIM);
    while (ct < LIM && s_gets(input[ct], SIZE) != 0 && strcmp(input[ct], STOP) != 0)
        ct++;
    printf("%d string entered! \n", ct);
}

void starsch(void)
{
    const char * list[LISTAIZE] = 
    {
        "astronomy", "astounding",
        "astrophysics", "ostracize",
        "asterism", "astrophobia"
    };
    int count = 0;
    int i;

    for (i = 0; i < LISTAIZE; i++)
        if (strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s \n", list[i]);
            count++;
        }
    printf("The list contained %d words beginning" "With astro. \n", count);
}