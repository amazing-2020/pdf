#include <stdio.h>
#include <math.h>

int main()
{
    float a = 100;
    float q = 0.5;
    float s,h;
    h = a*pow(q, 10);
    s = 2*(50-h*q*2)/(1-q) + 100;
    printf("%f %f \n", s, h);

    return 0;
}