#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int x=scanf("%d%d%d", &a, &b, &c);
    printf("%d\t %d\t %lu\n", a, x, sizeof(x));

    return 0;
}