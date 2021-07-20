#include <stdio.h>

int main(void)
{
    int i;
    int a[20]={0};
    a[10] = 1;
    for ( i = 10; i > 1; i--)
    {
        a[i-1] = (a[i]+1)*2;
    }
    printf("%d \n", a[1]);

    return 0;
}