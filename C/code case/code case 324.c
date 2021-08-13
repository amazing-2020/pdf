#include <stdio.h>
#include <math.h>

int main(void)
{
    int A1, B1, q, n, An, Bn;
    A1 = 1;
    B1 = A1 + 2, q = 2, n = 10;
    Bn = B1*pow(2, n-1);
    An = Bn - 2;
    printf("%d \n", An);

    return 0;
}