#include <stdio.h>

void insertion_sort (int arr[], int len) 
{
    int i, j,temp;
    for (i = 1; i < len; i++) {
        temp = arr[i];
        for (j = i; j>0 && arr[j-1] > temp; j--) {
            arr[j] = arr[j-1];
        }
        arr[j] = temp;
    }
}

int main(void) 
{
    int arr[] = {121,45,4785,587,87,84,54,201,21,2,49};
    int len = (int)sizeof(arr) / sizeof(*arr);
    int i;
    insertion_sort(arr, len);
    for (i = 0; i < len; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}