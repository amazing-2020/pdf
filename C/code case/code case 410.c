#include <stdio.h>
void print_arr(int *arr, int n);
void move(int *arr, int n, int offset);
int main()
{
    int arr[20];
    int i, n, offset;

    printf("Total number: ");
    scanf("%d", &n);
    printf("Input %d numbers. \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter your offset: ");
    scanf("%d", &offset);
    print_arr(arr, n);
    move(arr, n, offset);
    print_arr(arr, n);
    
    return 0;
}

void print_arr(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void move(int *arr, int n, int offset)
{
    int *p, *arr_end;
    arr_end = arr + n;
    int last;

    while (offset)
    {
        last = *(arr_end - 1);
        for (p = arr_end - 1; p != arr; --p)
            *p = *(p - 1);
        *arr = last;
        --offset;
    }
}