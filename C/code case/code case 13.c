#include <stdio.h>

typedef int(*CallbackFun)(char *p);

int Afun(char *p)
{
    printf("Afun function Callbacks print out characters: %s \n", p);
    return 0;
}

int Cfun(char *p)
{
    printf("Cfun Callbacks print: %s, Nice to meet you! \n", p);
    return 0;
}

int call(CallbackFun pCallback, char *p)
{
    printf("call Print characters directly %s \n", p);
    pCallback(p);
    return 0;
}

int call2(char *p, int (*ptr)())
{
    printf("=================\n");
    (*ptr)(p);
    return 0;
}

int main()
{
    char *p = "hello";
    call(Afun, p);
    call(Cfun, p);
    call2(p, Afun);
    call2(p, Cfun);

    return 0;
}
