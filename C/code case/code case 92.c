#include <stdio.h>

int main()
{
    FILE* f;
    f = fopen("/home/turing/test.txt", "a+");
    if (f != NULL) {
        fputs("fopen example", f);
        fclose(f);
        f=NULL;
    }

    return 0;
}