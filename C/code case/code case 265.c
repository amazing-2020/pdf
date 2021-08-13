#include <stdio.h>
#include <math.h>

int main(void) {
    int n, x, a, m;
    double b;

    for (n=1; n<=168/2; n++) {
        x = n*n-100;
        a = x+268;
        b = sqrt(a);
        if ((int)b==b) {
            m = (int)b;
            printf("%d + 100 = %d*%d \n", x, n, n);
            printf("%d + 268 = %d*%d \n", x, m, m);
        }
    }

    return 0;
}