#include <stdio.h>
#define c(a, b) {a = a + b; b= a - b;}
int main()
{
    float a = 2;
    float b = 1;
    float sum = 0;
    int i;

    for (i = 0; i < 20; i++)
    {
        sum += a/b;
        c(a, b);
    }
    printf("%f \n", sum);

    return 0;
}