#include <stdio.h>
int main() {
    int n, i;
    int m=0;
    printf("Please enter an integer: \n");
    scanf("%d", &n);
    printf("%d = ", n);
    for (i=2; i<=n; i++) {
        while (n%i==0) {
            printf("%d", i);
            n/=i;
            if (n!=1) {
                printf("*");
            }
        }
        m++;
    }
    printf("\n %d \n", n);

    return 0;
}