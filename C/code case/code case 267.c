#include <stdio.h>
int main(void) {
    int m, n;
    int j;
    for (int i=1; i<168; i++) {
        j=168/i;
        if (j>i || 168%i!=0) {
            continue;
        }
        if ((i+j)%2!=0 || (i-j)%2!=0) {
            continue;
        }
        m = (i+j)/2;
        n = (i-j)/2;
        printf("m = %-3d, n = %-3d \n", m, n);
        printf("X = %d ...\n", n*n-100);
    }
    
    return 0;
}