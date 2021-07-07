#include <stdio.h>

int main() {
    int x, n;
    printf("Please enter an integer: ");
    scanf("%d", &x);
    printf("%d = ", x);
    for (n=2; n<x; n++) {
        if (x%n==0) {
            printf("%d*", n);
            x /= n;
            n=1;
        }
    }
    printf("%d\n", x);

    return 0;
}