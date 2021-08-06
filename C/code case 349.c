#include <stdio.h>
void fun(char * s, int length)
{
    if (length >= 1)
    {
        printf("%c", s[length - 1]);
        fun(s, length - 1);
    }
}

int main(void)
{
    char * s = "Hello";
    int length = 5;
    fun(s, length);

    return 0;
}