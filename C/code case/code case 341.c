#include <stdio.h>
int main(void)
{
    float sum = 0, temp;
    float a = 2, b= 1;
    int i;

    for (i = 0; i < 20; i++)
    {
        sum += a/b;
        temp = b;
        b = a;
        a = temp + a;
    }
    printf("%f \n", sum);

    return 0;
}