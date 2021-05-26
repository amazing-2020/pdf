#include <stdio.h>

unsigned ppow(unsigned a, unsigned b) {
    unsigned cc = 1;
    while (b)
    {
        cc*=a;
        b--;
    }
    return cc;
}

int main(void) {
    unsigned long long n=0;
    unsigned i, k=0, count=0;
    printf("Please enter a binary number: ");

    scanf("%lld", &n);
    while (n)
    {
        i = n%10;
        if (i) {
            count += ppow(2, k);
        }
        k++;
        n /= 10;
    }
    printf("Convert to decimal: %d \n", count);
    
    return 0;
}