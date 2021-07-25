#include <stdio.h>
#define MAX 10
int main()
{
    int i, j;
    int ctl = 0;
    if ( MAX%2 != 0)
    {
        ctl += 1;
    } else {
        ctl = MAX;
    }
    for ( i = 1; i <= MAX; i++)
    {
        for ( j = 1; j <= MAX; j++)
        {
            if ( i <= ctl/2)
            {
                if ( j > ctl/2-i && j < ctl/2+i)
                {
                    printf("*");
                } else {
                    printf("+");
                }
            } else {
                if ( j > i - ctl/2 && j < ctl/2 + ctl - i)
                {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}