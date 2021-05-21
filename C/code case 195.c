//杨辉三角
#include <stdio.h>
int main(void) {
    long rows, coef=1L, space, i, j;
    printf("Please enter the rows: ");
    scanf("%ld", &rows);

    for (i=0; i<rows; i++) {
        for (space=1; space<=rows-i; space++) {
            printf("  ");
        }
        for (j=0; j<=i; j++) {
            if (j==0||i==0) {
                coef=1;
            } else {
                while (i==7 && j==7) {//rows==8
                    printf(" \"%ld\" ", coef);
                    break;
                }
                
                coef = coef*(i-j+1)/j;//看不懂
            }
            printf("%4ld", coef);
        }
        printf("\n");
    }

    return 0;
}