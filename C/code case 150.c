#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern int optind;
extern char* optarg;
int main(int argc, char *argv[])
{
    printf("argc = %d \n", argc);
    for (int  i = 0; i< argc; i++) {
        printf("argc[%d] = %s \n", i, argv[i]);
    }
    int opt, flags;
    char *avalue, *bvalue;

    flags = 0;
    char *optstring = "a:b:c";
    while ((opt = getopt(argc, argv, optstring)) != -1) {
        switch (opt)
        {
        case 'a':
            flags = 1;
            avalue = optarg;
            break;
        case 'b':
            flags = 2;
            bvalue = optarg;
            break;
        case 'c':
            flags = 3;
            break;
        default:
            break;
        }
    }

    printf("flags = %d, optind = %d, avalue = %s, bvalue = %s \n", flags, optind, avalue, bvalue);

    exit(EXIT_SUCCESS);
}