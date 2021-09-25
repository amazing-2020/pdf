#include <stdio.h>
#include <string.h>

int fun(char *a, char *b)
{
    int count = 0;
    char *p;
    int len_b = strlen(b);

    while ((p = strstr(a, b)) != NULL)
    {
        count++;
        a = p + len_b;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    printf("%d \n", fun("dh123dhgfdgsshdhscnbdh","dh"));
    
    return 0;
}
