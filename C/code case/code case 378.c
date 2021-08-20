#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[128] = {0}, s1[128] = {0};
    int i , j = 0;

    printf("Please enter a string: ");
    fgets(s, sizeof(s), stdin);
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        s1[j++] = s[i];
    }
    puts(s);
    puts(s1);
    
    return 0;
}