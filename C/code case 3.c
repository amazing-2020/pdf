#include <stdio.h>
#include <stdlib.h>

void function(int a, char b) 
{
    printf("this is function2 call %d  %c \n", a, b);
}

void (*function2(double d)) (int, char)
{
    printf("%f \n", d);
    return function;
}

int main() 
{
    void (*p)(int, char) = function2(3.33);
    p(1, 'a');
    
    return 0;
}