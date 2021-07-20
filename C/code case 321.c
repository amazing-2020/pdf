#include <stdio.h>

int main(void)
{
    int sum=1, i;
    for ( i = 10; i > 0; i--)
    {
        printf("The number of %-3d day, %-5d peaches left\n", i, sum);
        sum = (sum+1)*2;
    }
    
    return 0;
}