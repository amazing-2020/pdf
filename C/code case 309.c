#include <stdio.h>
#include <math.h>
double f16_step1(int number, int n)
{
    int i=0;
    double temp1 = number/9.0;
    double temp2 = (pow(10, n)-1)*temp1;
    printf("%lf \n", temp2);

    return temp2;
}

double f16_step2(int number, int n)
{
    int i;
    double sum=0;
    for (i = 1; i < n; i++)
    {
        sum += f16_step1(number, i);
    }
    
    printf("sum = %lf \n", sum);
}

int main()
{
    int number, frequency;
    scanf("%d %d", &number, &frequency);
    f16_step2(number, frequency);
}