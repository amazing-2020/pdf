#include <stdio.h>

int main() {
    int m, n, x, minx, maxx, z;
    printf("Please input two integers: ");
    scanf("%d %d", &m, &n);
    z = m>n? m:n;
    for ( x = 2; x <= z; x++)
    {
        if (m%x==0&&n%x==0)
        {
            maxx = x;
        }
    }
    printf("%d \n", maxx);
    minx = m*n/maxx;
    printf("%d \n", minx);

    return 0;
}