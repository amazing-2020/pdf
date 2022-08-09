#include <stdio.h>
#define SIZE 40

void readCharacter(char * arr);

int main(void) {
    char array[SIZE];

    printf("Enter characters: ");
    readCharacter(array);
    printf("The String you in put: ");
    for (int i = 0; i < sizeof(array); ++i) {
        putchar(array[i]);
    }
    puts(array);

    return 0;
}

void readCharacter(char * arr)
{
    int i = 0;
    do {
        arr[i] = getchar();
    } while (arr[i] != EOF && i++ <= SIZE);
}