#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Inverse(char str[], char ptr[]);

int main(int argc, char *argv[])
{
    char str[100];
    char ptr[100];
    printf("Input a string.\n");
    fgets(str, sizeof(str), stdin);
    Inverse(str, ptr);
    printf("Inversed results is: %s \n", ptr);

    return 0;
}
 
void Inverse(char str[], char ptr[])
{
    int len = strlen(str);
    int i;

    for (i=0; i<=len; i++)
    {
        ptr[i] = str[len-i-1];
    }
    ptr[i-1] = '\0';
}