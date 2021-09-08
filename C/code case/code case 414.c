#include <stdio.h>
int length(char *);

int main()
{
    int len;
    char str[20];
    printf("Please enter a string: ");
    scanf("%s", str);
    len = length(str);
    printf("The string has %d characters. \n", len);

    return 0;
}

int length(char * str)
{
    int i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}