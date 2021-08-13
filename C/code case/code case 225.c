#include <stdio.h>

int ArrayCopy(char * ori, char * cop, char Length) {
    char loop;
    for (loop=0; loop<Length; loop++) {
        *cop++ = *ori++;
    }
    return 0;
}

int main() {
    char original[10] = {1,2,3,4,5,6,7,8,9,0};
    char *copiedOne = original;
    char copiedTwo[10];
    char loop;
    char Length;

    Length = sizeof(original);
    printf("Element Array->Copied Array \n");
    for (loop=0; loop<sizeof(original); loop++) {
        printf("%7d%7d \n", original[loop], copiedTwo[loop]);
    }
    ArrayCopy(original, copiedTwo, Length);
    
    copiedTwo[9] = 20;
    printf("Pass by value: \n");
    printf("After changing the data by value,only the elements in the"
    " copied aray are changed: \n");
    printf("Elements->Copied Array \n");
    for (loop=0; loop<sizeof(original); loop++) {
        printf("%7d%7d \n", original[loop], copiedTwo[loop]);
    }

    copiedOne[9] = 50;
    printf("Address pass: \n");
    printf("After the address is passed and the data is changed,the orinal"
    " array elements and the elements in the copied array are changed"
    " at the same time: \n");
    printf("Elements->Copied Array \n");
    for (loop=0; loop<sizeof(original); loop++) {
        printf("%7d%7d \n", original[loop], copiedOne[loop]);
    }

    return 0;
}