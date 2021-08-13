#include <stdio.h>
#include <math.h>

int main() {
    int i, j, k;
    for (i=101; i<201; i++) {
        k = sqrt(i);
        for (j=2; j<=k; j++) {
            if (i%j==0) break;
        }
        if (j>k) {//没有发生break，即没有可以整除i的j
            printf("%d \n", i);
            printf("&%d %d\n", j, k);
        }
    }

    return 0;
}