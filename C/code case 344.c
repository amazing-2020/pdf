#include <stdio.h>
int main()
{
    int i;
    long double sum, mix;
    sum = 0, mix = 1;

    for (i = 1; i <= 20; i++)
    {
        mix *= i;
        sum += mix;
    }
    printf("sum = %Lf \n", sum);

    return 0;
}