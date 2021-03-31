#include <stdio.h>
#include <stdlib.h>

#define N 100
int main()
{
    FILE *fp;
    char str[N+1];
    if ((fp = fopen("/home/turing/test.txt", "rt"))==NULL) {
        printf("Failed \n");
        exit(0);
    }
    while (fgets(str, N, fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}