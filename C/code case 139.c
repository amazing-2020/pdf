#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    int a[5] = {1, 9, 8, 2, 10}, *p, i, n;
    n = sizeof(a) / sizeof(n);
    p = a;
    for (i = 0; i<= n; i++)
    {
        printf("%-4d", *p);
        p ++;
    }
    printf("\n");
    *p = 100;
    printf("p = %d \n", *p);
    //*错误范例
    return 0;
}