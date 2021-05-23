#include <stdio.h>
int main(void) {
    int i, j, n;

    n=3;
    j=1;

    for (i=n; i<=(n*10); i+=n) {
        printf("%3d x %3d = %3d \n", n, j, i);
        j++;
    }

    return 0;
}