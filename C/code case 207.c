#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int main(void) {
    long long n;
    printf("Please enter an integer: ");
    scanf("%lld", &n);
    printf("\2 %lld --> \10 %d \n", n, convertBinaryToDecimal(n));

    return 0;
}

int convertBinaryToDecimal(long long n) {
    int decimalNumber = 0, i=0, remainder;
    while (n!=0) {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2, i);
        ++i;
    }
    return decimalNumber;   
}