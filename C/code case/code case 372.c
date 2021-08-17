#include <stdio.h>
#include <string.h>
char* deleteCharacters(char * str, char * charSet)
{
    int hash[256];
    if (NULL == charSet)
        return str;
    for (int i = 0; i < 256; i++)
        hash[i] = 0;
    for (int i = 0; i < strlen(str); i++)
        hash[charSet[i]] = 1; //hash[c] = 1
    int currentIndex = 0;
    for (int i = 0; i < strlen(str); i++)
        if (!hash[str[i]]) //if !hash[c] == 0 ->>>
            str[currentIndex++] = str[i];
    str[currentIndex] = '\0';

    return str;    
}

int main(void)
{
    char s[2] = "a";
    char s2[5] = "aca";
    printf("%s \n", deleteCharacters(s2, s));
    return 0;
}