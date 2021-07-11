#include <stdio.h>
int gcd(int m, int n);
int min(int m, int n, int g);
int main() {
    int m, n, g1, g2;
    printf("Please input two intefers: ");
    scanf("%d %d", &m, &n);
    g1 = gcd(m, n);
    g2 = min( m, n, g1);
    printf("The greaest divisor of these numbers is %d, and the least common multiple is %d. \n", g1, g2);

    return 0;
}

int gcd(int m, int n) 
{
    int r;
    while (n != 0)
    {
        r = m%n;
        m = n;
        n = r;
    }
    return m;
}

int min(int m, int n, int g) 
{
    return m*n/g;
}