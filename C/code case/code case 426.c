#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;

    printf("Enter a digit: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    printf("The digit after reversed: %d \n", reversedNumber);

    return 0;
}