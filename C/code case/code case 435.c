#include <stdio.h>
#include <math.h>
int IsPrime(int n)
{
    int i;
    if (n == 1)
        return 0;
    for ( i = 2; i <= sqrt(n); i++)
        if ( n % i == 0)
            return 0;
    return 1;
}
void divide_even(long even, long *a, long *b)
{
    long i;

    for (i = 2; i < even; i++)
        if (IsPrime(i) && IsPrime(even - i))
            break;
    *a = i;
    *b = even - i;
}

int main(int argc, char const *argv[])
{
    long n, a, b;
    printf("Please enter an even number: ");
    scanf("%ld", &n);
    divide_even(n, &a, &b);
    printf("The even %ld could be divided to the sum of the prime number %ld and %ld \n", n, a, b);

    return 0;
}