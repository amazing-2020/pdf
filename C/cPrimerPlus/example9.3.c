#include <stdio.h>
int imin(int, int);

int main(void)
{
    int evil1, evil2;

    printf("Enter a pair of intergers (q to quit): \n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("The lesse of %d and %d is %d. \n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pairf itegers (q to quit): ");
    }
    printf("Bye! \n");

    return 0;
}

int imin(int m, int n)
{
    int min;

    if ( n <= m)
        min = n;
    else
        min = m;

    return min;
}