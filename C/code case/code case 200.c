#include <stdio.h>
int main(void) {
    int i, j, count;
    int start, end;

    start=1, end=10;

    for (i=start; i<=end; i++) {
        count=i;
        for (j=1; j<=10; j++) {
            printf(" %3d", count*j);
        }
        printf("\n");
    }

    return 0;
}