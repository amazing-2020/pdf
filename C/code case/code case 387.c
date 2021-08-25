#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main()
{
    int i = 0, j = 0;
    int a[N][N];
    int sum = 0;
    
    srand(time(NULL));
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            a[i][j] = rand() % (N*N + 1);
    printf("Print random %d order matrix: ", N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < N; i++)
        sum += a[i][i] + a[i][N -  1 - i];
    sum -= a[(N-1)/2][(N-1)/2];
    printf("Sum  = %2d \n", sum);

    return 0;
}