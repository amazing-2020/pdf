#include <stdio.h>

int main(void) {
    int data[5], i;
    printf("Input elements: ");

    for (i=0; i<5; ++i) {
        scanf("%d", data + i);
    }

    printf("What you entered: ");
    for (i=0; i<5; ++i) {
        printf("%-3d", *(data + i));
    }

    return 0;
}