#include <stdio.h>

typedef void (*p_func)(int *, int);

void select_sort(int * arr, int size)
{
    int i = 0, j = 0;

    for (i = 0; i < size; i++)
        for (j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
}

void bubble_sort(int * arr, int size)
{
    int i = 0, j = 0;

    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];
            }
}

void quick_sort(int * arr, int size)
{
    if (size <= 1)
        return;
    int base = *arr;
    int head = 0, tail = size - 1;

    while ( head < tail)
    {
        if (arr[head] > arr[tail])
        {
            arr[head] ^= arr[tail];
            arr[tail] ^= arr[head];
            arr[head] ^= arr[tail];
        }
        if (arr[head] == base)
            tail--;
        else    
            head--;
    }
    quick_sort(arr, head - 1);
    quick_sort(&arr[head + 1], size - head - 1);
}

int main(void)
{
    int arr[][10] = {
        {0, 4, 2, 8, 1, 45, 7, 6, 89, 36},
        {4,5,45,8,8,8,55,12,1220,856},
        {3243,3243,5676, 34, 45, 324, 435, 435, 435, 439}
    };
    int i = 0, j = 0;
    p_func p_sort[] = {select_sort, bubble_sort, quick_sort};

    for (i  = 0; i < 3; i++)
    {
        p_sort[1](arr[i], sizeof(arr[i])/sizeof(int));
        i == 0 ? printf("select:") : i == 1 ? printf("bubble: ") : printf("quick: ");
        for (j = 0; j < sizeof(arr[i])/sizeof(int); j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}

//With  lots of problems!!!