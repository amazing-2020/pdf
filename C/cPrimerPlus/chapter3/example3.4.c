#include <stdio.h>

void int_and_uint();
int main(void) 
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    int_and_uint();
    printf("un = %u and not %d \n", un, un);
    printf("end  = %hd and %d \n", end, end);
    printf("big = %ld and not %hd \n", big, big);
    printf("verybig = %lld and not %ld \n", verybig, verybig);

    return 0;
}

void int_and_uint()
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d \n", i, i+1, i+2);
    printf("%u %u %u \n", j, j+1, j+2);
}