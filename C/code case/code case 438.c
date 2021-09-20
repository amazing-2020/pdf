#include <stdio.h>
#include <string.h>
#include <malloc.h>

char * strconnect(char *str1, char *str2);

int main(int argc, char const *argv[])
{
    char str1[20], str2[20];
    char *str;
    puts("Please enter two two string: ");
    scanf("%s%s", str1, str2);
    str = strconnect(str1, str2);
    printf("The string after connect: ");
    puts(str);

    return 0;
}

char * strconnect(char *str1, char *str2)
{
    char *str;
    str = (char*)malloc(strlen(str1) + strlen(str2)+1);
    str[0] = '\0';
    strcat(str, str1);
    strcat(str, str2);
    return str;
}