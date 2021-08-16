#include <stdio.h>
double power(double n, int p);
double power2(double n, int p);
int main(void)
{
    double x, xpow, xpow2;
    int exp;

    printf("Enter a number and the positive integer power to which\n");
    printf("the number will be raised. Enter q to quit: ");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        xpow2 = power2(x, exp);
        printf("%.3g to the power %d is %.5g \n", x, exp, xpow);
        printf("%.3g to the power %d is %.5g \n", x, exp, xpow2);
        printf("Enter the next pair of number or q to quit: \n");
    }
    printf("hope you enjoyed this power trip -- bye! \n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    if ( n == 0 || p == 0)
    {
        if ( n == 0 && p == 0)
            printf("0 to ber powered is not defined. \n");
        pow = 1;
    }
    else
    {
        if ( p > 0)
            for (i = 1; i <= p; i++)
                pow *= n;
        else
            for (i = p; i < 0; i++)
                pow *= 1/n;
    }

    return pow;
}

double power2(double n, int p)
{
    double num;

    if ( p > 0)
    {
        num = n * power2(n, p - 1);
    }
    if ( p == 0)
    {
        if ( n== 0 && p == 0)
            printf("0 to ber powered is not defined. \n");
        num = 1;
    }
    if (p < 0)
    {
        num = 1/n * power2(n, p + 1);
    }
    return num;
}