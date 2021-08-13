#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Inverse(char str[]);
int main()
{
    char str[100];
    printf("Input a string: \n");
    fgets(str, sizeof(str), stdin);
    Inverse(str);
    printf("Inverse result is %s \n", str);

    return 0;
}

void Inverse(char str[])
{
    int len = strlen(str);
    int i;
    char temp;
    for (i=0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}