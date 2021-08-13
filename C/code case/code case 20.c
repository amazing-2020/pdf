#include <stdio.h>
#include <stdlib.h>

void add(int x, int y)
{
    printf("X + Y = %d \n", x + y);
}
void dec(int x, int y)
{
    printf("X - Y = %d \n", x - y);
}
void max(int x, int y)
{
    printf("The max is %d \n", (x>y)?x:y);
}

void (*str[3])(int, int) = {add, dec, max};

int main(void)
{
    int i;
    for (i = 0; i<3; i++)
    {
        (*str[i])(4, 1);
    }

    exit(0);
}