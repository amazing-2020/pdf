#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int demo(char *msg, ...)
{
    va_list argp;
    int argno = 0;
    char *para;
    va_start(argp, msg);
    
    while(1)
    {
        para = va_arg( argp, char*);
        if (strcmp(para, "\0") == 0)
        {
            break;
        }
        printf("Parameter #%d is: %s \n", argno, para);
        argno++;
    }
    va_end(argp);
    return 0;
}

int main()
{
    demo("DEMO", "This", "is", "a", "demo", "333333", "\0");
}