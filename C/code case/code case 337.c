#include <stdio.h>

int main(void)
{
    int i, t;
    float sum = 0;
    float a = 2, b = 1;

    for (i=1; i <= 20; i++)
    {
        sum = sum + a/b;
        t = a;
        a += b;
        b = t;
    }
    printf(" sum =  %f \n", sum);

    return 0;
}