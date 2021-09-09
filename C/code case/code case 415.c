#include <stdio.h>
int main()
{
    char c;
    int count = 0;

    printf("Enter a string: ");
    while ((c = getchar()) != '\n')
        count++;
    printf("%d characters. \n", count);

    return 0;
}