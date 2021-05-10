#include <stdio.h>

int main(void) {
    int n, reverseInteger = 0, remainder, originalInteger;

    printf("Enter an integer:");
    scanf("%d", &n);

    originalInteger = n;

    while (n!=0) {
        remainder = n%10;
        reverseInteger = reverseInteger*10 + remainder;
        n /= 10;
    }
    if (originalInteger == reverseInteger) {
        printf("%d is oalinfrome number.\n", originalInteger);
    } else {
        printf("%d is not oalinfrome number.\n", originalInteger);
    }
    
    return 0;
}