#include <stdio.h>

int main(int argc, char *argv[]) {
    //int x, y, z;
    int arr[3];
    int i, j;
    int t=0;
    printf("Please enter three numbers: \n");
    scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
    int len = sizeof(arr)/sizeof(arr[0]);
    for (i=0; i<len; i++) {
        for (j=i+1; j<len; j++) {
            if (arr[i] > arr[j]) {
                t= arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("Sorted array: %d %d %d \n", arr[0], arr[1], arr[2]);

    return 0;
}