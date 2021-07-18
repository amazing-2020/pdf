#include <stdio.h>

int main(void)
{
    float fl;
    printf("Enter a floating-point value: ");
    scanf("%f", &fl);
    printf("fixed-point notation: %f \n", fl);
    printf("exponential notation: %e \n", fl);
    printf("p notation: %a \n", fl);

    return 0;
}