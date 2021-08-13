#include <stdio.h>
int Callback1()
{
    printf("Hello, this is callback1! \n");
    return 0;
}
int Callback2()
{
    printf("Hello, this is callback2! \n");
    return 0;
}
int Callback3()
{
    printf("Hello, this is callback3! \n");
    return 0;
}

int Handle(int (*Callback)())
{
    printf("Enter the callback function! \n");
    Callback();
    printf("Leaving Handle function~~~ \n\n");
}

int main()
{
    printf("Enter Main Function. \n");
    Handle(Callback1);
    Handle(Callback2);
    Handle(Callback3);
    printf("Leaving Main Function. \n");

    return 0;
}