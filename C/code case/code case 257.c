#include <stdio.h>
int main(void) {
    int i, j, k;
    printf("\n");
    for (i=1; i<5; i++) {
        for (j=1; j<5; j++) {
            for (k=1; k<5; k++) {
                if (i!=k && j!=k && i!=j) {
                    printf("%d,%d,%d \n", i, j, k);
                }
            }
        }
    }

    return 0;
}