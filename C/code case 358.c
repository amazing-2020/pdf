#include <stdio.h>
int main(void)
{
    int n, count = 0, num;

    printf("Please enter a digit no more than 5 numbers. \n");
    scanf("%d", &n);
    num = n;
    while (n)
    {
        n /= 10;
        count++;
    }
    printf("%d numbers, the reversed numbers is: ", num);
    while (num)
    {
        printf("%2d", num%10);
        num /= 10;
    }
    printf("\n");
    
    return 0;
}