#include <stdio.h>
int main(void)
{
    int i, j, temp, N;
    double sum;
    double a, b;

    while (scanf("%d", &N) == 1)
    {
        sum = 0;
        a = 2;
        b = 1;
        for (i = 0; i < N; i++)
        {
            sum += a/b;
            temp = a;
            a += b;
            b = temp;
        }
        printf("sum = %lf \n", sum);
    }

    return 0;
}