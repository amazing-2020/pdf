#include <stdio.h>
#include <stdlib.h>
void bubblesort(int a[], int n)
{
    int i, j;
    int flag;
    for (i = 0; i < n-1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1; j++)
        {
            int temp;
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }        
        if (flag == 0)
            break;
    }
}

int mycmp(const void *a, const void *b)
{/*
    if ((const int *)a - (const int *)b == 0)
        return 0;
    else if ((const int *)a - (const int *)b > 0)
        return 1;
    else 
        return -1;
*/

    return *(int*)a - *(int*)b;
}

int main(void)
{
    int a[10];

    printf("Please enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    qsort(a,10, sizeof(int), mycmp);

    bubblesort(a, 10);
    printf("The sort result is: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
}