#include <stdio.h>

void Fun1(int x);
void Fun2(int x);
void Fun3(int x);
typedef void(*FunType)(int );
void CallFun(FunType fp, int x);

int main(int argc, char argv[])
{
    CallFun(Fun1, 10);
    CallFun(Fun2, 20);
    CallFun(Fun3, 30);
}

void CallFun(FunType fp, int x)
{
    fp(x);
}

void Fun1(int x)//A function with parameter
{
    printf("Output in Fun1: %d \n", x);
}
void Fun2(int x)
{
    printf("Output in Fun2: %d \n", x);
}
void Fun3(int x)
{
    printf("Output in Fun3: %d \n", x);
}