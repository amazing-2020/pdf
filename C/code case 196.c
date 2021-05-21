#include <stdio.h>
#define N 10

int main(void) {
    int i, j, l;
    for (i=1, j=1; i<=N; i++) {
        for (l=1; l<=i; l++, j++) {
            printf("%5d", j);
        }
        printf("\n");
    }

    return 0;
}
//第n行打印n个数字，i为行数，l为每一行的数字数目，j为打印的实际数字