#include <stdio.h>
#define N 3
int main(void)
{
    int i, j, a[N][N], sum = 0;

    printf("Please enter the matrix(3x3): ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
        printf("%d line OK! \n", i + 1);
    }
    for (i = 0; i < N; i++)
        sum += a[i][i];
    printf("%d \n", sum);

    return 0;
}