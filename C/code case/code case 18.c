#include <stdio.h>
#include <stdlib.h>

int Test1()
{
    int i;
    for(i=0; i<30; i++)
    {
        printf("The %d th character is: %c \n", i, (char)('a' + i%26));
    }
    return 0;
}

int Test2(int num)
{
    int i;
    for(i = 0; i<num; i++)
    {
        printf("The %d th character is: %c \n", i, (char)('a' + i%26));
    }
    return 0;
}

void Caller1( int (*ptr)() )//指向函数的指针作函数参数
{
    (* ptr)();
}

void Caller2(int n, int (* ptr)())//指向函数的指针作函数参数，这里第一个参数是为指向函数的指针服务的
{
    (* ptr)(n);
}

int main(int argc, char* argv[])
{
    printf("**************************\n");
    Caller1(Test1);
    printf("&&&&&&&&&******************\n");
    Caller2(30, Test2);

    return 0;
}