#include <stdio.h>
#define message_for(a, b) \
    {printf(#a" and "#b ": we love you!");}

int main()
{
    message_for(Mike, Joe)
    return 0;
}
