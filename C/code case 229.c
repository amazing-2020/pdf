#include <stdio.h>

int main(void) {
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    printf("Enter the number of lines(1~100): ");
    scanf("%d", &r);
    printf("Enter the number of columns(1~100): ");
    scanf("%d", &c);

    printf("\n Enter the elements of the first_dimensional array: ");
    for (i=0; i<r; ++i) {
        for (j=0; j<c; ++j) {
            printf("Input element: a[%d] [%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter the elements of the second_dimensional array: \n");
    for (i=0; i<r; ++i) {
        for (j=0; j<c; ++j) {
            printf("Input element: b[%d] [%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i=0; i<r; ++i) {
        for (j=0; j<c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Two-dimensional array addtion result: \n");
    for (i=0; i<r; ++i) {
        for (j=0; j<c; ++j) {
            printf("%-4d", sum[i][j]);

            if (j==c-1) {
                printf("\n\n");
            }
        }
    }
}