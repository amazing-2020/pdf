#include <stdio.h>
#include <stdlib.h>

void mergelist(int *a, int len_a, int *b, int len_b, int *c);

void mergelist(int *a, int len_a, int *b, int len_b, int *c) {
    int i=0;
    int j=0;
    int k=0;

    while (i<len_a&&j<len_b) 
    {
        if (a[i]<b[j]) {
            c[k] = a[i];
            i++;
            k++;
        } else {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    printf("%d %d %d \n", i, j, k);
    while (i<len_a)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j<len_b)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main(void) {
    int a[3] = {1, 3, 5};
    int b[4] = {2, 4, 6, 7};
    int c[7];
    int len_a = sizeof(a)/sizeof(a[0]);
    int len_b = sizeof(b)/sizeof(b[0]);
    mergelist(a, len_a, b, len_b, c);
    for (int i=0; i<7; i++) {
        printf("%d \n", c[i]);
    }

    return 0;
}