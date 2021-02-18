#include <stdio.h>

typedef void (*callback)(char *);
void repeat(callback function, char *para)
{
    function(para);
    function(para);
}

void hello(char* a)
{
    printf("Hello %s \n", (const char *)a);
}

void count(char *num)
{
    int i;
    for (i=1; i < num; ++ i)
    {
        printf("%d", i);
        printf(" %d", sizeof(num));
    }
    printf("%d", i);
    putchar('\n');
}

int main(void)
{
    repeat(hello, "Callback");
    repeat(count, (char *)4);
}