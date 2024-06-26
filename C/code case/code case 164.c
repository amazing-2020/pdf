#include <stdio.h>
#include <stdlib.h>
//堆排序
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int arr[], int start, int end) {
    //建立父节点指标和子节点指标
    int dad = start;
    int son = dad * 2 + 1;
    while (son <= end) {//若子节点在范围内才作比较
        if (son +1 <= end && arr[son] < arr[son + 1]) {
            son++;
        }
        if (arr[dad] > arr[son]) {//如果父节点大于字节点则代表调整完毕，直接跳出函数
            return;
        } else {//否则交换父子内容在继续子节点和孙节点比较
            swap(&arr[dad], &arr[son]);
            dad = son;
            son = dad*2+1;
        }
    }
}

void heap_sort(int arr[], int len) {
    int i;//初始化，i从最后一个父节点开始调整
    for (i-len/2-1; i>= 0; i--) {
        max_heapify(arr, i, len-1);
    }
    //先将第一个元素和已经排好元素的前一位作交换，再重新调整，直到排序完毕
    for (i = len-1; i>0; i--) {
        swap(&arr[0], &arr[i]);
        max_heapify(arr, 0, i-1);
    }
}

int main(void) {
    int arr[] = { 3, 5, 3, 0, 8, 6, 1, 5, 8, 6, 2, 4, 9, 4, 7, 0, 1, 8, 9, 7, 3, 1, 2, 5, 9, 7, 4, 0, 2, 6 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    heap_sort(arr, len);
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}