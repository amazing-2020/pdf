#include <stdio.h>
#include <malloc.h>
int main(void) {
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int *arrayPointer = NULL, i=0;
    arrayPointer = (int*)calloc(sizeof(array) / sizeof(array[0]), sizeof(int));
    for (i=0; i<sizeof(array)/sizeof(array[0]); i++) {
        *arrayPointer++ = array[i];
    }
    *arrayPointer = '\0';
    arrayPointer -= sizeof(array)/sizeof(array[0]);
    printf("     ->     ");
    for (i=0; i<sizeof(array)/sizeof(array[0]); i++) {
        printf("%5d%5d \n", array[i], arrayPointer[i]);
    }

    return 0;
}//Errors