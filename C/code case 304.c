#include <stdio.h>
long maxn(long m, long n) 
{
    long tmp;
    while (1)
    {
        if (m==n) return m;
        else if (m<n) n -= m;
        else m -= n;
    }
}
int main() {
    long a, b, m, n;
    printf("Please inpuit two integers: ");
    scanf("%d %d", &a, &b);
    m = maxn(a, b);
    n = a*b/m;
    printf("The greaest divisor of these numbers is %d, and the least common multiple is %d. \n", m, n);

    return 0;
}