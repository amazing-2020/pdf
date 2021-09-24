#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, k, TLen, PLen, count = 0;
    char T[50], P[10];

    printf("Please enter two strings, separated by carriage return, mother string first, sub string behind: ");
    /*fgets(T, 50, stdin);
    fgets(P, 10, stdin);*/
    gets(T);
    gets(P);
    TLen = strlen(T);
    PLen = strlen(P);
    for (i = 0; i <= TLen - PLen; i++)
    {
        for (j = 0, k = i; j < PLen && P[j] == T[k]; j++, k++)
            ;
        if (j == PLen) 
            count++;
    }
    printf("%d \n", count);

    return 0;
}
