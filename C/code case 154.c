#include <stdio.h>

void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for (i=0; i< len - 1; i++) {
        //控制循环多少趟
        for (j = 0; j < len - i -1; j++) {
            //控制每趟循环次数
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) 
{
    int arr[] = {11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = (int) sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}//冒泡排序