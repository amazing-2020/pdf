#include <stdio.h>

int main()
{
    unsigned char ch1=255;
    char ch2=-128;

    printf("%hhd, %hhu, %hho, %hhx \n", ch2, ch1, ch1, ch1);

    unsigned short sh1= 65535; //1111 1111 1111 1111, 2byte
    short sh2=-32767;
    printf("%hu, %hd, %ho, %hx \n", sh2, sh1, sh1, sh1);

    unsigned long ulong=4294967295; // * * * * * * * *(*=1111), 4byte
    long slong= -2147483647;
    printf("%ld, %lu, %lo, %lx \n", slong, ulong, ulong, ulong);

    unsigned long long ull=4294967295;
    long long ll=-2147483647;
    printf("%lld, %llu, %llo, %llx \n", ll, ull, ull, ull);

    long double lb=198888888888;
    printf("%Lf, %Le, %Lo, %Lx, %Lg \n", lb, lb, lb, lb, lb);
    printf("%La, %LA \n", lb, lb);

    return 0;
}