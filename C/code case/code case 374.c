#include <stdio.h>

int main(void)
{
    char ch;
    int i, j;
    char s[] = "I love C++ And C";
    puts(s);
    printf("Please enter che character to delete: ");
    scanf("%c", &ch);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch)
        {
            for (j = i; s[j] != '\0'; j++)
                s[j] = s[j + 1];
            s[j] = '\0';
        }
    }
    puts(s);

    return 0;
}