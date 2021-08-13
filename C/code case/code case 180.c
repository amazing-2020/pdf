#include <stdio.h>

int main(void) {
    int number, originalNumber, remainder, result=0;
    printf("Enter three digits: ");
    scanf("%d", &number);

    originalNumber = number;
    while (originalNumber !=0) {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if (result == number) {
        printf("%d is Armstrong number. \n", number);
    } else {
        printf("%d is not Armstrong number. \n", number);
    }

    return 0;
}