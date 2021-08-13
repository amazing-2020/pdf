#include <stdio.h>
double strangeEat(double n, int day);
int main(void)
{
    int num=0;
    for (double i = 0;; i+=2)
    {
        if (i==strangeEat(i, 1))
        {
            printf("%.1f, %d \n", i, num);
            break;
        } else {
            printf("%lf \n", i);
            num++;
        }
    }
    return 0;
}

double strangeEat(double n, int day)
{

    if (day <= 9)
    {
        return n/2+1+strangeEat(n/2-1, day+1);
    } else {
        return 1.0;
    }
    
}