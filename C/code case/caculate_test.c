#include <stdio.h>

int numerator(int n) //分子
{
    int s=1, i=1;
    for (i=1; i<n; i++) 
    {
        s += i;
    }
    return s;
}
int denominator(int n) //分母
{
    int t=1, i=1;
    for (i=1; i<n; i++) 
    {
        t *= i;
    }
    return t;
}

int main()
{
    float sum=0;
    int i=0;
    int n;
    scanf("%d", &n);
    for (i=1; i<n; i++) 
    {
        printf("numerator: %d\t", numerator(i));
        printf("denominator: %d\t", denominator(i));
        printf("x = %f \n", (float)numerator(i)/denominator(i));
        sum += (float)numerator(i)/denominator(i);
    }

    printf("sum = %f \n", sum);

    return 0;
}