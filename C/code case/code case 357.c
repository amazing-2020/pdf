#include <stdio.h>
int main()
{
    int i, j, k, count = 0;

    printf("Please enter a digit: ");
    scanf("%d", &i);
    printf("The reversed number: ");
    for (j = 1; j <= 5; j++)
    {
        k = i%10;
        i /= 10;
        count++;
        printf("%d", k);
        if (i == 0)
            break;
    }
    printf(" %d numbers. \n", count);

    return 0;
}