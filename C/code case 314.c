#include <stdio.h>

int main()
{
    float h, s;
    h = s =100;
    h /= 2;
    for (int i = 2; i <= 10; i++)
    {
        s = s + 2*h;
        h /= 2;
    }
    printf("On the 10th landing, a total of %f meters were passed, and the 10th rebound was %f meters. \n", s, h);

    return 0;
}