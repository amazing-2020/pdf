#include <stdio.h>

#define CMP(X, Y) X > Y ? Y : X //3
#define EVEN_GT(X, Y) (X % 2 == 0) && X > Y ? 1 : 0 //4
#define CAL(X, Y) printf(#X " is %d and " #Y " is %d\n", X, Y) //5
#define NUM 25 //6.a
#define SPACE ' ' //6.b
#define PS() printf(" ") //6.c
#define BIG(X) X += 3 //6.d
#define SUMSQ(X, Y) ((X)*(X)) + ((Y)*(Y)) //6.d

int main(void)
{
    int x, y, z;
    x = 4;
    y = 2;
    z = CMP(x, y);
    printf("%d\n", z);

    int a;
    a = EVEN_GT(x, y);
    printf("%d\n", a);
    CAL( 2 + 5, 2 * 9);
    PS();
    printf("%d\n", BIG(x));
    printf("%d\n", SUMSQ(x, NUM));

    return 0;
};