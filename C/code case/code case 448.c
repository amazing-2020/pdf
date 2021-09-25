#include <stdio.h>
#include <string.h>

int Sub_Num(char *str, char *sub)
{
    int count = 0, i, j;

    for (i = 0; i < strlen(str); i++)
    {
        int pos = 0;
        for (j = 0; j < strlen(sub); j++, pos++)
            if (str[i + pos] != sub[j])
                break;
        if (j == strlen(sub))
            count++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    char str[80], sub[80];
    int count;

    printf("Please enter two strings, separated by carriage return, mother string first, sub string behind: ");
    gets(str);
    gets(sub);
    count = Sub_Num(str, sub);
    printf("%d \n", count);

    return 0;
}
