#include <stdio.h>

int main() {
    int n[41]={0}, i;
    n[0] = 0, n[1]=1, n[2]=1;
    for (i=3; i<41; i++) {
        n[i]= n[i-1]+n[i-2];
    }
    printf("Output \n");
    for (i=1; i<41; i++) {
        printf("%d\t%d \n", i, n[i]);
    }

    return 0;
}