#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    for (i=0; i<7; i++)
    {
        for (j=0; j<7-fabs(i-3.0); j++)//fabs返回絕對值
        {
            if (j<fabs(i-3.0)) putchar(' ');
            else putchar('*');
        }
        putchar('\n');
    }

    return 0;
}