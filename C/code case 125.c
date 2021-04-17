#include <stdio.h>

void Print(int a)
{
    if(a > 9)
    {
        Print(a / 10);
    }
    printf("%d ", a % 10);
}
int main()
{
    int a = 123456789;
    Print(a);
    printf("\n");

    return 0;
}