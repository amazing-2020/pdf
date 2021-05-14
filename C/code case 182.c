#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main(void) {
    int n, flag;

    printf("Input a positive integer: ");
    scanf("%d", &n);

    flag = checkPrimeNumber(n);
    if (flag==1) {
        printf("%d is prime number. \n", n);
    } else {
        printf("%d is not a prime number. \n", n);
    }

    flag = checkArmstrongNumber(n);
    if (flag==1) {
        printf("%d is Armstrong number. \n", n);
    } else {
        printf("%d is not Armstrong number. \n", n);
    }

    return 0;
}

int checkPrimeNumber(int n) {
    int i, flag=1;

    for (i=2; i <= n/2; ++i) {
        if (n%i==0) {
            flag=0;
            break;
        }
    }
    return flag;
}

int checkArmstrongNumber(int num) {
    int originalNumber, remainder, result=0, n=0, flag;
    originalNumber = num;

    while (originalNumber != 0){
        originalNumber /= 10;
        ++n;
    }
    originalNumber = num;
    while (originalNumber != 0) {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    
    if (result == num) {
        flag=1;
    } else {
        flag=0;
    }
    return flag;
}