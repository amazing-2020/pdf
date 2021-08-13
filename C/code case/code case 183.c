#include <stdio.h>

long long power(long long x, int y) {
    long long sum=1;
    while (y--) {
        sum *= x;
    }
    return sum;
}

int check_arm(long long n) {
    long long temp, sum=0, remainder, count=0;
    temp=n;
    while (temp*10/10 != 0) {
        temp /= 10;
        ++count;
    }
    temp=n;//恢复temp初始值
    while (temp*10/10 != 0) {
        sum += power(temp%10, count);
        temp /= 10;
    }
    if (n==sum) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    long long temp, n, result, a, b, i;
    int flag;
    printf("Please a number: ");
    scanf("%lld", &n);
    result=check_arm(n);
    if (result==1) {
        printf("Yes, this is a Armstrongnumber! \n");
    } else {
        printf("No, this is not a armstrongnumber! \n");
    } 

    printf("Please enter two numbers as an interregional, seprated by a space: ");
    scanf("%lld %lld", &a, &b);
    flag=1;
    if (a==b) {
        printf("That is no valid interragional. \n");
        flag=0;
    } else if(a>b) {
        temp=a;
        a=b;
        b=temp;
    }

    if (flag==1) {
        printf("ArmstrongNumber between %lld and %lld is(are): ", a, b);
        for (i=a; i<=b; i++) {
            if (check_arm(i) == 1) {
                printf("%-5lld", i);
            }
        }
    }
    printf("\n");
    
    return 0;
}