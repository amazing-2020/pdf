#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int len;
    char tmp;
    char *begin, *end;
    len = strlen(str);
    begin = str;
    end = str + len - 1;
    while (begin < end)
    {
        tmp = *begin;
        *begin = *end;
        *end = tmp;
        begin++;
        end--;
    }
}

int main(void)
{
    char string[] = "I love c++";
    reverse(string);
    puts(string);

    return 0;
}