#include <stdio.h>

int IsSXH(int n) {
    int a, b, c, sum;
    sum = n;
    c = n%10;
    n = n/10;
    b = n%10;
    a = n/10;
    if (sum == a*a*a + b*b*b + c*c*c) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int i;
    for (i=100; i<1000; i++) {
        if (IsSXH(i)) {
            printf("%d \n", i);
        }
    }

    return 0;
}