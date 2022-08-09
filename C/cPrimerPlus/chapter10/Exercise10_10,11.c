#include <stdio.h>
void copy(int * array1, int * array2, int * target, int n);
void twin(int array[][5], int cols);
void showArray(int  array[][5], int cols);
int main(void)
{
    int array[4] = {445,78,78, 5};
    int array1[4] = {5345, 45, 45, 4};
    int array2[4] = {0};
    int array3[3][5] = {
        {16, 2, 77, 40, 12071},
        {787, 78, 87, 7, 9},
        {478, 787, 8, 78, 78}
    };
    
    copy( array, array1, array2, 4);
    for (int i = 0; i < 4; i++)
        printf("%d ", array2[i]);
    printf("\n");

    showArray(array3, 3);
    twin(array3, 3);
    showArray(array3, 3);

    return 0;
}

void copy(int * array1, int * array2, int * target, int n)
{
    for (int i = 0; i < n; i++)
        target[i] = *(array1 + i) + *(array2 + i);
}

void twin(int  array[][5], int cols)
{
    for (int i = 0; i < cols; i++)
        for (int j = 0; j < 5; j++)
            array[i][j] *= 2;
}

void showArray(int  array[][5], int cols)
{
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < 5;i++)
            printf("%d ", array[j][i]);
        printf("\n");
    }
}