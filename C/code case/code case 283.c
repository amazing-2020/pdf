#include <stdio.h>
int main() {
    int i, j, reslult;
    printf("\n");
    for (i=1; i<10; i++) {
        for (j=1;j<=i; j++) {
            reslult = i*j;
            printf("%d * %d = %-3d ", i, j, reslult);
        }
        printf("\n");
    }

    return 0;
}