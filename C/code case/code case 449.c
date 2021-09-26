#include <stdio.h>
#include <string.h>

int strCount(char strM[], char strS[]);

int main(int argc, char const *argv[])
{
    char strM[100], strS[100];

    printf("Please enter two strings, separated by carriage return, mother string first, sub string behind: ");
    scanf("%s\n%s", strM, strS);
    printf("%d \n", strCount(strM, strS));

    return 0;
}

int strCount(char strM[], char strS[])
{
    int count = 0;

    for (int i = 0; i < strlen(strM); ++i)
    {
        int m = i;
        char *Mp = &strM[m], *Sp = strS;
        while (*Sp != '\0')
        {
            printf("%c %c \n", strM[m], *Sp);
            if (strM[m++] != *Sp++)
                break;
            if (*Sp == '\0')
                ++count;
        }
    }

    return count;
}