#include <stdio.h>
#include <string.h>
char * ptrSpace(char * st)
{
    while (*st != '\0')
    {
        if (*st == ' ')
            return st;
        st++;
    }
    return NULL;
}