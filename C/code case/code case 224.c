#include <stdio.h>

int main(void) {
    int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int copied[10];
    int loop;

    for (loop=0; loop<10; loop++) {
        copied[loop] = original[loop];
    }

    printf("      ->     \n");
    for (loop=0; loop<10; loop++) {
        printf("%5d%5d \n", original[loop], copied[loop]);
    }

    return 0;
}