#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("/home/turing/test.txt", "r+");
    
    fprintf(fp, "THis is testing for fprintf... \n");
    //这里有点奇怪？
    fseek(fp, 10, SEEK_SET);
    if (fputc(65, fp) == EOF) {
        printf("fputc fail! \n");
    }
    fclose(fp);
}