#include <stdio.h>

int main(void) {
    int n, j, k, l, m;
    for (n=5; ; n++) {
        j = 4*(n-1)/5;
        k = 4*(j-1)/5;
        l = 4*(k-1)/5;
        m = 4*(l-1)/5;
        if (n%5==1 && j%5==1 && k%5==1 && l%5==1 && m%5==1) {
            printf("At least partnership fishing: %d \n", n);
            printf("The number of fishes seen seprately: %d %d %d %d \n", j, k, l, m);
            break;
        }
    }

    return 0;
}