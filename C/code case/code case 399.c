#include <stdio.h>
int a, b, c;
void add()
{
    int a;
    a = 3;
    c = a + b;
}

int main(void)
{
    a = b = 4;
    add();
    printf("C = %d \n", c);

    return 0;
}