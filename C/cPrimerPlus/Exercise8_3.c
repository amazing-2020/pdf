#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int lower = 0, upper = 0;

    while ((ch = getchar()) != EOF)
    {
        while (1)
        {
            if (isupper(ch))
            {
                upper++;
                break;
            }
            if (islower(ch))
            {
                lower++;
                break;
            }
            else break;
        }
        if ( ch == '\n')
        {
            printf("%d, %d \n", lower, upper);
            lower = upper = 0;
        }
        if (ch == 1)    //CTRL + A
            break;
    }
    


    return 0;
}