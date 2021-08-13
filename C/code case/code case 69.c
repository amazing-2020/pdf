#include <stdio.h>

int main()
{
    int c;
    printf("Enter a value!\n");
    c = getchar();

    printf("\nYou entered \n");
    putchar(c);
    printf("\n");

    return 0;
}