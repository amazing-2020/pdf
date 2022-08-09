#include <stdio.h>
#define SIZE 40
char * readCharacter(char * arr);

int main(void)
{
    char characters[SIZE] = {0};

    printf("Enter characters: ");
    readCharacter(characters);
    printf("The String you in put: ");
    for (int i = 0; i < sizeof(characters); ++i)
        putchar(characters[i]);
    puts(characters);

    return 0;
}

char * readCharacter(char * arr)
{
    int i = 0;
    do {
        arr[i] = getchar();
        if (arr[i] == ' ' || arr[i] == '\t' || arr[i] == '\n')
            break;
    } while (i++ <= SIZE);

    return arr;
}