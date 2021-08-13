#include <stdio.h>

int max(int x, int y)
{
    return x>y ? x:y;
}

int main(void)
{
    int (*p)(int, int) = &max;
    int a, b, c, d;
    printf("Printf enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    d = p(p(a,b),c);

    printf("The max number is: %d \n", d);

    return 0;
}