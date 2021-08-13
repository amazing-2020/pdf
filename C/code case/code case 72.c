#include <stdio.h>

int main()
{
    char c[100];
    printf("Enter a value:\n");
    fgets(c, 100, stdin);

    printf("you entered:\n");
    fputs(c, stdout);

    return 0;
}