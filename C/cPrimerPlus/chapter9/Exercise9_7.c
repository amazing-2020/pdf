#include <stdio.h>
void letter(FILE *);
int LetterNumber(char ch);

int main(void)
{
    FILE * fp;

    fp = fopen("Exercise9_7.c", "r");
    letter(fp);
    return 0;
}

void letter(FILE * fp)
{
    char ch;
    int factor = 1;

    while ((ch = getc(fp)) != EOF)
    {
        if (LetterNumber(ch) == -1)
        {
            printf("Not all the factor were letters. \n");
            factor = 0;
            break;
        }
    }
    if (factor == 1)
    {
        while ((ch = getc(fp)) != EOF)
            printf("%d\t", LetterNumber(ch));
    }
}

int LetterNumber(char ch)
{
    int num = 0;

    if (ch >= 65 && ch <= 90)
    {
        num = ch - 65 + 1;
        return num;
    }
    if (ch >= 97 && ch <= 122)
    {
        num = ch - 97 + 1;
        return num;
    }
    else 
    {    
        num = -1;
        return num;
    } 
}