#include <stdio.h>
void printLowercaseLetters();
void printCharacters();
void printFormattedLetters();
void printLettersWithThisFormat();
int main(void)
{
    printLowercaseLetters();
    printCharacters();
    printFormattedLetters();
    printLettersWithThisFormat();

    return 0;
}

void printLowercaseLetters()
{
    const int SIZE = 27;
    char letters[SIZE];
    int i;
    
    letters[0] = 'a', letters[26] = '\0';
    for ( i = 1; i < 26; i++)
    {
        letters[i] = letters[i-1] + 1;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%2c", letters[i]);
    }
    printf("\n");
}

void printCharacters()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
}

void printFormattedLetters()
{
    const char Letters = 'F';
    char letter;
    int i, j;

    for (i = 0, letter = Letters; i < 6; i++)
    {
        for (j = 0, letter = Letters; j <= i; j++)
        {
            printf("%c", letter);
            letter--;
        }
        printf("\n");
    }
}

void printLettersWithThisFormat()
{
    const int times = 6;
    char letter = 'A';
    int i, j;
    for (i = 0; i < times; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }
}