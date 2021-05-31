#include <stdio.h>

int main(void) {
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int loop, larget;

    larget = array[0];

    for (loop=1; loop<10; loop++) {
        if (larget<array[loop]) {
            larget = array[loop];
        }
    }

    printf("The largest element is: %d \n", larget);

    return 0;
}