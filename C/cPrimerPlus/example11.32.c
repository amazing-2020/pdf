#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, times;

    times = atoi(argv[1]);
    if (argc < 2 || times < 1)
        printf("Useage: %s positive-number \n", argv[0]);
    else
        for (i = 0; i < times; i++)
            printf("Hello, good looking! \n");
    return 0;
}
