#include <stdio.h>

int main()
{
    int n;

    printf("Please enter a number bigger than 10: ");
    scanf("%d", &n);
    int x[100];
    int i = 0;
    int j = 0;
    while (n != 0)
    {
        x[i] = n%10;
        n /= 10;
        i++;
    }
    int z = i;
    printf("The number is %d digits. \n", i);
    printf("The reseverd number: ");
    for (j = 0; j < i; j++)
    {
        printf("%d", x[j]);
    }
    printf("\n");
    return 0;
}