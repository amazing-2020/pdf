#include <stdio.h>
#define o_len 5
#define e_len 5

int main(void) {
    int arr[10];
    int even[5] = {0, 2, 4, 6, 8};
    int odd[5] = {1, 3, 5, 7, 9};

    int loop, index;


    for (index=0,loop=0; loop<e_len; loop++) {
        arr[index] = even[loop];
        index+=2;
    }
    for (index=1, loop=0; loop<e_len; loop++) {
        arr[index] = odd[loop];
        index+=2;
    }

    printf("\n Even array: ");
    for (index=0; index<e_len; index++) {
        printf("%2d", even[index]);
    }
    printf("\n Odd array: ");
    for (index=0; index<o_len; index++) {
        printf("%2d", odd[index]);
    }
    printf("\n Arr array: ");
    for (index=0; index<10; index++) {
        printf("%2d", arr[index]);
    }
    printf("\n");
    return 0;
}