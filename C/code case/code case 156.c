#include <stdio.h>

void selection_sort (int a[], int len)
{
    int i, j, temp;
    for (i = 0; i < len; i++) {
        int min = i;
        for ( j = i+1; j < len; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp; 
        }
    }
}

int main(void) 
{
    int array[] = {3, 9 , 89, 999, 568, 784, 895, 568, 8954, 123};
    int len =  (int)sizeof(array) / sizeof(*array);
    selection_sort(array, len);
    for (int i = 0; i < len; i++) {
        printf("a[%d] = %d \n", i, array[i]);
    }

    return 0;
}