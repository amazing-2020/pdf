#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char buf[100] = {0};
    FILE *pf = fopen("/home/turing/test.txt", "r");
    if (pf == NULL) {
        perror("open file for reading.");
        exit(0);
    }
    fgets(buf, 9, stdin);
    printf("%s", buf);
    fclose(pf);
}