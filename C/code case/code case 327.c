#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
    char a, b, c;
    int i, j;
    int n=0, num=0;

    for (i = 0; i < 3; i++)
    {
        a = 'x' + i;
        num++;
        for (j = 1; j < 3; j++)
        {
            num++;
            b = 'x' + (i+j)%3;
            c = 'x' + 3 - (i+j)%3 - i;
            if (a!='x' && c!='x' && c!='z')
            {
                printf("a--%c,b--%c,c--%c, %d %d\n", a, b, c, num, 3%5);
                n=1;
                break;
            }
        }
        if (n==1)
        {
            break;
        }
    }
    
    return 0;
}