#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch, prev;
    int num;

    while ((ch = getchar()) != STOP)
    {
        if (prev == 'e' && ch == 'i')
            num++; 
        prev = ch;
    }

    printf("%d \n", num);
    return 0;
}