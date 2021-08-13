#include <stdio.h>
#include <string.h>
void main()
{
    int size = 0;
    char buf[] = "abcd";
    int len = strlen(buf);
    printf("%d \n", len);
    size = sizeof(buf);
    printf("%d \n", size);
}