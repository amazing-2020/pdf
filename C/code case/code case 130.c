#include <stdio.h>
#ifdef x64
#define t long long
#else
#define t int
#endif

void test(int a, double b, char* c)
{
    char *p = (char*)&a;
    printf("%p %p %p \n", &a, &b, &c);

    printf("%p %s", (p+8), *(char**)(p+8+8));
    //return;
}

void test1(char* s, char *st, ...)
{
    char *ppt = (char*)&s;
    printf("%p %p %p %p \n", ppt, &s, &st, ppt+8);
    printf("%s \n", *(char**)(ppt));
    printf("%d \n", *(int*)(ppt+8));//无法正常输出
    //return;
}

int main()
{
    char *p="Hello world";
    test1("111", "eee", 1336);
    void *s=&p;
    printf("%s \n", *(char**)s);
    //test(2, 2.2, "Hello world");
    return 0;
}
//Problem document