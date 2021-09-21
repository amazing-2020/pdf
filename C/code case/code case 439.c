#include <stdio.h>
#include <stdlib.h>

int strlen2(char *p)
{
    int n = 0;

    while (*p != '\0')
    {
        n++;
        p++;
    }
    return n;
}

char *strcat2(char *p1, char *p2)
{
    int n1 = strlen2(p1), n2 = strlen2(p2), i;

    char *p3 = malloc(sizeof(char) * (n1 + n2 + 1));
    while (*p1 != '\0')
        *(p3++) = *(p1++);
    while (*p2 != '\0')
        *(p3++) = *(p2++);
    
    return p3 - n1 - n2; // point to the header pointer
}

int main(int argc, char const *argv[])
{
    char *c1 = "hello";
    char *c2 = "world";

    char *pstr = strcat2(c1, c2);
    printf("'%s' \n", pstr);
    free(pstr);
    
    return 0;
}
