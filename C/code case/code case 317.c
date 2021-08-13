#include <stdio.h>

int main()
{
    int i;
    float sum=0, b=100;
    for ( i = 0; i < 10; i++)
    {
        sum += b*1.5;
        b /= 2;
    }
    printf("%f %f \n", b, sum-b);

    return 0;
}