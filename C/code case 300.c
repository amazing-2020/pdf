#include <stdio.h>

int main() {
    int a, b, t, r, n;
    printf("Plezse input two integers: ");
    scanf("%d%d", &a, &b);
    if (a<b) {
        t = b;
        b = a;
        a = t;
    }
    r = a%b;
    n = a*b;
    while (r!=0) {
        a = b;
        b = r;
        r = a%b;
    }
    printf("The greaest divisor of these numbers is %d, and the least common multiple is %d. \n", b, n/b);

    return 0;
}