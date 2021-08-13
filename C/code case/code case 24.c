#include <stdio.h>
#define N 14

int main(int argc, char *argv[])
{
    char name[N];
    char *ptrname = name;

    printf("Get you name. \n");
    fgets(ptrname, sizeof(ptrname), stdin);
    printf("Hello %s \n", ptrname);

    return 0;
}