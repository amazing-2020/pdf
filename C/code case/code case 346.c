#include <stdio.h>
#include <stdlib.h>

long double jiecheng(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (jiecheng(n-1) * n);
    }
} 
int main(void)
{
    long double sum = 0;

    for (int i = 1; i <= 20; i++)
    {
        sum += jiecheng(i);
    }
    printf("sum = %Lf \n", sum);

    return 0;
}