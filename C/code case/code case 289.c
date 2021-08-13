#include <stdio.h>
int main() {
    int i, j;
    int count=0;
    int num=0;
    for (i=101; i<=200; i++) {
        for (j=2; j<i; j++) {
            num++;
            if (i%j==0) {
                //if the code line-8 here, num=79
                break;
            }
        }
        if (j>=i) {
            count++;
            printf("%d ", i);
            if (count%5==0) {
                printf("\n");
            }
        }
    }
    printf("\n%i \n", num);
    return 0;
}