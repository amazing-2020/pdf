#include <stdio.h>

double power(double n, double k)
{
    if ( k == 0)
    {
        return 1;
    }
    if ( k == 1) 
    {
        return n;
    }
    
    return n * power(n , k-1);
}

int main()
{
    double k;
    double n;
    printf("Please enter the k-th square of n to print. \n");
    scanf("%lf %lf", &n, &k);
    printf("%lf \n", power(n, k));
    
    return 0;
}