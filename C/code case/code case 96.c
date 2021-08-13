#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buf[50]= {0};
    FILE *pf = fopen("/home/turing/test.txt", "r");
    if (pf==NULL) {
        printf("Errors!\n");
        exit(0);
    }
    fgets(buf, 9, stdin);
    fputs(buf, stdout);
    fclose(pf);
}