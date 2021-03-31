#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    if ((fp=fopen("/home/turing/test.txt", "rt")) == NULL) {
        puts("Fail to open file \n");
        exit(0);
    }
    while ((ch=fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    putchar('\n');

    if (ferror(fp)) {
        puts("Error");
    } else 
    {
        puts("Success");
    }
    
    fclose(fp);

    return 0;
}