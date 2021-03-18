#include <stdio.h>

typedef struct t1 
{
    char x;
    int y;
    double z;
} T1;

typedef struct t2
{
    char x;
    double z;
    int y;
} T2;

int main(int argc, char *argv[])
{
    printf("sizeof(T1) = %lu \n", sizeof(T1));
    printf("sizeof(T2) = %lu \n", sizeof(T2));

    return 0;
}