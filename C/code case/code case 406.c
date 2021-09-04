#include <stdio.h>
int main()
{
    int a, b;

    a = 1;
    b = ~a;
    printf("~a = %d \n", b);
    a = ~a;
    printf("~a = %x \n", a);

    return 0;
}