#include <stdio.h>
#define  SWAp(A, B) {A = A+B; B = A-B; A = A - B;}

int gcd(int x, int y) 
{
    if (y==0) return x;
    else return gcd(y, x%y);
}

int lcd(int x, int y)
{
    return (x*y)/gcd(x, y);
}

int main() {
    int m, n;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        if(m<n) SWAp(m, n);
        printf("%d \n", gcd(m, n));
        printf("%d \n", lcd(m, n));
        if (getchar()=='\n')  break;
    }

    return 0;
}