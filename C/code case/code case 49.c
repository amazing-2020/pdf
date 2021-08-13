#include <stdio.h>
struct school
{
    char address[100];
    char name[30];
};
struct school_other
{
    char *address;
    char *name;
};
int main(int argc, char *argv[])
{
    struct school sctu;
    printf("sizeof of sctu is: %lu \n", sizeof(sctu));

    struct school_other sctu_other;
    printf("sizeof of sctu_other is: %lu \n", sizeof(sctu_other));

    printf("sizeof char* is : %lu \n", sizeof(sctu_other.address));

    return 0;
}