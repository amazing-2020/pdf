#include <stdio.h>

int main(void) {
    int rows, i, j, space;

    scanf("%d", &rows);
    for (i=rows; i>=1; --i) {
        for (space=0; space<rows-i; ++space) {
            printf("  ");
        }
        //printf("space");
        for (j=i; j<=2*i-1; ++j) {
            printf("* ");
        }
        //printf("j");
        for (j=0; j<i-1; ++j) {
            printf("* ");
        }
        //printf("i");
        printf("\n");
    }

    return 0;
}