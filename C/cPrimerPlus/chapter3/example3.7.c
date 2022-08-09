#include <stdio.h>

void floaterr();
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e \n", aboat, aboat);
    printf("And it's a %a in hexadecimal, powers of 2 notation \n", aboat);
    printf("%f can be written %e \n", abet, abet);
    printf("%Lf can be written %Le \n", dip, dip);

    floaterr();

    return 0;
}

void floaterr()
{
    float a,b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n");
}