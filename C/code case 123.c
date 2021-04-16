#include <stdio.h>

int Strlen(char* str)
{
    if (*str == '\0')
    {
        return 0;
    }
    return 1 + Strlen(str + 1);
}

int main()
{
    char* ch = "abcdefg";
    int len = Strlen(ch);
    printf("%d \n", len);

    return 0;
}