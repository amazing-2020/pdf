#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Hello";
    int len = 0;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    int k = len;
    while(k)
    {
        for (int i = k - 1; i < len; i++)
        {
            printf("%c", str[i]);
        }
        k--;
        if (k == 0)
        {
            break;
        }
        printf("  ");
    }

    return 0;
}