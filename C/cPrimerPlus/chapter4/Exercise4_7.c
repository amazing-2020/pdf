#include <stdio.h>
#include <float.h>

int main(void)
{
    double *factor1;
    float factor2 = 1.0/3.0;

    printf("%.6f, %.12f \n %.16f \n", factor2, factor2, factor2);
    printf("%.6lf, %.12lf \n %.16lf \n", factor1, factor1, factor1); 
    printf("%f %lf \n", FLT_DIG, DBL_DIG);

    return 0;
}