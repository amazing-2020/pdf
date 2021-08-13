#include <stdio.h>
#include <string.h>
int main()
{
    char msg[] = "Hello world";
    int i=0;
    while(msg[i]&&(i<strlen(msg))) 
    {
        fputc(msg[i], stdout);
        i++;
    }

    return 0;
}