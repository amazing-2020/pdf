#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_array(char *p, char n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("p[%d] = %d \n", i, p[i]);
    }
}

int main()
{
    char *p = (char *)malloc( 1024*1024*1024);
    memset(p, 'a', sizeof(int) * 10);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        p[i] =  i+65;
    }
    print_array(p, 10);
    free(p);
    getchar();
}