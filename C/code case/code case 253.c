#include <stdio.h>

int main(void) {
    int count=0;
    int a[30] = {0};
    int i=0;
    int c=0;
    while (1) {
        if (a[i] == 0) {
            c++;
        }
        if (c==9) {
            count++;
            a[i] = 1;
            printf("No. %-3d disembarked. \n", i+1);
            c=0;
        }
        if (count == 15) {
            break;
        }
        i++;
        if (i==30) {
            i=0;
        }
    }

    return 0;
}