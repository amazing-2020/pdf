#include <stdio.h>
#include <math.h>

int digui(int n);

int main() {
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("The prime factors are broken down as follows: \n");
    digui(n);
    putchar('\n');

    return 0;
}

int digui(int n) {
    int i, x=1;
    if (n>3) {
        for ( i = 2; i <= sqrt(1.0*n); i++) {
            if (n%i == 0) {
                x = 0;
                break;//打破循环，记录i为n的一个因数，x/i为另一个
            }   
        }
    }
    if (x) {
        printf("%d", n);
    } else {
        digui(i);
        printf("*");
        digui(n/i);
    }
}