#include <stdio.h>
#define N 80

void reverse(int a[], int low, int high)
{
    int i = low, j = high;

    while (i < j)
    {
        if (i < j)
        {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        i++;
        j--;
    }
}

int main()
{
    int n, m, a[N];

    printf("Total number: ");
    scanf("%d", &n);
    printf("Input %d numbers. \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter your offset: ");
    scanf("%d", &m);
    reverse(a, 0, n - 1);
    reverse(a, 0, n - m - 1);
    reverse(a, n - m, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;         
}