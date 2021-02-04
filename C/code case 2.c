#include <stdio.h>
#include <stdlib.h>

void function1(int j, int k) 
{
    printf("This is function2 %d, %d", j, k);
}

void function2(void (*pfunction1)(int, int), int a, int b) 
{
    pfunction1(a, b);
}

int main() 
{
    function2(function1, 1, 2);
    return 0;
}