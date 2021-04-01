#include <stdio.h>
int main()
{
    FILE * pfile;
    int c;
    int n = 0;
    pfile = fopen("/home/turing/test.txt", "r");
    if (pfile == NULL) {
        perror("Error");
    } else {
        while (c != EOF) {
            c = fgetc (pfile);
            if (c == 'A') {
                n++;
            }
        }
        fclose(pfile);
        printf("The file contains %d doller sign characters (A) \n", n);
    }

    return 0;
}