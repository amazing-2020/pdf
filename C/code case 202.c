#include <stdio.h>

int main(void) {
    int i, j, count=0;
    for (i=1; i<=10; i++) {
        for (j=1; j<=10; j++) {
            count++;
            printf("%4d", count);
        }
        printf("\n");
    }

    return 0;
}