#include <stdio.h>
#include <math.h>
double array1(int n);
double array2(int n);
int main(void)
{
    int n;

    printf("Enter the number of items: ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("With %d items, sum = %lf and %lf \n", n, array1(n), array2(n));
        printf("Please enter next number: ");
        scanf("%d", &n);
    }
    
    return 0;
}

double array1(int n)
{
    int i;
    double sum = 0.0;

    for (i = 1; i <= n; i++)
    {
        sum += 1.0/i;
    }
    return sum;
}

double array2(int n)
{
    int i;
    double sum = 0.0;

    for (i = 1; i <= n; i++)
    {
        sum += (1.0/i)*pow(-1, i-1);
    }
    return sum;
}