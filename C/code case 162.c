//快速排序 迭代法
#include <stdio.h>

typedef struct _Range {
    int start, end;
} Range;

Range new_Range (int s, int e) {
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort(int arr[], const int len) {
    if (len <= 0) {
        return;//避免len为负数时引发段错误（Sagement Fault）
        //r[]模拟列表，p为数量,r[p++]为push,r[--p]为pop取得元素
    }
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len-1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end) {
            continue;
        }
        int mid = arr[(range.start + range.end) / 2];//取中间点为基准点
        int left = range.start;
        int right = range.end;
        do {
            while (arr[left] < mid) {//检测基准点左侧是否符合要求
                ++left;
            }
            while (arr[right] > mid) {//检测基准点右侧是否符合要求
                right--;
            }
            
            if (left <= right) {
                swap(&arr[left], &arr[right]);
                left++;
                right--;//移动指针以继续
            }
        } while(left <= right);

        if (range.start < right) {
            r[p++] = new_Range(range.start, right);
        }
        if (range.end > left) {
            r[p++] = new_Range(left, range.end);
        }
    }
}

int main(void) {
    int arr[] = {345,433,54,43,53,45,434,5,435,4,35,4343,543,52,32,423};
    int len = (int)sizeof(arr) / sizeof(*arr);

    quick_sort(arr, len);
    int i;
    for (i=0; i<len; i++) {
        printf("arr[%d]=%d \n", i, arr[i]);
    }

    return 0;
}