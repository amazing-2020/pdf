#include <stdio.h>
#include <string.h>
void Reserse_Optput(int n);
static char str[5];
int main()
{
    printf("Please input a digit: ");
    scanf("%s", str);
    printf("It has %lu digits. \n", strlen(str));
    printf("The reversed digits: ");
    Reserse_Optput(strlen(str));

    return 0;
}

void Reserse_Optput(int n)
{
    while (n > 0)
    {
        printf("%c", str[--n]);
    }
    
}