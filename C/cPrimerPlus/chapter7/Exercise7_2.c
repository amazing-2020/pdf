#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int number = 0;

    while ((ch = getchar()) != STOP)
    {
        if (ch != STOP)
        {
            number++;
            printf("%4d", ch);
            if (number % 8 == 0)
                putchar('\n');
            if (ch == '\n')
            {
                putchar('\n');
                number = 0;
            }
        }
    }
    
    return 0;
}