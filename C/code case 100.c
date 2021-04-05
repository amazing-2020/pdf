#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    FILE *fp;
    char str[N+1];
    fp=fopen("/home/turing/test.txt", "r");
    while (fgets(str, N, fp)!=NULL)
    {
        printf("%s", str);
    }
    
    fclose(fp);
    return 0;
}