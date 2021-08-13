#include <stdio.h>

int main(void) {
    long long n;
    int count = 0;

    printf("输入一个整数:");
    scanf("%lld", &n);
    while (n != 0) {
        n /= 10;
        ++count;
    }
    
    printf("The number is %d digits. \n", count);

    return 0;
}