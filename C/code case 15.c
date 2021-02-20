#include <stdio.h>

typedef int* PINT;

int main()
{
    int x;
    PINT px = &x;
    *px = 10;
    printf("%d \n", x);

    return 0;
}
