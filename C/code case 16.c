#include <stdio.h>

void MyFun(int x);
typedef void(*FunType)(int );
FunType FunP;

int main(int argc, int argv[])
{
    MyFun(10);
    FunP = &MyFun;
    (*FunP)(20);

    return 0;
}
void MyFun(int x)
{
    printf("%d \n", x);
}