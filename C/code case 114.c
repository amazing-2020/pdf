#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;
int main()
{
    FILE * fp;
    int errnum;
    fp = fopen("unexist.txt", "rb");
    if (fp == NULL) {
        errnum = errno;
        fprintf(stderr, "problems number: %d \0", errno);
        perror("Error output via PERRER \n");
        fprintf(stderr, "Error opening file: %s \n", strerror( errnum));
    } else {
        fclose(fp);
    }

    return 0;
}