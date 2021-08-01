#include <stdio.h>

int main(void)
{
    float f1 = 1, f2 = 1, f;
    float sum = 0;
    int count = 20;
    while (count != 0)
    {
        f = f1;
        f1 = f1 + f2;
        f2 = f;
        sum += f1/ f2;
        count--;
    }
    printf("sum = %f \n", sum);

    return 0;
}