#include <stdio.h>

int main(void)
{
    int i = 5;
    void palin(int n);
    printf("Please enter 5 characters\40:\40");
    palin(i);
    printf("\n");

    return 0;
}

void palin(n)
int n;
{
    char next;
    if (n  <= 1)
    {
        next = getchar();
        printf("Reserved reslut\40:\40");
        putchar(next);
    }
    else
    {
        next = getchar();
        palin(n-1);
        putchar(next);
    }
    
}