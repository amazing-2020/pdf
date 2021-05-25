#include <stdio.h>
int main(void) {
    int number, tag;
    scanf("%d", &number);
    int i, j, k, l;
    for (i=2; i<number; i++) {
        tag=1;
        for (j=2; j<=i/2; j++) {
            if (i%j==0) {
                tag=0;
                break;
            }
        }
        if (tag==1) {
            for (k=i; k<number; k++) {
                tag=1;
                for (l=2; l<=k/2; l++) {
                    if (k%l==0) {
                        tag=0;
                        break;
                    }
                }
                if (tag==1 && number==(i+k)) {
                    printf("%d = %d + %d \n", number, i, k);
                }
            }
        }
    }
    if (tag==0) {
        printf("End. \n");
    }

    return 0;
}