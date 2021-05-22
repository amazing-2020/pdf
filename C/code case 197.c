#include <stdio.h>
#define MAX 34
int main(void) {
    int n;
    int yanghui[MAX][MAX];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        yanghui[i][0]=1;
        yanghui[i][i]=1;
        for (int j=1; j<i; j++) {
            yanghui[i][j] = yanghui[i-1][j-1] + yanghui[i-1][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            printf("%5d", yanghui[i][j]);
        }
        printf("\n");
    }

    return 0;
}