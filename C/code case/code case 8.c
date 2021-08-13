#include <stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int sum2(int num, int (*sum)(int, int),int a, int b)
{
    return num * sum(a,b);
}

int main(void)
{
    int (*p)(int a, int b) = sum;

    printf("SUM=%d \n", sum(1,2));
    printf("SUM2=%d \n", sum2( 2, sum, 1, 2));

    return 0;
}