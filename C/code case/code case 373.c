#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[1000];
    printf("Please enter the original string: ");
    fgets(c, (sizeof c / sizeof c[0]), stdin);
    char d;
    printf("Please enter the character to deleted: ");
    scanf("%c", &d);
    char e[1000];
    int j = 0;
    getchar();
    int i = 0;

    while (i < strlen(c))
    {
        if (c[i] != d)
        {
            e[j] = c[i];
            j++;
        }
        i++;
    }
    printf("After delete the character: ");
    printf("%s", e);

    return 0;
}