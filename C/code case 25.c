#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello, world";
    int len = strlen(str);
    int i;
    for (i=0; i<len; i++)
    {
        if(str[i]<='z' && str[i]>='a')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s \n", str);
    
    return 0;
}