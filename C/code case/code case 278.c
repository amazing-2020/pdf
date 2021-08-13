#include <stdio.h>
#define N 3
int main(void) {
    int i, j, k, temp;
    int shuzu[20];
    for (i=0; i<N; i++) {
        printf("Input the %d umber:", i+1);
        scanf("%d", &shuzu[i]);
    }

    for (i=0; i<N-1; i++) {
        k=i;
        for (j=i+1; j<N; j++) {
            if (shuzu[j]<shuzu[k]) {
                k=j;
            }
        }
        if (k!=i) {
            temp = shuzu[k];
            shuzu[k] = shuzu[i];
            shuzu[i] = temp;
        }
    }
    for (i=0; i<N; i++) printf("%-4d", shuzu[i]);

    return 0;
}