#include <stdio.h>
#include <math.h>
int sumN(int a, int i);

int main()
{
    int sum=0, a, n;
    printf("Please input a and n: ");
    scanf("%d %d", &a, &n);
    for (int i = 1; i <= n; i++)
    {
        sum += sumN(a, i);
    }
    printf("a+aa+……= %d \n", sum);

    return 0;
}
int sumN(int a, int i)
{
    if (i>=1)
    {
        return sumN(a, i-1) + a*pow(10, i-1);
    } else {
        return 0;
    }
}