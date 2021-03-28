#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("/home/turing/test.txt", "r+");
    
    fprintf(fp, "This is testing for fprintf... \n");
    //te后面的一个字符会变成A
    fprintf(stderr, "a point");
    fseek(fp, 10, SEEK_SET);
    if (fputc(65, fp) == EOF) {
        printf("fputc fail! \n");
    }
    fclose(fp);
}