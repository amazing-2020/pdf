#include <stdio.h>
#define ROWS 6
#define CHARS 10
void rows2();
int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
    printf("\n");

    rows2();

    return 0;
}

void rows2()
{
    const int rows = 6;
    const int chars = 6;
    int row;
    char ch;

    for (row = 0; row < rows; row++)
    {
        for (ch = ('A' + row); ch < ('A' + chars); ch++)
            printf("%c", ch);
        printf("\n");
    }
}