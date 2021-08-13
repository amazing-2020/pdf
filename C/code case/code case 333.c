#include <stdio.h>
int main(void)
{
    int i, j;
    int n;

    printf("Enter the line to print: "); //2*n+1
    scanf("%d", &n);
    for ( i = 0; i < 2*n + 1; i++)
    {
        for (j = 0; j < 2*n + 1; j++)
        {
            if (i+j >= n && i+j <= 3*n && j-i <= n &&  i-j <= n)
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}