#include <stdio.h>

int main()
{
    float s, h;
    h = 100;
    for (int i = 1; i <= 10; i++)
    {
        s += h;
        h /= 2;
        s += h;
    }
    s -= h;
    printf("%f %f \n", s, h);

    return 0;
}