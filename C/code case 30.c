#include <stdio.h>
#include <stdlib.h>

void copy_str(char *from, char *to)
{
    for(;*from != '\0'; from++, to ++)
    {
        *to = *from;
    }
    *to = '\0';
    return;
}

int main()
{
    char *from = "abcd";
    char buff2[100];
    copy_str(from, buff2);
    printf("buff2: %s \n", buff2);

    return 0;
}