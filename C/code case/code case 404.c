#include <stdio.h>
int main()
{
    int a, b;
    a = 077;
    b = a & 3;
    printf("a & b (decimal) is %d \n", b);
    b &= 7;
    printf("a & b (decimal) is %d \n", b);

    return 0;
}