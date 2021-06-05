#include <stdio.h>

int main(void) {
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Input the rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Input the elements of matrix: ");
    for (i=0; i<r; ++i) {
        for (j=0; j<c; ++j) {
            printf("Enter the element a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter Matrix \n");
    for (i=0; i<r; ++i) {
        for (j=0; j<c; ++j) {
            printf("%-4d", a[i][j]);
            if (j == c-1) printf("\n\n");
        }
    }

    for (i=0; i<r; ++i) {
        for (j=0; j<c; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Matrix after conversion: \n");
    for (i=0; i<c; ++i) {
        for (j=0; j<r; ++j) {
            printf("%-5d", transpose[i][j]);
            if (j==r-1) printf("\n\n");
        }
    }

    return 0;
}