#include <stdio.h>

void fun(int arr[], int m, int size);
int main()
{
    int i, j, a[100], n = 0, m;
    int k = 1;

    printf("Total numbers? \n");
    scanf("%d",&n);
    printf("Input %d numbers.\n",n);
    for( i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter the offset: ");
    scanf("%d", &m);
    fun(a, m, n);
    printf("After move back: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void fun(int arr[], int m, int size)
{
    int i, j, k = 0;
    int buf[size];

    for (i = 0; i < size; i++)
        buf[i] = arr[i];
    for (i = 0; i < m; i++)
        arr[i] = arr[size - m + i];
    for (j = i; j < size; j++, k++)
        arr[j] = buf[k];
}