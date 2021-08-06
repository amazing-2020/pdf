#include <stdio.h>
void f()
{
    char ch;
    if ((ch = getchar()) != '\n')
        f();
    if (ch != '\n')
        printf("%c", ch);
}

int main(void)
{
    printf("Please enter characters: ");
    f();

    return 0;
}