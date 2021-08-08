#include <stdio.h>
int main()
{
    long a, b, c, d, e, x;

    printf("Please enter 5 digits: ");
    scanf("%ld", &x);
    a = x / 10000;
    b = x % 10000 / 1000;
    c = x % 1000 / 100;
    d = x % 100 / 10;
    e = x % 10;
    if (a != 0)
    {
        printf("5 digits, in reserved orders: %ld %ld %ld %ld %ld \n", e, d, c, b, a);
    }
    else if (b != 0)
    {
        printf("4 digits, in reserved orders: %ld %ld %ld %ld \n", e, d, c, b);
    }
    else if (c != 0)
    {
        printf("3 digits, in reserved orders: %ld %ld %ld \n", e, d, c);
    } 
    else if (d != 0)
    {
        printf("2 digits, in reserved orders: %ld %ld \n", e, d);
    }
    else
    {
        printf("1 digits, in reserved orders: %ld \n", e);
    }
    
    return 0;
}