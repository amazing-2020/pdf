#include <stdio.h>

int main(void)
{
    int i;
    float a[20] = {0};
    float s;
    a[0] = 1;
    a[1] = 2;
    s = a[1] / a[0];
    for (i = 2; i <= 20; i++) 
    {
        a[i] = a[i-1] + a[i-2];
        s += a[i] / a[i-1];
    }
    printf("s = %f \n", s);

    return 0;
}