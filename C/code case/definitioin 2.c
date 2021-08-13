#include <stdio.h>

void main()
{
    float add(float x, float y);//it could also be: float add(float, float); 
    float a, b, c;
    scanf("%f%f", &a, &b);

    c= add(a, b);
    printf("Sum is %f \n", c);
}
float add(float x, float y)
{
    return x+y;
}