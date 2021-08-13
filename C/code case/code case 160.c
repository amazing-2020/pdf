#include <stdio.h>

void ZhezhongInsertSort(int arr[], int len)
{
    int i, j, temp, low, high, mid;
    for (i = 1; i < len; i++) {
        temp = arr[i];
        low = 0;
        high = i - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] > temp) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        for (j = i; j >= low; j--) {
            arr[j] = arr[j-1];
        }
        arr[low] = temp;
    }
}
//折半插入排序
int main(void)
{
    int arr[] = {2,121,21,27,24,454,584,504,540,54,50,45};
    int len = (int)sizeof(arr) / sizeof(*arr);

    ZhezhongInsertSort(arr, len);
    int i;
    for (i = 0; i<len; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}