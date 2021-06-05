#include <stdio.h>

int main(void) {
    struct Matrixs
    {
        int elements[100][100];
        int row;
        int col;
    }matrixsA, matrixsB, matrixsC;
    
    int m, k, n;
    printf("Please enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &matrixsA.row, &matrixsA.col);
    matrixsB.row = matrixsA.col;
    printf("Please enter the number of rows of matrix B: ");
    scanf("%d", &matrixsB.col);
    printf("\n Please enter matrix A \n");
    for (m=0; m<matrixsA.row; ++m) {
        for (k=0; k<matrixsA.col; ++k) {
            printf("Please element A(%d ,%d): ", m+1, k+1);
            scanf("%d", &matrixsA.elements[m][k]);
        }
    }

    printf("Enter the matrix B: \n");
    for (k=0; k<matrixsA.col; ++k) {
        for (n=0; n<matrixsA.col; ++n) {
            printf("Please enter element B(%d,%d): ", k+1, n+1);
            scanf("%d", &matrixsB.elements[k][n]);
        }
    }

    for (m=0; m<matrixsA.row; ++m) {
        for (n=0; n<matrixsB.col; ++n) {
            for (k=0; k<matrixsA.col; ++k) {
                if (k==0) matrixsC.elements[m][n] = 0;
                matrixsC.elements[m][n] += matrixsA.elements[m][k]*matrixsB.elements[k][n];
            }            
        }
    }
    printf("\n\n The matrix A is: \n\n");

    for (m=0; m<matrixsA.row; ++m) {
        printf(" |");
        for (k=0; k<matrixsA.col; ++k) {
            printf(" %-5d", matrixsA.elements[m][k]);
        }
        printf("\b\b\b|\n");
    }
    printf("\n\n The elements B is: \n\n");
    for (k=0; k<matrixsB.row; ++k) {
        printf(" |");
        for (n=0; n<matrixsB.col; ++n) {
            printf(" %-6d", matrixsB.elements[k][n]);
        }
        printf("\b\b|\n");
    }

    printf("\n Matrix A is left multiplied by matrix B as: \n\n");
    for (m=0; m<matrixsA.row; ++m) {
        for (n=0; n<matrixsB.col; ++n) {
            printf(" %-6d", matrixsC.elements[m][n]);
        }
        printf("\b\b|\n");
    }
    printf("\n");

    return 0;
}