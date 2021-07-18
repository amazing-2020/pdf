#include <stdio.h>

int main()
{
    float sum=0, h=100;
    int count=0;
    while (count < 10)
    {
        if (count == 0)
        {
            sum += h;
            h /= 2;
        } else {
            sum += h*2;
            h /= 2;
        }
        count++;
    }
    printf("On the 10th landing, a total of %f meters were passed, and the 10th rebound was %f meters. \n", sum, h);

    return 0;
}