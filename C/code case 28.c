#include <stdio.h>
#include <string.h>

int main(int argc, char argv[])
{
    int size = 0;
    char buf[125] = "abcd";
    printf("%d \n", strlen(buf));
    size = sizeof(buf);
    printf("%d \n", size);

    return 0;
}