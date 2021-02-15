#include <stdio.h>

int Callback_1(int x)
{
    printf("Hello, this is Callback_1:x = %d \n", x);
    return 0;
}

int Callback_2(int x)
{
    printf("Hello, this is Callback_2:x = %d \n", x);
    return 0;
}

int Callback_3(int x)
{
    printf("Hello, this is Callback_3:x = %d \n", x);
    return 0;
}

int Handle(int y, int (*Callback)(int))
{
    printf("Entering Handle Function. \n");
    Callback(y);
    printf("Leaving Handle Function. \n");
}

int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    printf("Enter main function. \n");
    Handle(a, Callback_1);
    Handle(b, Callback_2);
    Handle(c, Callback_3);

    printf("Leaving main function! \n");
    return 0;
}