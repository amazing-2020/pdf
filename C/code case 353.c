#include <stdio.h>
int age(n) int n;
{
    int c;

    if (n == 0) c = 10;
    else c = age(n - 1) + 2;
    return c;
}
int main(void)
{
    printf("%d \n", age(5));

    return 0;
}