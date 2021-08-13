#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int n);

int main(void) {
    int n;
    printf("Enter an decimal number: ");
    scanf("%d", &n);
    printf("The decimal number %d is converted to binary digits %lld. \n", n, convertDecimalToBinary(n));
    return 0;
}

long long convertDecimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i=1, step=1;

    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d : %d/2, remainder: %d, quotient: %d \n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i*=10;
    }
    return binaryNumber;    
}