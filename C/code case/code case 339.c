#include <stdio.h>

int Fibonacci(int a, int b, int n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return b;
    } 
    else
    {
        return Fibonacci(b, a + b, n-1);
    }
}

int main(void)
{
    float sum = 0;
    int i;

    for (i = 2; i < 22; i++)
    {
        float son = Fibonacci( 1, 1, i+1);
        float mother = Fibonacci( 1, 1, i);
        sum = sum + son/mother;
        printf("%.1f / %.1f \n", son, mother);
    }
    printf("sum = %f \n", sum);

    return 0;
}