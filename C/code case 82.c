#include <stdio.h>

int main()
{
    FILE *fp=NULL;
    fp=fopen("/home/turing/test.txt", "w+");
    fprintf(fp,"This is testing for fprintf...\n");
    fputs("This is testing for fprintf...\n", fp);
    fclose(fp);
}