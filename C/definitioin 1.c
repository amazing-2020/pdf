#include <stdio.h>
#include <stdlib.h>

int a=10;
int main(void)
{
    extern int a;
    printf("%d \n", a);

    return EXIT_SUCCESS;
}