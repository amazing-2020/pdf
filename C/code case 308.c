#include <stdio.h>
#include <math.h>

int main() 
{
    int i, a, n, sum=0;
    printf("Please input a and n: ");
    scanf("%d %d", &a, &n);
    for ( i = 0; i < n; i++)
    {
        sum += a*pow(10, i)*(n-i);
    }
    printf("%d \n", sum);
    
    return 0;
}