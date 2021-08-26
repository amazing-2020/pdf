#include <stdio.h>
#define N 5
int * sort(int a[], int n);
int main()
{
    int i, j, a[N + 1];

    printf("Please enter five numbers: ");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    sort(a, N);
    printf("After been sorted! \n");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\nPlease enter a number to be added: ");
    scanf("%d", &j);
    a[N] = j;
    sort(a, N + 1);
    printf("After been sorted! \n");
    for (i = 0; i < N + 1; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

int * sort(int a[], int n)
{
    int i, j, min, t;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[min] > a[j])
                min = j;
        if (min != i) // 最小的即min被放在了第一个位置
        {
            t = a[min];
            a[min] = a[i];
            a[i] = t;
        }
    }
    return a;
}