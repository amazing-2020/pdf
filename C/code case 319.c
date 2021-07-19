#include <stdio.h>
#include <stdlib.h>

double digui(double a, int n)
{
    if (n>0)
    {
        if (n%2)
        {
            return digui(a/2, --n)+a;
        } else {
            return digui(a, --n)+a;
        }
    } else {
        printf("The rebound height is: %lf. \n", a);

        return 0;
    }
    
}

int main()
{
    double a;
    int n;
    printf("Please enter the height and the frequency: ");
    scanf("%lf %d", &a, &n);
    printf("%d time --->> %lf \n", n, digui(a, 2*n-1));

    return 0;
}