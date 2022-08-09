#include <stdio.h>
void to_other(unsigned long n, int i);
int main(void)
{
    unsigned long number;
    int i;

    printf("Enter an integer and a base (q to quit): \n");
    while (scanf("%lu %d", &number, &i) == 2)
    {   
        if (i == 2)
            printf("Binary equivalent: ");
        if (i == 8)
            printf("Octal equivalent: ");
        if (i == 16)
            printf("Hexadecimal equivalent: ");
        to_other(number, i);
        putchar('\n');
        printf("Enter an integer (q to quit): \n");
    }
    printf("Done. \n");

    return 0;
}

void to_other(unsigned long n, int i)
{
    int r;

    if (i == 2)
    {
        r = n % 2;
        if ( n >= 2)
            to_other(n/2, i);
        putchar(r == 0 ? '0':'1');
    }
    if (i == 8)
        printf("%lo", n);
    if (i == 16)
        printf("%lX", n);
}