#include <stdio.h>
int main()
{
    int x;
    int sum = 0;
    printf("Please input an integer: ");
    scanf("%d", &x);

    for (int i = x; i > 0; i /= 10)
        sum = sum * 10 + i % 10;
    if (sum == x)
        printf("This is the number of palidrome. \n");
    else
        printf("This isn't the number of palidrome. \n");
}