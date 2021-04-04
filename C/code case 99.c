#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){
    int a[N], b[N];
    int i, size = sizeof(int);
    FILE *fp;

    if ((fp=fopen("/home/turing/test.txt", "rb+")) == NULL) {
        puts("errors");
        exit(0);
    }
    for (i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    fwrite(a, size, N, fp);
    rewind(fp);
    fread(b, size, N, fp);
    for (i=0; i<N; i++) {
        printf("%d", b[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}