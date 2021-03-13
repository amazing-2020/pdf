#include <stdio.h>

int main()
{
    struct bs
    {
        unsigned a:3;
        unsigned b:3;
        unsigned c:4;
    } bit, *pbit;
    bit.a=1;
    bit.b=7;
    bit.c=15;
    printf("%d %d %d \n", bit.a, bit.b, bit.c);
    pbit=&bit;
    pbit->a=0;
    pbit->b &= 2;
    pbit->c |= 1;  
    printf("%d %d %d \n", pbit->a, pbit->b, pbit->c);

    return 0;  
}