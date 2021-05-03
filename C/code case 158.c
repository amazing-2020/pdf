#include <stdio.h>

void shell_sort(int arr[], int len) {
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1) {
        for (i = gap; i < len; i++) {
            temp = arr[i];
            for (j = i -gap; j >= 0 && arr[j] > temp; j -= gap) {
                arr[j+gap] = arr[j];
            }
            arr[j+gap] = temp;
        }
    }
}

int main(void)
{
    int arr[] = {2,121,21,27,24.5,454,584,504,540,54,50,45};
    int len = (int)sizeof(arr) / sizeof(*arr);

    shell_sort(arr, len);
    int i;
    for (i = 0; i<len; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}