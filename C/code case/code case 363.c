#include <stdio.h>
#include <math.h>
#define X 5
int main()
{
    int num, bit[X], i, j;

    scanf("%d", &num);
    if ( num <= 0 || num > pow(10, X))
        printf("Error. \n");
    else 
    {
        for (i=0; num > 0; i++)
        {
            bit[i] = num%10;
            num /= 10;
        }
        for (j = 0; j < i; j++)
            printf("10^%d -- %d \n", j, bit[j]);
    }

    return 0;
}