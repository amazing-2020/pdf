#include <stdio.h>
int main()
{
    int *p;
    printf("%d \n", *p);
    *p = 10;//野指针
    printf("%d \n", *p);
    p = NULL;
    return 0;
}