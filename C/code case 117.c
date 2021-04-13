#include <stdio.h>
double factorial(unsigned int i)
{
    if (i <= 1) 
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int main()
{
    int i = 25;
    printf("%d 阶乘 %f \n", i, factorial(i));

    return 0;
}