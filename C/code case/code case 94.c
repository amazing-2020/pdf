#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE* pf = fopen("/home/turing/test.txt", "a+");
    if (pf == NULL) {
        perror("error opening file");
        exit(0);
    }
    ch = getchar();
    while (ch != 'A') {
        fputc(ch, pf);
        ch = getchar();
    }
    fclose(pf);
}